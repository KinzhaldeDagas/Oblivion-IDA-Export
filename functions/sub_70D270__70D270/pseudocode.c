char *__thiscall sub_70D270(float *this, char *ArgList)
{
  unsigned int v3; // kr00_4
  char *v4; // ebx

  v3 = strlen(ArgList);
  v4 = (char *)FormHeapAlloc(v3 + 0x40);
  sub_6C5D40(
    (va_list)(v3 + 0x40),
    v4,
    __PAIR64__("%s = (L=%g,R=%g,T=%g,B=%g)", v3 + 0x40),
    ArgList,
    *this,
    *(this + 1),
    *(this + 2),
    *(this + 3));
  return v4;
}
