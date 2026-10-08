char __thiscall sub_4C3540(TESObjectCELL **this, int a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int YCoordinate; // ebx
  TESObjectCELL *v8; // ecx
  int v9; // eax
  int XCoordinate; // eax
  TESObjectCELL *v11; // ecx
  double v12; // st6
  double x; // st7
  double y; // st7
  int v16; // edx
  float v17; // ebx
  float v18; // ebp
  double v19; // st7
  double v20; // st6
  double v21; // st5
  double v22; // st4
  double v23; // st3
  float z; // eax
  int v25; // ebp
  int v26; // ebx
  char v27; // al
  NiPoint3 *v28; // eax
  float v29; // [esp+Ch] [ebp-58h]
  NiPoint3 v30; // [esp+10h] [ebp-54h] BYREF
  NiPoint3 rhs; // [esp+1Ch] [ebp-48h] BYREF
  float v32; // [esp+28h] [ebp-3Ch]
  float v33; // [esp+2Ch] [ebp-38h]
  float v34; // [esp+30h] [ebp-34h]
  float v35; // [esp+34h] [ebp-30h] BYREF
  float v36; // [esp+38h] [ebp-2Ch]
  float v37; // [esp+3Ch] [ebp-28h]
  float v38; // [esp+40h] [ebp-24h]
  float v39; // [esp+44h] [ebp-20h]
  float v40; // [esp+48h] [ebp-1Ch]
  float v41; // [esp+4Ch] [ebp-18h] BYREF
  float v42; // [esp+50h] [ebp-14h]
  float v43; // [esp+54h] [ebp-10h]
  NiPoint3 out; // [esp+58h] [ebp-Ch] BYREF
  float v45; // [esp+68h] [ebp+4h]
  float v46; // [esp+68h] [ebp+4h]
  float v47; // [esp+68h] [ebp+4h]
  float v48; // [esp+68h] [ebp+4h]
  float v49; // [esp+68h] [ebp+4h]
  float v50; // [esp+68h] [ebp+4h]
  float v51; // [esp+68h] [ebp+4h]
  float v52; // [esp+68h] [ebp+4h]
  float v53; // [esp+68h] [ebp+4h]
  float v54; // [esp+68h] [ebp+4h]
  float v55; // [esp+68h] [ebp+4h]

  sub_4C0530(this, &out.x, *(_BYTE *)(a2 + 0x18), *(_WORD *)(a2 + 0x3C), 0, 0); /*0x4c3561*/
  sub_4C1DD0(this, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x3C), &v35); /*0x4c3575*/
  v6 = (int)*(this + 9); /*0x4c357a*/
  if ( v6 ) /*0x4c357f*/
  {
    YCoordinate = *(_DWORD *)(v6 + 0x9C); /*0x4c3581*/
  }
  else
  {
    v8 = *(this + 8); /*0x4c3589*/
    if ( v8 ) /*0x4c358e*/
      YCoordinate = TESObjectCELL_GetYCoordinate(v8); /*0x4c3595*/
    else
      YCoordinate = 0; /*0x4c3599*/
  }
  v9 = (int)*(this + 9); /*0x4c359b*/
  if ( v9 ) /*0x4c35a0*/
  {
    XCoordinate = *(_DWORD *)(v9 + 0x98); /*0x4c35a2*/
  }
  else
  {
    v11 = *(this + 8); /*0x4c35aa*/
    if ( v11 ) /*0x4c35af*/
      XCoordinate = TESObjectCELL_GetXCoordinate(v11); /*0x4c35b1*/
    else
      XCoordinate = 0; /*0x4c35b8*/
  }
  v12 = dbl_A30F70; /*0x4c35c8*/
  v41 = (double)(XCoordinate << 0xC) + v12; /*0x4c35d6*/
  v42 = v12 + (double)(YCoordinate << 0xC); /*0x4c35de*/
  v38 = v41 + v35; /*0x4c35ea*/
  v39 = v36 + v42; /*0x4c35f6*/
  x = out.x; /*0x4c3608*/
  if ( out.x == v38 && out.y == v39 && out.z == dbl_A2FC68 ) /*0x4c362f*/
  {
    sub_4C1E80(this, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x3C), (float *)a3); /*0x4c3642*/
    *a4 = *(_DWORD *)a3; /*0x4c364d*/
    a4[1] = *(_DWORD *)(a3 + 4); /*0x4c3652*/
    a4[2] = *(_DWORD *)(a3 + 8); /*0x4c365a*/
    return 1; /*0x4c3663*/
  }
  unknown_libname_14(dbl_A3F428, x); /*0x4c366d*/
  v45 = x; /*0x4c3672*/
  v29 = v45 * dbl_A46050; /*0x4c3680*/
  y = out.y; /*0x4c3684*/
  unknown_libname_14(dbl_A3F428, out.y); /*0x4c368e*/
  v46 = y; /*0x4c3693*/
  v16 = *(_DWORD *)(a2 + 0x40); /*0x4c36a0*/
  v17 = ::rhs.x; /*0x4c36a9*/
  v18 = ::rhs.y; /*0x4c36af*/
  v47 = v46 * dbl_A46050; /*0x4c36b9*/
  out.z = ::rhs.z; /*0x4c36be*/
  sub_4C1E80(this, *(_DWORD *)(a2 + 0x18), v16, &v41); /*0x4c36c9*/
  sub_4C1E80(this, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x44), &v30.x); /*0x4c36dd*/
  sub_4C1E80(this, *(_DWORD *)(a2 + 0x18), *(_DWORD *)(a2 + 0x48), &rhs.x); /*0x4c36f1*/
  v19 = v29; /*0x4c36f6*/
  v20 = v47; /*0x4c36fa*/
  v21 = v43; /*0x4c3703*/
  v22 = v42; /*0x4c3707*/
  v23 = v41; /*0x4c370b*/
  if ( *(_BYTE *)(a2 + 0x4C) ) /*0x4c36fe*/
  {
    if ( !*(_BYTE *)(a2 + 0x4D) ) /*0x4c3906*/
    {
      v32 = rhs.x * v20; /*0x4c3916*/
      v33 = rhs.y * v20; /*0x4c3920*/
      v34 = rhs.z * v20; /*0x4c392a*/
      v38 = v30.x * v19; /*0x4c3934*/
      v39 = v30.y * v19; /*0x4c393e*/
      v40 = v30.z * v19; /*0x4c3948*/
      v52 = 1.0 - v19; /*0x4c3950*/
      v41 = v52 * v23; /*0x4c395a*/
      v42 = v22 * v52; /*0x4c3964*/
      v43 = v21 * v52; /*0x4c396e*/
      v35 = v41 + v38; /*0x4c397a*/
      v36 = v42 + v39; /*0x4c3986*/
      v37 = v43 + v40; /*0x4c3992*/
      v53 = 1.0 - v20; /*0x4c399a*/
      v41 = v35 * v53; /*0x4c39a6*/
      v42 = v36 * v53; /*0x4c39b2*/
      v43 = v37 * v53; /*0x4c39be*/
      v38 = v41 + v32; /*0x4c39ca*/
      v17 = v38; /*0x4c39ce*/
      v39 = v42 + v33; /*0x4c39da*/
      v18 = v39; /*0x4c39de*/
      v40 = v43 + v34; /*0x4c39ea*/
      out.z = v40; /*0x4c39f2*/
    }
    if ( *(_BYTE *)(a2 + 0x4D) ) /*0x4c39fe*/
    {
      v54 = 1.0 - v20; /*0x4c3a0c*/
      v32 = v54 * v30.x; /*0x4c3a18*/
      v33 = v30.y * v54; /*0x4c3a24*/
      v34 = v30.z * v54; /*0x4c3a30*/
      v38 = v23 * v19; /*0x4c3a3a*/
      v39 = v22 * v19; /*0x4c3a44*/
      v40 = v21 * v19; /*0x4c3a4e*/
      v55 = 1.0 - v19; /*0x4c3a56*/
      v41 = rhs.x * v55; /*0x4c3a68*/
      v42 = rhs.y * v55; /*0x4c3a72*/
      v43 = v55 * rhs.z; /*0x4c3a7a*/
      v35 = v41 + v38; /*0x4c3a86*/
      v36 = v42 + v39; /*0x4c3a92*/
      v37 = v43 + v40; /*0x4c3a9e*/
      v41 = v35 * v20; /*0x4c3aa8*/
      v42 = v36 * v20; /*0x4c3ab2*/
      v43 = v20 * v37; /*0x4c3aba*/
      v38 = v41 + v32; /*0x4c3ac6*/
      v17 = v38; /*0x4c3aca*/
      v39 = v42 + v33; /*0x4c3ad6*/
      v18 = v39; /*0x4c3ada*/
      v40 = v43 + v34; /*0x4c3ae6*/
      out.z = v40; /*0x4c3aee*/
    }
  }
  else
  {
    if ( !*(_BYTE *)(a2 + 0x4D) ) /*0x4c3717*/
    {
      v41 = rhs.x * v20; /*0x4c3727*/
      v42 = rhs.y * v20; /*0x4c3731*/
      v43 = rhs.z * v20; /*0x4c373b*/
      v35 = v23 * v19; /*0x4c3743*/
      v36 = v22 * v19; /*0x4c374b*/
      v37 = v21 * v19; /*0x4c3753*/
      v48 = 1.0 - v19; /*0x4c375b*/
      v32 = v30.x * v48; /*0x4c3767*/
      v33 = v30.y * v48; /*0x4c3773*/
      v34 = v30.z * v48; /*0x4c377f*/
      v38 = v32 + v35; /*0x4c378b*/
      v39 = v33 + v36; /*0x4c3797*/
      v40 = v34 + v37; /*0x4c37a3*/
      v49 = 1.0 - v20; /*0x4c37ab*/
      v35 = v38 * v49; /*0x4c37b7*/
      v36 = v39 * v49; /*0x4c37c3*/
      v37 = v40 * v49; /*0x4c37cf*/
      v38 = v35 + v41; /*0x4c37db*/
      v17 = v38; /*0x4c37df*/
      v39 = v36 + v42; /*0x4c37eb*/
      v18 = v39; /*0x4c37ef*/
      v40 = v37 + v43; /*0x4c37fb*/
      out.z = v40; /*0x4c3803*/
    }
    if ( *(_BYTE *)(a2 + 0x4D) ) /*0x4c380f*/
    {
      v50 = 1.0 - v20; /*0x4c381c*/
      v32 = v50 * v30.x; /*0x4c3828*/
      v33 = v30.y * v50; /*0x4c3834*/
      v34 = v30.z * v50; /*0x4c3840*/
      v38 = rhs.x * v19; /*0x4c384a*/
      v39 = rhs.y * v19; /*0x4c3854*/
      v40 = rhs.z * v19; /*0x4c385e*/
      v51 = 1.0 - v19; /*0x4c3866*/
      v41 = v23 * v51; /*0x4c3870*/
      v42 = v22 * v51; /*0x4c387a*/
      v43 = v21 * v51; /*0x4c3884*/
      v35 = v41 + v38; /*0x4c3890*/
      v36 = v42 + v39; /*0x4c389c*/
      v37 = v43 + v40; /*0x4c38a8*/
      v41 = v35 * v20; /*0x4c38b2*/
      v42 = v36 * v20; /*0x4c38bc*/
      v43 = v37 * v20; /*0x4c38c6*/
      v38 = v41 + v32; /*0x4c38d2*/
      v17 = v38; /*0x4c38d6*/
      v39 = v42 + v33; /*0x4c38e2*/
      v18 = v39; /*0x4c38e6*/
      v40 = v43 + v34; /*0x4c38f2*/
      out.z = v40; /*0x4c38fa*/
    }
  }
  z = out.z; /*0x4c3b04*/
  *(float *)a3 = v17; /*0x4c3b08*/
  *(float *)(a3 + 4) = v18; /*0x4c3b0a*/
  *(float *)(a3 + 8) = z; /*0x4c3b0d*/
  Vector3_NormalizeInPlace((float *)a3); /*0x4c3b10*/
  v25 = *(_DWORD *)(a2 + 0x40); /*0x4c3b17*/
  v26 = *(_DWORD *)(a2 + 0x18); /*0x4c3b1a*/
  sub_4C1DD0(this, v26, v25, &rhs.x); /*0x4c3b26*/
  sub_4C1DD0(this, v26, *(_DWORD *)(a2 + 0x44), &out.x); /*0x4c3b37*/
  rhs.x = rhs.x - out.x; /*0x4c3b4a*/
  rhs.y = rhs.y - out.y; /*0x4c3b59*/
  rhs.z = rhs.z - out.z; /*0x4c3b65*/
  sub_4C1DD0(this, v26, v25, &v30.x); /*0x4c3b69*/
  sub_4C1DD0(this, v26, *(_DWORD *)(a2 + 0x48), &out.x); /*0x4c3b7a*/
  v27 = *(_BYTE *)(a2 + 0x4C); /*0x4c3b87*/
  v30.x = v30.x - out.x; /*0x4c3b8d*/
  v30.y = v30.y - out.y; /*0x4c3b99*/
  v30.z = v30.z - out.z; /*0x4c3ba5*/
  if ( v27 ) /*0x4c3ba9*/
  {
    if ( *(_BYTE *)(a2 + 0x4D) ) /*0x4c3bab*/
      goto LABEL_30; /*0x4c3baf*/
  }
  else if ( !*(_BYTE *)(a2 + 0x4D) ) /*0x4c3bb9*/
  {
LABEL_30:
    v28 = NiPoint3__NormalizedCrossProduct(&v30, &out, &rhs); /*0x4c3bc6*/
    goto LABEL_31; /*0x4c3bd4*/
  }
  v28 = NiPoint3__NormalizedCrossProduct(&rhs, &out, &v30); /*0x4c3bc4*/
LABEL_31:
  *a4 = LODWORD(v28->x); /*0x4c3bd9*/
  a4[1] = LODWORD(v28->y); /*0x4c3be4*/
  a4[2] = LODWORD(v28->z); /*0x4c3bec*/
  return 1; /*0x4c3658*/
}
