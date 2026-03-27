int __thiscall sub_54BEF0(_DWORD *this, int a2, float a3)
{
  int result; // eax

  result = a2;
  if ( a2 < 0xD )
    return (*(int (__stdcall **)(int, _DWORD))(*(this + 4) + 0x4C))(a2, LODWORD(a3));
  return result;
}
