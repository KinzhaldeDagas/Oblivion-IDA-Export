int __thiscall sub_54BFB0(_DWORD *this, int a2, float a3)
{
  int result; // eax

  result = a2; /*0x54bfb0*/
  if ( a2 < 0x10 ) /*0x54bfb7*/
    return (*(int (__stdcall **)(int, _DWORD))(*(this + 0x32) + 0x4C))(a2, LODWORD(a3)); /*0x54bfd1*/
  return result; /*0x54bfd3*/
}
