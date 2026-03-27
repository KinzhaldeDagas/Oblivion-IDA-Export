int __thiscall sub_73B7C0(int this)
{
  int v2; // eax
  double v3; // st7
  double v4; // rt0
  double v5; // st4
  float *v6; // eax
  float *v7; // eax
  NiTransform *v8; // eax
  double v9; // st7
  float v10; // eax
  float *v11; // eax
  int result; // eax
  __int64 v13; // kr00_8
  float v14; // edx
  double v15; // st7
  double v16; // st6
  double v17; // st6
  float v18; // [esp+10h] [ebp-94h]
  float v19; // [esp+10h] [ebp-94h]
  float v20; // [esp+10h] [ebp-94h]
  float v21; // [esp+10h] [ebp-94h]
  float v22; // [esp+10h] [ebp-94h]
  float v23; // [esp+10h] [ebp-94h]
  NiTransform v24; // [esp+14h] [ebp-90h] BYREF
  float v25[9]; // [esp+5Ch] [ebp-48h] BYREF
  float v26[9]; // [esp+80h] [ebp-24h] BYREF

  v2 = *(_DWORD *)(this + 0x14C);
  if ( v2 == 2 )
  {
    v3 = flt_A3D65C;
    *(float *)(this + 0x134) = flt_A3D65C;
    *(float *)(this + 0x130) = v3;
    *(float *)(this + 0x138) = 0.0;
    v18 = *(float *)(this + 0x68);
    v4 = dbl_A2FAA0;
    *(float *)(this + 0x10C) = *(float *)(this + 0x6C) * v4;
    v5 = dbl_A7CDE0;
    *(float *)(this + 0x118) = v18 * v5;
    *(float *)(this + 0x124) = 0.0;
    v19 = *(float *)(this + 0x74);
    *(float *)(this + 0x110) = *(float *)(this + 0x78) * v4;
    *(float *)(this + 0x11C) = v19 * v5;
    *(float *)(this + 0x128) = 0.0;
    v20 = *(float *)(this + 0x80);
    *(float *)(this + 0x114) = v4 * *(float *)(this + 0x84);
    *(float *)(this + 0x120) = v5 * v20;
    *(float *)(this + 0x12C) = 0.0;
  }
  else if ( v2 == 3 || v2 == 4 )
  {
    *(float *)(this + 0x138) = 0.0;
    *(float *)(this + 0x134) = 0.0;
    *(float *)(this + 0x130) = 0.0;
    v11 = sub_710400((float *)(this + 0x64), v25);
    qmemcpy((void *)(this + 0x10C), NiMAtrix33_Multiply((float *)(this + 0xDC), &v24.pos.x, v11), 0x24u);
  }
  else
  {
    v21 = 1.0 / *(float *)(this + 0x94);
    v6 = sub_710400((float *)(this + 0x64), &v24.pos.x);
    v7 = NiMAtrix33_Multiply((float *)(this + 0xDC), v25, v6);
    qmemcpy((void *)(this + 0x10C), sub_710190(v7, v26, v21), 0x24u);
    v8 = sub_7101F0((NiTransform *)(this + 0x10C), (NiTransform *)v24.rot.data[2], (NiPoint3 *)(this + 0x88));
    v24.rot.data[1][0] = *(float *)(this + 0x100) - v8->rot.data[0][0];
    v24.rot.data[1][1] = *(float *)(this + 0x104) - v8->rot.data[0][1];
    v9 = *(float *)(this + 0x108) - v8->rot.data[0][2];
    v10 = v24.rot.data[1][1];
    *(float *)(this + 0x130) = v24.rot.data[1][0];
    *(float *)(this + 0x134) = v10;
    v24.rot.data[1][2] = v9;
    *(float *)(this + 0x138) = v24.rot.data[1][2];
  }
  sub_7101F0((NiTransform *)(this + 0x64), &v24, (NiPoint3 *)(this + 0x154));
  v13 = *(_QWORD *)&v24.rot.data[0][0];
  result = LODWORD(v24.rot.data[0][0]);
  v14 = v24.rot.data[0][2];
  v15 = *(float *)(this + 0x8C) * v24.rot.data[0][1] + *(float *)(this + 0x88) * v24.rot.data[0][0];
  v16 = *(float *)(this + 0x90);
  ++*(_DWORD *)(this + 0xB8);
  v17 = v16 * v24.rot.data[0][2];
  *(_QWORD *)(this + 0x164) = v13;
  *(float *)(this + 0x16C) = v14;
  v22 = v15 + v17;
  v23 = v22 + *(float *)(this + 0x160) * *(float *)(this + 0x94);
  *(float *)(this + 0x170) = v23;
  return result;
}
