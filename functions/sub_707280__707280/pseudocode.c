char *__thiscall sub_707280(float *this, char *ArgList)
{
  unsigned int v3; // kr00_4
  char *v4; // ebx

  v3 = strlen(ArgList);
  v4 = (char *)FormHeapAlloc(v3 + 0x40);
  sub_6C5D40(
    (va_list)(v3 + 0x40),
    v4,
    __PAIR64__("%s = (%g,%g,%g)", v3 + 0x40),
    ArgList,
    *this,
    *(this + 1),
    *(this + 2));
  return v4;
}
