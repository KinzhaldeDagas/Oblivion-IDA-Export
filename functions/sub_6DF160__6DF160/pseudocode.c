int __thiscall sub_6DF160(char *this)
{
  char *v1; // esi
  int v2; // edi
  int result; // eax

  v1 = this + 0x38; /*0x6df162*/
  v2 = 3; /*0x6df165*/
  do /*0x6df183*/
  {
    if ( *(_DWORD *)v1 ) /*0x6df170*/
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)v1 + 0x7C))(*(_DWORD *)v1); /*0x6df17b*/
    v1 += 4; /*0x6df17d*/
    --v2; /*0x6df180*/
  }
  while ( v2 ); /*0x6df183*/
  return result; /*0x6df185*/
}
