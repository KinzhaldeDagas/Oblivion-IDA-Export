signed int __thiscall sub_97A530(int this, int a2, int a3, int a4, int a5, int a6, _BYTE *a7)
{
  float *v8; // eax
  float v9; // edx
  float *v10; // eax
  double v11; // rt0
  float v13; // [esp+4h] [ebp-58h]
  float v14; // [esp+4h] [ebp-58h]
  float v15; // [esp+8h] [ebp-54h]
  float v16; // [esp+Ch] [ebp-50h]
  float v17; // [esp+Ch] [ebp-50h]
  float v18; // [esp+10h] [ebp-4Ch]
  float v19; // [esp+14h] [ebp-48h]
  float v20; // [esp+18h] [ebp-44h]
  _DWORD v21[4]; // [esp+1Ch] [ebp-40h] BYREF
  float v22; // [esp+2Ch] [ebp-30h] BYREF
  float v23[3]; // [esp+30h] [ebp-2Ch] BYREF
  float v24[3]; // [esp+3Ch] [ebp-20h] BYREF
  float v25[5]; // [esp+48h] [ebp-14h] BYREF

  v21[0] = a3;
  v21[3] = a6;
  v8 = *(float **)(this + 0x7C);
  v25[3] = 0.0;
  v25[4] = 0.0;
  v21[1] = a4;
  v21[2] = a5;
  v9 = v8[5];
  v13 = v8[4];
  v16 = v8[6];
  v10 = *(float **)(a2 + 0x7C);
  if ( Vector3_InitValue_ == v13
    && *(&Vector3_InitValue_ + 1) == v9
    && dword_B3F9B0 == v16
    && v10[4] == Vector3_InitValue_
    && v10[5] == *(&Vector3_InitValue_ + 1)
    && v10[6] == dword_B3F9B0 )
  {
    v22 = 0.0;
    v18 = *(float *)(a2 + 0x40) + *(float *)(this + 0x40);
    v19 = *(float *)(a2 + 0x44) + *(float *)(this + 0x44);
    v20 = *(float *)(a2 + 0x48) + *(float *)(this + 0x48);
    v11 = dbl_A2FAA0;
    v14 = v18 * v11;
    v23[0] = v14;
    v15 = v19 * v11;
    v23[1] = v15;
    v17 = v11 * v20;
    v23[2] = v17;
LABEL_9:
    *a7 = 1;
    sub_980240((float *)(this + 4), v23, v24);
    sub_980240((float *)(a2 + 4), v23, v25);
    return sub_97A470(v21);
  }
  if ( sub_97CBE0(this + 4, (int)&v22, a2 + 4, &v22, v23) )
    goto LABEL_9;
  return 0;
}
