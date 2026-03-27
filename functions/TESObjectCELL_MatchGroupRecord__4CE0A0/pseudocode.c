char __thiscall TESObjectCELL_MatchGroupRecord(TESForm *this, _DWORD *groupRecord, BOOL matchAllLevels, BOOL arg2)
{
  _DWORD *v5; // ecx
  char v6; // al
  char result; // al
  unsigned int v8; // eax

  if ( !groupRecord || *groupRecord != dword_B05E20 )
TESObjectCELL_MatchGroupRecord___def_4CE0D9:
    JUMPOUT(0x4CE17A);
  v5 = 0;
  v6 = *((_BYTE *)this + 0x24) & 1;
  if ( !v6 )
    v5 = *((_DWORD **)this + 0x14);
  switch ( groupRecord[3] )
  {
    case 0:
      if ( !matchAllLevels )
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9;
      if ( v6 )
        return TESForm_MatchGroupRecord(this, groupRecord, matchAllLevels, arg2);
      else
        return (*(char (__thiscall **)(_DWORD *, _DWORD *, BOOL, BOOL))(*v5 + 0xBC))(
                 v5,
                 groupRecord,
                 matchAllLevels,
                 arg2);
    case 1:
      if ( v6 || !sub_46AF50(v5, groupRecord[2]) )
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9;
      if ( matchAllLevels )
        goto LABEL_21;
      if ( (this->member.flags & 0x400) == 0 )
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9;
      result = 1;
      break;
    case 2:
    case 4:
      if ( (this->member.flags & 0x400) != 0 || !matchAllLevels )
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9;
      v8 = sub_4CA5F0((int)this);
      goto LABEL_20;
    case 3:
    case 5:
      if ( (this->member.flags & 0x400) != 0 )
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9;
      v8 = sub_4CA640((int)this);
LABEL_20:
      if ( groupRecord[2] != v8 )
        goto TESObjectCELL_MatchGroupRecord___def_4CE0D9;
LABEL_21:
      result = TESObjectCELL_MatchGroupRecord_::def_4CE0D9(groupRecord, matchAllLevels, arg2);
      break;
    default:
      goto TESObjectCELL_MatchGroupRecord___def_4CE0D9;
  }
  return result;
}
