float *__thiscall sub_78D9E0(float *this, int a2)
{
  double v3; // st7
  _DWORD *v4; // ecx
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  double v10; // st7
  int v12; // [esp+0h] [ebp-64h] BYREF
  _DWORD v13[6]; // [esp+4Ch] [ebp-18h] BYREF
  float v14; // [esp+6Ch] [ebp+8h]

  v13[2] = &v12;
  v13[1] = this;
  *this = *(float *)a2;
  *(this + 1) = *(float *)(a2 + 4);
  *(this + 2) = *(float *)(a2 + 8);
  *(this + 3) = *(float *)(a2 + 0xC);
  *(this + 4) = *(float *)(a2 + 0x10);
  *(this + 5) = *(float *)(a2 + 0x14);
  *(this + 6) = *(float *)(a2 + 0x18);
  *(this + 7) = *(float *)(a2 + 0x1C);
  v13[5] = 0;
  v3 = *(float *)(a2 + 0x20);
  v13[0] = this;
  *(this + 8) = v3;
  *(this + 9) = *(float *)(a2 + 0x24);
  *(this + 0xA) = *(float *)(a2 + 0x28);
  *(this + 0xB) = *(float *)(a2 + 0x2C);
  *(this + 0xC) = *(float *)(a2 + 0x30);
  *(this + 0xE) = *(float *)(a2 + 0x38);
  *(this + 0xF) = *(float *)(a2 + 0x3C);
  *(this + 0x10) = *(float *)(a2 + 0x40);
  *((_BYTE *)this + 0x44) = *(_BYTE *)(a2 + 0x44);
  *((_BYTE *)this + 0x45) = *(_BYTE *)(a2 + 0x45);
  *(this + 0x12) = *(float *)(a2 + 0x48);
  *(this + 0x13) = *(float *)(a2 + 0x4C);
  *(this + 0x14) = *(float *)(a2 + 0x50);
  *((_WORD *)this + 0x2A) = *(_WORD *)(a2 + 0x54);
  *(this + 0x16) = *(float *)(a2 + 0x58);
  *(this + 0x17) = *(float *)(a2 + 0x5C);
  *(this + 0x18) = *(float *)(a2 + 0x60);
  *((_WORD *)this + 0x32) = *(_WORD *)(a2 + 0x64);
  *(this + 0x1A) = *(float *)(a2 + 0x68);
  *((_BYTE *)this + 0x6C) = *(_BYTE *)(a2 + 0x6C);
  v4 = *((_DWORD **)this + 0xE);
  *((_BYTE *)this + 0x6D) = *(_BYTE *)(a2 + 0x6D);
  sub_791770(v4, v13);
  v5 = *((_DWORD **)this + 0xC);
  qmemcpy(this + 0x1C, (const void *)(a2 + 0x70), 0x30u);
  ++*v5;
  v6 = FormHeapAlloc(0x14u);
  if ( v6 )
  {
    *(_DWORD *)v6 = 0;
    *(float *)(v6 + 0xC) = 0.0;
    *(float *)(v6 + 8) = 0.0;
    *(float *)(v6 + 4) = 0.0;
    *(float *)(v6 + 0x10) = 1.0;
  }
  else
  {
    v6 = 0;
  }
  *((_DWORD *)this + 0xD) = v6;
  *(_DWORD *)v6 = a2;
  v7 = (_DWORD *)(*(_DWORD *)a2 + 4);
  v8 = (_DWORD *)(*((_DWORD *)this + 0xD) + 4);
  *v8 = *v7;
  v8[1] = v7[1];
  v8[2] = v7[2];
  v9 = *(_DWORD *)(a2 + 0x34);
  if ( v9 )
    v10 = *(float *)(v9 + 0x10);
  else
    v10 = *(float *)(*(_DWORD *)a2 + 0x14);
  v14 = v10;
  *(float *)(*((_DWORD *)this + 0xD) + 0x10) = v14;
  ++dword_B42980;
  return this;
}
