unsigned int __cdecl sub_743E50(int a1)
{
  int v1; // eax
  int v2; // edi
  int v4; // eax
  int v5; // edx
  int v6; // edx
  int v7; // edx

  if ( !a1 )
    return 0xFFFFFFFE;
  v1 = *(_DWORD *)(a1 + 0x1C);
  if ( !v1 )
    return 0xFFFFFFFE;
  v2 = *(_DWORD *)(v1 + 4);
  if ( v2 != 0x2A && v2 != 0x71 && v2 != 0x29A )
    return 0xFFFFFFFE;
  v4 = *(_DWORD *)(v1 + 8);
  if ( v4 )
    (*(void (__cdecl **)(_DWORD, int))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), v4);
  v5 = *(_DWORD *)(a1 + 0x1C);
  if ( *(_DWORD *)(v5 + 0x3C) )
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), *(_DWORD *)(v5 + 0x3C));
  v6 = *(_DWORD *)(a1 + 0x1C);
  if ( *(_DWORD *)(v6 + 0x38) )
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), *(_DWORD *)(v6 + 0x38));
  v7 = *(_DWORD *)(a1 + 0x1C);
  if ( *(_DWORD *)(v7 + 0x30) )
    (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), *(_DWORD *)(v7 + 0x30));
  (*(void (__cdecl **)(_DWORD, _DWORD))(a1 + 0x24))(*(_DWORD *)(a1 + 0x28), *(_DWORD *)(a1 + 0x1C));
  *(_DWORD *)(a1 + 0x1C) = 0;
  return v2 != 0x71 ? 0 : 0xFFFFFFFD;
}
