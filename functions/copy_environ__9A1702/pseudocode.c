char **__usercall copy_environ@<eax>(_DWORD *a1@<edi>)
{
  char **result; // eax
  _DWORD *v2; // ecx
  char **v3; // esi
  const char *v4; // eax
  const char **v5; // ebx
  char **v6; // [esp+0h] [ebp-4h]

  result = 0;
  v2 = a1;
  if ( a1 )
  {
    if ( *a1 )
    {
      do
      {
        ++v2;
        result = (char **)((char *)result + 1);
      }
      while ( *v2 );
    }
    v3 = (char **)unknown_libname_74();
    v6 = v3;
    if ( !v3 )
      _amsg_exit(9);
    v4 = (const char *)*a1;
    v5 = (const char **)a1;
    while ( v4 )
    {
      *v3++ = _strdup(v4);
      v4 = *++v5;
    }
    *v3 = 0;
    return v6;
  }
  return result;
}
