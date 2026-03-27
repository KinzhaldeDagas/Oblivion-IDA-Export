int __stdcall sub_848FD0(_DWORD *a1, int a2)
{
  int result; // eax

  if ( (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x8C))(a1, a2) )
    return (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x8C))(a1, a2);
  result = dword_B430F0;
  if ( (a1[7] & 0x80) == 0 )
    return dword_B430DC;
  return result;
}
