hkVector4 *__thiscall sub_890C00(hkVector4 *this, char a2)
{
  int v3; // eax
  double v4; // st5
  hkVector4 v5; // xmm0
  _WORD *v6; // eax
  _WORD *v7; // eax
  int v8; // ecx
  _WORD *v9; // eax
  _WORD *v10; // edi
  _WORD *v11; // eax
  _WORD *v12; // edi
  _WORD *v13; // eax
  _WORD *v14; // edi
  int v15; // eax
  float *v16; // edi
  int v17; // edi
  _WORD *v18; // eax
  _WORD *v19; // edi

  sub_890B00(&this->x);
  *((_DWORD *)this + 0x1D) = 0;
  *((_DWORD *)this + 0x23) = 0;
  *((_BYTE *)this + 0x84) = 1;
  *((_DWORD *)this + 0x1C) = 0;
  v3 = (unsigned __int16)(dword_B2EB3C + 1);
  dword_B2EB3C = v3;
  if ( !v3 )
  {
    v3 = 0xA;
    dword_B2EB3C = 0xA;
  }
  *((float *)this + 0x1F) = 0.0;
  *((float *)this + 0x20) = 1.0;
  *((_DWORD *)this + 0x1D) = (v3 << 0x10) | 0x14;
  v4 = flt_A967D0;
  *((_DWORD *)this + 0x1E) = 0;
  *((float *)this + 0x25) = v4;
  *((_DWORD *)this + 0x22) = 0;
  *((_DWORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x27) = 1;
  *((_DWORD *)this + 0x28) = 0;
  *((float *)this + 0x26) = 1.0;
  *((_BYTE *)this + 0x85) = 0;
  *this = stru_BA7A40;
  v5 = stru_BA7A40;
  *((float *)this + 0x14) = 0.0;
  *((float *)this + 9) = 0.0;
  *(this + 1) = v5;
  *((float *)this + 0x10) = 0.0;
  *((_DWORD *)this + 0x12) = 0;
  *((float *)this + 0x11) = 0.0;
  *((_DWORD *)this + 0x15) = 4;
  *((float *)this + 8) = 1.0;
  *((float *)this + 0x13) = flt_A3D65C;
  *((float *)this + 0xA) = 1.0;
  *((float *)this + 0x16) = flt_A2FE7C;
  if ( a2 )
  {
    if ( !dword_BA7A54 )
    {
      v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x34, 0x31);
      v6[2] = 0x34;
      v7 = sub_8BA090(v6);
      v8 = dword_BA7D98;
      dword_BA7A54 = (int)v7;
      v9 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x10))(v8, 0xC, 0x31);
      v9[2] = 0xC;
      v10 = sub_8D0030(v9);
      sub_8BA120((_DWORD *)dword_BA7A54, (int)v10, 0);
      if ( v10[2] )
      {
        if ( !--v10[3] )
          (**(void (__thiscall ***)(_WORD *, int))v10)(v10, 1);
      }
      v11 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x31);
      v11[2] = 8;
      v12 = sub_8CFC60(v11);
      sub_8BA120((_DWORD *)dword_BA7A54, (int)v12, 5);
      if ( v12[2] )
      {
        if ( !--v12[3] )
          (**(void (__thiscall ***)(_WORD *, int))v12)(v12, 1);
      }
      v13 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x31);
      v13[2] = 8;
      v14 = sub_8CFA40(v13);
      sub_8BA120((_DWORD *)dword_BA7A54, (int)v14, 1);
      if ( v14[2] )
      {
        if ( !--v14[3] )
          (**(void (__thiscall ***)(_WORD *, int))v14)(v14, 1);
      }
      v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 0x31);
      *(_WORD *)(v15 + 4) = 0xC;
      v16 = sub_8CF6C0((float *)v15);
      sub_8BA120((_DWORD *)dword_BA7A54, (int)v16, 2);
      if ( *((_WORD *)v16 + 2) )
      {
        if ( !--*((_WORD *)v16 + 3) )
          (**(void (__thiscall ***)(float *, int))v16)(v16, 1);
      }
      v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x31);
      *(_WORD *)(v17 + 4) = 8;
      *(_WORD *)(v17 + 6) = 1;
      *(_DWORD *)v17 = &bhkCharacterStateFlying::`vftable';
      sub_8BA120((_DWORD *)dword_BA7A54, v17, 4);
      if ( *(_WORD *)(v17 + 4) )
      {
        if ( !--*(_WORD *)(v17 + 6) )
          (**(void (__thiscall ***)(int, int))v17)(v17, 1);
      }
      v18 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 8, 0x31);
      v18[2] = 8;
      v19 = sub_8CF3A0(v18);
      sub_8BA120((_DWORD *)dword_BA7A54, (int)v19, 6);
      if ( v19[2] )
      {
        if ( !--v19[3] )
          (**(void (__thiscall ***)(_WORD *, int))v19)(v19, 1);
      }
    }
    sub_890560(this, dword_BA7A54);
  }
  return this;
}
