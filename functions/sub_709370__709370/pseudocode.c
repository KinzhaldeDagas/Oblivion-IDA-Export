char *__thiscall sub_709370(float *this, char *ArgList)
{
  unsigned int v3; // kr00_4
  char *v4; // ebx

  v3 = strlen(ArgList);
  v4 = (char *)FormHeapAlloc(v3 + 0x64);
  sub_6C5D40(
    (va_list)(v3 + 0x64),
    v4,
    __PAIR64__("%s = (%5.3f,%5.3f,%5.3f)", v3 + 0x64),
    ArgList,
    *this,
    *(this + 1),
    *(this + 2));
  return v4;
}
