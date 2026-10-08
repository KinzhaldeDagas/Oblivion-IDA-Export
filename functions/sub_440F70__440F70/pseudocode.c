// Lookup in the global dead-count list: compare each entry's form pointer with the supplied Actor Base and return its 16-bit count; missing entries return 0.
__int16 __thiscall sub_440F70(int *this, int a2)
{
  int *v2; // eax
  int v3; // ecx

  v2 = this + 0x23; /*0x440f70*/
  if ( this != (int *)0xFFFFFF74 ) /*0x440f78*/
  {
    do /*0x440f80*/
    {
      v3 = *v2; /*0x440f80*/
      if ( !*v2 ) /*0x440f80*/
        break; /*0x440f80*/
      if ( *(_DWORD *)v3 == a2 ) /*0x440f88*/
        return *(_WORD *)(v3 + 4); /*0x440f97*/
      v2 = (int *)v2[1]; /*0x440f8a*/
    }
    while ( v2 ); /*0x440f80*/
  }
  return 0; /*0x440f94*/
}
