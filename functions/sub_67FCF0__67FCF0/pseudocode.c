void sub_67FCF0()
{
  NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *> *v0; // eax

  if ( !lowPathWorld_ptr )
  {
    v0 = (NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *> *)FormHeapAlloc(0x10u);
    if ( v0 )
      lowPathWorld_ptr = NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>::NiTPointerMap<TESForm *,NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *> *>(
                           v0,
                           0xBFu);
    else
      lowPathWorld_ptr = 0;
  }
}
