// Shader-property vtable slot +0x7C: writes mode field +0xDC as 3 for argument 0 and 1 for arguments 1..3; returns the argument.
int __thiscall OB_BSShaderProperty_SetDwordDCMode_010201A0(void *this, int mode)
{
  int result; // eax

  result = mode; /*0x7d73d0*/
  if ( mode ) /*0x7d73d6*/
  {
    if ( mode > 0 && mode <= 3 ) /*0x7d73dd*/
      *((_DWORD *)this + 0x37) = 1; /*0x7d73df*/
  }
  else
  {
    *((_DWORD *)this + 0x37) = 3; /*0x7d73ec*/
  }
  return result; /*0x7d73e9*/
}
