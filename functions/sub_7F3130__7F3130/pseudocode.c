void __thiscall sub_7F3130(_DWORD *this, int a2)
{
  int v3; // ecx
  signed int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // ebp
  bool v8; // cc
  int v9; // edx
  int v10; // ecx
  int v11; // eax

  if ( a2 > 0 )
  {
    do
    {
      ++*(this + 0x22);
      v3 = *(this + 0x53);
      if ( *(this + 0x22) >= v3 )
        *(this + 0x22) = 0;
      v4 = *(this + 0x22);
      v5 = *(this + 0x21);
      if ( v4 == v5 )
      {
        v6 = v5 + 1;
        *(this + 0x21) = v6;
        if ( v6 >= v3 )
          *(this + 0x21) = v6 - v3;
      }
      v7 = 0;
      v8 = *(this + 0x4D) <= 0;
      *((_BYTE *)this + 0x180) = *(this + 0x21) > v4;
      if ( !v8 )
      {
        do
        {
          if ( v4 )
          {
            v9 = v4 - 1;
          }
          else if ( *((_BYTE *)this + 0x180) )
          {
            v9 = *(this + 0x53) - 1;
          }
          else
          {
            v9 = 0;
          }
          v10 = *(this + 0x20);
          if ( v4 >= v10 )
          {
            v11 = v4 - v10;
          }
          else if ( *((_BYTE *)this + 0x180) )
          {
            v11 = v4 + *(this + 0x53) - v10;
          }
          else
          {
            v11 = 0;
          }
          sub_7F2C00((float *)this, v7++, v4, v9, v11);
        }
        while ( v7 < *(this + 0x4D) );
      }
      --a2;
    }
    while ( a2 );
  }
}
