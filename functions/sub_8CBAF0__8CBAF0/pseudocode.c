char __cdecl sub_8CBAF0(const void **a1, int a2)
{
  int v2; // ebx
  bool v3; // cc
  int v4; // edi

  if ( a1[0x12] == (const void *)((unsigned int)a1[0x13] & 0x3FFFFFFF) )
    sub_8A6EE0(a1 + 0x11, 4);
  *((_DWORD *)a1[0x11] + (_DWORD)a1[0x12]) = a2;
  a1[0x12] = (char *)a1[0x12] + 1;
  *((_DWORD *)a1[0xE] + *(unsigned __int16 *)(a2 + 0x20)) = *((_DWORD *)a1[0xE] + (_DWORD)a1[0xF] - 1);
  *(_WORD *)(*((_DWORD *)a1[0xE] + *(unsigned __int16 *)(a2 + 0x20)) + 0x20) = *(_WORD *)(a2 + 0x20);
  a1[0xF] = (char *)a1[0xF] + 0xFFFFFFFF;
  *(_WORD *)(a2 + 0x20) = *((_WORD *)a1 + 0x24) - 1;
  v2 = 0;
  *(_BYTE *)(a2 + 0x29) = 0;
  v3 = *(_DWORD *)(a2 + 0x38) <= 0;
  *(_DWORD *)(a2 + 0x68) = a1[0x58];
  if ( !v3 )
  {
    do
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a2 + 0x34) + 4 * v2);
      sub_8DD750(*(float *)(a2 + 0x68), *(_DWORD *)(v4 + 0x50) + 0x10);
      (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v4 + 0x50) + 0x54))(
        *(_DWORD *)(v4 + 0x50),
        &stru_BA7A40);
      (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v4 + 0x50) + 0x58))(
        *(_DWORD *)(v4 + 0x50),
        &stru_BA7A40);
      ++v2;
    }
    while ( v2 < *(_DWORD *)(a2 + 0x38) );
  }
  return sub_8DCC10((int)a1, a2);
}
