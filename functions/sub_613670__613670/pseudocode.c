char __thiscall sub_613670(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  char result; // al
  int v4; // edx

  v2 = (_DWORD *)*(this + 0x10); /*0x613670*/
  result = 0; /*0x613673*/
  if ( v2 ) /*0x613677*/
  {
    do /*0x613680*/
    {
      v4 = v2[1]; /*0x613680*/
      if ( !v4 && !*v2 ) /*0x613687*/
        break; /*0x613687*/
      if ( *(_DWORD *)*v2 == a2 ) /*0x61368f*/
        return 1; /*0x61369b*/
      v2 = (_DWORD *)v2[1]; /*0x613691*/
    }
    while ( v4 ); /*0x613680*/
  }
  return result; /*0x613698*/
}
