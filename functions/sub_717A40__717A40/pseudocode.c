// CULLING audit 2026-09-27 (observed Oblivion behavior): Builds six NiPlane records from NiFrustum and NiTransform. Observed order: 0 near, 1 far, 2 left, 3 right, 4 top, 5 bottom. Camera rotation column 0 is forward, column 2 is horizontal side, column 1 vertical. Handles orthographic and perspective branches. ActivePlanes is set separately by 0x70E040.
int __thiscall sub_717A40(NiFrustumPlanes *this, NiFrustum *a2, NiTransform *a3)
{
  float y; // edx
  double v5; // st7
  float z; // ecx
  double v7; // st7
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *p_x; // eax
  float *v12; // ecx
  double v13; // st7
  float *v14; // eax
  double v15; // st7
  float *v16; // eax
  double v17; // st7
  float *v18; // eax
  double v19; // st7
  float *v20; // eax
  int result; // eax
  float v22; // [esp+4h] [ebp-7Ch]
  float v23; // [esp+4h] [ebp-7Ch]
  float v24; // [esp+4h] [ebp-7Ch]
  float v25; // [esp+4h] [ebp-7Ch]
  float v26; // [esp+4h] [ebp-7Ch]
  float v27; // [esp+4h] [ebp-7Ch]
  float v28; // [esp+4h] [ebp-7Ch]
  float v29; // [esp+4h] [ebp-7Ch]
  float Near; // [esp+8h] [ebp-78h]
  float Far; // [esp+8h] [ebp-78h]
  float Left; // [esp+8h] [ebp-78h]
  float Right; // [esp+8h] [ebp-78h]
  float Top; // [esp+8h] [ebp-78h]
  float Bottom; // [esp+8h] [ebp-78h]
  float v36; // [esp+8h] [ebp-78h]
  float v37; // [esp+8h] [ebp-78h]
  float v38; // [esp+8h] [ebp-78h]
  float v39; // [esp+8h] [ebp-78h]
  float v40; // [esp+8h] [ebp-78h]
  float v41; // [esp+8h] [ebp-78h]
  float v42; // [esp+8h] [ebp-78h]
  float v43; // [esp+8h] [ebp-78h]
  float v44; // [esp+8h] [ebp-78h]
  float v45; // [esp+8h] [ebp-78h]
  float v46; // [esp+8h] [ebp-78h]
  float v47; // [esp+8h] [ebp-78h]
  float v48; // [esp+8h] [ebp-78h]
  float v49; // [esp+8h] [ebp-78h]
  float x; // [esp+Ch] [ebp-74h] BYREF
  float v51; // [esp+10h] [ebp-70h]
  float v52; // [esp+14h] [ebp-6Ch]
  float v53; // [esp+18h] [ebp-68h] BYREF
  float v54; // [esp+1Ch] [ebp-64h]
  float v55; // [esp+20h] [ebp-60h]
  float v56; // [esp+24h] [ebp-5Ch] BYREF
  float v57; // [esp+28h] [ebp-58h]
  float v58; // [esp+2Ch] [ebp-54h]
  float v59; // [esp+30h] [ebp-50h] BYREF
  float v60; // [esp+34h] [ebp-4Ch]
  float v61; // [esp+38h] [ebp-48h]
  float v62; // [esp+3Ch] [ebp-44h] BYREF
  float v63; // [esp+40h] [ebp-40h]
  float v64; // [esp+44h] [ebp-3Ch]
  float v65; // [esp+48h] [ebp-38h] BYREF
  float v66; // [esp+4Ch] [ebp-34h]
  float v67; // [esp+50h] [ebp-30h]
  float v68; // [esp+54h] [ebp-2Ch]
  float v69; // [esp+58h] [ebp-28h]
  float v70; // [esp+5Ch] [ebp-24h]
  float v71; // [esp+60h] [ebp-20h] BYREF
  float v72; // [esp+64h] [ebp-1Ch]
  float v73; // [esp+68h] [ebp-18h]
  float v74; // [esp+70h] [ebp-10h] BYREF
  float v75; // [esp+74h] [ebp-Ch]
  float v76; // [esp+78h] [ebp-8h]

  v56 = a3->rot.data[0][0]; /*0x717a4d*/
  v57 = a3->rot.data[1][0]; /*0x717a5c*/
  y = a3->pos.y; /*0x717a60*/
  v58 = a3->rot.data[2][0]; /*0x717a68*/
  v5 = a3->rot.data[0][1]; /*0x717a6f*/
  x = a3->pos.x; /*0x717a72*/
  v62 = v5; /*0x717a76*/
  z = a3->pos.z; /*0x717a7a*/
  v7 = a3->rot.data[1][1]; /*0x717a7d*/
  v51 = y; /*0x717a80*/
  v63 = v7; /*0x717a84*/
  v52 = z; /*0x717a88*/
  v64 = a3->rot.data[2][1]; /*0x717a93*/
  v59 = a3->rot.data[0][2]; /*0x717a9f*/
  v60 = a3->rot.data[1][2]; /*0x717aa6*/
  v61 = a3->rot.data[2][2]; /*0x717ab1*/
  Near = a2->Near; /*0x717ab9*/
  v65 = v56 * Near; /*0x717acb*/
  v66 = v57 * Near; /*0x717ad5*/
  v67 = Near * v58; /*0x717add*/
  v53 = x + v65; /*0x717ae9*/
  v54 = y + v66; /*0x717af5*/
  v55 = z + v67; /*0x717b01*/
  this->CullingPlanes[0] = *(NiPlane *)sub_716E00(&v74, &v56, &v53); /*0x717b0c*/
  Far = a2->Far; /*0x717b23*/
  v65 = Far * v56; /*0x717b37*/
  v66 = v57 * Far; /*0x717b43*/
  v67 = Far * v58; /*0x717b51*/
  v68 = v65 + x; /*0x717b5d*/
  v53 = v68; /*0x717b69*/
  v69 = v66 + v51; /*0x717b76*/
  v54 = v69; /*0x717b82*/
  v70 = v67 + v52; /*0x717b93*/
  v55 = v70; /*0x717b9d*/
  v74 = -v56; /*0x717ba3*/
  v75 = -v57; /*0x717ba9*/
  v76 = -v58; /*0x717bb2*/
  this->CullingPlanes[1] = *(NiPlane *)sub_716E00(&v71, &v74, &v53); /*0x717bc0*/
  if ( a2->Ortho ) /*0x717bd5*/
  {
    Left = a2->Left; /*0x717be1*/
    v68 = v59 * Left; /*0x717bf3*/
    v69 = v60 * Left; /*0x717bfd*/
    v70 = Left * v61; /*0x717c05*/
    v65 = v68 + x; /*0x717c11*/
    v53 = v65; /*0x717c1d*/
    v66 = v69 + v51; /*0x717c2e*/
    v54 = v66; /*0x717c3a*/
    v67 = v70 + v52; /*0x717c47*/
    v55 = v67; /*0x717c4f*/
    v8 = sub_716E00(&v74, &v59, &v53); /*0x717c53*/
    this->CullingPlanes[2].Normal.x = *v8; /*0x717c5a*/
    this->CullingPlanes[2].Normal.y = v8[1]; /*0x717c60*/
    this->CullingPlanes[2].Normal.z = v8[2]; /*0x717c66*/
    this->CullingPlanes[2].Constant = v8[3]; /*0x717c6c*/
    Right = a2->Right; /*0x717c72*/
    v68 = Right * v59; /*0x717c86*/
    v69 = v60 * Right; /*0x717c92*/
    v70 = Right * v61; /*0x717ca0*/
    v65 = v68 + x; /*0x717cac*/
    v53 = v65; /*0x717cb8*/
    v66 = v69 + v51; /*0x717cc0*/
    v54 = v66; /*0x717ccc*/
    v67 = v70 + v52; /*0x717cd4*/
    v55 = v67; /*0x717cde*/
    v74 = -v59; /*0x717ce4*/
    v75 = -v60; /*0x717cea*/
    v76 = -v61; /*0x717cf4*/
    v9 = sub_716E00(&v71, &v74, &v53); /*0x717d02*/
    this->CullingPlanes[3].Normal.x = *v9; /*0x717d09*/
    this->CullingPlanes[3].Normal.y = v9[1]; /*0x717d0f*/
    this->CullingPlanes[3].Normal.z = v9[2]; /*0x717d15*/
    this->CullingPlanes[3].Constant = v9[3]; /*0x717d1b*/
    Top = a2->Top; /*0x717d21*/
    v68 = Top * v62; /*0x717d35*/
    v69 = v63 * Top; /*0x717d41*/
    v70 = Top * v64; /*0x717d4f*/
    v65 = v68 + x; /*0x717d5b*/
    v53 = v65; /*0x717d67*/
    v66 = v69 + v51; /*0x717d78*/
    v54 = v66; /*0x717d84*/
    v67 = v70 + v52; /*0x717d91*/
    v55 = v67; /*0x717d9b*/
    v74 = -v62; /*0x717da1*/
    v75 = -v63; /*0x717da7*/
    v76 = -v64; /*0x717db0*/
    v10 = sub_716E00(&v71, &v74, &v53); /*0x717db7*/
    this->CullingPlanes[4].Normal.x = *v10; /*0x717dbe*/
    this->CullingPlanes[4].Normal.y = v10[1]; /*0x717dc4*/
    this->CullingPlanes[4].Normal.z = v10[2]; /*0x717dca*/
    this->CullingPlanes[4].Constant = v10[3]; /*0x717dd0*/
    Bottom = a2->Bottom; /*0x717dd6*/
    v68 = v62 * Bottom; /*0x717de8*/
    v69 = v63 * Bottom; /*0x717df2*/
    v70 = Bottom * v64; /*0x717dfa*/
    v65 = v68 + x; /*0x717e06*/
    v53 = v65; /*0x717e12*/
    p_x = &v53; /*0x717e1a*/
    v66 = v69 + v51; /*0x717e1e*/
    v54 = v66; /*0x717e2a*/
    v12 = &v62; /*0x717e32*/
    v67 = v70 + v52; /*0x717e36*/
    v55 = v67; /*0x717e3e*/
  }
  else
  {
    v36 = a2->Left * a2->Left; /*0x717e4b*/
    v37 = v36 + dbl_A2F928; /*0x717e59*/
    v38 = sqrt(v37); /*0x717e66*/
    v22 = 1.0 / v38; /*0x717e80*/
    v13 = v22; /*0x717e90*/
    v23 = -a2->Left * v22; /*0x717e92*/
    v71 = v59 * v13; /*0x717e9c*/
    v72 = v60 * v13; /*0x717ea6*/
    v73 = v13 * v61; /*0x717eae*/
    v68 = v56 * v23; /*0x717ec0*/
    v69 = v57 * v23; /*0x717eca*/
    v70 = v23 * v58; /*0x717ed2*/
    v65 = v68 + v71; /*0x717ede*/
    v66 = v69 + v72; /*0x717eea*/
    v67 = v70 + v73; /*0x717ef6*/
    v14 = sub_716E00(&v74, &v65, &x); /*0x717efa*/
    this->CullingPlanes[2].Normal.x = *v14; /*0x717f01*/
    this->CullingPlanes[2].Normal.y = v14[1]; /*0x717f07*/
    this->CullingPlanes[2].Normal.z = v14[2]; /*0x717f0d*/
    this->CullingPlanes[2].Constant = v14[3]; /*0x717f13*/
    v39 = a2->Right * a2->Right; /*0x717f1b*/
    v40 = v39 + dbl_A2F928; /*0x717f29*/
    v41 = sqrt(v40); /*0x717f36*/
    v24 = 1.0 / v41; /*0x717f42*/
    v15 = v24; /*0x717f51*/
    v25 = a2->Right * v24; /*0x717f53*/
    v42 = -v15; /*0x717f59*/
    v68 = v59 * v42; /*0x717f6b*/
    v69 = v60 * v42; /*0x717f75*/
    v70 = v42 * v61; /*0x717f7d*/
    v71 = v56 * v25; /*0x717f8f*/
    v72 = v57 * v25; /*0x717f99*/
    v73 = v25 * v58; /*0x717fa1*/
    v74 = v71 + v68; /*0x717fad*/
    v65 = v74; /*0x717fb9*/
    v75 = v72 + v69; /*0x717fc6*/
    v66 = v75; /*0x717fd2*/
    v76 = v73 + v70; /*0x717fe3*/
    v67 = v76; /*0x717ff1*/
    v16 = sub_716E00(&v74, &v65, &x); /*0x717ff5*/
    this->CullingPlanes[3].Normal.x = *v16; /*0x717ffc*/
    this->CullingPlanes[3].Normal.y = v16[1]; /*0x718002*/
    this->CullingPlanes[3].Normal.z = v16[2]; /*0x718008*/
    this->CullingPlanes[3].Constant = v16[3]; /*0x71800e*/
    v43 = a2->Top * a2->Top; /*0x718016*/
    v44 = v43 + dbl_A2F928; /*0x718024*/
    v45 = sqrt(v44); /*0x718031*/
    v26 = 1.0 / v45; /*0x71803d*/
    v17 = v26; /*0x718041*/
    v27 = v26 * a2->Top; /*0x71804a*/
    v46 = -v17; /*0x718050*/
    v71 = v62 * v46; /*0x718062*/
    v72 = v63 * v46; /*0x71806c*/
    v73 = v46 * v64; /*0x718074*/
    v74 = v56 * v27; /*0x718086*/
    v75 = v57 * v27; /*0x718090*/
    v76 = v27 * v58; /*0x718098*/
    v68 = v74 + v71; /*0x7180a4*/
    v65 = v68; /*0x7180b0*/
    v69 = v75 + v72; /*0x7180c1*/
    v66 = v69; /*0x7180d0*/
    v70 = v76 + v73; /*0x7180dd*/
    v67 = v70; /*0x7180e5*/
    v18 = sub_716E00(&v74, &v65, &x); /*0x7180e9*/
    this->CullingPlanes[4].Normal.x = *v18; /*0x7180f0*/
    this->CullingPlanes[4].Normal.y = v18[1]; /*0x7180f6*/
    this->CullingPlanes[4].Normal.z = v18[2]; /*0x7180fc*/
    this->CullingPlanes[4].Constant = v18[3]; /*0x718102*/
    v47 = a2->Bottom * a2->Bottom; /*0x71810a*/
    v48 = v47 + dbl_A2F928; /*0x718118*/
    v49 = sqrt(v48); /*0x718125*/
    v28 = 1.0 / v49; /*0x718131*/
    v19 = v28; /*0x718142*/
    v29 = -a2->Bottom * v28; /*0x718144*/
    v71 = v62 * v19; /*0x71814e*/
    v72 = v63 * v19; /*0x718158*/
    v73 = v19 * v64; /*0x718160*/
    v74 = v56 * v29; /*0x718172*/
    v75 = v57 * v29; /*0x71817c*/
    v76 = v29 * v58; /*0x718184*/
    v68 = v74 + v71; /*0x718190*/
    v65 = v68; /*0x71819c*/
    p_x = &x; /*0x7181a4*/
    v69 = v75 + v72; /*0x7181a8*/
    v66 = v69; /*0x7181b4*/
    v12 = &v65; /*0x7181bc*/
    v70 = v76 + v73; /*0x7181c0*/
    v67 = v70; /*0x7181c8*/
  }
  v20 = sub_716E00(&v74, v12, p_x); /*0x7181d2*/
  this->CullingPlanes[5].Normal.x = *v20; /*0x7181d9*/
  this->CullingPlanes[5].Normal.y = v20[1]; /*0x7181df*/
  this->CullingPlanes[5].Normal.z = v20[2]; /*0x7181e5*/
  result = *((_DWORD *)v20 + 3); /*0x7181e8*/
  LODWORD(this->CullingPlanes[5].Constant) = result; /*0x7181ec*/
  return result; /*0x7181ef*/
}
