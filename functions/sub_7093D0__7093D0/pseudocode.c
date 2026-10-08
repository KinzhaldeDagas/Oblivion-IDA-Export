char *__thiscall sub_7093D0(float *this, char *ArgList)
{
  unsigned int v3; // kr00_4
  char *v4; // ebx

  v3 = strlen(ArgList); /*0x7093dc*/
  v4 = (char *)FormHeapAlloc(v3 + 0x24); /*0x7093fe*/
  sub_6C5D40( /*0x70941b*/
    (va_list)(v3 + 0x24),
    v4,
    __PAIR64__("%s = (%5.3f,%5.3f,%5.3f,%5.3f)", v3 + 0x24),
    ArgList,
    *this,
    *(this + 1),
    *(this + 2),
    *(this + 3));
  return v4; /*0x709423*/
}
