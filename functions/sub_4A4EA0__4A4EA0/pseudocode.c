BSStringT *__thiscall sub_4A4EA0(BSStringT *this, _BYTE *a2)
{
  BSStringT *v3; // esi
  int (__thiscall *v4)(_BYTE *, unsigned int *); // edx
  const char **v5; // edi
  const char *v6; // eax
  int v7; // eax
  unsigned int v9; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  sub_4A34E0(this, a2); /*0x4a4ed1*/
  v3 = this + 1; /*0x4a4ed6*/
  this->m_data = (char *)&TESRegionDataMap::`vftable'; /*0x4a4ed9*/
  v10 = 0; /*0x4a4edf*/
  *((_DWORD *)this + 2) = 0; /*0x4a4ee7*/
  *((_WORD *)this + 6) = 0; /*0x4a4eed*/
  *((_WORD *)this + 7) = 0; /*0x4a4ef3*/
  v4 = *(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28); /*0x4a4efb*/
  LOBYTE(v10) = 1; /*0x4a4f05*/
  v5 = (const char **)v4(a2, &v9); /*0x4a4f0c*/
  v6 = *v5; /*0x4a4f0e*/
  LOBYTE(v10) = 2; /*0x4a4f12*/
  if ( v6 && v3->m_data ) /*0x4a4f19*/
    v7 = CRT_StricmpLocaleDispatch(v3->m_data, v6); /*0x4a4f21*/
  else
    v7 = 2 * (v6 == 0) - 1; /*0x4a4f36*/
  if ( v7 ) /*0x4a4f3a*/
    BSStringT_Set(this + 1, *v5, 0); /*0x4a4f43*/
  FormHeapFree(v9); /*0x4a4f4d*/
  return this; /*0x4a4f57*/
}
