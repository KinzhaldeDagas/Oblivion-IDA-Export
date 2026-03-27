int __thiscall sub_709E30(unsigned __int16 *this, float a2)
{
  int result; // eax
  bool v3; // zf
  int v4; // eax

  result = *(this + 0xC);
  if ( (*(this + 0xC) & 2) != 0 )
  {
    v3 = (result & 0x10) == 0;
    v4 = *(_DWORD *)this;
    if ( v3 )
      return (*(int (__stdcall **)(_DWORD))(v4 + 0x64))(LODWORD(a2));
    else
      return (*(int (__stdcall **)(_DWORD))(v4 + 0x68))(LODWORD(a2));
  }
  return result;
}
