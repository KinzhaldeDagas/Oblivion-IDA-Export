struct OblivionTESFormListNode
{
TESForm *item; ///< Verified list node payload: TESForm* inserted by TESDataHandler_AddForm.
OblivionTESFormListNode *next; ///< Verified next pointer: AddForm uses BSSimpleList_PushFront; TESDataHandler_Clear walks/frees linked nodes.
};
