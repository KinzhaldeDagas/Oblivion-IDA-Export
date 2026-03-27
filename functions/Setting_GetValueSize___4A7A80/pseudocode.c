unsigned int __thiscall Setting_GetValueSize_(int this)
{
  _BYTE *v1; // edx
  int v2; // esi
  unsigned int result; // eax

  v1 = *(_BYTE **)(this + 4);
  v2 = 0;
  if ( !v1 )
    return v2;
  switch ( *v1 )
  {
    case 'S':
    case 's':
      if ( *(_DWORD *)this )
        return strlen(*(const char **)this) + 1;
      return v2;
    case 'a':
    case 'f':
    case 'i':
    case 'r':
    case 'u':
      result = 4;
      break;
    case 'b':
    case 'c':
    case 'h':
      result = 1;
      break;
    default:
      return v2;
  }
  return result;
}
