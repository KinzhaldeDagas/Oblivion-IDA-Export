NiAVObject *__cdecl sub_6FCDC0(float *a1, int *a2)
{
  float v2; // ebx
  float v3; // esi
  float v4; // ebp
  double v5; // st7
  int v6; // edi
  double v7; // st7
  float *v8; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st7
  double v12; // st4
  double v13; // st2
  float v14; // ecx
  float v15; // edx
  int *v16; // ebp
  float v17; // eax
  int *v18; // eax
  int *v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  float v23; // eax
  float v24; // ecx
  float v25; // edx
  float v26; // eax
  float v27; // ecx
  float v28; // edx
  float v29; // eax
  float v30; // ecx
  float v31; // edx
  float v32; // eax
  float v33; // edx
  float v34; // ecx
  int v35; // ebp
  NiAVObject *v36; // eax
  NiAVObject *v37; // ebp
  float v39; // [esp+14h] [ebp-58h]
  float v40; // [esp+14h] [ebp-58h]
  float v41; // [esp+18h] [ebp-54h]
  float v42; // [esp+18h] [ebp-54h]
  float v43; // [esp+1Ch] [ebp-50h]
  float v44; // [esp+1Ch] [ebp-50h]
  float v45; // [esp+24h] [ebp-48h]
  float v46; // [esp+24h] [ebp-48h]
  float v47; // [esp+2Ch] [ebp-40h]
  float v48; // [esp+2Ch] [ebp-40h]
  float v49; // [esp+2Ch] [ebp-40h]
  float v50; // [esp+38h] [ebp-34h] BYREF
  float v51; // [esp+3Ch] [ebp-30h]
  float v52; // [esp+40h] [ebp-2Ch]
  float v53; // [esp+44h] [ebp-28h]
  float v54; // [esp+48h] [ebp-24h]
  float v55; // [esp+4Ch] [ebp-20h]
  float v56; // [esp+50h] [ebp-1Ch]
  float v57[3]; // [esp+54h] [ebp-18h] BYREF
  int v58; // [esp+68h] [ebp-4h]
  float v59; // [esp+70h] [ebp+4h]
  float v60; // [esp+70h] [ebp+4h]
  float v61; // [esp+70h] [ebp+4h]
  float v62; // [esp+70h] [ebp+4h]
  float v63; // [esp+70h] [ebp+4h]
  float v64; // [esp+70h] [ebp+4h]
  float v65; // [esp+70h] [ebp+4h]
  float v66; // [esp+70h] [ebp+4h]
  float v67; // [esp+70h] [ebp+4h]

  v2 = a1[1];
  v3 = *a1;
  v4 = a1[2];
  v51 = v2;
  v50 = v3;
  v52 = v4;
  v59 = v51 * v51 + v3 * v3 + v4 * v4;
  v60 = sqrt(v59);
  if ( v60 < (double)flt_A58E1C )
  {
    v61 = dbl_A49310 / v60;
    v5 = v61;
    v62 = v3 * v61;
    v39 = v51 * v5;
    v41 = v5 * v4;
    v3 = v62;
    v50 = v62;
    v2 = v39;
    v51 = v39;
    v4 = v41;
    v52 = v41;
    v63 = v41 * v41 + v39 * v39 + v62 * v62;
    v60 = sqrt(v63);
  }
  v6 = FormHeapAlloc(0x3Cu);
  v7 = v60 * dbl_A74560;
  *(float *)v6 = 0.0;
  *(float *)(v6 + 4) = 0.0;
  v64 = v7;
  *(float *)(v6 + 8) = 0.0;
  v8 = sub_6FBBA0(&v50, v57);
  v42 = *v8 * v64;
  v43 = v8[1] * v64;
  v9 = v64 * v8[2];
  *(float *)(v6 + 0xC) = v3;
  *(float *)(v6 + 0x10) = v2;
  *(float *)(v6 + 0x14) = v4;
  v47 = v9;
  v10 = dbl_A31C70;
  v65 = v50 * v10;
  v40 = v51 * v10;
  v45 = v10 * v52;
  v11 = v65;
  v66 = v65 - v42;
  v12 = v43;
  v44 = v40 - v43;
  v13 = v47;
  v48 = v45 - v47;
  v53 = v66;
  v54 = v44;
  v55 = v48;
  v67 = v42 + v11;
  v49 = v40 + v12;
  v46 = v13 + v45;
  v50 = v67;
  *(float *)(v6 + 0x18) = v67;
  v51 = v49;
  v52 = v46;
  v14 = v53;
  *(float *)(v6 + 0x24) = v3;
  *(float *)(v6 + 0x1C) = v49;
  v15 = v54;
  *(float *)(v6 + 0x28) = v2;
  *(float *)(v6 + 0x2C) = v4;
  v16 = a2;
  *(float *)(v6 + 0x20) = v46;
  v17 = v55;
  *(float *)(v6 + 0x30) = v14;
  *(float *)(v6 + 0x34) = v15;
  *(float *)(v6 + 0x38) = v17;
  if ( !a2 )
    v16 = &dword_B25550;
  v18 = (int *)FormHeapAlloc(0x60u);
  v19 = v18;
  v58 = 0;
  if ( v18 )
    sub_401080(v18, 0x10, 6, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v19 = 0;
  *v19 = *v16;
  v53 = 0.0;
  v19[1] = v16[1];
  v54 = 1.0;
  v20 = v16[2];
  v56 = 1.0;
  v19[2] = v20;
  v21 = v16[3];
  v55 = 0.0;
  v19[3] = v21;
  v19[4] = *v16;
  v19[5] = v16[1];
  v22 = v16[2];
  v23 = v53;
  v53 = 0.0;
  v19[6] = v22;
  v24 = v54;
  v19[7] = v16[3];
  v25 = v55;
  v55 = 0.0;
  *((float *)v19 + 8) = v23;
  v26 = v56;
  v54 = 1.0;
  *((float *)v19 + 9) = v24;
  v56 = 1.0;
  v27 = v53;
  *((float *)v19 + 0xA) = v25;
  v53 = 0.0;
  v28 = v54;
  *((float *)v19 + 0xB) = v26;
  v29 = v55;
  v55 = 0.0;
  *((float *)v19 + 0xC) = v27;
  v30 = v56;
  v54 = 1.0;
  *((float *)v19 + 0xD) = v28;
  v56 = 1.0;
  v31 = v53;
  *((float *)v19 + 0xE) = v29;
  v32 = v54;
  *((float *)v19 + 0x10) = v31;
  v33 = v56;
  *((float *)v19 + 0xF) = v30;
  v34 = v55;
  *((float *)v19 + 0x11) = v32;
  *((float *)v19 + 0x12) = v34;
  v58 = 0xFFFFFFFF;
  *((float *)v19 + 0x13) = v33;
  v35 = FormHeapAlloc(6u);
  *(_WORD *)v35 = 1;
  *(_BYTE *)(v35 + 2) = 1;
  *(_WORD *)(v35 + 3) = 1;
  v36 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v58 = 1;
  if ( v36 )
    v37 = sub_7177E0(v36, 5u, v6, (int)v19, 0, 0, 0, v35);
  else
    v37 = 0;
  v37->members.m_localTransform.pos.x = Vector3_InitValue_;
  v37->members.m_localTransform.pos.y = *(&Vector3_InitValue_ + 1);
  v37->members.m_localTransform.pos.z = dword_B3F9B0;
  qmemcpy(&v37->members.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u);
  v58 = 0xFFFFFFFF;
  NiObjectNET_SetName((NiObjectNET *)v37, "BSTestObjects DirArrow");
  return v37;
}
