BOOL __stdcall sub_441E90(_DWORD *a1)
{
  char v1; // cl
  int v2; // ecx
  BOOL result; // eax

  v1 = *(_BYTE *)((*(int (__thiscall **)(_DWORD *))(*a1 + 0x170))(a1) + 4);
  result = 0;
  if ( (a1[2] & 0x20) == 0 && (a1[2] & 0x800) == 0 )
  {
    if ( v1 == 0x1A )
      return 1;
    if ( v1 == 0x12 )
      return 1;
    v2 = a1[7];
    if ( !v2 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 0xF4))(v2) )
      return 1;
  }
  return result;
}
