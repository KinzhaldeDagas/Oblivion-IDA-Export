char *__thiscall sub_77F370(_DWORD *this, char *Src)
{
  char *result; // eax
  unsigned int v4; // edx
  _DWORD *v5; // esi
  void *data; // [esp+4h] [ebp-10Ch] BYREF
  char Dst[260]; // [esp+8h] [ebp-108h] BYREF

  result = Src; /*0x77f384*/
  if ( Src ) /*0x77f390*/
  {
    if ( strcmp(Src, EmptyString) ) /*0x77f3a6*/
    {
      strcpy_s(Dst, 0x104u, Src); /*0x77f3b9*/
      v4 = 0; /*0x77f3c5*/
      result = (char *)strlen(Dst); /*0x77f3d9*/
      if ( result ) /*0x77f3db*/
      {
        do /*0x77f403*/
        {
          if ( Dst[v4] == 0x2F ) /*0x77f3e5*/
            Dst[v4] = 0x5C; /*0x77f3e7*/
          ++v4; /*0x77f3f0*/
          result = (char *)strlen(Dst); /*0x77f3ff*/
        }
        while ( v4 < (unsigned int)result ); /*0x77f403*/
      }
      v5 = (_DWORD *)*(this + 3); /*0x77f405*/
      if ( v5 ) /*0x77f40a*/
      {
        while ( 1 ) /*0x77f413*/
        {
          result = (char *)v5[2]; /*0x77f413*/
          v5 = (_DWORD *)*v5; /*0x77f417*/
          data = result; /*0x77f419*/
          if ( result ) /*0x77f41d*/
          {
            result = (char *)CRT_StricmpLocaleDispatch(result, Dst); /*0x77f425*/
            if ( !result ) /*0x77f42f*/
              break; /*0x77f42f*/
          }
          if ( !v5 ) /*0x77f433*/
            return result; /*0x77f433*/
        }
        return (char *)NiTPointerList_RemoveByData(this + 2, &data); /*0x77f43f*/
      }
    }
  }
  return result; /*0x77f446*/
}
