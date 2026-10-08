void __thiscall sub_735800(_WORD *this, _BYTE *a2, char *a3, int a4)
{
  char *v4; // esi
  char v5; // bl
  __int16 v7; // bp
  char v8; // al
  char i; // bl

  v4 = a3; /*0x735803*/
  v5 = *a3; /*0x735807*/
  if ( *a3 ) /*0x735807*/
  {
    v7 = 0; /*0x73581a*/
    do /*0x73586a*/
    {
      if ( v7 == *(this + 0x80) ) /*0x73582b*/
        break; /*0x73582b*/
      ++v4; /*0x73582f*/
      v8 = v5 & 0x7F; /*0x735832*/
      if ( v5 >= 0 ) /*0x735836*/
      {
        for ( i = *v4++; v8; a2 += a4 ) /*0x735858*/
        {
          --v8; /*0x735860*/
          *a2 = i; /*0x735862*/
        }
      }
      else
      {
        for ( ; v8; a2 += a4 ) /*0x73583a*/
        {
          --v8; /*0x735842*/
          *a2 = *v4++; /*0x735844*/
        }
      }
      v5 = *v4; /*0x73586a*/
      v7 += (unsigned __int8)(v8 - 1); /*0x735872*/
    }
    while ( *v4 ); /*0x73586a*/
  }
}
