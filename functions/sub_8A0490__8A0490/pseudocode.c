int __thiscall sub_8A0490(_DWORD *this, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // edi
  int result; // eax

  v2 = a2;
  sub_89D820(this, a2);
  result = (*(int (__thiscall **)(_DWORD *, unsigned __int16 **))(*this + 0x74))(this, &a2);
  if ( result )
  {
    if ( result != 4 )
    {
      (*(void (__thiscall **)(int, unsigned __int16 *))(*(_DWORD *)(result - 4) + 0x14))(result - 4, v2);
      return (*(int (__thiscall **)(_DWORD *, int))(*this + 0x64))(this, 1);
    }
  }
  return result;
}
