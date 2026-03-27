char __thiscall sub_947910(_DWORD **this, char *a2, int a3, int a4)
{
  int v4; // edi
  char *v6; // eax
  char v7; // cl
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // cl
  char v12; // cl
  char v13; // cl

  v4 = a4;
  (*(void (__thiscall **)(_DWORD, char *, int))(**(this + 2) + 0xC))(*(this + 2), a2, a4 * a3);
  LOBYTE(v6) = *((_BYTE *)this + 0xC);
  if ( (_BYTE)v6 )
  {
    v6 = a2;
    if ( a3 == 2 )
    {
      if ( a4 > 0 )
      {
        do
        {
          v13 = *v6;
          *v6 = v6[1];
          v6[1] = v13;
          v6 += 2;
          --v4;
        }
        while ( v4 );
      }
    }
    else if ( a3 == 4 )
    {
      if ( a4 > 0 )
      {
        v6 = a2 + 2;
        do
        {
          v11 = v6[0xFFFFFFFE];
          v6[0xFFFFFFFE] = v6[1];
          v6[1] = v11;
          v12 = v6[0xFFFFFFFF];
          v6[0xFFFFFFFF] = *v6;
          *v6 = v12;
          v6 += 4;
          --v4;
        }
        while ( v4 );
      }
    }
    else if ( a3 == 8 && a4 > 0 )
    {
      v6 = a2 + 6;
      do
      {
        v7 = v6[0xFFFFFFFA];
        v6[0xFFFFFFFA] = v6[1];
        v6[1] = v7;
        v8 = v6[0xFFFFFFFB];
        v6[0xFFFFFFFB] = *v6;
        *v6 = v8;
        v9 = v6[0xFFFFFFFC];
        v6[0xFFFFFFFC] = v6[0xFFFFFFFF];
        v6[0xFFFFFFFF] = v9;
        v10 = v6[0xFFFFFFFD];
        v6[0xFFFFFFFD] = v6[0xFFFFFFFE];
        v6[0xFFFFFFFE] = v10;
        v6 += 8;
        --v4;
      }
      while ( v4 );
    }
  }
  return (char)v6;
}
