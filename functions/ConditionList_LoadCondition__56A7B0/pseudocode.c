void __thiscall ConditionList_LoadCondition(_DWORD *this, Data *a2)
{
  char *v3; // esi
  _DWORD *v4; // eax

  v3 = 0; /*0x56a7d9*/
  if ( a2 ) /*0x56a7dd*/
  {                                             // ConditionList_LoadCondition accepts CTDT/CTDA by chunk signature, allocates a 0x18 ConditionEntry::Data, and passes it to Condition_Load; this path does not validate functionIndex against Script_CommandList length.
    if ( TESFile_GetChunkType(a2) == 0x54445443 || TESFile_GetChunkType(a2) == 0x41445443 ) /*0x56a7f9*/
    {
      v4 = (_DWORD *)FormHeapAlloc(0x18u); /*0x56a7fd*/
      if ( v4 ) /*0x56a80f*/
        v3 = (char *)Condition_constr_(v4); /*0x56a818*/
      Condition_Load(v3, a2); /*0x56a825*/
      BSSimpleList_PushBack(this, (int)v3); /*0x56a82d*/
    }
  }
}
