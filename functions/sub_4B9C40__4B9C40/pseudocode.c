char *__thiscall sub_4B9C40(_DWORD *this, char *a2)
{
  char *v2; // esi
  char v3; // al
  char *result; // eax
  char i; // cl
  _BYTE *v6; // esi

  v2 = a2;
  v3 = 0x54;
  do
  {
    *v2 = v3;
    v3 = (v2++)["Textures\\Trees\\Billboards" - a2 + 1];
  }
  while ( v3 );
  result = (char *)(*(int (__thiscall **)(_DWORD *))(*(this + 9) + 0x14))(this + 9);
  for ( i = *result; *result != 0x2E; ++v2 )
  {
    if ( !i )
      break;
    ++result;
    *v2 = i;
    i = *result;
  }
  if ( *result == 0x2E )
  {
    *v2 = 0x2E;
    v6 = v2 + 1;
    *v6++ = 0x64;
    *v6++ = 0x64;
    *v6 = 0x73;
    v2 = v6 + 1;
  }
  *v2 = 0;
  return result;
}
