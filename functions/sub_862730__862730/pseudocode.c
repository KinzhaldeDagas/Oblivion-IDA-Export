LONG __stdcall sub_862730(int a1, _DWORD *a2, int a3)
{
  int v3; // ebx
  LONG result; // eax
  int v5; // edi
  int v6; // esi

  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * a3);
  result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x8C))(a2, 0);
  if ( result )
  {
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a2 + 0x8C))(a2, 0);
    v5 = result;
  }
  else
  {
    v5 = dword_B430F0;
    if ( (a2[7] & 0x80) == 0 )
      v5 = dword_B430DC;
  }
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 != v5 )
  {
    if ( v6 )
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *(_DWORD *)(v3 + 4) = v5;
    if ( v5 )
      return InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  return result;
}
