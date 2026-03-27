int __thiscall sub_54BF50(_DWORD *this, int a2, float a3)
{
  int result; // eax

  result = a2;
  if ( a2 < 0x11 )
    return (*(int (__stdcall **)(int, _DWORD))(*(this + 0x1B) + 0x4C))(a2, LODWORD(a3));
  return result;
}
