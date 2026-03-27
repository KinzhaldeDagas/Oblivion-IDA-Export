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

  v2 = a1[0xC];
  v3 = *(_BYTE *)(v2 + a2);
  v4 = (_BYTE *)(v2 + a1[0x19]);
  v5 = a2 + v2;
  v6 = v4 + 0x102;
  if ( v3 != *v4 )
    return 2;
  if ( *(_BYTE *)(v5 + 1) != v4[1] )
    return 2;
  v7 = v4 + 2;
  v8 = (_BYTE *)(v5 + 2);
  do
  {
    v9 = *++v7;
    v10 = v8 + 1;
    if ( v9 != *v10 )
      break;
    v11 = *++v7;
    v12 = v10 + 1;
    if ( v11 != *v12 )
      break;
    v13 = *++v7;
    v14 = v12 + 1;
    if ( v13 != *v14 )
      break;
    v15 = *++v7;
    v16 = v14 + 1;
    if ( v15 != *v16 )
      break;
    v17 = *++v7;
    v18 = v16 + 1;
    if ( v17 != *v18 )
      break;
    v19 = *++v7;
    v20 = v18 + 1;
    if ( v19 != *v20 )
      break;
    v21 = *++v7;
    v22 = v20 + 1;
    if ( v21 != *v22 )
      break;
    v23 = *++v7;
    v8 = v22 + 1;
    if ( v23 != *v8 )
      break;
  }
  while ( v7 < v6 );
  result = v7 - v6 + 0x102;
  if ( result < 3 )
    return 2;
  v25 = a1[0x1B];
  a1[0x1A] = a2;
  if ( result > v25 )
    return v25;
  return result;
}
