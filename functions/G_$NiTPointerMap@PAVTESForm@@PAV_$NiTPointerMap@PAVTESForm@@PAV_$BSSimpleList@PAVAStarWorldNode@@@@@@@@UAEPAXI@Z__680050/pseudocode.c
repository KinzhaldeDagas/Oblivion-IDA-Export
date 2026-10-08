unsigned int *__thiscall NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::~NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>(this); /*0x680053*/
  if ( (a2 & 1) != 0 ) /*0x68005d*/
    FormHeapFree((unsigned int)this); /*0x680060*/
  return this; /*0x68006a*/
}
