char *__thiscall sub_77F000(_DWORD *this, char *Src)
{
  char *result; // eax
  unsigned int i; // edx
  _DWORD *v5; // esi
  char *v6; // eax
  unsigned int v7; // kr08_4
  char *v8; // edi
  int v9; // ecx
  char Dst[260]; // [esp+8h] [ebp-108h] BYREF

  result = Src;
  if ( Src && strcmp(Src, EmptyString) )
  {
    strcpy_s(Dst, 0x104u, Src);
    for ( i = 0; i < strlen(Dst); ++i )
    {
      if ( Dst[i] == 0x2F )
        Dst[i] = 0x5C;
    }
    v5 = (_DWORD *)*(this + 3);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = (char *)v5[2];
        v5 = (_DWORD *)*v5;
        if ( v6 )
        {
          result = (char *)_strcmp(v6, Dst);
          if ( !result )
            break;
        }
        if ( !v5 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      v7 = strlen(Dst);
      v8 = (char *)FormHeapAlloc(v7 + 1);
      strcpy_s(v8, v7 + 1, Dst);
      result = (char *)(*(int (__thiscall **)(_DWORD *))(*(this + 2) + 4))(this + 2);
      *((_DWORD *)result + 2) = v8;
      *((_DWORD *)result + 1) = 0;
      *(_DWORD *)result = *(this + 3);
      v9 = *(this + 3);
      if ( v9 )
        *(_DWORD *)(v9 + 4) = result;
      else
        *(this + 4) = result;
      ++*(this + 5);
      *(this + 3) = result;
    }
  }
  return result;
}
