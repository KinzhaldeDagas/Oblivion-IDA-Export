_DWORD *__thiscall sub_6B6770(unsigned int *this, const char *a2)
{
  _DWORD *result; // eax
  const char *v4; // ecx
  _BYTE *v5; // edx

  if ( *(this + 0x13) ) /*0x6b6773*/
    FormHeapFree(*(this + 0x13)); /*0x6b677c*/
  result = (_DWORD *)FormHeapAlloc(strlen(a2) + 1); /*0x6b679f*/
  v4 = a2; /*0x6b67a7*/
  *(this + 0x13) = (unsigned int)result; /*0x6b67aa*/
  v5 = result; /*0x6b67ad*/
  do /*0x6b67bc*/
  {
    LOBYTE(result) = *v4; /*0x6b67b0*/
    *v5++ = *v4++; /*0x6b67b2*/
  }
  while ( (_BYTE)result ); /*0x6b67bc*/
  return result; /*0x6b67a9*/
}
