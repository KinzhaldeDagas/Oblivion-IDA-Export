const void *__thiscall sub_8CA4D0(const void **this, int a2, int a3)
{
  const void *result; // eax

  if ( *(this + 0xD) == (const void *)((unsigned int)*(this + 0xE) & 0x3FFFFFFF) ) /*0x8ca4e4*/
    sub_8A6EE0(this + 0xC, 4); /*0x8ca4e9*/
  *((_DWORD *)*(this + 0xC) + (_DWORD)*(this + 0xD)) = a2; /*0x8ca4fa*/
  *(this + 0xD) = (char *)*(this + 0xD) + 1; /*0x8ca4fd*/
  if ( *(this + 0x10) == (const void *)((unsigned int)*(this + 0x11) & 0x3FFFFFFF) ) /*0x8ca511*/
    sub_8A6EE0(this + 0xF, 4); /*0x8ca516*/
  *((_DWORD *)*(this + 0xF) + (_DWORD)*(this + 0x10)) = a3; /*0x8ca527*/
  result = (char *)*(this + 0x10) + 1; /*0x8ca52d*/
  *(this + 0x10) = result; /*0x8ca52f*/
  return result; /*0x8ca52e*/
}
