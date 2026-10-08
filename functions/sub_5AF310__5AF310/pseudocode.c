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
  int v19; // eax

  Menu::Menu(this); /*0x5af313*/
  *((float *)this + 0x18) = flt_A58E1C; /*0x5af31e*/
  v2 = flt_A46B10; /*0x5af323*/
  this->__vftable = (MenuVtbl *)&LockPickMenu::`vftable'; /*0x5af329*/
  *((float *)this + 0x19) = v2; /*0x5af32f*/
  *((_DWORD *)this + 0xA) = 0; /*0x5af332*/
  v3 = 0.0; /*0x5af335*/
  *((_DWORD *)this + 0xB) = 0; /*0x5af337*/
  v4 = flt_A35AA4; /*0x5af33a*/
  *((_DWORD *)this + 0xD) = 0; /*0x5af340*/
  v5 = 1.0; /*0x5af343*/
  *((_DWORD *)this + 0xC) = 0; /*0x5af345*/
  *((_DWORD *)this + 0xE) = 0; /*0x5af348*/
  *((_DWORD *)this + 0xF) = 0; /*0x5af34b*/
  *((_DWORD *)this + 0x12) = 0; /*0x5af34e*/
  *((_DWORD *)this + 0x13) = 0; /*0x5af351*/
  *((_DWORD *)this + 0x51) = 0; /*0x5af354*/
  v6 = (float *)((char *)this + 0x90); /*0x5af35a*/
  v7 = 5; /*0x5af360*/
  while ( 1 ) /*0x5af36b*/
  {
    v11 = v5; /*0x5af36b*/
    *((_BYTE *)v6 + 5) = 0; /*0x5af36d*/
    v6[0xFFFFFFFB] = v3; /*0x5af370*/
    *((_BYTE *)v6 + 4) = 0; /*0x5af373*/
    *v6 = v3; /*0x5af376*/
    *((_BYTE *)v6 + 6) = 0; /*0x5af378*/
    v6[3] = 0.0; /*0x5af37b*/
    *((float *)this + 0x1E) = v3; /*0x5af37e*/
    v12 = v3; /*0x5af381*/
    v6 += 0xA; /*0x5af383*/
    --v7; /*0x5af386*/
    v6[0xFFFFFFF4] = v4; /*0x5af389*/
    v13 = v4; /*0x5af38c*/
    v6[0xFFFFFFF5] = v5; /*0x5af38e*/
    v14 = v12; /*0x5af391*/
    v15 = v11; /*0x5af391*/
    *((float *)this + 0x16) = v12; /*0x5af393*/
    if ( !v7 ) /*0x5af396*/
      break; /*0x5af396*/
    v8 = v14; /*0x5af367*/
    v9 = v13; /*0x5af367*/
    v3 = v8; /*0x5af367*/
    v10 = v9; /*0x5af369*/
    v5 = v15; /*0x5af369*/
    v4 = v10; /*0x5af369*/
  }
  *((_DWORD *)this + 0x58) = 0; /*0x5af39a*/
  v16 = v15; /*0x5af3a0*/
  v17 = v14; /*0x5af3a0*/
  *((_DWORD *)this + 0x5A) = 0xFFFFFFFF; /*0x5af3a2*/
  *((float *)this + 0x52) = v14; /*0x5af3ac*/
  *((_DWORD *)this + 0x54) = 0; /*0x5af3b2*/
  *((float *)this + 0x53) = v14; /*0x5af3b8*/
  *((_DWORD *)this + 0x5D) = 0; /*0x5af3be*/
  v18 = flt_A31E2C; /*0x5af3c4*/
  *((_DWORD *)this + 0x5E) = 0; /*0x5af3ca*/
  *((float *)this + 0x55) = v18; /*0x5af3d0*/
  *((float *)this + 0x56) = v17; /*0x5af3d6*/
  *((float *)this + 0x57) = v16; /*0x5af3dc*/
  v19 = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5af3e2*/
  *((_DWORD *)this + 0x10) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5af3e7*/
  *((_DWORD *)this + 0x11) = v19; /*0x5af3ec*/
  HIBYTE(dword_B3B0B4[0xD0]) = 0; /*0x5af3ef*/
  BYTE2(dword_B3B0B4[0xD0]) = 0; /*0x5af3f5*/
  BYTE1(dword_B3B0B4[0xD0]) = 0; /*0x5af3fb*/
  *((_BYTE *)this + 0x17C) = 0; /*0x5af401*/
  return this; /*0x5af409*/
}
