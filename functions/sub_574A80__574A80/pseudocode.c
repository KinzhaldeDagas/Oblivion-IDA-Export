int __thiscall sub_574A80(_DWORD *this, const char **a2, _DWORD *a3, int *a4, int a5, int a6)
{
  const char *v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  char v9; // al
  int result; // eax

  v6 = *a2;
  if ( !*a2 )
    return 0;
  v7 = *(this + 0xE);
  if ( !v7 )
    return 0;
  Double_To_SInt32(*(float *)(v7 + 0x850));
  LOWORD(v8) = *((_WORD *)a2 + 2);
  if ( (_WORD)v8 == 0xFFFF )
    v8 = strlen(v6);
  else
    v8 = (unsigned __int16)v8;
  if ( !*a3 )
    *a3 = 0xF423F;
  if ( !v8 || (v9 = **a2) == 0 )
    JUMPOUT(0x574DA2);
  if ( v9 == 9 )
    JUMPOUT(0x574D2A);
  if ( v9 == 0xA )
    JUMPOUT(0x574CFB);
  switch ( v9 )
  {
    case 0x91:
    case 0x92:
    case 0x93:
    case 0x94:
      result = def_574B56(0, a3, a4, a5, a6);
      break;
    default:
      JUMPOUT(0x574B63);
  }
  return result;
}
