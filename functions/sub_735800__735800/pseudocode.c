void __thiscall sub_735800(_WORD *this, _BYTE *a2, char *a3, int a4)
{
  char *v4; // esi
  char v5; // bl
  __int16 v7; // bp
  char v8; // al
  char i; // bl

  v4 = a3;
  v5 = *a3;
  if ( *a3 )
  {
    v7 = 0;
    do
    {
      if ( v7 == *(this + 0x80) )
        break;
      ++v4;
      v8 = v5 & 0x7F;
      if ( v5 >= 0 )
      {
        for ( i = *v4++; v8; a2 += a4 )
        {
          --v8;
          *a2 = i;
        }
      }
      else
      {
        for ( ; v8; a2 += a4 )
        {
          --v8;
          *a2 = *v4++;
        }
      }
      v5 = *v4;
      v7 += (unsigned __int8)(v8 - 1);
    }
    while ( *v4 );
  }
}
