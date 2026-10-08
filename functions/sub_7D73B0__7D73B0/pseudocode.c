// Shader-property vtable slot +0x78: reads +0xDC and returns 0 when it equals 3, otherwise returns 3.
int __thiscall OB_BSShaderProperty_GetDwordDCZeroOrThreeMode_010201A0(void *this)
{
  if ( *((_DWORD *)this + 0x37) == 3 ) /*0x7d73b9*/
    return 0; /*0x7d73c0*/
  else
    return 3; /*0x7d73c3*/
}
