int *__thiscall sub_6B1D40(int *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  float *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // eax

  *this = a2; /*0x6b1d6a*/
  v3 = (_DWORD *)FormHeapAlloc(0x18u); /*0x6b1d6c*/
  if ( v3 ) /*0x6b1d80*/
    v4 = sub_6AF660(v3); /*0x6b1d84*/
  else
    v4 = 0; /*0x6b1d8b*/
  *(this + 1) = (int)v4; /*0x6b1d9a*/
  v5 = (float *)FormHeapAlloc(0x1090u); /*0x6b1d9d*/
  if ( v5 ) /*0x6b1db3*/
    v6 = sub_6B5820(v5, flt_A590B4); /*0x6b1dc1*/
  else
    v6 = 0; /*0x6b1dc8*/
  *(this + 2) = v6; /*0x6b1dd4*/
  v7 = (_DWORD *)FormHeapAlloc(8u); /*0x6b1dd7*/
  if ( v7 ) /*0x6b1ded*/
    v8 = sub_6B57C0(v7); /*0x6b1df1*/
  else
    v8 = 0; /*0x6b1df8*/
  v9 = *this; /*0x6b1dfa*/
  *(this + 3) = (int)v8; /*0x6b1e01*/
  *(this + 5) = 0x240; /*0x6b1e04*/
  *(this + 4) = 0x240; /*0x6b1e07*/
  *(this + 0x1049) = 0; /*0x6b1e0a*/
  *(this + 0x104A) = 0; /*0x6b1e10*/
  *(this + 6) = 0; /*0x6b1e16*/
  *(this + 0x104B) = 1; /*0x6b1e19*/
  *(this + 0x1048) = 2; /*0x6b1e23*/
  v10 = *(_DWORD *)(*(_DWORD *)(v9 + 4) + 8); /*0x6b1e30*/
  switch ( v10 ) /*0x6b1e38*/
  {
    case 0x7D00: /*0x6b1e38*/
      *(this + 0x104E) = 5; /*0x6b1e60*/
      break;
    case 0xAC44: /*0x6b1e38*/
      *(this + 0x104E) = 3; /*0x6b1e54*/
      break;
    case 0xBB80: /*0x6b1e38*/
      *(this + 0x104E) = 4; /*0x6b1e48*/
      break;
  }
  *(this + 0x104D) = 0; /*0x6b1e6a*/
  *(this + 0x104C) = 0; /*0x6b1e70*/
  memset(this + 0x90B, 0, 0x900u); /*0x6b1e7e*/
  return this; /*0x6b1e82*/
}
