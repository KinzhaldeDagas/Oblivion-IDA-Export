char __stdcall sub_778BC0(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 0x1C) )
    return 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, a2);
  return 1;
}
