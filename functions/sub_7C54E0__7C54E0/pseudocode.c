_DWORD *__thiscall sub_7C54E0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  __int16 v7; // di
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  if ( !*(this + 0xD) )
  {
    v6 = *(this + 0x22);
    v7 = 0x17D;
    if ( v6 == 1 )
      v7 = 0x19C;
    v8 = a2;
    if ( v6 != 4 )
    {
      v9 = FormHeapAlloc(0x10u);
      a2 = v9;
      if ( v9 )
        v10 = sub_7E2370(v9, v8, v7, 1, 0, 0);
      else
        v10 = 0;
      a2 = v10;
      sub_6AA320(this + 0xA, &a2);
    }
    if ( !UseHDR )
    {
      v11 = *(this + 0x22);
      if ( !v11 || v11 == 4 || v11 == 3 )
      {
        v12 = FormHeapAlloc(0x10u);
        a2 = v12;
        if ( v12 )
          v13 = sub_7E2370(v12, v8, 0x19D, 1, 0, 0);
        else
          v13 = 0;
        a2 = v13;
        sub_6AA320(this + 0xA, &a2);
      }
    }
  }
  return this + 0xA;
}
