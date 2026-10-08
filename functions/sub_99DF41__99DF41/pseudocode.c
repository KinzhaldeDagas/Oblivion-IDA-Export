int __cdecl sub_99DF41(int *a1, char *a2, struct localeinfo_struct *a3)
{
  signed int v3; // eax
  char *v6; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+18h] [ebp-1Ch]
  char v9; // [esp+1Ch] [ebp-18h]
  int v10; // [esp+20h] [ebp-14h]
  unsigned __int16 v11[6]; // [esp+24h] [ebp-10h] BYREF

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a3); /*0x99df60*/
  v10 = __strgtold12_l((int)v11, &v6, a2, 0, 0, 0, 0, (int)v7); /*0x99df7d*/
  v3 = sub_99F12B(v11, a1); /*0x99df85*/
  if ( (v10 & 3) != 0 ) /*0x99df91*/
  {
    if ( (v10 & 1) != 0 ) /*0x99dfc2*/
      goto LABEL_8; /*0x99dfc2*/
    if ( (v10 & 2) != 0 ) /*0x99dfc8*/
      goto LABEL_3; /*0x99dfc8*/
  }
  else
  {
    if ( v3 == 1 ) /*0x99df96*/
    {
LABEL_3:
      if ( v9 ) /*0x99df9b*/
        *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99dfa0*/
      return 3; /*0x99dfa7*/
    }
    if ( v3 == 2 ) /*0x99dfac*/
    {
LABEL_8:
      if ( v9 ) /*0x99dfb1*/
        *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99dfb6*/
      return 4; /*0x99dfbc*/
    }
  }
  if ( v9 ) /*0x99dfcd*/
    *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99dfd2*/
  return 0; /*0x99dfd8*/
}
