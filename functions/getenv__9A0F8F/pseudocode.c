char *__cdecl getenv(const char *VarName)
{
  int v1; // edi
  const unsigned __int8 **v2; // esi
  unsigned int v4; // edi
  size_t v5; // [esp-Ch] [ebp-10h]

  v2 = (const unsigned __int8 **)unk_BA9DB4; /*0x9a0f97*/
  if ( !unk_BABC08 ) /*0x9a0f9d*/
    return 0; /*0x9a0f9f*/
  HIDWORD(v5) = v1; /*0x9a0fa6*/
  if ( unk_BA9DB4 || unk_BA9DBC && !__wtomb_environ() && (v2 = (const unsigned __int8 **)unk_BA9DB4) != 0 ) /*0x9a0fc2*/
  {
    if ( VarName ) /*0x9a0fca*/
    {
      v4 = strlen(VarName); /*0x9a0fd3*/
      while ( *v2 ) /*0x9a1000*/
      {
        if ( (unsigned int)strlen((const char *)*v2) > v4 && (*v2)[v4] == 0x3D ) /*0x9a0fe8*/
        {
          LODWORD(v5) = v4; /*0x9a0fea*/
          if ( !_mbsnbicoll(*v2, (const unsigned __int8 *)VarName, v5) ) /*0x9a0ff7*/
            return (char *)&(*v2)[v4 + 1]; /*0x9a100a*/
        }
        ++v2; /*0x9a0ff9*/
      }
    }
  }
  return 0; /*0x9a0fa1*/
}
