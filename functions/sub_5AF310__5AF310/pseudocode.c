Menu *__thiscall sub_5AF310(Menu *this)
{
  double v2; // st7
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float *v6; // eax
  int v7; // edx
  double v8; // rt0
  double v9; // st5
  double v10; // rt1
  double v11; // rt2
  double v12; // rtt
  double v13; // st7
  double v14; // st5
  double v15; // st6
  double v16; // rt2
  double v17; // st6
  double v18; // st5
  unsigned int v19; // eax

  Menu::Menu(this);
  *((float *)this + 0x18) = flt_A58E1C;
  v2 = flt_A46B10;
  this->__vftable = (MenuVtbl *)&LockPickMenu::`vftable';
  *((float *)this + 0x19) = v2;
  *((_DWORD *)this + 0xA) = 0;
  v3 = 0.0;
  *((_DWORD *)this + 0xB) = 0;
  v4 = flt_A35AA4;
  *((_DWORD *)this + 0xD) = 0;
  v5 = 1.0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xE) = 0;
  *((_DWORD *)this + 0xF) = 0;
  *((_DWORD *)this + 0x12) = 0;
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x51) = 0;
  v6 = (float *)((char *)this + 0x90);
  v7 = 5;
  while ( 1 )
  {
    v11 = v5;
    *((_BYTE *)v6 + 5) = 0;
    v6[0xFFFFFFFB] = v3;
    *((_BYTE *)v6 + 4) = 0;
    *v6 = v3;
    *((_BYTE *)v6 + 6) = 0;
    v6[3] = 0.0;
    *((float *)this + 0x1E) = v3;
    v12 = v3;
    v6 += 0xA;
    --v7;
    v6[0xFFFFFFF4] = v4;
    v13 = v4;
    v6[0xFFFFFFF5] = v5;
    v14 = v12;
    v15 = v11;
    *((float *)this + 0x16) = v12;
    if ( !v7 )
      break;
    v8 = v14;
    v9 = v13;
    v3 = v8;
    v10 = v9;
    v5 = v15;
    v4 = v10;
  }
  *((_DWORD *)this + 0x58) = 0;
  v16 = v15;
  v17 = v14;
  *((_DWORD *)this + 0x5A) = 0xFFFFFFFF;
  *((float *)this + 0x52) = v14;
  *((_DWORD *)this + 0x54) = 0;
  *((float *)this + 0x53) = v14;
  *((_DWORD *)this + 0x5D) = 0;
  v18 = flt_A31E2C;
  *((_DWORD *)this + 0x5E) = 0;
  *((float *)this + 0x55) = v18;
  *((float *)this + 0x56) = v17;
  *((float *)this + 0x57) = v16;
  v19 = Seed;
  *((_DWORD *)this + 0x10) = Seed;
  *((_DWORD *)this + 0x11) = v19;
  byte_B3B3F7 = 0;
  byte_B3B3F6 = 0;
  byte_B3B3F5 = 0;
  *((_BYTE *)this + 0x17C) = 0;
  return this;
}
