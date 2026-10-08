char __cdecl sub_8CBAF0(const void **a1, int a2)
{
  int v2; // ebx
  bool v3; // cc
  int v4; // edi

  if ( a1[0x12] == (const void *)((unsigned int)a1[0x13] & 0x3FFFFFFF) ) /*0x8cbb08*/
    sub_8A6EE0(a1 + 0x11, 4); /*0x8cbb0d*/
  *((_DWORD *)a1[0x11] + (_DWORD)a1[0x12]) = a2; /*0x8cbb1e*/
  a1[0x12] = (char *)a1[0x12] + 1; /*0x8cbb21*/
  *((_DWORD *)a1[0xE] + *(unsigned __int16 *)(a2 + 0x20)) = *((_DWORD *)a1[0xE] + (_DWORD)a1[0xF] - 1); /*0x8cbb32*/
  *(_WORD *)(*((_DWORD *)a1[0xE] + *(unsigned __int16 *)(a2 + 0x20)) + 0x20) = *(_WORD *)(a2 + 0x20); /*0x8cbb42*/
  a1[0xF] = (char *)a1[0xF] + 0xFFFFFFFF; /*0x8cbb46*/
  *(_WORD *)(a2 + 0x20) = *((_WORD *)a1 + 0x24) - 1; /*0x8cbb4f*/
  v2 = 0; /*0x8cbb53*/
  *(_BYTE *)(a2 + 0x29) = 0; /*0x8cbb55*/
  v3 = *(_DWORD *)(a2 + 0x38) <= 0; /*0x8cbb58*/
  *(_DWORD *)(a2 + 0x68) = a1[0x58]; /*0x8cbb61*/
  if ( !v3 ) /*0x8cbb64*/
  {
    do /*0x8cbb9f*/
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a2 + 0x34) + 4 * v2); /*0x8cbb69*/
      sub_8DD750(*(float *)(a2 + 0x68), (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0x10)); /*0x8cbb77*/
      (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v4 + 0x50) + 0x54))( /*0x8cbb89*/
        *(_DWORD *)(v4 + 0x50),
        &unk_BA7A40);
      (*(void (__thiscall **)(_DWORD, hkVector4 *))(**(_DWORD **)(v4 + 0x50) + 0x58))( /*0x8cbb96*/
        *(_DWORD *)(v4 + 0x50),
        &unk_BA7A40);
      ++v2; /*0x8cbb9c*/
    }
    while ( v2 < *(_DWORD *)(a2 + 0x38) ); /*0x8cbb9f*/
  }
  return sub_8DCC10((int)a1, a2); /*0x8cbbab*/
}
