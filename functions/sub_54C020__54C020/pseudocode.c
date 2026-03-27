int __thiscall sub_54C020(_DWORD *this, int a2, float a3)
{
  int result; // eax

  result = a2;
  if ( a2 < 1 )
    return (*(int (__stdcall **)(int, _DWORD))(*(this + 0x49) + 0x4C))(a2, LODWORD(a3));
  return result;
}
