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

  v56 = a3->rot.data[0][0];
  v57 = a3->rot.data[1][0];
  y = a3->pos.y;
  v58 = a3->rot.data[2][0];
  v5 = a3->rot.data[0][1];
  x = a3->pos.x;
  v62 = v5;
  z = a3->pos.z;
  v7 = a3->rot.data[1][1];
  v51 = y;
  v63 = v7;
  v52 = z;
  v64 = a3->rot.data[2][1];
  v59 = a3->rot.data[0][2];
  v60 = a3->rot.data[1][2];
  v61 = a3->rot.data[2][2];
  Near = a2->Near;
  v65 = v56 * Near;
  v66 = v57 * Near;
  v67 = Near * v58;
  v53 = x + v65;
  v54 = y + v66;
  v55 = z + v67;
  this->CullingPlanes[0] = *(NiPlane *)sub_716E00(&v74, &v56, &v53);
  Far = a2->Far;
  v65 = Far * v56;
  v66 = v57 * Far;
  v67 = Far * v58;
  v68 = v65 + x;
  v53 = v68;
  v69 = v66 + v51;
  v54 = v69;
  v70 = v67 + v52;
  v55 = v70;
  v74 = -v56;
  v75 = -v57;
  v76 = -v58;
  this->CullingPlanes[1] = *(NiPlane *)sub_716E00(&v71, &v74, &v53);
  if ( a2->Ortho )
  {
    Left = a2->Left;
    v68 = v59 * Left;
    v69 = v60 * Left;
    v70 = Left * v61;
    v65 = v68 + x;
    v53 = v65;
    v66 = v69 + v51;
    v54 = v66;
    v67 = v70 + v52;
    v55 = v67;
    v8 = sub_716E00(&v74, &v59, &v53);
    this->CullingPlanes[2].Normal.x = *v8;
    this->CullingPlanes[2].Normal.y = v8[1];
    this->CullingPlanes[2].Normal.z = v8[2];
    this->CullingPlanes[2].Constant = v8[3];
    Right = a2->Right;
    v68 = Right * v59;
    v69 = v60 * Right;
    v70 = Right * v61;
    v65 = v68 + x;
    v53 = v65;
    v66 = v69 + v51;
    v54 = v66;
    v67 = v70 + v52;
    v55 = v67;
    v74 = -v59;
    v75 = -v60;
    v76 = -v61;
    v9 = sub_716E00(&v71, &v74, &v53);
    this->CullingPlanes[3].Normal.x = *v9;
    this->CullingPlanes[3].Normal.y = v9[1];
    this->CullingPlanes[3].Normal.z = v9[2];
    this->CullingPlanes[3].Constant = v9[3];
    Top = a2->Top;
    v68 = Top * v62;
    v69 = v63 * Top;
    v70 = Top * v64;
    v65 = v68 + x;
    v53 = v65;
    v66 = v69 + v51;
    v54 = v66;
    v67 = v70 + v52;
    v55 = v67;
    v74 = -v62;
    v75 = -v63;
    v76 = -v64;
    v10 = sub_716E00(&v71, &v74, &v53);
    this->CullingPlanes[4].Normal.x = *v10;
    this->CullingPlanes[4].Normal.y = v10[1];
    this->CullingPlanes[4].Normal.z = v10[2];
    this->CullingPlanes[4].Constant = v10[3];
    Bottom = a2->Bottom;
    v68 = v62 * Bottom;
    v69 = v63 * Bottom;
    v70 = Bottom * v64;
    v65 = v68 + x;
    v53 = v65;
    p_x = &v53;
    v66 = v69 + v51;
    v54 = v66;
    v12 = &v62;
    v67 = v70 + v52;
    v55 = v67;
  }
  else
  {
    v36 = a2->Left * a2->Left;
    v37 = v36 + dbl_A2F928;
    v38 = sqrt(v37);
    v22 = 1.0 / v38;
    v13 = v22;
    v23 = -a2->Left * v22;
    v71 = v59 * v13;
    v72 = v60 * v13;
    v73 = v13 * v61;
    v68 = v56 * v23;
    v69 = v57 * v23;
    v70 = v23 * v58;
    v65 = v68 + v71;
    v66 = v69 + v72;
    v67 = v70 + v73;
    v14 = sub_716E00(&v74, &v65, &x);
    this->CullingPlanes[2].Normal.x = *v14;
    this->CullingPlanes[2].Normal.y = v14[1];
    this->CullingPlanes[2].Normal.z = v14[2];
    this->CullingPlanes[2].Constant = v14[3];
    v39 = a2->Right * a2->Right;
    v40 = v39 + dbl_A2F928;
    v41 = sqrt(v40);
    v24 = 1.0 / v41;
    v15 = v24;
    v25 = a2->Right * v24;
    v42 = -v15;
    v68 = v59 * v42;
    v69 = v60 * v42;
    v70 = v42 * v61;
    v71 = v56 * v25;
    v72 = v57 * v25;
    v73 = v25 * v58;
    v74 = v71 + v68;
    v65 = v74;
    v75 = v72 + v69;
    v66 = v75;
    v76 = v73 + v70;
    v67 = v76;
    v16 = sub_716E00(&v74, &v65, &x);
    this->CullingPlanes[3].Normal.x = *v16;
    this->CullingPlanes[3].Normal.y = v16[1];
    this->CullingPlanes[3].Normal.z = v16[2];
    this->CullingPlanes[3].Constant = v16[3];
    v43 = a2->Top * a2->Top;
    v44 = v43 + dbl_A2F928;
    v45 = sqrt(v44);
    v26 = 1.0 / v45;
    v17 = v26;
    v27 = v26 * a2->Top;
    v46 = -v17;
    v71 = v62 * v46;
    v72 = v63 * v46;
    v73 = v46 * v64;
    v74 = v56 * v27;
    v75 = v57 * v27;
    v76 = v27 * v58;
    v68 = v74 + v71;
    v65 = v68;
    v69 = v75 + v72;
    v66 = v69;
    v70 = v76 + v73;
    v67 = v70;
    v18 = sub_716E00(&v74, &v65, &x);
    this->CullingPlanes[4].Normal.x = *v18;
    this->CullingPlanes[4].Normal.y = v18[1];
    this->CullingPlanes[4].Normal.z = v18[2];
    this->CullingPlanes[4].Constant = v18[3];
    v47 = a2->Bottom * a2->Bottom;
    v48 = v47 + dbl_A2F928;
    v49 = sqrt(v48);
    v28 = 1.0 / v49;
    v19 = v28;
    v29 = -a2->Bottom * v28;
    v71 = v62 * v19;
    v72 = v63 * v19;
    v73 = v19 * v64;
    v74 = v56 * v29;
    v75 = v57 * v29;
    v76 = v29 * v58;
    v68 = v74 + v71;
    v65 = v68;
    p_x = &x;
    v69 = v75 + v72;
    v66 = v69;
    v12 = &v65;
    v70 = v76 + v73;
    v67 = v70;
  }
  v20 = sub_716E00(&v74, v12, p_x);
  this->CullingPlanes[5].Normal.x = *v20;
  this->CullingPlanes[5].Normal.y = v20[1];
  this->CullingPlanes[5].Normal.z = v20[2];
  result = *((_DWORD *)v20 + 3);
  LODWORD(this->CullingPlanes[5].Constant) = result;
  return result;
}
