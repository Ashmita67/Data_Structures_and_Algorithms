/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    bool isIdentical(ListNode* n1, ListNode* n2) {
        while (n1 && n2) {
            if (n1->val != n2->val)
                return false;
            n1 = n1->next;
            n2 = n2->next;
        }
        return true; // partial match allowed here
    }

    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Step 1: Find middle using slow & fast pointers
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half
        ListNode* head2 = reverse(slow->next);

        // Step 3: Compare first and second half
        ListNode* p1 = head;
        ListNode* p2 = head2;
        bool result = true;
        while (p2) { // compare until second half ends
            if (p1->val != p2->val) {
                result = false;
                break;
            }
            p1 = p1->next;
            p2 = p2->next;
        }

        // Optional: Restore original list by reversing again
        slow->next = reverse(head2);

        return result;
    }
};
