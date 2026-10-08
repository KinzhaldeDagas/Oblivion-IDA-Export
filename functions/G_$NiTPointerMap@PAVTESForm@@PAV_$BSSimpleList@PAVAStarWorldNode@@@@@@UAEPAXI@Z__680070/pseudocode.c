LowPathSpaceNodeMap *__thiscall NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::`scalar deleting destructor'(
        LowPathSpaceNodeMap *this,
        char a2)
{
  NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::~NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(this); /*0x680073*/
  if ( (a2 & 1) != 0 ) /*0x68007d*/
    FormHeapFree((unsigned int)this); /*0x680080*/
  return this; /*0x68008a*/
}
