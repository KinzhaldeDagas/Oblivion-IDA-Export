char __stdcall sub_778BE0(int a1)
{
  int v1; // eax
  _DWORD *v3; // esi

  v1 = *(_DWORD *)(a1 + 0x1C);
  if ( !v1 )
    return 0;
  v3 = *(_DWORD **)(v1 + 4);
  (*(void (__thiscall **)(_DWORD *, int))(*v3 + 0xC))(v3, a1);
  if ( !v3[1] )
    (*(void (__thiscall **)(_DWORD *))*v3)(v3);
  return 1;
}
