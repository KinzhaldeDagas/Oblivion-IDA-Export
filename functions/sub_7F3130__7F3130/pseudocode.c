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

  if ( a2 > 0 ) /*0x7f3139*/
  {
    do /*0x7f320e*/
    {
      ++*(this + 0x22); /*0x7f3150*/
      v3 = *(this + 0x53); /*0x7f315c*/
      if ( *(this + 0x22) >= v3 ) /*0x7f3164*/
        *(this + 0x22) = 0; /*0x7f3166*/
      v4 = *(this + 0x22); /*0x7f3170*/
      v5 = *(this + 0x21); /*0x7f3176*/
      if ( v4 == v5 ) /*0x7f317e*/
      {
        v6 = v5 + 1; /*0x7f3180*/
        *(this + 0x21) = v6; /*0x7f3185*/
        if ( v6 >= v3 ) /*0x7f318b*/
          *(this + 0x21) = v6 - v3; /*0x7f318f*/
      }
      v7 = 0; /*0x7f319e*/
      v8 = *(this + 0x4D) <= 0; /*0x7f31a0*/
      *((_BYTE *)this + 0x180) = *(this + 0x21) > v4; /*0x7f31a6*/
      if ( !v8 ) /*0x7f31ac*/
      {
        do /*0x7f3208*/
        {
          if ( v4 ) /*0x7f31b2*/
          {
            v9 = v4 - 1; /*0x7f31cb*/
          }
          else if ( *((_BYTE *)this + 0x180) ) /*0x7f31b4*/
          {
            v9 = *(this + 0x53) - 1; /*0x7f31c3*/
          }
          else
          {
            v9 = 0; /*0x7f31c7*/
          }
          v10 = *(this + 0x20); /*0x7f31ce*/
          if ( v4 >= v10 ) /*0x7f31d6*/
          {
            v11 = v4 - v10; /*0x7f31f3*/
          }
          else if ( *((_BYTE *)this + 0x180) ) /*0x7f31d8*/
          {
            v11 = v4 + *(this + 0x53) - v10; /*0x7f31e9*/
          }
          else
          {
            v11 = 0; /*0x7f31ed*/
          }
          sub_7F2C00((float *)this, v7++, v4, v9, v11); /*0x7f31fb*/
        }
        while ( v7 < *(this + 0x4D) ); /*0x7f3208*/
      }
      --a2; /*0x7f320a*/
    }
    while ( a2 ); /*0x7f320e*/
  }
}
