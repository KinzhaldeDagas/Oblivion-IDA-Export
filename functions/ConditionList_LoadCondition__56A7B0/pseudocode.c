void __thiscall ConditionList_LoadCondition(_DWORD *this, Data *a2)
{
  void *v3; // esi
  _DWORD *v4; // eax

  v3 = 0;
  if ( a2 )
  {
    if ( TESFile_GetChunkType(a2) == 0x54445443 || TESFile_GetChunkType(a2) == 0x41445443 )
    {
      v4 = (_DWORD *)FormHeapAlloc(0x18u);
      if ( v4 )
        v3 = (void *)Condition_constr_(v4);
      Condition_Load(v3, (int *)a2);
      BSSimpleList_PushBack(this, (int)v3);
    }
  }
}
