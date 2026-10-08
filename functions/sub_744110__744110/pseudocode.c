int __usercall sub_744110@<eax>(_DWORD *a1@<esi>, int a2)
{
  int v2; // ecx
  char v3; // dl
  _BYTE *v4; // eax
  int v5; // ecx
  _BYTE *v6; // edi
  _BYTE *v7; // eax
  _BYTE *v8; // ecx
  char v9; // dl
  _BYTE *v10; // ecx
  char v11; // dl
  _BYTE *v12; // ecx
  char v13; // dl
  _BYTE *v14; // ecx
  char v15; // dl
  _BYTE *v16; // ecx
  char v17; // dl
  _BYTE *v18; // ecx
  char v19; // dl
  _BYTE *v20; // ecx
  char v21; // dl
  _BYTE *v22; // ecx
  char v23; // dl
  int result; // eax
  unsigned int v25; // ecx

  v2 = a1[0xC]; /*0x744110*/
  v3 = *(_BYTE *)(v2 + a2); /*0x74411b*/
  v4 = (_BYTE *)(v2 + a1[0x19]); /*0x74411e*/
  v5 = a2 + v2; /*0x744120*/
  v6 = v4 + 0x102; /*0x744125*/
  if ( v3 != *v4 ) /*0x74412b*/
    return 2; /*0x74412b*/
  if ( *(_BYTE *)(v5 + 1) != v4[1] ) /*0x744137*/
    return 2; /*0x744137*/
  v7 = v4 + 2; /*0x74413d*/
  v8 = (_BYTE *)(v5 + 2); /*0x744140*/
  do /*0x7441ad*/
  {
    v9 = *++v7; /*0x744143*/
    v10 = v8 + 1; /*0x744149*/
    if ( v9 != *v10 ) /*0x74414e*/
      break; /*0x74414e*/
    v11 = *++v7; /*0x744150*/
    v12 = v10 + 1; /*0x744156*/
    if ( v11 != *v12 ) /*0x74415b*/
      break; /*0x74415b*/
    v13 = *++v7; /*0x74415d*/
    v14 = v12 + 1; /*0x744163*/
    if ( v13 != *v14 ) /*0x744168*/
      break; /*0x744168*/
    v15 = *++v7; /*0x74416a*/
    v16 = v14 + 1; /*0x744170*/
    if ( v15 != *v16 ) /*0x744175*/
      break; /*0x744175*/
    v17 = *++v7; /*0x744177*/
    v18 = v16 + 1; /*0x74417d*/
    if ( v17 != *v18 ) /*0x744182*/
      break; /*0x744182*/
    v19 = *++v7; /*0x744184*/
    v20 = v18 + 1; /*0x74418a*/
    if ( v19 != *v20 ) /*0x74418f*/
      break; /*0x74418f*/
    v21 = *++v7; /*0x744191*/
    v22 = v20 + 1; /*0x744197*/
    if ( v21 != *v22 ) /*0x74419c*/
      break; /*0x74419c*/
    v23 = *++v7; /*0x74419e*/
    v8 = v22 + 1; /*0x7441a4*/
    if ( v23 != *v8 ) /*0x7441a9*/
      break; /*0x7441a9*/
  }
  while ( v7 < v6 ); /*0x7441ad*/
  result = v7 - v6 + 0x102; /*0x7441b1*/
  if ( result < 3 ) /*0x7441b9*/
    return 2; /*0x7441ca*/
  v25 = a1[0x1B]; /*0x7441bb*/
  a1[0x1A] = a2; /*0x7441c0*/
  if ( result > v25 ) /*0x7441c3*/
    return v25; /*0x7441c6*/
  return result; /*0x7441c5*/
}
