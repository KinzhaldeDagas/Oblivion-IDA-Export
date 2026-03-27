char __stdcall sub_778C20(int a1)
{
  int v1; // esi
  int v2; // ebp
  char v3; // bl
  int v4; // edi
  int v5; // eax

  v1 = *(_DWORD *)(a1 + 0xC);
  v2 = *(_DWORD *)(*(_DWORD *)(v1 + 0x28) + 4);
  v3 = 0;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v4 = *(_DWORD *)(a1 + 8);
    do
    {
      v5 = *(_DWORD *)(v1 + 0x28);
      if ( v5 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(v5 + 4) + 0x10))(*(_DWORD *)(v5 + 4), v1);
        v3 = 1;
      }
      v1 += 0x2C;
      --v4;
    }
    while ( v4 );
    if ( v3 )
    {
      if ( !*(_DWORD *)(v2 + 4) )
        (**(void (__thiscall ***)(int))v2)(v2);
    }
  }
  return v3;
}
