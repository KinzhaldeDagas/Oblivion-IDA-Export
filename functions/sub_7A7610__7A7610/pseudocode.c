float *__thiscall sub_7A7610(float *this)
{
  double v2; // st7
  double v3; // st5
  double v4; // st5
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax

  v2 = flt_A3744C;
  *(this + 2) = flt_A3744C;
  *(_DWORD *)this = 6;
  *(this + 3) = 1.0;
  *((_DWORD *)this + 1) = 3;
  *(this + 5) = 1.0;
  *((_BYTE *)this + 0x1C) = 1;
  *(this + 6) = 1.0;
  *((_BYTE *)this + 0x1D) = 0;
  *((_BYTE *)this + 0x1E) = 0;
  *(this + 4) = v2;
  *(this + 0xA) = 0.0;
  *(this + 0x14) = 0.0;
  *(this + 8) = 0.0;
  *(this + 0x15) = 0.0;
  *(this + 0x16) = 0.0;
  *(this + 9) = 1.0;
  *(this + 0x17) = 0.0;
  *(this + 0xB) = 1.0;
  *(this + 0x18) = 0.0;
  v3 = flt_A37CC8;
  *(this + 0x19) = 0.0;
  *(this + 0xC) = v3;
  *(this + 0x1A) = 0.0;
  v4 = flt_A31C80;
  *(this + 0x1B) = 0.0;
  *(this + 0xD) = v4;
  *(this + 0x1C) = 0.0;
  *(this + 0xE) = 1.0;
  *(this + 0xF) = flt_A3D65C;
  *(this + 0x10) = flt_A41304;
  *(this + 0x11) = v2;
  *(this + 0x12) = flt_A2FAAC;
  *(this + 0x13) = 1.0;
  v5 = (float *)FormHeapAlloc(0x5Cu);
  if ( v5 )
    v6 = sub_785BE0(v5);
  else
    v6 = 0;
  *((_DWORD *)this + 0x16) = v6;
  v7 = (float *)FormHeapAlloc(0x5Cu);
  if ( v7 )
    v8 = sub_785BE0(v7);
  else
    v8 = 0;
  *((_DWORD *)this + 0x15) = v8;
  v9 = (float *)FormHeapAlloc(0x5Cu);
  if ( v9 )
    v10 = sub_785BE0(v9);
  else
    v10 = 0;
  *((_DWORD *)this + 0x19) = v10;
  v11 = (float *)FormHeapAlloc(0x5Cu);
  if ( v11 )
    v12 = sub_785BE0(v11);
  else
    v12 = 0;
  *((_DWORD *)this + 0x1B) = v12;
  v13 = (float *)FormHeapAlloc(0x5Cu);
  if ( v13 )
    v14 = sub_785BE0(v13);
  else
    v14 = 0;
  *((_DWORD *)this + 0x1A) = v14;
  v15 = (float *)FormHeapAlloc(0x5Cu);
  if ( v15 )
    *((_DWORD *)this + 0x18) = sub_785BE0(v15);
  else
    *(this + 0x18) = 0.0;
  return this;
}
