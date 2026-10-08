int __usercall _cftof2_l@<eax>(_DWORD *a1@<eax>, char *a2@<ecx>, int a3, int a4, char a5, struct localeinfo_struct *a6)
{
  int v8; // esi
  char *v10; // eax
  char *v11; // esi
  int v12; // eax
  char *v13; // esi
  int v14; // ebx
  const char *v15; // esi
  int v16; // ebx
  int v17; // [esp+Ch] [ebp-10h] BYREF
  int v18; // [esp+14h] [ebp-8h]
  char v19; // [esp+18h] [ebp-4h]

  v8 = a1[1] - 1; /*0x99041d*/
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v17, a6); /*0x99041e*/
  if ( a2 && a3 ) /*0x990458*/
  {
    if ( a5 ) /*0x99045e*/
    {
      if ( v8 == a4 ) /*0x990463*/
      {
        v10 = &a2[v8 + (*a1 == 0x2D)]; /*0x99046f*/
        *v10 = 0x30; /*0x990471*/
        v10[1] = 0; /*0x990474*/
      }
    }
    v11 = a2; /*0x99047b*/
    if ( *a1 == 0x2D ) /*0x99047d*/
    {
      *a2 = 0x2D; /*0x99047f*/
      v11 = a2 + 1; /*0x990482*/
    }
    v12 = a1[1]; /*0x990485*/
    if ( v12 > 0 ) /*0x99048d*/
    {
      v13 = &v11[v12]; /*0x99049c*/
    }
    else
    {
      _shift(v11, 1); /*0x990491*/
      *v11 = 0x30; /*0x990496*/
      v13 = v11 + 1; /*0x990499*/
    }
    if ( a4 > 0 ) /*0x9904a2*/
    {
      _shift(v13, 1); /*0x9904a6*/
      *v13 = ***(_BYTE ***)(v17 + 0xBC); /*0x9904b8*/
      v14 = a1[1]; /*0x9904ba*/
      v15 = v13 + 1; /*0x9904bd*/
      if ( v14 < 0 ) /*0x9904c0*/
      {
        v16 = -v14; /*0x9904c2*/
        if ( a5 || a4 >= v16 ) /*0x9904cd*/
          a4 = v16; /*0x9904cf*/
        _shift(v15, a4); /*0x9904d7*/
        _memset((int)v15, 0x30, a4); /*0x9904e0*/
      }
    }
    if ( v19 ) /*0x9904ec*/
      *(_DWORD *)(v18 + 0x70) &= ~2u; /*0x9904f1*/
    return 0; /*0x9904f5*/
  }
  else
  {
    *_errno() = 0x16; /*0x99042f*/
    _invalid_parameter((int)a1, (int)a2, 0x16); /*0x990438*/
    if ( v19 ) /*0x990444*/
      *(_DWORD *)(v18 + 0x70) &= ~2u; /*0x990449*/
    return 0x16; /*0x99044d*/
  }
}
