const void *__thiscall sub_8CA4D0(const void **this, int a2, int a3)
{
  const void *result; // eax

  if ( *(this + 0xD) == (const void *)((unsigned int)*(this + 0xE) & 0x3FFFFFFF) )
    sub_8A6EE0(this + 0xC, 4);
  *((_DWORD *)*(this + 0xC) + (_DWORD)*(this + 0xD)) = a2;
  *(this + 0xD) = (char *)*(this + 0xD) + 1;
  if ( *(this + 0x10) == (const void *)((unsigned int)*(this + 0x11) & 0x3FFFFFFF) )
    sub_8A6EE0(this + 0xF, 4);
  *((_DWORD *)*(this + 0xF) + (_DWORD)*(this + 0x10)) = a3;
  result = (char *)*(this + 0x10) + 1;
  *(this + 0x10) = result;
  return result;
}
