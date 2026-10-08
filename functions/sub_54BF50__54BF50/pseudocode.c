int __thiscall sub_54BF50(_DWORD *this, int a2, float a3)
{
  int result; // eax

  result = a2; /*0x54bf50*/
  if ( a2 < 0x11 ) /*0x54bf57*/
    return (*(int (__stdcall **)(int, _DWORD))(*(this + 0x1B) + 0x4C))(a2, LODWORD(a3)); /*0x54bf6b*/
  return result; /*0x54bf6d*/
}
