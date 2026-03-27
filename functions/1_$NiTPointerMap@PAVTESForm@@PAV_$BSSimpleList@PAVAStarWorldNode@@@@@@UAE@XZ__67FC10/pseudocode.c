void __thiscall NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::~NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(
        unsigned int *this)
{
  *this = (unsigned int)&NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable';
  NiTMap_Clear(this);
  *this = (unsigned int)&NiTMapBase<NiTPointerAllocator<unsigned int>,TESForm *,BSSimpleList<AStarWorldNode *> *>::`vftable';
  NiTMap_Clear(this);
  FormHeapFree(*(this + 2));
}
