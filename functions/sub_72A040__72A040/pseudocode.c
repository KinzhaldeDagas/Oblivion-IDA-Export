char *__thiscall sub_72A040(float *this, char *ArgList)
{
  unsigned int v3; // kr00_4
  char *v4; // ebx

  v3 = strlen(ArgList); /*0x72a04c*/
  v4 = (char *)FormHeapAlloc(v3 + 0x41); /*0x72a06e*/
  sub_6C5D40( /*0x72a08b*/
    (va_list)(v3 + 0x41),
    v4,
    __PAIR64__("%s = (%g, %g, %g) , %g", v3 + 0x41),
    ArgList,
    *this,
    *(this + 1),
    *(this + 2),
    *(this + 3));
  return v4; /*0x72a093*/
}
