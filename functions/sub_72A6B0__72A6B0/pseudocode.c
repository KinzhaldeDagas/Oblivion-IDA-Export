// Merges a source NiSphere into the destination sphere. Preserves a containing destination, copies a containing source, otherwise computes the minimal enclosing center/radius. NiNode_UpdateDownwardPass uses it to aggregate nonempty child world bounds.
void __thiscall NiSphere_Merge(float *this, float *a2)
{
  bool v3; // c0
  bool v4; // c3
  double v5; // st7
  double v6; // st6
  float v7; // [esp+8h] [ebp-20h]
  float v8; // [esp+Ch] [ebp-1Ch]
  float v9; // [esp+10h] [ebp-18h]
  float v10; // [esp+10h] [ebp-18h]
  float v11; // [esp+14h] [ebp-14h]
  float v12; // [esp+14h] [ebp-14h]
  float v13; // [esp+18h] [ebp-10h]
  float v14; // [esp+18h] [ebp-10h]
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+24h] [ebp-4h]
  float v18; // [esp+2Ch] [ebp+4h]
  float v19; // [esp+2Ch] [ebp+4h]
  float v20; // [esp+2Ch] [ebp+4h]

  v9 = *this - *a2; /*0x72a6bf*/
  v11 = *(this + 1) - a2[1]; /*0x72a6c9*/
  v13 = *(this + 2) - a2[2]; /*0x72a6d3*/
  v8 = v9 * v9 + v11 * v11 + v13 * v13; /*0x72a6f3*/
  v7 = a2[3] - *(this + 3); /*0x72a6fd*/
  v18 = v7 * v7; /*0x72a709*/
  v3 = v8 < (double)v18; /*0x72a71e*/
  v4 = v8 == v18; /*0x72a71e*/
  if ( v7 < 0.0 ) /*0x72a724*/
  {
    if ( v3 || v4 ) /*0x72a7f2*/
      return; /*0x72a7f5*/
  }
  else if ( v3 || v4 ) /*0x72a72a*/
  {
    *this = *a2; /*0x72a733*/
    *(this + 1) = a2[1]; /*0x72a738*/
    *(this + 2) = a2[2]; /*0x72a73e*/
    *(this + 3) = a2[3]; /*0x72a745*/
    return; /*0x72a74c*/
  }
  v19 = sqrt(v8); /*0x72a754*/
  v5 = v19; /*0x72a760*/
  if ( flt_B27520 < (double)v19 ) /*0x72a771*/
  {
    v20 = (v5 - v7) / (v5 + v5); /*0x72a77f*/
    v15 = v9 * v20; /*0x72a791*/
    v16 = v11 * v20; /*0x72a79b*/
    v17 = v20 * v13; /*0x72a7a3*/
    v10 = *a2 + v15; /*0x72a7ad*/
    v12 = v16 + a2[1]; /*0x72a7bc*/
    v6 = a2[2]; /*0x72a7c4*/
    *this = v10; /*0x72a7c7*/
    *(this + 1) = v12; /*0x72a7cd*/
    v14 = v6 + v17; /*0x72a7d0*/
    *(this + 2) = v14; /*0x72a7d8*/
  }
  *(this + 3) = (v5 + a2[3] + *(this + 3)) * dbl_A2FAA0; /*0x72a7e8*/
}
