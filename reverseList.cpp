//反转链表

/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* ptr = nullptr;
        ListNode* curr = pHead;
        
        while(curr != nullptr) {
            auto node = curr->next;
            curr->next = ptr;
            ptr = curr;
            curr = node;
        }
        return ptr;  
    }
};