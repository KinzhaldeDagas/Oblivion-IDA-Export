int __thiscall sub_751F10(_DWORD *this, float a2, float a3, __int16 a4, int a5)
{
  _DWORD *v6; // eax
  int v7; // esi
  float *v8; // esi
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  bool v12; // zf
  float v13; // eax
  float *v14; // eax
  NiTransform *v15; // eax
  int v16; // esi
  float *v17; // eax
  NiTransform *v18; // eax
  int v19; // esi
  int result; // eax
  int v21; // ebx
  int v22; // eax
  float *v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // eax
  float x; // esi
  double z; // st7
  double v34; // st6
  double v35; // st4
  float *v36; // eax
  NiMatrix33 *v37; // eax
  NiMatrix33 *v38; // eax
  float *v39; // eax
  float *v40; // eax
  NiMatrix33 *v41; // eax
  NiMatrix33 *v42; // eax
  float *v43; // eax
  NiTransform *v44; // eax
  double v45; // st7
  float *v46; // esi
  float v47; // eax
  float *v48; // ecx
  int v49; // eax
  int v50; // edx
  _DWORD *v51; // eax
  _DWORD *v52; // ecx
  int v53; // ecx
  int v54; // eax
  _DWORD *v55; // edx
  float v56; // edx
  float v57; // [esp+8h] [ebp-210h]
  float v58; // [esp+8h] [ebp-210h]
  int v59; // [esp+8h] [ebp-210h]
  float v60; // [esp+1Ch] [ebp-1FCh]
  float v61; // [esp+1Ch] [ebp-1FCh]
  float v62; // [esp+1Ch] [ebp-1FCh]
  float y; // [esp+1Ch] [ebp-1FCh]
  float v64; // [esp+1Ch] [ebp-1FCh]
  float v65; // [esp+1Ch] [ebp-1FCh]
  float v66; // [esp+1Ch] [ebp-1FCh]
  float v67; // [esp+1Ch] [ebp-1FCh]
  float v68; // [esp+1Ch] [ebp-1FCh]
  float v69; // [esp+20h] [ebp-1F8h]
  float v70; // [esp+20h] [ebp-1F8h]
  float v71; // [esp+20h] [ebp-1F8h]
  float v72; // [esp+20h] [ebp-1F8h]
  float v73; // [esp+20h] [ebp-1F8h]
  float v74; // [esp+20h] [ebp-1F8h]
  float v75; // [esp+24h] [ebp-1F4h]
  float v76; // [esp+24h] [ebp-1F4h]
  float v77; // [esp+28h] [ebp-1F0h]
  float v78; // [esp+28h] [ebp-1F0h]
  NiPoint3 v79; // [esp+2Ch] [ebp-1ECh] BYREF
  int v80; // [esp+38h] [ebp-1E0h]
  NiTransform v81; // [esp+3Ch] [ebp-1DCh] BYREF
  float v82; // [esp+70h] [ebp-1A8h]
  NiPoint3 v83; // [esp+74h] [ebp-1A4h] BYREF
  int v84; // [esp+80h] [ebp-198h]
  float *v85; // [esp+84h] [ebp-194h]
  int v86; // [esp+88h] [ebp-190h]
  int v87; // [esp+8Ch] [ebp-18Ch]
  int v88; // [esp+90h] [ebp-188h]
  int v89; // [esp+94h] [ebp-184h]
  int v90; // [esp+98h] [ebp-180h]
  int v91; // [esp+9Ch] [ebp-17Ch]
  int v92; // [esp+A0h] [ebp-178h]
  int v93; // [esp+A4h] [ebp-174h]
  int v94; // [esp+A8h] [ebp-170h]
  int v95; // [esp+ACh] [ebp-16Ch]
  int v96; // [esp+B0h] [ebp-168h]
  float *v97; // [esp+B4h] [ebp-164h]
  int v98; // [esp+B8h] [ebp-160h]
  int v99; // [esp+BCh] [ebp-15Ch]
  float v100; // [esp+C0h] [ebp-158h]
  int v101; // [esp+C4h] [ebp-154h]
  float v102[9]; // [esp+C8h] [ebp-150h] BYREF
  NiMatrix33 v103; // [esp+ECh] [ebp-12Ch] BYREF
  NiTransform v104; // [esp+110h] [ebp-108h] BYREF
  NiTransform out; // [esp+144h] [ebp-D4h] BYREF
  float v106[13]; // [esp+178h] [ebp-A0h] BYREF
  NiMatrix33 v107; // [esp+1ACh] [ebp-6Ch] BYREF
  NiTransform v108; // [esp+1D0h] [ebp-48h] BYREF

  LODWORD(v81.pos.x) = this; /*0x751f1c*/
  v6 = *(_DWORD **)(a5 + 0xB4); /*0x751f27*/
  v7 = v6[0x17]; /*0x751f35*/
  v89 = v6[9]; /*0x751f3b*/
  v93 = v6[0x11]; /*0x751f45*/
  v98 = v6[0x13]; /*0x751f4f*/
  v8 = (float *)(v7 + 0x1C * (unsigned __int16)a4); /*0x751f62*/
  v9 = v6[7]; /*0x751f65*/
  v95 = v6[0x15]; /*0x751f68*/
  v10 = v6[0x16]; /*0x751f6f*/
  v84 = v6[0x18]; /*0x751f75*/
  v11 = 0xC * (unsigned __int16)a4; /*0x751f7f*/
  v12 = a5 == *(_DWORD *)(LODWORD(v81.pos.x) + 0x10); /*0x751f81*/
  v99 = v10; /*0x751f84*/
  *(_QWORD *)&v81.rot.data[1][0] = *(_QWORD *)(v11 + v9); /*0x751f8e*/
  v81.rot.data[1][2] = *(float *)(v11 + v9 + 8); /*0x751f9e*/
  v101 = v11; /*0x751fa2*/
  v79.x = *v8; /*0x751fab*/
  v79.y = v8[1]; /*0x751fb2*/
  v13 = v8[2]; /*0x751fb6*/
  v85 = v8; /*0x751fb9*/
  v79.z = v13; /*0x751fbd*/
  if ( !v12 ) /*0x751fc1*/
  {
    qmemcpy(&v104, (const void *)(a5 + 0x64), sizeof(v104)); /*0x751fd6*/
    v14 = NiTransform_TransformPoint(&v104, (float *)&v81, (NiPoint3 *)v81.rot.data[1]); /*0x751fe9*/
    *(_QWORD *)&v81.rot.data[1][0] = *(_QWORD *)v14; /*0x751ff0*/
    v81.rot.data[1][2] = v14[2]; /*0x75200f*/
    v15 = sub_7101F0(&v104, &v81, &v79); /*0x752013*/
    v16 = *(this + 4); /*0x75201a*/
    v79.x = v15->rot.data[0][0]; /*0x75201d*/
    v79.y = v15->rot.data[0][1]; /*0x752024*/
    v79.z = v15->rot.data[0][2]; /*0x75202b*/
    qmemcpy(v106, (const void *)(v16 + 0x64), sizeof(v106)); /*0x75203e*/
    sub_718A80(v106, &out); /*0x75204f*/
    v17 = NiTransform_TransformPoint(&out, (float *)&v81, (NiPoint3 *)v81.rot.data[1]); /*0x752065*/
    *(_QWORD *)&v81.rot.data[1][0] = *(_QWORD *)v17; /*0x75206c*/
    v81.rot.data[1][2] = v17[2]; /*0x75208b*/
    v18 = sub_7101F0(&out, &v81, &v79); /*0x75208f*/
    v79.x = v18->rot.data[0][0]; /*0x752096*/
    v79.y = v18->rot.data[0][1]; /*0x75209d*/
    v79.z = v18->rot.data[0][2]; /*0x7520a4*/
  }
  v19 = *(_DWORD *)(*(this + 4) + 0xB4); /*0x7520ab*/
  result = sub_74ED40((unsigned __int16 *)v19); /*0x7520b8*/
  v12 = (_WORD)result == (unsigned __int16)word_A877E8; /*0x7520bb*/
  v96 = (unsigned __int16)result; /*0x7520c2*/
  if ( !v12 ) /*0x7520c9*/
  {
    v21 = (unsigned __int16)result; /*0x7520d6*/
    v22 = *(_DWORD *)(v19 + 0x5C); /*0x7520e0*/
    *(float *)&v80 = a2 - a3; /*0x7520ec*/
    v23 = (float *)(v22 + 0x1C * v21); /*0x7520f0*/
    v24 = *(_DWORD *)(v19 + 0x1C); /*0x7520f7*/
    v25 = *(_DWORD *)(v19 + 0x24); /*0x7520fe*/
    v97 = v23; /*0x752105*/
    v26 = *(_DWORD *)(v19 + 0x44); /*0x75210c*/
    v87 = v24; /*0x752113*/
    v27 = *(_DWORD *)(v19 + 0x4C); /*0x75211a*/
    v91 = v25; /*0x75211d*/
    v28 = *(_DWORD *)(v19 + 0x54); /*0x752124*/
    v86 = v26; /*0x75212b*/
    v29 = *(_DWORD *)(v19 + 0x58); /*0x75212f*/
    v88 = v27; /*0x752134*/
    v30 = *(_DWORD *)(v19 + 0x60); /*0x75213b*/
    v90 = v28; /*0x752140*/
    v94 = v29; /*0x752147*/
    v92 = v30; /*0x752150*/
    v69 = v79.y * v79.y + v79.x * v79.x + v79.z * v79.z; /*0x752159*/
    v70 = sqrt(v69); /*0x752166*/
    v81.pos.y = v70; /*0x75216e*/
    v31 = rand(); /*0x752172*/
    x = v81.pos.x; /*0x75217f*/
    v71 = (double)v31 / dbl_A3D5A8; /*0x752189*/
    v72 = *(float *)(LODWORD(v81.pos.x) + 0x24) * v71; /*0x752194*/
    v100 = (v72 + dbl_A2F928) * v81.pos.y; /*0x7521a6*/
    v73 = (double)rand() / dbl_A3D5A8; /*0x7521c0*/
    v74 = *(float *)(LODWORD(x) + 0x28) * v73 * unk_B3F9A4; /*0x7521d1*/
    v75 = (double)rand() / dbl_A3D5A8; /*0x7521e8*/
    v77 = v75 * unk_B3F9A0; /*0x7521f6*/
    v76 = sin(v74); /*0x752203*/
    v60 = cos(v77); /*0x752218*/
    v83.x = v60 * v76; /*0x752224*/
    v61 = sin(v77); /*0x752231*/
    v83.y = v61 * v76; /*0x75223d*/
    v62 = cos(v74); /*0x75224a*/
    v83.z = v62; /*0x752256*/
    v78 = v79.x; /*0x752263*/
    y = v79.y; /*0x752270*/
    v81.rot.data[2][0] = -v79.x; /*0x752280*/
    v81.rot.data[2][1] = -v79.y; /*0x752288*/
    v81.rot.data[2][2] = 0.0; /*0x75228e*/
    v81.pos.z = 0.0; /*0x752292*/
    v81.scale = 0.0; /*0x752296*/
    v81.rot.data[0][0] = 0.0; /*0x75229a*/
    v81.rot.data[0][1] = 0.0; /*0x75229e*/
    v82 = v79.y; /*0x7522a2*/
    v81.rot.data[0][2] = v79.x; /*0x7522a6*/
    sub_70FCC0((float *)&v103, (float *)&v81, &v81.pos.z, v81.rot.data[2]); /*0x7522aa*/
    v81.rot.data[0][1] = -v78; /*0x7522b5*/
    v81.rot.data[2][0] = v83.y * v79.z - v83.z * v79.y; /*0x7522d9*/
    v81.rot.data[2][1] = v83.z * v79.x - v83.x * v79.z; /*0x7522f1*/
    z = v79.z; /*0x7522ff*/
    v81.rot.data[2][2] = v79.y * v83.x - v83.y * v79.x; /*0x752301*/
    v34 = y; /*0x752319*/
    v64 = v81.rot.data[2][0] * y + v81.rot.data[2][1] * v81.rot.data[0][1] + v81.rot.data[2][2] * dbl_A2FC68; /*0x752329*/
    v35 = flt_A86530; /*0x752336*/
    qmemcpy(v102, &stru_B26AF0[0xA].unk2C, sizeof(v102)); /*0x75234a*/
    if ( v35 >= v64 ) /*0x752351*/
    {
      if ( -v64 <= v35 ) /*0x75240f*/
      {
        if ( z < 0.0 ) /*0x7524c8*/
        {
          v81.rot.data[0][0] = 0.0; /*0x7524ca*/
          v81.rot.data[0][1] = 0.0; /*0x7524d2*/
          v81.rot.data[0][2] = kTerrainLODQuadRayDirectionZ; /*0x7524e1*/
          v81.scale = v81.rot.data[0][2]; /*0x7524e6*/
          v81.rot.data[2][0] = v81.rot.data[0][2]; /*0x7524ee*/
          v81.pos.z = 0.0; /*0x7524fa*/
          v82 = 0.0; /*0x7524fe*/
          v81.rot.data[2][1] = 0.0; /*0x752502*/
          v81.rot.data[2][2] = 0.0; /*0x752506*/
          qmemcpy(v102, sub_70FCC0((float *)&v104, v81.rot.data[2], &v81.pos.z, (float *)&v81), sizeof(v102)); /*0x75251d*/
        }
      }
      else
      {
        v67 = 1.0 / v81.pos.y; /*0x752432*/
        v58 = v67; /*0x75243a*/
        v68 = (v81.pos.y - z) / (v34 * v34 + v78 * v78); /*0x752452*/
        v40 = NiMatrix3_ScaleTo((float *)&v103, (float *)&out, v68); /*0x75245e*/
        v41 = (NiMatrix33 *)sub_710030(v102, v106, v40); /*0x752473*/
        v42 = NiMAtrix33_Multiply(&v103, &v107, v41); /*0x752488*/
        v43 = NiMatrix3_ScaleTo((float *)v42, (float *)&v104, v58); /*0x75248f*/
        qmemcpy(v102, sub_710030(v102, &v108.pos.x, v43), sizeof(v102)); /*0x7524b7*/
      }
    }
    else
    {
      v65 = 1.0 / v81.pos.y; /*0x752371*/
      v57 = v65; /*0x752379*/
      v66 = (v81.pos.y - z) / (v34 * v34 + v78 * v78); /*0x752391*/
      v36 = NiMatrix3_ScaleTo((float *)&v103, (float *)&v107, v66); /*0x7523a4*/
      v37 = (NiMatrix33 *)sub_70FFC0(v102, v106, v36); /*0x7523b9*/
      v38 = NiMAtrix33_Multiply(&v103, &out.rot, v37); /*0x7523ce*/
      v39 = NiMatrix3_ScaleTo((float *)v38, &v108.pos.x, v57); /*0x7523d5*/
      qmemcpy(v102, sub_70FFC0(v102, (float *)&v104, v39), sizeof(v102)); /*0x7523fd*/
    }
    NiMatrix3_ScaleTo(v102, (float *)&v108, v100); /*0x75253d*/
    v44 = sub_7101F0(&v108, &v81, &v83); /*0x752553*/
    v45 = *(float *)&v80; /*0x752558*/
    v46 = v97; /*0x75255e*/
    *v97 = v44->rot.data[0][0]; /*0x752565*/
    v46[1] = v44->rot.data[0][1]; /*0x75256a*/
    v47 = v44->rot.data[0][2]; /*0x75256d*/
    v46[3] = v45; /*0x752570*/
    v46[2] = v47; /*0x752573*/
    *(float *)&v80 = COERCE_FLOAT(rand()); /*0x75257b*/
    v48 = v85; /*0x752587*/
    *(float *)&v80 = (double)v80 / dbl_A3D5A8; /*0x752591*/
    v49 = v87; /*0x7525a5*/
    v46[4] = (*(float *)&v80 - dbl_A2FAA0) * *(float *)(LODWORD(v81.pos.x) + 0x30) /*0x7525ac*/
           + *(float *)(LODWORD(v81.pos.x) + 0x2C);
    *((_WORD *)v46 + 0xC) = *((_WORD *)v48 + 0xC) + 1; /*0x7525b7*/
    v50 = 0xC * v21; /*0x7525c4*/
    *(_QWORD *)(v50 + v49) = *(_QWORD *)&v81.rot.data[1][0]; /*0x7525c6*/
    *(float *)(v50 + v49 + 8) = v81.rot.data[1][2]; /*0x7525d5*/
    if ( v89 ) /*0x7525e2*/
    {
      if ( v91 ) /*0x7525ed*/
      {
        v51 = (_DWORD *)(v89 + 0x10 * (unsigned __int16)a4); /*0x7525f4*/
        v52 = (_DWORD *)(v91 + 0x10 * v21); /*0x7525fb*/
        *v52 = *v51; /*0x7525ff*/
        v52[1] = v51[1]; /*0x752604*/
        v52[2] = v51[2]; /*0x75260a*/
        v52[3] = v51[3]; /*0x752610*/
      }
    }
    if ( v93 ) /*0x75261c*/
    {
      if ( v86 ) /*0x752624*/
        *(float *)(v86 + 4 * v21) = *(float *)(v93 + 4 * (unsigned __int16)a4); /*0x752629*/
    }
    if ( v98 ) /*0x752635*/
    {
      if ( v88 ) /*0x752640*/
        *(float *)(v88 + 4 * v21) = *(float *)(v98 + 4 * (unsigned __int16)a4); /*0x752645*/
    }
    if ( v95 ) /*0x752651*/
    {
      if ( v90 ) /*0x75265c*/
      {
        v53 = v84; /*0x752661*/
        *(float *)(v90 + 4 * v21) = *(float *)(v95 + 4 * (unsigned __int16)a4); /*0x752665*/
        *(float *)(v92 + 4 * v21) = *(float *)(v53 + 4 * (unsigned __int16)a4); /*0x752672*/
      }
    }
    if ( v99 ) /*0x75267e*/
    {
      if ( v94 ) /*0x752689*/
      {
        v54 = v101 + v99; /*0x752692*/
        v55 = (_DWORD *)(v94 + v50); /*0x752694*/
        *v55 = *(_DWORD *)(v101 + v99); /*0x752698*/
        v55[1] = *(_DWORD *)(v54 + 4); /*0x75269d*/
        v55[2] = *(_DWORD *)(v54 + 8); /*0x7526a3*/
      }
    }
    v56 = v81.pos.x; /*0x7526b7*/
    v59 = v96; /*0x7526bb*/
    v46[5] = a2 - v46[3]; /*0x7526bc*/
    return sub_749510(*(_DWORD **)(LODWORD(v56) + 0x10), v59); /*0x7526c2*/
  }
  return result; /*0x7526c7*/
}
