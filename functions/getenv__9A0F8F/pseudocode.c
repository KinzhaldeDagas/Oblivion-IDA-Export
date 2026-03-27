char *__cdecl getenv(const char *VarName)
{
  int v1; // edi
  const unsigned __int8 **v2; // esi
  unsigned int v4; // edi
  size_t v5; // [esp-Ch] [ebp-10h]

  v2 = (const unsigned __int8 **)dword_BA9DB4;
  if ( !dword_BABC08 )
    return 0;
  HIDWORD(v5) = v1;
  if ( dword_BA9DB4 || dword_BA9DBC && !__wtomb_environ() && (v2 = (const unsigned __int8 **)dword_BA9DB4) != 0 )
  {
    if ( VarName )
    {
      v4 = strlen(VarName);
      while ( *v2 )
      {
        if ( (unsigned int)strlen((const char *)*v2) > v4 && (*v2)[v4] == 0x3D )
        {
          LODWORD(v5) = v4;
          if ( !_mbsnbicoll(*v2, (const unsigned __int8 *)VarName, v5) )
            return (char *)&(*v2)[v4 + 1];
        }
        ++v2;
      }
    }
  }
  return 0;
}
