BSExtraData *__thiscall sub_4C9B40(ExtraDataList *this, char a2)
{
  ExtraDataList *v3; // edi
  BSExtraData *v4; // esi
  _DWORD *v5; // eax
  BSExtraDataVtbl *v6; // eax

  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4c9b66*/
    return 0; /*0x4c9b68*/
  v3 = this + 2; /*0x4c9b7e*/
  v4 = sub_41F9B0(this + 2); /*0x4c9b88*/
  if ( !v4 ) /*0x4c9b8c*/
  {
    if ( a2 ) /*0x4c9b92*/
    {
      v5 = (_DWORD *)FormHeapAlloc(0x10u); /*0x4c9b96*/
      if ( v5 ) /*0x4c9ba8*/
        v6 = (BSExtraDataVtbl *)TESRegionList_constr(v5, 0); /*0x4c9bad*/
      else
        v6 = 0; /*0x4c9bb4*/
      v4 = (BSExtraData *)v6; /*0x4c9bc1*/
      ExtraDataList_SetRegionList(v3, v6); /*0x4c9bc3*/
    }
  }
  return v4; /*0x4c9b6a*/
}
