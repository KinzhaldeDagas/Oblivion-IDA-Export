void __thiscall sub_6FE3C0(_DWORD *this, int a2, NiPoint3 *a3, NiPoint3 *a4)
{
  float *v5; // edi
  double v7; // st7
  float v8; // ecx
  double v9; // st7
  int v10; // ebx
  double v11; // st7
  NiTransform *v12; // eax
  float v13; // [esp+10h] [ebp-18h]
  float v14; // [esp+10h] [ebp-18h]
  float v15; // [esp+14h] [ebp-14h]
  float v16; // [esp+14h] [ebp-14h]
  float v17; // [esp+18h] [ebp-10h]
  float v18; // [esp+18h] [ebp-10h]
  float v19; // [esp+1Ch] [ebp-Ch] BYREF
  float v20; // [esp+20h] [ebp-8h]
  float v21; // [esp+24h] [ebp-4h]
  float v22; // [esp+30h] [ebp+8h]
  float v23; // [esp+30h] [ebp+8h]

  if ( a2 )
  {
    v5 = *(float **)(a2 + 0x1C);
    if ( *(this + 0x15) == 1 || !v5 )
    {
      a3->x = *(float *)(a2 + 0x88);
      a3->y = *(float *)(a2 + 0x8C);
      a3->z = *(float *)(a2 + 0x90);
      if ( *(this + 0x15) == 1 )
      {
        v12 = sub_7101F0((NiTransform *)(a2 + 0x64), (NiTransform *)&v19, a4);
        a4->x = v12->rot.data[0][0];
        a4->y = v12->rot.data[0][1];
        a4->z = v12->rot.data[0][2];
      }
    }
    else
    {
      v13 = *(float *)(a2 + 0x88) - v5[0x22];
      v15 = *(float *)(a2 + 0x8C) - v5[0x23];
      v7 = *(float *)(a2 + 0x90) - v5[0x24];
      a3->x = v13;
      a3->y = v15;
      v17 = v7;
      a3->z = v17;
      v22 = (double)rand() / dbl_A3D5A8;
      v14 = a3->x * v22;
      v16 = a3->y * v22;
      v18 = v22 * a3->z;
      v19 = v5[0x22] + v14;
      v20 = v5[0x23] + v16;
      v8 = v20;
      v9 = v5[0x24];
      a3->x = v19;
      a3->y = v8;
      v21 = v9 + v18;
      a3->z = v21;
      v10 = *(this + 4);
      if ( v10 )
      {
        v11 = *(float *)(v10 + 0x94);
        if ( v11 != 1.0 && 0.0 != v11 )
        {
          v23 = 1.0 / v11;
          NiPoint3::MutliplyByValue(a3, v23);
        }
      }
    }
  }
  else
  {
    a3->x = Vector3_InitValue_;
    a3->y = *(&Vector3_InitValue_ + 1);
    a3->z = dword_B3F9B0;
  }
}
