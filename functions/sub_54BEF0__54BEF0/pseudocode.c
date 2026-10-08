int __thiscall sub_54BEF0(_DWORD *this, int a2, float a3)
{
  int result; // eax

  result = a2; /*0x54bef0*/
  if ( a2 < 0xD ) /*0x54bef7*/
    return (*(int (__stdcall **)(int, _DWORD))(*(this + 4) + 0x4C))(a2, LODWORD(a3)); /*0x54bf0b*/
  return result; /*0x54bf0d*/
}
