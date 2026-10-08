char *__thiscall sub_70D270(float *this, char *ArgList)
{
  unsigned int v3; // kr00_4
  char *v4; // ebx

  v3 = strlen(ArgList); /*0x70d27c*/
  v4 = (char *)FormHeapAlloc(v3 + 0x40); /*0x70d29e*/
  sub_6C5D40( /*0x70d2bb*/
    (va_list)(v3 + 0x40),
    v4,
    __PAIR64__("%s = (L=%g,R=%g,T=%g,B=%g)", v3 + 0x40),
    ArgList,
    *this,
    *(this + 1),
    *(this + 2),
    *(this + 3));
  return v4; /*0x70d2c3*/
}
