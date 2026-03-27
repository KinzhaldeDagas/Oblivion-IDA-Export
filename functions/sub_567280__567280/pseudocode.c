char __stdcall sub_567280(int a1)
{
  char result; // al
  int v2; // ecx

  result = 0;
  if ( a1 )
  {
    v2 = *(_DWORD *)(a1 + 0x58);
    if ( v2 )
      return (*(char (__thiscall **)(int))(*(_DWORD *)v2 + 0xC0))(v2);
  }
  return result;
}
