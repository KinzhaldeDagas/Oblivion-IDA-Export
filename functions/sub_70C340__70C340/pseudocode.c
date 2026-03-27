char __thiscall sub_70C340(float *this, float *a2, float *a3)
{
  int v5; // eax
  void (__thiscall *v6)(float *); // edx
  float v7; // [esp+4h] [ebp-7Ch]
  float v8; // [esp+4h] [ebp-7Ch]
  float v9; // [esp+4h] [ebp-7Ch]
  float v10; // [esp+8h] [ebp-78h] BYREF
  float v11; // [esp+Ch] [ebp-74h]
  float v12; // [esp+10h] [ebp-70h]
  float v13; // [esp+14h] [ebp-6Ch] BYREF
  float v14; // [esp+18h] [ebp-68h]
  float v15; // [esp+1Ch] [ebp-64h]
  float v16; // [esp+20h] [ebp-60h] BYREF
  float v17; // [esp+24h] [ebp-5Ch]
  float v18; // [esp+28h] [ebp-58h]
  float v19[3]; // [esp+2Ch] [ebp-54h] BYREF
  float v20[9]; // [esp+38h] [ebp-48h] BYREF
  float v21[9]; // [esp+5Ch] [ebp-24h] BYREF

  v10 = *(this + 0x22) - *a2;
  v11 = *(this + 0x23) - a2[1];
  v12 = *(this + 0x24) - a2[2];
  v7 = v10 * v10 + v11 * v11 + v12 * v12;
  if ( v7 < dbl_A7E548 )
    return 0;
  sub_43F350(&v10);
  sub_4BF9E0(a3, &v13, &v10);
  v8 = v14 * v14 + v13 * v13 + v15 * v15;
  if ( v8 < (double)flt_A3D65C )
    return 0;
  sub_4BF9E0(&v10, &v16, &v13);
  v9 = v17 * v17 + v16 * v16 + v18 * v18;
  if ( v9 < (double)flt_A3D65C )
    return 0;
  v19[0] = -v10;
  v19[1] = -v11;
  v19[2] = -v12;
  sub_70FCC0(v20, v19, &v16, &v13);
  v5 = *((_DWORD *)this + 7);
  if ( v5 )
    qmemcpy(v20, sub_710490((float *)(v5 + 0x64), v21, v20), sizeof(v20));
  v6 = *(void (__thiscall **)(float *))(*(_DWORD *)this + 0x74);
  qmemcpy(this + 0xC, v20, 0x24u);
  v6(this);
  (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x78))(this);
  return 1;
}
