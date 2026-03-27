int __thiscall sub_751F10(_DWORD *this, float a2, float a3, unsigned __int16 a4, int a5)
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
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
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
  float v103[9]; // [esp+ECh] [ebp-12Ch] BYREF
  NiTransform v104; // [esp+110h] [ebp-108h] BYREF
  NiTransform v105; // [esp+144h] [ebp-D4h] BYREF
  float v106[13]; // [esp+178h] [ebp-A0h] BYREF
  int v107[9]; // [esp+1ACh] [ebp-6Ch] BYREF
  NiTransform v108; // [esp+1D0h] [ebp-48h] BYREF

  LODWORD(v81.pos.x) = this;
  v6 = *(_DWORD **)(a5 + 0xB4);
  v7 = v6[0x17];
  v89 = v6[9];
  v93 = v6[0x11];
  v98 = v6[0x13];
  v8 = (float *)(v7 + 0x1C * a4);
  v9 = v6[7];
  v95 = v6[0x15];
  v10 = v6[0x16];
  v84 = v6[0x18];
  v11 = 0xC * a4;
  v12 = a5 == *(_DWORD *)(LODWORD(v81.pos.x) + 0x10);
  v99 = v10;
  *(_QWORD *)&v81.rot.data[1][0] = *(_QWORD *)(v11 + v9);
  v81.rot.data[1][2] = *(float *)(v11 + v9 + 8);
  v101 = v11;
  v79.x = *v8;
  v79.y = v8[1];
  v13 = v8[2];
  v85 = v8;
  v79.z = v13;
  if ( !v12 )
  {
    qmemcpy(&v104, (const void *)(a5 + 0x64), sizeof(v104));
    v14 = sub_53D4B0(&v104, (float *)&v81, (NiPoint3 *)v81.rot.data[1]);
    *(_QWORD *)&v81.rot.data[1][0] = *(_QWORD *)v14;
    v81.rot.data[1][2] = v14[2];
    v15 = sub_7101F0(&v104, &v81, &v79);
    v16 = *(this + 4);
    v79.x = v15->rot.data[0][0];
    v79.y = v15->rot.data[0][1];
    v79.z = v15->rot.data[0][2];
    qmemcpy(v106, (const void *)(v16 + 0x64), sizeof(v106));
    sub_718A80(v106, &v105);
    v17 = sub_53D4B0(&v105, (float *)&v81, (NiPoint3 *)v81.rot.data[1]);
    *(_QWORD *)&v81.rot.data[1][0] = *(_QWORD *)v17;
    v81.rot.data[1][2] = v17[2];
    v18 = sub_7101F0(&v105, &v81, &v79);
    v79.x = v18->rot.data[0][0];
    v79.y = v18->rot.data[0][1];
    v79.z = v18->rot.data[0][2];
  }
  v19 = *(_DWORD *)(*(this + 4) + 0xB4);
  result = sub_74ED40((unsigned __int16 *)v19);
  v12 = (_WORD)result == (unsigned __int16)word_A877E8;
  v96 = (unsigned __int16)result;
  if ( !v12 )
  {
    v21 = (unsigned __int16)result;
    v22 = *(_DWORD *)(v19 + 0x5C);
    *(float *)&v80 = a2 - a3;
    v23 = (float *)(v22 + 0x1C * v21);
    v24 = *(_DWORD *)(v19 + 0x1C);
    v25 = *(_DWORD *)(v19 + 0x24);
    v97 = v23;
    v26 = *(_DWORD *)(v19 + 0x44);
    v87 = v24;
    v27 = *(_DWORD *)(v19 + 0x4C);
    v91 = v25;
    v28 = *(_DWORD *)(v19 + 0x54);
    v86 = v26;
    v29 = *(_DWORD *)(v19 + 0x58);
    v88 = v27;
    v30 = *(_DWORD *)(v19 + 0x60);
    v90 = v28;
    v94 = v29;
    v92 = v30;
    v69 = v79.y * v79.y + v79.x * v79.x + v79.z * v79.z;
    v70 = sqrt(v69);
    v81.pos.y = v70;
    v31 = rand();
    x = v81.pos.x;
    v71 = (double)v31 / dbl_A3D5A8;
    v72 = *(float *)(LODWORD(v81.pos.x) + 0x24) * v71;
    v100 = (v72 + dbl_A2F928) * v81.pos.y;
    v73 = (double)rand() / dbl_A3D5A8;
    v74 = *(float *)(LODWORD(x) + 0x28) * v73 * flt_B3F9A4;
    v75 = (double)rand() / dbl_A3D5A8;
    v77 = v75 * flt_B3F9A0;
    v76 = sin(v74);
    v60 = cos(v77);
    v83.x = v60 * v76;
    v61 = sin(v77);
    v83.y = v61 * v76;
    v62 = cos(v74);
    v83.z = v62;
    v78 = v79.x;
    y = v79.y;
    v81.rot.data[2][0] = -v79.x;
    v81.rot.data[2][1] = -v79.y;
    v81.rot.data[2][2] = 0.0;
    v81.pos.z = 0.0;
    v81.scale = 0.0;
    v81.rot.data[0][0] = 0.0;
    v81.rot.data[0][1] = 0.0;
    v82 = v79.y;
    v81.rot.data[0][2] = v79.x;
    sub_70FCC0(v103, (float *)&v81, &v81.pos.z, v81.rot.data[2]);
    v81.rot.data[0][1] = -v78;
    v81.rot.data[2][0] = v83.y * v79.z - v83.z * v79.y;
    v81.rot.data[2][1] = v83.z * v79.x - v83.x * v79.z;
    z = v79.z;
    v81.rot.data[2][2] = v79.y * v83.x - v83.y * v79.x;
    v34 = y;
    v64 = v81.rot.data[2][0] * y + v81.rot.data[2][1] * v81.rot.data[0][1] + v81.rot.data[2][2] * dbl_A2FC68;
    v35 = flt_A86530;
    qmemcpy(v102, &stru_B26AF0[0xA].unk2C, sizeof(v102));
    if ( v35 >= v64 )
    {
      if ( -v64 <= v35 )
      {
        if ( z < 0.0 )
        {
          v81.rot.data[0][0] = 0.0;
          v81.rot.data[0][1] = 0.0;
          v81.rot.data[0][2] = flt_A30634;
          v81.scale = v81.rot.data[0][2];
          v81.rot.data[2][0] = v81.rot.data[0][2];
          v81.pos.z = 0.0;
          v82 = 0.0;
          v81.rot.data[2][1] = 0.0;
          v81.rot.data[2][2] = 0.0;
          qmemcpy(v102, sub_70FCC0((float *)&v104, v81.rot.data[2], &v81.pos.z, (float *)&v81), sizeof(v102));
        }
      }
      else
      {
        v67 = 1.0 / v81.pos.y;
        v58 = v67;
        v68 = (v81.pos.y - z) / (v34 * v34 + v78 * v78);
        v40 = sub_710190(v103, (float *)&v105, v68);
        v41 = sub_710030(v102, v106, v40);
        v42 = NiMAtrix33_Multiply(v103, (float *)v107, v41);
        v43 = sub_710190(v42, (float *)&v104, v58);
        qmemcpy(v102, sub_710030(v102, &v108.pos.x, v43), sizeof(v102));
      }
    }
    else
    {
      v65 = 1.0 / v81.pos.y;
      v57 = v65;
      v66 = (v81.pos.y - z) / (v34 * v34 + v78 * v78);
      v36 = sub_710190(v103, (float *)v107, v66);
      v37 = sub_70FFC0(v102, v106, v36);
      v38 = NiMAtrix33_Multiply(v103, (float *)&v105, v37);
      v39 = sub_710190(v38, &v108.pos.x, v57);
      qmemcpy(v102, sub_70FFC0(v102, (float *)&v104, v39), sizeof(v102));
    }
    sub_710190(v102, (float *)&v108, v100);
    v44 = sub_7101F0(&v108, &v81, &v83);
    v45 = *(float *)&v80;
    v46 = v97;
    *v97 = v44->rot.data[0][0];
    v46[1] = v44->rot.data[0][1];
    v47 = v44->rot.data[0][2];
    v46[3] = v45;
    v46[2] = v47;
    *(float *)&v80 = COERCE_FLOAT(rand());
    v48 = v85;
    *(float *)&v80 = (double)v80 / dbl_A3D5A8;
    v49 = v87;
    v46[4] = (*(float *)&v80 - dbl_A2FAA0) * *(float *)(LODWORD(v81.pos.x) + 0x30)
           + *(float *)(LODWORD(v81.pos.x) + 0x2C);
    *((_WORD *)v46 + 0xC) = *((_WORD *)v48 + 0xC) + 1;
    v50 = 0xC * v21;
    *(_QWORD *)(v50 + v49) = *(_QWORD *)&v81.rot.data[1][0];
    *(float *)(v50 + v49 + 8) = v81.rot.data[1][2];
    if ( v89 )
    {
      if ( v91 )
      {
        v51 = (_DWORD *)(v89 + 0x10 * a4);
        v52 = (_DWORD *)(v91 + 0x10 * v21);
        *v52 = *v51;
        v52[1] = v51[1];
        v52[2] = v51[2];
        v52[3] = v51[3];
      }
    }
    if ( v93 )
    {
      if ( v86 )
        *(float *)(v86 + 4 * v21) = *(float *)(v93 + 4 * a4);
    }
    if ( v98 )
    {
      if ( v88 )
        *(float *)(v88 + 4 * v21) = *(float *)(v98 + 4 * a4);
    }
    if ( v95 )
    {
      if ( v90 )
      {
        v53 = v84;
        *(float *)(v90 + 4 * v21) = *(float *)(v95 + 4 * a4);
        *(float *)(v92 + 4 * v21) = *(float *)(v53 + 4 * a4);
      }
    }
    if ( v99 )
    {
      if ( v94 )
      {
        v54 = v101 + v99;
        v55 = (_DWORD *)(v94 + v50);
        *v55 = *(_DWORD *)(v101 + v99);
        v55[1] = *(_DWORD *)(v54 + 4);
        v55[2] = *(_DWORD *)(v54 + 8);
      }
    }
    v56 = v81.pos.x;
    v59 = v96;
    v46[5] = a2 - v46[3];
    return sub_749510(*(_DWORD **)(LODWORD(v56) + 0x10), v59);
  }
  return result;
}
