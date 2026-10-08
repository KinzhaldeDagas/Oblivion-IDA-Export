void __thiscall sub_735890(_WORD *this, char *a2, char *a3, int a4)
{
  char *v4; // esi
  char v5; // bl
  __int16 v7; // bp
  char v8; // al
  char v9; // bl

  v4 = a3; /*0x735893*/
  v5 = *a3; /*0x735897*/
  if ( *a3 ) /*0x735897*/
  {
    v7 = 0; /*0x7358aa*/
    do /*0x7358fa*/
    {
      if ( v7 == *(this + 0x80) ) /*0x7358bb*/
        break; /*0x7358bb*/
      ++v4; /*0x7358bf*/
      v8 = v5 & 0x7F; /*0x7358c2*/
      if ( v5 >= 0 ) /*0x7358c6*/
      {
        v9 = *v4; /*0x7358e1*/
        for ( v4 += 2; v8; a2 += a4 ) /*0x7358e8*/
        {
          --v8; /*0x7358f0*/
          *a2 = v9; /*0x7358f2*/
        }
      }
      else
      {
        for ( ; v8; a2 += a4 ) /*0x7358ca*/
        {
          --v8; /*0x7358d2*/
          *a2 = *v4; /*0x7358d4*/
          v4 += 2; /*0x7358d6*/
        }
      }
      v5 = *v4; /*0x7358fa*/
      v7 += (unsigned __int8)(v8 - 1); /*0x735902*/
    }
    while ( *v4 ); /*0x7358fa*/
  }
}
