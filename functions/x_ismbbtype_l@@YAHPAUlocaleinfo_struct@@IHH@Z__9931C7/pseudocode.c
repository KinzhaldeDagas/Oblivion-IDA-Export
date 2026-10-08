int __cdecl x_ismbbtype_l(struct localeinfo_struct *a1, char a2, int a3, char a4)
{
  int result; // eax
  _DWORD v5[2]; // [esp+0h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-8h]
  char v7; // [esp+Ch] [ebp-4h]

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v5, a1); /*0x9931d3*/
  if ( ((unsigned __int8)a4 & *(_BYTE *)(v5[1] + (unsigned __int8)a2 + 0x1D)) != 0
    || (!a3
      ? (result = 0)
      : (result = (unsigned __int16)(a3 & *(_WORD *)(*(_DWORD *)(v5[0] + 0xC8) + 2 * (unsigned __int8)a2))),
        result) )
  {
    result = 1; /*0x993208*/
  }
  if ( v7 ) /*0x99320d*/
    *(_DWORD *)(v6 + 0x70) &= ~2u; /*0x993212*/
  return result; /*0x993216*/
}
