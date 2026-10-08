const char *__thiscall unknown_libname_15(_DWORD *this)
{
  const char *result; // eax

  result = (const char *)*(this + 1); /*0x983d61*/
  if ( !result ) /*0x983d66*/
    return "Unknown exception"; /*0x983d68*/
  return result; /*0x983d6d*/
}
