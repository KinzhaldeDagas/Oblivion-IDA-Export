char *__thiscall sub_70DEB0(float *this, char *ArgList)
{
  unsigned int v3; // kr00_4
  char *v4; // ebx

  v3 = strlen(ArgList); /*0x70deb9*/
  v4 = (char *)FormHeapAlloc(v3 + 0x50); /*0x70dede*/
  sub_6C5D40( /*0x70df15*/
    (va_list)(v3 + 0x50),
    v4,
    __PAIR64__("%s = (N=%g,F=%g,L=%g,R=%g,T=%g,B=%g,O=%u)", v3 + 0x50),
    ArgList,
    *(this + 4),
    *(this + 5),
    *this,
    *(this + 1),
    *(this + 2),
    *(this + 3),
    *((unsigned __int8 *)this + 0x18));
  return v4; /*0x70df1d*/
}
