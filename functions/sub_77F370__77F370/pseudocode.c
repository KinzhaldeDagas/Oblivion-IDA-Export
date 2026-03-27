char *__thiscall sub_77F370(_DWORD *this, char *Src)
{
  char *result; // eax
  unsigned int v4; // edx
  _DWORD *v5; // esi
  char *v6; // [esp+4h] [ebp-10Ch] BYREF
  char Dst[260]; // [esp+8h] [ebp-108h] BYREF

  result = Src;
  if ( Src )
  {
    if ( strcmp(Src, EmptyString) )
    {
      strcpy_s(Dst, 0x104u, Src);
      v4 = 0;
      result = (char *)strlen(Dst);
      if ( result )
      {
        do
        {
          if ( Dst[v4] == 0x2F )
            Dst[v4] = 0x5C;
          ++v4;
          result = (char *)strlen(Dst);
        }
        while ( v4 < (unsigned int)result );
      }
      v5 = (_DWORD *)*(this + 3);
      if ( v5 )
      {
        while ( 1 )
        {
          result = (char *)v5[2];
          v5 = (_DWORD *)*v5;
          v6 = result;
          if ( result )
          {
            result = (char *)_strcmp(result, Dst);
            if ( !result )
              break;
          }
          if ( !v5 )
            return result;
        }
        return (char *)sub_776690((BSTextureManager *)(this + 2), (int *)&v6);
      }
    }
  }
  return result;
}
