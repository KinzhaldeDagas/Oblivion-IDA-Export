char __thiscall TESObjectCELL_MatchGroupRecord(TESForm *this, _DWORD *groupRecord, BOOL matchAllLevels, BOOL arg2)
{
  const void *v5; // ecx
  char v6; // al
  char result; // al
  unsigned int CellGroupSubBlockLabel; // eax

  if ( !groupRecord || *groupRecord != dword_B05E20 ) /*0x4ce0bb*/
TESObjectCELL_MatchGroupRecord___def_4CE0D9:
    JUMPOUT(0x4CE17A); /*0x4ce17a*/
  v5 = 0; /*0x4ce0c4*/
  v6 = *((_BYTE *)this + 0x24) & 1; /*0x4ce0c6*/
  if ( !v6 ) /*0x4ce0c8*/
    v5 = *((const void **)this + 0x14); /*0x4ce0ca*/
  switch ( groupRecord[3] ) /*0x4ce0d9*/
  {
    case 0: /*0x4ce0d9*/
      if ( !matchAllLevels ) /*0x4ce0e6*/
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9; /*0x4ce0e6*/
      if ( v6 ) /*0x4ce0ee*/
        return TESForm_MatchGroupRecord(this, groupRecord, matchAllLevels, arg2); /*0x4ce0f9*/
      else
        return (*(char (__thiscall **)(const void *, _DWORD *, BOOL, BOOL))(*(_DWORD *)v5 + 0xBC))( /*0x4ce115*/
                 v5,
                 groupRecord,
                 matchAllLevels,
                 arg2);
    case 1: /*0x4ce0d9*/
      if ( v6 || !TESForm_FormIDMatchesObjectID24(v5, groupRecord[2]) ) /*0x4ce127*/
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9; /*0x4ce12e*/
      if ( matchAllLevels ) /*0x4ce135*/
        goto LABEL_21; /*0x4ce135*/
      if ( (this->member.flags & 0x400) == 0 ) /*0x4ce13e*/
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9; /*0x4ce13e*/
      result = 1; /*0x4ce144*/
      break; /*0x4ce147*/
    case 2: /*0x4ce0d9*/
    case 4: /*0x4ce0d9*/
      if ( (this->member.flags & 0x400) != 0 || !matchAllLevels ) /*0x4ce158*/
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9; /*0x4ce158*/
      CellGroupSubBlockLabel = sub_4CA5F0((int)this); /*0x4ce15c*/
      goto LABEL_20; /*0x4ce161*/
    case 3: /*0x4ce0d9*/
    case 5: /*0x4ce0d9*/
      if ( (this->member.flags & 0x400) != 0 ) /*0x4ce16a*/
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9; /*0x4ce16a*/
      CellGroupSubBlockLabel = TESObjectCELL_GetCellGroupSubBlockLabel(this); /*0x4ce16e*/
LABEL_20:
      if ( groupRecord[2] != CellGroupSubBlockLabel ) /*0x4ce176*/
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9; /*0x4ce176*/
LABEL_21:
      result = TESObjectCELL_MatchGroupRecord_::def_4CE0D9(1, (int)groupRecord, matchAllLevels, arg2); /*0x4ce178*/
      break; /*0x4ce179*/
    default:
      goto TESObjectCELL_MatchGroupRecord___def_4CE0D9;
  }
  return result; /*0x4ce0fe*/
}
