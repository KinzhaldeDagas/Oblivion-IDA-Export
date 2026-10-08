NiAVObject *__cdecl sub_6FCDC0(float *a1, int *a2)
{
  float v2; // ebx
  float v3; // esi
  float v4; // ebp
  double v5; // st7
  int v6; // edi
  double v7; // st7
  NiPoint3 *v8; // eax
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
  NiPoint3 v50; // [esp+38h] [ebp-34h] BYREF
  float v51; // [esp+44h] [ebp-28h]
  float v52; // [esp+48h] [ebp-24h]
  float v53; // [esp+4Ch] [ebp-20h]
  float v54; // [esp+50h] [ebp-1Ch]
  NiPoint3 v55; // [esp+54h] [ebp-18h] BYREF
  int v56; // [esp+68h] [ebp-4h]
  float v57; // [esp+70h] [ebp+4h]
  float v58; // [esp+70h] [ebp+4h]
  float v59; // [esp+70h] [ebp+4h]
  float v60; // [esp+70h] [ebp+4h]
  float v61; // [esp+70h] [ebp+4h]
  float v62; // [esp+70h] [ebp+4h]
  float v63; // [esp+70h] [ebp+4h]
  float v64; // [esp+70h] [ebp+4h]
  float v65; // [esp+70h] [ebp+4h]

  v2 = a1[1]; /*0x6fcdeb*/
  v3 = *a1; /*0x6fcdee*/
  v4 = a1[2]; /*0x6fcdf0*/
  v50.y = v2; /*0x6fcdf3*/
  v50.x = v3; /*0x6fcdff*/
  v50.z = v4; /*0x6fce07*/
  v57 = v50.y * v50.y + v3 * v3 + v4 * v4; /*0x6fce27*/
  v58 = sqrt(v57); /*0x6fce34*/
  if ( v58 < (double)flt_A58E1C ) /*0x6fce53*/
  {
    v59 = dbl_A49310 / v58; /*0x6fce5f*/
    v5 = v59; /*0x6fce63*/
    v60 = v3 * v59; /*0x6fce6d*/
    v39 = v50.y * v5; /*0x6fce77*/
    v41 = v5 * v4; /*0x6fce7f*/
    v3 = v60; /*0x6fce8b*/
    v50.x = v60; /*0x6fce93*/
    v2 = v39; /*0x6fce9b*/
    v50.y = v39; /*0x6fcea3*/
    v4 = v41; /*0x6fceab*/
    v50.z = v41; /*0x6fceb1*/
    v61 = v41 * v41 + v39 * v39 + v60 * v60; /*0x6fcec5*/
    v58 = sqrt(v61); /*0x6fced2*/
  }
  v6 = FormHeapAlloc(0x3Cu); /*0x6fceef*/
  v7 = v58 * dbl_A74560; /*0x6fcf09*/
  *(float *)v6 = 0.0; /*0x6fcf0f*/
  *(float *)(v6 + 4) = 0.0; /*0x6fcf14*/
  v62 = v7; /*0x6fcf1c*/
  *(float *)(v6 + 8) = 0.0; /*0x6fcf24*/
  v8 = sub_6FBBA0(&v50, &v55); /*0x6fcf27*/
  v42 = v8->x * v62; /*0x6fcf34*/
  v43 = v8->y * v62; /*0x6fcf3d*/
  v9 = v62 * v8->z; /*0x6fcf41*/
  *(float *)(v6 + 0xC) = v3; /*0x6fcf44*/
  *(float *)(v6 + 0x10) = v2; /*0x6fcf47*/
  *(float *)(v6 + 0x14) = v4; /*0x6fcf4a*/
  v47 = v9; /*0x6fcf4d*/
  v10 = dbl_A31C70; /*0x6fcf55*/
  v63 = v50.x * v10; /*0x6fcf5f*/
  v40 = v50.y * v10; /*0x6fcf69*/
  v45 = v10 * v50.z; /*0x6fcf71*/
  v11 = v63; /*0x6fcf75*/
  v64 = v63 - v42; /*0x6fcf81*/
  v12 = v43; /*0x6fcf89*/
  v44 = v40 - v43; /*0x6fcf91*/
  v13 = v47; /*0x6fcf99*/
  v48 = v45 - v47; /*0x6fcfa1*/
  v51 = v64; /*0x6fcfa9*/
  v52 = v44; /*0x6fcfb1*/
  v53 = v48; /*0x6fcfb9*/
  v65 = v42 + v11; /*0x6fcfc3*/
  v49 = v40 + v12; /*0x6fcfc9*/
  v46 = v13 + v45; /*0x6fcfcf*/
  v50.x = v65; /*0x6fcfd7*/
  *(float *)(v6 + 0x18) = v65; /*0x6fcfe3*/
  v50.y = v49; /*0x6fcfe6*/
  v50.z = v46; /*0x6fcff2*/
  v14 = v51; /*0x6fcffa*/
  *(float *)(v6 + 0x24) = v3; /*0x6fcffe*/
  *(float *)(v6 + 0x1C) = v49; /*0x6fd001*/
  v15 = v52; /*0x6fd004*/
  *(float *)(v6 + 0x28) = v2; /*0x6fd008*/
  *(float *)(v6 + 0x2C) = v4; /*0x6fd00b*/
  v16 = a2; /*0x6fd00e*/
  *(float *)(v6 + 0x20) = v46; /*0x6fd014*/
  v17 = v53; /*0x6fd017*/
  *(float *)(v6 + 0x30) = v14; /*0x6fd01b*/
  *(float *)(v6 + 0x34) = v15; /*0x6fd01e*/
  *(float *)(v6 + 0x38) = v17; /*0x6fd021*/
  if ( !a2 ) /*0x6fd024*/
    v16 = &dword_B25550; /*0x6fd026*/
  v18 = (int *)FormHeapAlloc(0x60u); /*0x6fd02d*/
  v19 = v18; /*0x6fd032*/
  v56 = 0; /*0x6fd03d*/
  if ( v18 ) /*0x6fd045*/
    sub_401080(v18, 0x10, 6, (void *(__thiscall *)(void *))sub_47EA50); /*0x6fd051*/
  else
    v19 = 0; /*0x6fd058*/
  *v19 = *v16; /*0x6fd05f*/
  v51 = 0.0; /*0x6fd061*/
  v19[1] = v16[1]; /*0x6fd06a*/
  v52 = 1.0; /*0x6fd06d*/
  v20 = v16[2]; /*0x6fd071*/
  v54 = 1.0; /*0x6fd074*/
  v19[2] = v20; /*0x6fd078*/
  v21 = v16[3]; /*0x6fd07d*/
  v53 = 0.0; /*0x6fd080*/
  v19[3] = v21; /*0x6fd084*/
  v19[4] = *v16; /*0x6fd08a*/
  v19[5] = v16[1]; /*0x6fd090*/
  v22 = v16[2]; /*0x6fd093*/
  v23 = v51; /*0x6fd096*/
  v51 = 0.0; /*0x6fd09a*/
  v19[6] = v22; /*0x6fd09e*/
  v24 = v52; /*0x6fd0a4*/
  v19[7] = v16[3]; /*0x6fd0a8*/
  v25 = v53; /*0x6fd0ab*/
  v53 = 0.0; /*0x6fd0af*/
  *((float *)v19 + 8) = v23; /*0x6fd0b3*/
  v26 = v54; /*0x6fd0b8*/
  v52 = 1.0; /*0x6fd0bc*/
  *((float *)v19 + 9) = v24; /*0x6fd0c0*/
  v54 = 1.0; /*0x6fd0c3*/
  v27 = v51; /*0x6fd0c7*/
  *((float *)v19 + 0xA) = v25; /*0x6fd0cd*/
  v51 = 0.0; /*0x6fd0d0*/
  v28 = v52; /*0x6fd0d4*/
  *((float *)v19 + 0xB) = v26; /*0x6fd0d8*/
  v29 = v53; /*0x6fd0db*/
  v53 = 0.0; /*0x6fd0df*/
  *((float *)v19 + 0xC) = v27; /*0x6fd0e3*/
  v30 = v54; /*0x6fd0e6*/
  v52 = 1.0; /*0x6fd0ea*/
  *((float *)v19 + 0xD) = v28; /*0x6fd0ee*/
  v54 = 1.0; /*0x6fd0f1*/
  v31 = v51; /*0x6fd0f5*/
  *((float *)v19 + 0xE) = v29; /*0x6fd0f9*/
  v32 = v52; /*0x6fd0fc*/
  *((float *)v19 + 0x10) = v31; /*0x6fd100*/
  v33 = v54; /*0x6fd103*/
  *((float *)v19 + 0xF) = v30; /*0x6fd107*/
  v34 = v53; /*0x6fd10a*/
  *((float *)v19 + 0x11) = v32; /*0x6fd10e*/
  *((float *)v19 + 0x12) = v34; /*0x6fd111*/
  v56 = 0xFFFFFFFF; /*0x6fd116*/
  *((float *)v19 + 0x13) = v33; /*0x6fd11e*/
  v35 = FormHeapAlloc(6u); /*0x6fd126*/
  *(_WORD *)v35 = 1; /*0x6fd132*/
  *(_BYTE *)(v35 + 2) = 1; /*0x6fd139*/
  *(_WORD *)(v35 + 3) = 1; /*0x6fd13c*/
  v36 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x6fd143*/
  v56 = 1; /*0x6fd151*/
  if ( v36 ) /*0x6fd155*/
    v37 = NiLines_ctorWithGeometryData(v36, 5u, (NiPoint3 *)v6, (NiColorAlpha *)v19, 0, 0, 0, v35); /*0x6fd169*/
  else
    v37 = 0; /*0x6fd16d*/
  v37->members.m_localTransform.pos.x = g_zeroNiPoint3.x; /*0x6fd174*/
  v37->members.m_localTransform.pos.y = g_zeroNiPoint3.y; /*0x6fd17d*/
  v37->members.m_localTransform.pos.z = g_zeroNiPoint3.z; /*0x6fd186*/
  qmemcpy(&v37->members.m_localTransform, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x6fd196*/
  v56 = 0xFFFFFFFF; /*0x6fd19f*/
  NiObjectNET_SetName((NiObjectNET *)v37, "BSTestObjects DirArrow"); /*0x6fd1a7*/
  return v37; /*0x6fd1ae*/
}
