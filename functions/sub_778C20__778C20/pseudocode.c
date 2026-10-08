char __stdcall sub_778C20(int a1)
{
  int v1; // esi
  int v2; // ebp
  char v3; // bl
  int v4; // edi
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 0xC); /*0x778c2a*/
  v2 = *(_DWORD *)(*(_DWORD *)(v1 + 0x28) + 4); /*0x778c30*/
  v3 = 0; /*0x778c33*/
  if ( *(_DWORD *)(a1 + 8) ) /*0x778c24*/
  {
    v4 = *(_DWORD *)(a1 + 8); /*0x778c3a*/
    do /*0x778c5a*/
    {
      v5 = *(_DWORD *)(v1 + 0x28); /*0x778c40*/
      if ( v5 ) /*0x778c45*/
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v5 + 4) + 0x10))(*(_DWORD *)(v5 + 4), v1); /*0x778c50*/
        v3 = 1; /*0x778c52*/
      }
      v1 += 0x2C; /*0x778c54*/
      --v4; /*0x778c57*/
    }
    while ( v4 ); /*0x778c5a*/
    if ( v3 ) /*0x778c5f*/
    {
      if ( !*(_DWORD *)(v2 + 4) ) /*0x778c61*/
        (**(void (__thiscall ***)(int))v2)(v2); /*0x778c6e*/
    }
  }
  return v3; /*0x778c70*/
}
