_DWORD *__thiscall sub_6B6770(unsigned int *this, const char *a2)
{
  _DWORD *result; // eax
  const char *v4; // ecx
  _BYTE *v5; // edx

  if ( *(this + 0x13) )
    FormHeapFree(*(this + 0x13));
  result = (_DWORD *)FormHeapAlloc(strlen(a2) + 1);
  v4 = a2;
  *(this + 0x13) = (unsigned int)result;
  v5 = result;
  do
  {
    LOBYTE(result) = *v4;
    *v5++ = *v4++;
  }
  while ( (_BYTE)result );
  return result;
}
