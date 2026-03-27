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

  *this = a2;
  v3 = (_DWORD *)FormHeapAlloc(0x18u);
  if ( v3 )
    v4 = sub_6AF660(v3);
  else
    v4 = 0;
  *(this + 1) = (int)v4;
  v5 = (float *)FormHeapAlloc(0x1090u);
  if ( v5 )
    v6 = sub_6B5820(v5, flt_A590B4);
  else
    v6 = 0;
  *(this + 2) = v6;
  v7 = (_DWORD *)FormHeapAlloc(8u);
  if ( v7 )
    v8 = sub_6B57C0(v7);
  else
    v8 = 0;
  v9 = *this;
  *(this + 3) = (int)v8;
  *(this + 5) = 0x240;
  *(this + 4) = 0x240;
  *(this + 0x1049) = 0;
  *(this + 0x104A) = 0;
  *(this + 6) = 0;
  *(this + 0x104B) = 1;
  *(this + 0x1048) = 2;
  v10 = *(_DWORD *)(*(_DWORD *)(v9 + 4) + 8);
  switch ( v10 )
  {
    case 0x7D00:
      *(this + 0x104E) = 5;
      break;
    case 0xAC44:
      *(this + 0x104E) = 3;
      break;
    case 0xBB80:
      *(this + 0x104E) = 4;
      break;
  }
  *(this + 0x104D) = 0;
  *(this + 0x104C) = 0;
  memset(this + 0x90B, 0, 0x900u);
  return this;
}
