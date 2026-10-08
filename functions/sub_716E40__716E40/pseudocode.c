char *__thiscall sub_716E40(float *this, const char *a2)
{
  unsigned int v3; // kr00_4
  char *v4; // ebx

  v3 = strlen(a2); /*0x716e49*/
  v4 = (char *)FormHeapAlloc(v3 + 0x38); /*0x716e6e*/
  sub_6C5D40( /*0x716e8a*/
    (va_list)(v3 + 0x38),
    v4,
    __PAIR64__("(%g,%g,%g), %g", v3 + 0x38),
    (char *)COERCE_UNSIGNED_INT64(*this),
    (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64(*this)),
    *(this + 1),
    *(this + 2),
    *(this + 3));
  return v4; /*0x716e92*/
}
