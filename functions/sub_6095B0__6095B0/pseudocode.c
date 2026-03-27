char __thiscall sub_6095B0(_DWORD *this, int *arg0)
{
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  NiAVObject *v5; // eax
  NiNode *v6; // eax
  int v7; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  double v12; // rt0
  float *v13; // eax
  double v14; // rt0
  int v15; // eax
  double v16; // st7
  int (__thiscall *v17)(_DWORD *); // eax
  int v18; // eax
  NiTransform *v19; // eax
  int v20; // eax
  int v21; // eax
  float v23; // [esp+10h] [ebp-64h]
  float v24; // [esp+14h] [ebp-60h] BYREF
  float v25; // [esp+18h] [ebp-5Ch]
  float v26; // [esp+1Ch] [ebp-58h]
  NiTransform a2; // [esp+20h] [ebp-54h] BYREF
  float v28; // [esp+78h] [ebp+4h]
  float v29; // [esp+78h] [ebp+4h]
  float v30; // [esp+78h] [ebp+4h]

  (*(void (__thiscall **)(_DWORD *))(*this + 0x1C8))(this);
  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    v3 = (_DWORD *)(*(this + 0x17) + 4);
    v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this);
    v4[0x15] = *v3;
    v4[0x16] = v3[1];
    v4[0x17] = v3[2];
    v5 = (NiAVObject *)(*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this);
    NiAVObject_UpdateNiAVObject(v5, 0.0, 0);
  }
  v6 = (NiNode *)(*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this);
  sub_88D070(v6, 1, 1, 0);
  v7 = dword_B3B7D4;
  if ( !dword_B3B7D4 )
  {
    v7 = (unsigned __int16)(dword_B2EB3C + 1);
    dword_B2EB3C = v7;
    if ( !v7 )
    {
      v7 = 0xA;
      dword_B2EB3C = 0xA;
    }
    dword_B3B7D4 = v7;
  }
  v9 = (v7 << 0x10) | 4;
  if ( arg0 )
  {
    v10 = arg0[2];
    if ( v10 )
    {
      v11 = v10 + 0x14;
      if ( v11 )
        *(_DWORD *)(v11 + 0x1C) = v9;
    }
  }
  (*(void (__thiscall **)(int *))(*arg0 + 0x80))(arg0);
  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    v12 = dbl_A3D360;
    v24 = *((float *)this + 0x22) * v12;
    v25 = *((float *)this + 0x23) * v12;
    v26 = v12 * *((float *)this + 0x24);
    sub_4BFAA0(&v24);
    sub_4BFAA0((float *)(*(this + 0x17) + 0x10));
    v13 = (float *)*(this + 0x17);
    v28 = v13[6] * v26 + v13[4] * v24 + v13[5] * v25;
    a2.rot.data[1][0] = v13[4] * v28;
    a2.rot.data[1][1] = v13[5] * v28;
    a2.rot.data[1][2] = v28 * v13[6];
    a2.rot.data[2][0] = a2.rot.data[1][0] - v24;
    a2.rot.data[2][1] = a2.rot.data[1][1] - v25;
    a2.rot.data[2][2] = a2.rot.data[1][2] - v26;
    v14 = dbl_A3D0C0;
    a2.rot.data[1][0] = a2.rot.data[2][0] * v14;
    a2.rot.data[1][1] = a2.rot.data[2][1] * v14;
    a2.rot.data[1][2] = v14 * a2.rot.data[2][2];
    v24 = v24 + a2.rot.data[1][0];
    v25 = v25 + a2.rot.data[1][1];
    v26 = v26 + a2.rot.data[1][2];
    v29 = *((float *)this + 0x1B) * flt_B37058;
    a2.rot.data[2][0] = v24 * v29;
    a2.rot.data[2][1] = v25 * v29;
    a2.rot.data[2][2] = v29 * v26;
    sub_4D9960(arg0, a2.rot.data[2]);
    v15 = (*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this);
    sub_7102B0((float *)(v15 + 0x64), &a2.scale);
    sub_7101F0((NiTransform *)&a2.scale, &a2, (NiPoint3 *)(*(this + 0x17) + 0x10));
    v30 = fabs(a2.rot.data[0][1]);
    v23 = fabs(a2.rot.data[0][2]);
    if ( v23 < (double)v30 )
      a2.rot.data[0][2] = sub_537770(a2.rot.data[0][2]) * v30;
    a2.rot.data[0][1] = 0.0;
    sub_4BFAA0((float *)&a2);
    v16 = flt_B37050;
    v17 = *(int (__thiscall **)(_DWORD *))(*this + 0x154);
    a2.pos.x = v16 * a2.rot.data[0][2];
    a2.pos.y = 0.0;
    a2.pos.z = v16 * -a2.rot.data[0][0];
    v18 = v17(this);
    v19 = sub_7101F0((NiTransform *)(v18 + 0x64), (NiTransform *)a2.rot.data[2], &a2.pos);
    sub_4D99E0(arg0, (float *)v19);
  }
  v20 = (*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this);
  v21 = sub_480340(v20);
  if ( v21 )
    *(_WORD *)(v21 + 0xC) |= 0xCu;
  return 1;
}
