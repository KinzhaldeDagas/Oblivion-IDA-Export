int __thiscall sub_709E30(unsigned __int16 *this, float a2)
{
  int result; // eax
  bool v3; // zf
  int v4; // eax

  result = *(this + 0xC); /*0x709e30*/
  if ( (*(this + 0xC) & 2) != 0 ) /*0x709e3b*/
  {
    v3 = (result & 0x10) == 0; /*0x709e45*/
    v4 = *(_DWORD *)this; /*0x709e4a*/
    if ( v3 ) /*0x709e4c*/
      return (*(int (__stdcall **)(_DWORD))(v4 + 0x64))(LODWORD(a2)); /*0x709e59*/
    else
      return (*(int (__stdcall **)(_DWORD))(v4 + 0x68))(LODWORD(a2)); /*0x709e51*/
  }
  return result; /*0x709e53*/
}
