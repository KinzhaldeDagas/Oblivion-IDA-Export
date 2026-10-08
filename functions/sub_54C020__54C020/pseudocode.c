int __thiscall sub_54C020(_DWORD *this, int a2, float a3)
{
  int result; // eax

  result = a2; /*0x54c020*/
  if ( a2 < 1 ) /*0x54c027*/
    return (*(int (__stdcall **)(int, _DWORD))(*(this + 0x49) + 0x4C))(a2, LODWORD(a3)); /*0x54c041*/
  return result; /*0x54c043*/
}
