BSExtraData *__thiscall sub_4C9B40(ExtraDataList *this, char a2)
{
  ExtraDataList *v3; // edi
  BSExtraData *v4; // esi
  _DWORD *v5; // eax
  BSExtraDataVtbl *v6; // eax

  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    return 0;
  v3 = this + 2;
  v4 = sub_41F9B0(this + 2);
  if ( !v4 )
  {
    if ( a2 )
    {
      v5 = (_DWORD *)FormHeapAlloc(0x10u);
      if ( v5 )
        v6 = (BSExtraDataVtbl *)TESRegionList_constr(v5, 0);
      else
        v6 = 0;
      v4 = (BSExtraData *)v6;
      sub_4241E0(v3, v6);
    }
  }
  return v4;
}
