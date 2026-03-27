char __stdcall sub_778E30(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  _DWORD *v5; // esi

  if ( a2 )
  {
    v2 = *(_DWORD *)(a2 + 0xC);
    if ( v2 )
      return sub_778C20(v2);
  }
  v3 = *(_DWORD *)(a1 + 0x38);
  if ( !v3 )
    return 0;
  v5 = *(_DWORD **)(v3 + 4);
  (*(void (__thiscall **)(_DWORD *, int))(*v5 + 0x14))(v5, a1);
  if ( !v5[1] )
    (*(void (__thiscall **)(_DWORD *))*v5)(v5);
  return 1;
}
