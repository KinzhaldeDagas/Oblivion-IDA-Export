unsigned int __cdecl sub_743E50(int a1)
{
  int v1; // eax
  int v2; // edi
  int v4; // eax
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( !a1 ) /*0x743e57*/
    return 0xFFFFFFFE; /*0x743e57*/
  v1 = *(_DWORD *)(a1 + 0x1C); /*0x743e5d*/
  if ( !v1 ) /*0x743e62*/
    return 0xFFFFFFFE; /*0x743f07*/
  v2 = *(_DWORD *)(v1 + 4); /*0x743e69*/
  if ( v2 != 0x2A && v2 != 0x71 && v2 != 0x29A ) /*0x743e7c*/
    return 0xFFFFFFFE; /*0x743e7f*/
  v4 = *(_DWORD *)(v1 + 8); /*0x743e86*/
  if ( v4 ) /*0x743e8b*/
    (*(void (__cdecl **)(_DWORD, int))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), v4); /*0x743e95*/
  v5 = *(_DWORD *)(a1 + 0x1C); /*0x743e9a*/
  if ( *(_DWORD *)(v5 + 0x3C) ) /*0x743e9d*/
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), *(_DWORD *)(v5 + 0x3C)); /*0x743eac*/
  v6 = *(_DWORD *)(a1 + 0x1C); /*0x743eb1*/
  if ( *(_DWORD *)(v6 + 0x38) ) /*0x743eb4*/
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), *(_DWORD *)(v6 + 0x38)); /*0x743ec3*/
  v7 = *(_DWORD *)(a1 + 0x1C); /*0x743ec8*/
  if ( *(_DWORD *)(v7 + 0x30) ) /*0x743ecb*/
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), *(_DWORD *)(v7 + 0x30)); /*0x743eda*/
  (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), *(_DWORD *)(a1 + 0x1C)); /*0x743eea*/
  *(_DWORD *)(a1 + 0x1C) = 0; /*0x743ef8*/
  return v2 != 0x71 ? 0 : 0xFFFFFFFD;
}
