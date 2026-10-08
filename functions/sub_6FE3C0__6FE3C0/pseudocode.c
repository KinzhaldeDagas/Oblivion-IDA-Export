void __thiscall sub_6FE3C0(_DWORD *this, int a2, NiPoint3 *a3, NiPoint3 *a4)
{
  float *v5; // edi
  float v7; // ecx
  double v8; // st7
  int v9; // ebx
  double v10; // st7
  NiTransform *v11; // eax
  float v12; // [esp+1Ch] [ebp-Ch] BYREF
  float v13; // [esp+20h] [ebp-8h]
  float v14; // [esp+24h] [ebp-4h]
  float v15; // [esp+30h] [ebp+8h]
  float v16; // [esp+30h] [ebp+8h]
  NiPoint3 v17; // 0:^14.12

  if ( a2 ) /*0x6fe3cc*/
  {
    v5 = *(float **)(a2 + 0x1C); /*0x6fe3dc*/
    if ( *(this + 0x15) == 1 || !v5 ) /*0x6fe3e7*/
    {
      *a3 = *(NiPoint3 *)(a2 + 0x88); /*0x6fe50d*/
      if ( *(this + 0x15) == 1 ) /*0x6fe524*/
      {
        v11 = sub_7101F0((NiTransform *)(a2 + 0x64), (NiTransform *)&v12, a4); /*0x6fe533*/
        a4->x = v11->rot.data[0][0]; /*0x6fe53a*/
        a4->y = v11->rot.data[0][1]; /*0x6fe53f*/
        a4->z = v11->rot.data[0][2]; /*0x6fe546*/
      }
    }
    else
    {
      v17.x = *(float *)(a2 + 0x88) - v5[0x22]; /*0x6fe3fd*/
      v17.y = *(float *)(a2 + 0x8C) - v5[0x23]; /*0x6fe40d*/
      v17.z = *(float *)(a2 + 0x90) - v5[0x24]; /*0x6fe42a*/
      *a3 = v17; /*0x6fe432*/
      v15 = (double)rand() / dbl_A3D5A8; /*0x6fe448*/
      v17.x = a3->x * v15; /*0x6fe458*/
      v17.y = a3->y * v15; /*0x6fe461*/
      v17.z = v15 * a3->z; /*0x6fe468*/
      v12 = v5[0x22] + v17.x; /*0x6fe476*/
      v13 = v5[0x23] + v17.y; /*0x6fe488*/
      v7 = v13; /*0x6fe48c*/
      v8 = v5[0x24]; /*0x6fe490*/
      a3->x = v12; /*0x6fe496*/
      a3->y = v7; /*0x6fe49c*/
      v14 = v8 + v17.z; /*0x6fe49f*/
      a3->z = v14; /*0x6fe4a7*/
      v9 = *(this + 4); /*0x6fe4aa*/
      if ( v9 ) /*0x6fe4af*/
      {
        v10 = *(float *)(v9 + 0x94); /*0x6fe4c9*/
        if ( v10 != 1.0 && 0.0 != v10 ) /*0x6fe4dd*/
        {
          v16 = 1.0 / v10; /*0x6fe4ea*/
          NiPoint3::MutliplyByValue(a3, v16); /*0x6fe4f5*/
        }
      }
    }
  }
  else
  {
    a3->x = g_zeroNiPoint3.x; /*0x6fe55b*/
    a3->y = g_zeroNiPoint3.y; /*0x6fe563*/
    a3->z = g_zeroNiPoint3.z; /*0x6fe56c*/
  }
}
