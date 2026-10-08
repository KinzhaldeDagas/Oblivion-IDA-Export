int __cdecl sub_6BEAD0(int a1, int a2)
{
  _DWORD *v2; // esi
  int (__cdecl *v3)(int, _DWORD *, int, int *, int); // edx
  int result; // eax
  void (__cdecl *v5)(int, _DWORD *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-28h]
  int v7; // [esp-14h] [ebp-28h]
  int v8; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+1Ch] [ebp+8h]

  v2 = (_DWORD *)(a2 + 0x14); /*0x6beadd*/
  v9 = 3; /*0x6beae0*/
  do /*0x6beb4a*/
  {
    v3 = *(int (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(a1 + 0x220) + 8); /*0x6beaf6*/
    v6 = *(_DWORD *)(a1 + 0x220); /*0x6beb02*/
    v8 = 4; /*0x6beb03*/
    result = v3(v6, v2, 4, &v8, 1); /*0x6beb07*/
    if ( *v2 ) /*0x6beb0c*/
    {
      v5 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(*(_DWORD *)(a1 + 0x220) + 8); /*0x6beb17*/
      v7 = *(_DWORD *)(a1 + 0x220); /*0x6beb26*/
      v8 = 4; /*0x6beb27*/
      v5(v7, v2 + 3, 4, &v8, 1); /*0x6beb2b*/
      result = (*(int (__cdecl **)(int, _DWORD, _DWORD))(4 * v2[3] + 0xB3D5C0))(a1, v2[7], *v2); /*0x6beb3e*/
    }
    ++v2; /*0x6beb43*/
    --v9; /*0x6beb45*/
  }
  while ( v9 ); /*0x6beb4a*/
  return result; /*0x6beb4c*/
}
