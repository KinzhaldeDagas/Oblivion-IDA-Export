const char *__thiscall unknown_libname_15(_DWORD *this)
{
  const char *result; // eax

  result = (const char *)*(this + 1);
  if ( !result )
    return "Unknown exception";
  return result;
}
