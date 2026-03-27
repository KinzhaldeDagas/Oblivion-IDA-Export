void __thiscall sub_735890(_WORD *this, char *a2, char *a3, int a4)
{
  char *v4; // esi
  char v5; // bl
  __int16 v7; // bp
  char v8; // al
  char v9; // bl

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
        v9 = *v4;
        for ( v4 += 2; v8; a2 += a4 )
        {
          --v8;
          *a2 = v9;
        }
      }
      else
      {
        for ( ; v8; a2 += a4 )
        {
          --v8;
          *a2 = *v4;
          v4 += 2;
        }
      }
      v5 = *v4;
      v7 += (unsigned __int8)(v8 - 1);
    }
    while ( *v4 );
  }
}
