unsigned int *__thiscall NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::`scalar deleting destructor'(
        unsigned int *this,
        char a2)
{
  NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::~NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
