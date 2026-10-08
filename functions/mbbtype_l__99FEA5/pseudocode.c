int __cdecl _mbbtype_l(char a1, int a2, struct localeinfo_struct *a3)
{
  char v3; // cl
  int v5; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+4h] [ebp-Ch]
  int v7; // [esp+8h] [ebp-8h]
  char v8; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v5, a3); /*0x99feb1*/
  if ( a2 != 1 ) /*0x99fec1*/
  {
    v3 = *(_BYTE *)((unsigned __int8)a1 + v6 + 0x1D); /*0x99fec3*/
    if ( (v3 & 4) != 0 ) /*0x99feca*/
    {
      if ( v8 ) /*0x99fed0*/
        *(_DWORD *)(v7 + 0x70) &= ~2u; /*0x99fed5*/
      return 1; /*0x99fedd*/
    }
    if ( (*(_WORD *)(*(_DWORD *)(v5 + 0xC8) + 2 * (unsigned __int8)a1) & 0x157) != 0 || (v3 & 3) != 0 ) /*0x99fef2*/
    {
      if ( v8 ) /*0x99fef8*/
        *(_DWORD *)(v7 + 0x70) &= ~2u; /*0x99fefd*/
      return 0; /*0x99ff04*/
    }
    goto LABEL_15; /*0x99fef2*/
  }
  if ( (*(_BYTE *)((unsigned __int8)a1 + v6 + 0x1D) & 8) == 0 ) /*0x99ff0a*/
  {
LABEL_15:
    if ( v8 ) /*0x99ff22*/
      *(_DWORD *)(v7 + 0x70) &= ~2u; /*0x99ff27*/
    return 0xFFFFFFFF; /*0x99ff2b*/
  }
  if ( v8 ) /*0x99ff10*/
    *(_DWORD *)(v7 + 0x70) &= ~2u; /*0x99ff15*/
  return 2; /*0x99fedc*/
}
