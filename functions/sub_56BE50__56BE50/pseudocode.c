float *__thiscall sub_56BE50(
        float *this,
        int a2,
        float a3,
        int a4,
        float *a5,
        float a6,
        float a7,
        float a8,
        char a9,
        int a10,
        int a11,
        int a12,
        float a13)
{
  float *v14; // eax
  double v15; // st7
  __int64 v17; // [esp-20h] [ebp-12Ch]
  float v18; // [esp+18h] [ebp-F4h]
  float v19; // [esp+1Ch] [ebp-F0h]
  float v20; // [esp+20h] [ebp-ECh]
  float v21[3]; // [esp+24h] [ebp-E8h] BYREF
  float v22[3]; // [esp+30h] [ebp-DCh] BYREF
  float v23[4]; // [esp+3Ch] [ebp-D0h] BYREF
  float v24[9]; // [esp+4Ch] [ebp-C0h] BYREF
  float v25[9]; // [esp+70h] [ebp-9Ch] BYREF
  float v26[9]; // [esp+94h] [ebp-78h] BYREF
  float v27[9]; // [esp+B8h] [ebp-54h] BYREF
  float v28[12]; // [esp+DCh] [ebp-30h] BYREF

  LODWORD(v23[3]) = this;
  BSTempEff_constr((NiObject *)this, a2, a3);
  v28[0xB] = 0.0;
  *(_DWORD *)this = &BSTempEffectDecal::`vftable';
  *((_DWORD *)this + 6) = a4;
  sub_718A50((float *)(a4 + 8));
  qmemcpy(v27, a5 + 0x19, sizeof(v27));
  sub_7103C0(v27, v24);
  sub_7107A0(v24, 1, (int)&a9, (int)v22);
  v23[0] = a6 - a5[0x22];
  HIDWORD(v17) = &Vector3_InitValue_;
  LODWORD(v17) = v24;
  v23[1] = a7 - a5[0x23];
  v23[2] = a8 - a5[0x24];
  sub_710580(v17, 1, (int)v23, (int)v21);
  qmemcpy(v25, sub_6F9290(v28, v22[0], v22[1], v22[2]), sizeof(v25));
  NiMatrix33_InitRotationTransform(v26, a13);
  qmemcpy((void *)(*((_DWORD *)this + 6) + 8), NiMAtrix33_Multiply(v26, v28, v25), 0x24u);
  v18 = -v21[0];
  v14 = (float *)(*((_DWORD *)this + 6) + 0x2C);
  v19 = -v21[1];
  v15 = v21[2];
  *v14 = v18;
  v14[1] = v19;
  v20 = -v15;
  v14[2] = v20;
  sub_7EE3E0(*(_DWORD **)(*((_DWORD *)this + 6) + 0x48), *((_DWORD *)this + 6));
  return this;
}
