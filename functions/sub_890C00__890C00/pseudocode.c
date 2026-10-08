// TES4 authoritative: initializes shared bhk character state table. Slots observed: 0=OnGround, 1=Jumping, 2=InAir, 4=Flying, 5=Swimming, 6=Projectile. No Climbing state is constructed here.
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

  sub_890B00(&this->x); /*0x890c2b*/
  *((_DWORD *)this + 0x1D) = 0; /*0x890c32*/
  *((_DWORD *)this + 0x23) = 0; /*0x890c35*/
  *((_BYTE *)this + 0x84) = 1; /*0x890c3b*/
  *((_DWORD *)this + 0x1C) = 0; /*0x890c42*/
  v3 = (unsigned __int16)(dword_B2EB3C + 1); /*0x890c4d*/
  dword_B2EB3C = v3; /*0x890c56*/
  if ( !v3 ) /*0x890c5b*/
  {
    v3 = 0xA; /*0x890c5d*/
    dword_B2EB3C = 0xA; /*0x890c62*/
  }
  *((float *)this + 0x1F) = 0.0; /*0x890c6c*/
  *((float *)this + 0x20) = 1.0; /*0x890c78*/
  *((_DWORD *)this + 0x1D) = (v3 << 0x10) | 0x14; /*0x890c7e*/
  v4 = flt_A967D0; /*0x890c81*/
  *((_DWORD *)this + 0x1E) = 0; /*0x890c87*/
  *((float *)this + 0x25) = v4; /*0x890c8a*/
  *((_DWORD *)this + 0x22) = 0; /*0x890c90*/
  *((_DWORD *)this + 0x24) = 0; /*0x890c96*/
  *((_DWORD *)this + 0x27) = 1; /*0x890c9c*/
  *((_DWORD *)this + 0x28) = 0; /*0x890ca6*/
  *((float *)this + 0x26) = 1.0; /*0x890cac*/
  *((_BYTE *)this + 0x85) = 0; /*0x890cb2*/
  *this = unk_BA7A40; /*0x890cc1*/
  v5 = unk_BA7A40; /*0x890cc4*/
  *((float *)this + 0x14) = 0.0; /*0x890ccb*/
  *((float *)this + 9) = 0.0; /*0x890cce*/
  *(this + 1) = v5; /*0x890cd1*/
  *((float *)this + 0x10) = 0.0; /*0x890cd5*/
  *((_DWORD *)this + 0x12) = 0; /*0x890cd8*/
  *((float *)this + 0x11) = 0.0; /*0x890cdb*/
  *((_DWORD *)this + 0x15) = 4; /*0x890cde*/
  *((float *)this + 8) = 1.0; /*0x890ce5*/
  *((float *)this + 0x13) = kHeadBodyNormalMatchRadius; /*0x890cee*/
  *((float *)this + 0xA) = 1.0; /*0x890cf1*/
  *((float *)this + 0x16) = flt_A2FE7C; /*0x890cfa*/
  if ( a2 ) /*0x890cfd*/
  {
    if ( !unk_BA7A54 ) /*0x890d03*/
    {
      v6 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x34, 0x31); /*0x890d1e*/
      v6[2] = 0x34; /*0x890d20*/
      v7 = sub_8BA090(v6); /*0x890d31*/
      v8 = unk_BA7D98; /*0x890d36*/
      unk_BA7A54 = (int)v7; /*0x890d3c*/
      v9 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 0x10))(v8, 0xC, 0x31); /*0x890d4e*/
      v9[2] = 0xC; /*0x890d50*/
      v10 = sub_8D0030(v9); /*0x890d6c*/
      sub_8BA120((_DWORD *)unk_BA7A54, (int)v10, 0); /*0x890d74*/
      if ( v10[2] ) /*0x890d79*/
      {
        if ( !--v10[3] ) /*0x890d84*/
          (**(void (__thiscall ***)(_WORD *, int))v10)(v10, 1); /*0x890d95*/
      }
      v11 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x31); /*0x890daa*/
      v11[2] = 8; /*0x890dac*/
      v12 = sub_8CFC60(v11); /*0x890dc6*/
      sub_8BA120((_DWORD *)unk_BA7A54, (int)v12, 5); /*0x890dcf*/
      if ( v12[2] ) /*0x890dd4*/
      {
        if ( !--v12[3] ) /*0x890ddf*/
          (**(void (__thiscall ***)(_WORD *, int))v12)(v12, 1); /*0x890df0*/
      }
      v13 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x31); /*0x890e00*/
      v13[2] = 8; /*0x890e02*/
      v14 = sub_8CFA40(v13); /*0x890e1c*/
      sub_8BA120((_DWORD *)unk_BA7A54, (int)v14, 1); /*0x890e25*/
      if ( v14[2] ) /*0x890e2a*/
      {
        if ( !--v14[3] ) /*0x890e35*/
          (**(void (__thiscall ***)(_WORD *, int))v14)(v14, 1); /*0x890e46*/
      }
      v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC, 0x31); /*0x890e57*/
      *(_WORD *)(v15 + 4) = 0xC; /*0x890e59*/
      v16 = sub_8CF6C0((float *)v15); /*0x890e75*/
      sub_8BA120((_DWORD *)unk_BA7A54, (int)v16, 2); /*0x890e7e*/
      if ( *((_WORD *)v16 + 2) ) /*0x890e83*/
      {
        if ( !--*((_WORD *)v16 + 3) ) /*0x890e8e*/
          (**(void (__thiscall ***)(float *, int))v16)(v16, 1); /*0x890e9f*/
      }
      v17 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x31); /*0x890eb1*/
      *(_WORD *)(v17 + 4) = 8; /*0x890eb5*/
      *(_WORD *)(v17 + 6) = 1; /*0x890eb9*/
      *(_DWORD *)v17 = &bhkCharacterStateFlying::`vftable'; /*0x890ebf*/
      sub_8BA120((_DWORD *)unk_BA7A54, v17, 4); /*0x890ecc*/
      if ( *(_WORD *)(v17 + 4) ) /*0x890ed1*/
      {
        if ( !--*(_WORD *)(v17 + 6) ) /*0x890edc*/
          (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x890eed*/
      }
      v18 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 8, 0x31); /*0x890efd*/
      v18[2] = 8; /*0x890eff*/
      v19 = sub_8CF3A0(v18); /*0x890f19*/
      sub_8BA120((_DWORD *)unk_BA7A54, (int)v19, 6); /*0x890f22*/
      if ( v19[2] ) /*0x890f27*/
      {
        if ( !--v19[3] ) /*0x890f32*/
          (**(void (__thiscall ***)(_WORD *, int))v19)(v19, 1); /*0x890f43*/
      }
    }
    sub_890560(this, unk_BA7A54); /*0x890f4d*/
  }
  return this; /*0x890f54*/
}
