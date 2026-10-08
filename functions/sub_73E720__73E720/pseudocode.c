//
// GPU static-world LOD audit 2026-09-27: world center+18 and radius+24; Euclidean camera distance. Radius>distance or distance<=float(1e-6) returns0. Otherwise radius (orthographic) or radius/distance (perspective), times max(float(2/(right-left)),float(2/(top-bottom))) and Camera LODAdjust. First threshold<=projected size wins; no match returns threshold count. Constants A372CC=358637BD, A3D0C0=double2.
unsigned int __thiscall sub_73E720(int this, float *a2, int a3)
{
  double v5; // st7
  double v6; // st7
  double v7; // st5
  double v8; // st7
  unsigned int v9; // edx
  unsigned int v10; // ecx
  float *v11; // esi
  float v13; // [esp+8h] [ebp-14h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+18h] [ebp-4h]
  float v18; // [esp+20h] [ebp+4h]
  float v19; // [esp+20h] [ebp+4h]
  float v20; // [esp+20h] [ebp+4h]
  float v21; // [esp+20h] [ebp+4h]
  float v22; // [esp+20h] [ebp+4h]

  v15 = *(float *)(this + 0x18) - a2[0x22]; /*0x73e734*/
  v16 = *(float *)(this + 0x1C) - a2[0x23]; /*0x73e741*/
  v17 = *(float *)(this + 0x20) - a2[0x24]; /*0x73e74e*/
  v18 = v16 * v16 + v15 * v15 + v17 * v17; /*0x73e76e*/
  v19 = sqrt(v18); /*0x73e77b*/
  v5 = v19; /*0x73e787*/
  if ( *(float *)(this + 0x24) > (double)v19 || flt_A372CC >= v5 ) /*0x73e7a8*/
    return 0; /*0x73e854*/
  if ( *((_BYTE *)a2 + 0x104) ) /*0x73e7ae*/
    v6 = *(float *)(this + 0x24); /*0x73e7b9*/
  else
    v6 = *(float *)(this + 0x24) / v5; /*0x73e7be*/
  v13 = v6; /*0x73e7c1*/
  v7 = dbl_A3D0C0; /*0x73e7d7*/
  v20 = v7 / (a2[0x3C] - a2[0x3B]); /*0x73e7dd*/
  v14 = v7 / (a2[0x3D] - a2[0x3E]); /*0x73e7ef*/
  v8 = v20; /*0x73e7f3*/
  if ( v14 >= (double)v20 ) /*0x73e802*/
    v8 = v14; /*0x73e808*/
  v9 = *(_DWORD *)(this + 0x28); /*0x73e80a*/
  v21 = v8; /*0x73e80d*/
  v10 = 0; /*0x73e815*/
  v22 = v21 * v13 * a2[0x48];                   // Pass332 decode: NiScreenLODData selection depends on supplied camera frustum, distance, and LODAdjust; the per-light shadow camera can therefore differ from the main-view silhouette. /*0x73e823*/
  if ( v9 ) /*0x73e827*/
  {
    v11 = *(float **)(this + 0x2C); /*0x73e829*/
    do /*0x73e843*/
    {
      if ( *v11 <= (double)v22 ) /*0x73e839*/
        break; /*0x73e839*/
      ++v10; /*0x73e83b*/
      ++v11; /*0x73e83e*/
    }
    while ( v10 < v9 ); /*0x73e843*/
  }
  return v10; /*0x73e847*/
}
