double __thiscall Actor_GetDispostionBonus(char *this, int a2)
{
  char *v2; // eax
  int *v3; // ecx

  v2 = this + 0xA4; /*0x5e21a0*/
  if ( this != (char *)0xFFFFFF5C ) /*0x5e21a8*/
  {
    do /*0x5e21b0*/
    {
      v3 = *(int **)v2; /*0x5e21b0*/
      if ( !*(_DWORD *)v2 ) /*0x5e21b0*/
        break; /*0x5e21b0*/
      if ( v3[1] == a2 ) /*0x5e21b9*/
        return (double)*v3; /*0x5e21c7*/
      v2 = *((char **)v2 + 1); /*0x5e21bb*/
    }
    while ( v2 ); /*0x5e21b0*/
  }
  return 0.0; /*0x5e21c4*/
}
