// Builds CBranch flare-vector entries from compact SIdvBranchInfo flare fields.
void __thiscall OB_CBranch_ComputeFlareEntries_010201A0(OB_stVector16_010201A0 *this, int a2)
{
  double v4; // st7
  int v5; // eax
  int v6; // edi
  double v7; // st7
  double v8; // st6
  OB_stVector16_010201A0 *v9; // ebx
  double v10; // st6
  double v11; // st6
  double v12; // st7
  double v13; // st7
  double v14; // st7
  float v15; // [esp+8h] [ebp-28h]
  int v16; // [esp+8h] [ebp-28h]
  float v17; // [esp+8h] [ebp-28h]
  float v18; // [esp+8h] [ebp-28h]
  float v19; // [esp+8h] [ebp-28h]
  float v20; // [esp+Ch] [ebp-24h]
  float v21; // [esp+Ch] [ebp-24h]
  float v22; // [esp+Ch] [ebp-24h]
  float v23; // [esp+Ch] [ebp-24h]
  float v24; // [esp+10h] [ebp-20h]
  float v25; // [esp+10h] [ebp-20h]
  float v26; // [esp+10h] [ebp-20h]
  float v27; // [esp+10h] [ebp-20h]
  float v28; // [esp+10h] [ebp-20h]
  float v29; // [esp+10h] [ebp-20h]
  float v30; // [esp+10h] [ebp-20h]
  float v31; // [esp+10h] [ebp-20h]
  float v32; // [esp+10h] [ebp-20h]
  float v33; // [esp+10h] [ebp-20h]
  float v34; // [esp+14h] [ebp-1Ch]
  OB_CBranchFlareEntry_010201A0 v35; // [esp+18h] [ebp-18h] BYREF
  float v36; // [esp+34h] [ebp+4h]
  float v37; // [esp+34h] [ebp+4h]
  float v38; // [esp+34h] [ebp+4h]

  if ( *(_DWORD *)(a2 + 0x28) ) /*0x791e89*/
  {
    v15 = flt_B2B714; /*0x791e9c*/
    v4 = (double)rand(); /*0x791ea9*/
    v5 = *(_DWORD *)(a2 + 0x28); /*0x791ead*/
    v6 = 0; /*0x791eb0*/
    v36 = v4 / dbl_A3D5A8; /*0x791eba*/
    v7 = v36; /*0x791ebe*/
    v8 = v15; /*0x791ec2*/
    v16 = 0; /*0x791ec8*/
    v37 = v8 - 0.0; /*0x791ed0*/
    v34 = v7 * v37 + 0.0; /*0x791ee0*/
    v38 = flt_B2B714 / (double)v5; /*0x791eee*/
    if ( v5 > 0 ) /*0x791ef2*/
    {
      v9 = this + 3; /*0x791ef8*/
      do /*0x79208c*/
      {
        v24 = v38 * *(float *)(a2 + 0x2C); /*0x791f07*/
        v20 = (double)rand() / dbl_A3D5A8; /*0x791f1e*/
        v10 = v24; /*0x791f32*/
        v25 = v38 - v24; /*0x791f34*/
        v26 = v20 * v25 + v10; /*0x791f40*/
        v35.flareAngle = v26 * (double)v16 + v34; /*0x791f50*/
        v11 = flt_B2B714; /*0x791f58*/
        if ( v11 < v35.flareAngle ) /*0x791f65*/
          v35.flareAngle = v35.flareAngle - v11; /*0x791f69*/
        v35.radialExponent = *(float *)(a2 + 0x38); /*0x791f76*/
        v35.lengthExponent = *(float *)(a2 + 0x4C); /*0x791f7d*/
        v17 = *(float *)(a2 + 0x30) - *(float *)(a2 + 0x34); /*0x791f87*/
        v21 = *(float *)(a2 + 0x34) + *(float *)(a2 + 0x30); /*0x791f91*/
        v27 = (double)rand() / dbl_A3D5A8; /*0x791fa8*/
        v12 = v27; /*0x791fac*/
        v28 = v21 - v17; /*0x791fbe*/
        v29 = v12 * v28 + v17; /*0x791fca*/
        v35.radialInfluence = v29 / dbl_A8BA48; /*0x791fd8*/
        v18 = *(float *)(a2 + 0x44) - *(float *)(a2 + 0x48); /*0x791fe2*/
        v22 = *(float *)(a2 + 0x48) + *(float *)(a2 + 0x44); /*0x791fec*/
        v30 = (double)rand() / dbl_A3D5A8; /*0x792003*/
        v13 = v30; /*0x792007*/
        v31 = v22 - v18; /*0x792019*/
        v35.lengthInfluence = v13 * v31 + v18; /*0x792025*/
        v19 = *(float *)(a2 + 0x3C) - *(float *)(a2 + 0x40); /*0x79202f*/
        v23 = *(float *)(a2 + 0x40) + *(float *)(a2 + 0x3C); /*0x792039*/
        v32 = (double)rand() / dbl_A3D5A8; /*0x792057*/
        v14 = v32; /*0x79205b*/
        v33 = v23 - v19; /*0x79206d*/
        v35.flareDistance = v14 * v33 + v19; /*0x792079*/
        OB_stVectorBranchFlareEntry_PushBack_010201A0(v9, &v35); /*0x79207d*/
        v16 = ++v6; /*0x792088*/
      }
      while ( v6 < *(_DWORD *)(a2 + 0x28) ); /*0x79208c*/
    }
  }
}
