_DWORD *__thiscall sub_52EFA0(char *this, int a2)
{
  char *v2; // eax
  _DWORD *v3; // ecx

  v2 = this + 0x28; /*0x52efa0*/
  if ( this != (char *)0xFFFFFFD8 ) /*0x52efa5*/
  {
    do /*0x52efb0*/
    {
      v3 = *(_DWORD **)v2; /*0x52efb0*/
      if ( !*(_DWORD *)v2 ) /*0x52efb0*/
        break; /*0x52efb0*/
      v2 = *((char **)v2 + 1); /*0x52efb8*/
      if ( *v3 == a2 && (a2 || !v3[7]) ) /*0x52efc1*/
        return v3 + 1; /*0x52efcf*/
    }
    while ( v2 ); /*0x52efb0*/
  }
  return 0; /*0x52efcc*/
}
