char *__thiscall sub_77F000(_DWORD *this, char *Src)
{
  char *result; // eax
  unsigned int i; // edx
  _DWORD *v5; // esi
  const char *v6; // eax
  unsigned int v7; // kr08_4
  char *v8; // edi
  int v9; // ecx
  char Dst[260]; // [esp+8h] [ebp-108h] BYREF

  result = Src; /*0x77f014*/
  if ( Src && strcmp(Src, EmptyString) ) /*0x77f036*/
  {
    strcpy_s(Dst, 0x104u, Src); /*0x77f049*/
    for ( i = 0; i < strlen(Dst); ++i ) /*0x77f060*/
    {
      if ( Dst[i] == 0x2F ) /*0x77f075*/
        Dst[i] = 0x5C; /*0x77f077*/
    }
    v5 = (_DWORD *)*(this + 3); /*0x77f095*/
    if ( v5 ) /*0x77f09a*/
    {
      while ( 1 ) /*0x77f0a3*/
      {
        v6 = (const char *)v5[2]; /*0x77f0a3*/
        v5 = (_DWORD *)*v5; /*0x77f0a7*/
        if ( v6 ) /*0x77f0a9*/
        {
          result = (char *)CRT_StricmpLocaleDispatch(v6, Dst); /*0x77f0b1*/
          if ( !result ) /*0x77f0bb*/
            break; /*0x77f0bb*/
        }
        if ( !v5 ) /*0x77f0bf*/
          goto LABEL_11; /*0x77f0bf*/
      }
    }
    else
    {
LABEL_11:
      v7 = strlen(Dst); /*0x77f0c1*/
      v8 = (char *)FormHeapAlloc(v7 + 1); /*0x77f0e1*/
      strcpy_s(v8, v7 + 1, Dst); /*0x77f0e5*/
      result = (char *)(*(int (__thiscall **)(_DWORD *))(*(this + 2) + 4))(this + 2); /*0x77f0f8*/
      *((_DWORD *)result + 2) = v8; /*0x77f0fa*/
      *((_DWORD *)result + 1) = 0; /*0x77f0fd*/
      *(_DWORD *)result = *(this + 3); /*0x77f107*/
      v9 = *(this + 3); /*0x77f109*/
      if ( v9 ) /*0x77f10e*/
        *(_DWORD *)(v9 + 4) = result; /*0x77f110*/
      else
        *(this + 4) = result; /*0x77f115*/
      ++*(this + 5); /*0x77f118*/
      *(this + 3) = result; /*0x77f11c*/
    }
  }
  return result; /*0x77f121*/
}
