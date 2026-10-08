int __cdecl sub_99DFE7(int *a1, char *a2, struct localeinfo_struct *a3)
{
  signed int v3; // eax
  char *v6; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v7[8]; // [esp+10h] [ebp-24h] BYREF
  int v8; // [esp+18h] [ebp-1Ch]
  char v9; // [esp+1Ch] [ebp-18h]
  int v10; // [esp+20h] [ebp-14h]
  unsigned __int16 v11[6]; // [esp+24h] [ebp-10h] BYREF

  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v7, a3); /*0x99e006*/
  v10 = __strgtold12_l((int)v11, &v6, a2, 0, 0, 0, 0, (int)v7); /*0x99e023*/
  v3 = sub_99F66D(v11, a1); /*0x99e02b*/
  if ( (v10 & 3) != 0 ) /*0x99e037*/
  {
    if ( (v10 & 1) != 0 ) /*0x99e068*/
      goto LABEL_8; /*0x99e068*/
    if ( (v10 & 2) != 0 ) /*0x99e06e*/
      goto LABEL_3; /*0x99e06e*/
  }
  else
  {
    if ( v3 == 1 ) /*0x99e03c*/
    {
LABEL_3:
      if ( v9 ) /*0x99e041*/
        *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99e046*/
      return 3; /*0x99e04d*/
    }
    if ( v3 == 2 ) /*0x99e052*/
    {
LABEL_8:
      if ( v9 ) /*0x99e057*/
        *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99e05c*/
      return 4; /*0x99e062*/
    }
  }
  if ( v9 ) /*0x99e073*/
    *(_DWORD *)(v8 + 0x70) &= ~2u; /*0x99e078*/
  return 0; /*0x99e07e*/
}
