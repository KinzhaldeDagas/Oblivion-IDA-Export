NiProperty *__thiscall sub_53C830(Moon *this, UInt16 *triangleIndices, char *Src)
{
  char *v4; // eax
  NiPoint3 *v5; // ebx
  float *v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st5
  double v10; // st6
  double v11; // st7
  double v12; // st5
  double v13; // st5
  double v14; // st5
  double v15; // st5
  double v16; // st5
  double v17; // st5
  double v18; // st5
  double v19; // st5
  float *v20; // eax
  float *v21; // eax
  float *v22; // esi
  float *v23; // eax
  float *v24; // edi
  UInt16 *v25; // eax
  NiAVObject *v26; // eax
  NiAVObject *v27; // esi
  NiAVObject *v28; // ebx
  NiAVObject *v29; // eax
  NiAVObject *v30; // esi
  NiAVObject *v31; // edi
  NiObjectNET *v32; // eax
  BSShaderProperty *v33; // esi
  NiNode *v34; // ecx
  Sky *(__cdecl *v35)(int); // esi
  NiNode *v36; // eax
  NiNode *v37; // edi
  NiNode *v38; // esi
  NiNode *v39; // eax
  NiNode *v40; // edi
  NiNode *v41; // esi
  float *v42; // eax
  double v43; // st6
  float *v44; // eax
  NiProperty *NiPropertyByID; // eax
  NiProperty *v46; // eax
  NiProperty *result; // eax
  NiProperty *v48; // eax
  NiPoint3 *normals; // [esp+4Ch] [ebp-54h]
  UInt16 *v50; // [esp+50h] [ebp-50h]
  float *textureCoordinates; // [esp+54h] [ebp-4Ch]
  NiPoint3 *v52; // [esp+58h] [ebp-48h]
  NiPoint3 *vertices; // [esp+5Ch] [ebp-44h]
  float v54; // [esp+64h] [ebp-3Ch]
  float v55; // [esp+64h] [ebp-3Ch]
  NiMatrix33 v56; // [esp+70h] [ebp-30h] BYREF
  int v57; // [esp+9Ch] [ebp-4h]
  float triangleIndicesb; // [esp+A4h] [ebp+4h]
  float triangleIndicesc; // [esp+A4h] [ebp+4h]
  float triangleIndicesd; // [esp+A4h] [ebp+4h]
  float triangleIndicese; // [esp+A4h] [ebp+4h]
  float triangleIndicesf; // [esp+A4h] [ebp+4h]
  float triangleIndicesg; // [esp+A4h] [ebp+4h]
  float triangleIndicesh; // [esp+A4h] [ebp+4h]
  float triangleIndicesi; // [esp+A4h] [ebp+4h]
  float triangleIndicesj; // [esp+A4h] [ebp+4h]
  float triangleIndicesk; // [esp+A4h] [ebp+4h]
  UInt16 *triangleIndicesa; // [esp+A4h] [ebp+4h]
  float Srcb; // [esp+A8h] [ebp+8h]
  float Srcc; // [esp+A8h] [ebp+8h]
  float Srcd; // [esp+A8h] [ebp+8h]
  float Srce; // [esp+A8h] [ebp+8h]
  float *Srca; // [esp+A8h] [ebp+8h]

  SkyObject__CreateRootNodeAndAttach((Sky *)this, (int)triangleIndices); /*0x53c85e*/
  v4 = Src; /*0x53c863*/
  if ( !Src ) /*0x53c869*/
    v4 = "Moon Root"; /*0x53c86b*/
  NiObjectNET_SetName(*((NiObjectNET **)this + 1), v4); /*0x53c874*/
  normals = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x53c882*/
  v5 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x53c88d*/
  v52 = (NiPoint3 *)FormHeapAlloc(0x30u); /*0x53c896*/
  v6 = (float *)FormHeapAlloc(0x30u); /*0x53c89a*/
  v7 = (double)*((int *)this + 0x1B); /*0x53c89f*/
  vertices = (NiPoint3 *)v6; /*0x53c8a7*/
  if ( *((int *)this + 0x1B) < 0 ) /*0x53c8ab*/
    v7 = v7 + flt_A2FC78; /*0x53c8ad*/
  triangleIndicesb = v7; /*0x53c8b3*/
  v8 = triangleIndicesb; /*0x53c8b7*/
  v9 = dbl_A3D360; /*0x53c8bd*/
  triangleIndicesc = triangleIndicesb * v9; /*0x53c8c7*/
  v10 = v8; /*0x53c8cb*/
  v11 = v9; /*0x53c8cb*/
  Srcb = v10; /*0x53c8cd*/
  v5->x = triangleIndicesc; /*0x53c8e7*/
  v5->y = Srcb; /*0x53c8f3*/
  v5->z = 0.0; /*0x53c8fe*/
  v12 = (double)*((int *)this + 0x1B); /*0x53c901*/
  if ( *((int *)this + 0x1B) < 0 ) /*0x53c909*/
    v12 = v12 + flt_A2FC78; /*0x53c90b*/
  triangleIndicesd = v12 * v11; /*0x53c913*/
  v5[1].x = triangleIndicesd; /*0x53c939*/
  v5[1].y = triangleIndicesd; /*0x53c944*/
  v5[1].z = 0.0; /*0x53c94f*/
  v13 = (double)*((int *)this + 0x1B); /*0x53c952*/
  if ( *((int *)this + 0x1B) < 0 ) /*0x53c95a*/
    v13 = v13 + flt_A2FC78; /*0x53c95c*/
  triangleIndicese = v13; /*0x53c962*/
  v5[2].x = triangleIndicese; /*0x53c988*/
  v5[2].y = triangleIndicese; /*0x53c993*/
  v5[2].z = 0.0; /*0x53c99e*/
  v14 = (double)*((int *)this + 0x1B); /*0x53c9a1*/
  if ( *((int *)this + 0x1B) < 0 ) /*0x53c9a9*/
    v14 = v14 + flt_A2FC78; /*0x53c9ab*/
  triangleIndicesf = v14; /*0x53c9b1*/
  Srcc = triangleIndicesf * v11; /*0x53c9bf*/
  v5[3].x = triangleIndicesf; /*0x53c9d9*/
  v5[3].y = Srcc; /*0x53c9e4*/
  v5[3].z = 0.0; /*0x53c9ef*/
  v15 = (double)*((int *)this + 0x1B); /*0x53c9f2*/
  if ( *((int *)this + 0x1B) < 0 ) /*0x53c9fa*/
    v15 = v15 + flt_A2FC78; /*0x53c9fc*/
  triangleIndicesg = v15; /*0x53ca02*/
  v16 = triangleIndicesg; /*0x53ca06*/
  triangleIndicesh = triangleIndicesg * v11; /*0x53ca0e*/
  Srcd = v16; /*0x53ca12*/
  *v6 = triangleIndicesh; /*0x53ca2c*/
  v6[1] = Srcd; /*0x53ca36*/
  v6[2] = 0.0; /*0x53ca41*/
  v17 = (double)*((int *)this + 0x1B); /*0x53ca44*/
  if ( *((int *)this + 0x1B) < 0 ) /*0x53ca4c*/
    v17 = v17 + flt_A2FC78; /*0x53ca4e*/
  triangleIndicesi = v17 * v11; /*0x53ca56*/
  v6[3] = triangleIndicesi; /*0x53ca7c*/
  v6[4] = triangleIndicesi; /*0x53ca87*/
  v6[5] = 0.0; /*0x53ca92*/
  v18 = (double)*((int *)this + 0x1B); /*0x53ca95*/
  if ( *((int *)this + 0x1B) < 0 ) /*0x53ca9d*/
    v18 = v18 + flt_A2FC78; /*0x53ca9f*/
  triangleIndicesj = v18; /*0x53caa5*/
  v6[6] = triangleIndicesj; /*0x53cacb*/
  v6[7] = triangleIndicesj; /*0x53cad6*/
  v6[8] = 0.0; /*0x53cae1*/
  v19 = (double)*((int *)this + 0x1B); /*0x53cae4*/
  if ( *((int *)this + 0x1B) < 0 ) /*0x53caec*/
    v19 = v19 + flt_A2FC78; /*0x53caee*/
  triangleIndicesk = v19; /*0x53caf4*/
  Srce = v11 * triangleIndicesk; /*0x53cb0c*/
  v6[9] = triangleIndicesk; /*0x53cb29*/
  v6[0xA] = Srce; /*0x53cb34*/
  v6[0xB] = 0.0; /*0x53cb3f*/
  Srca = (float *)FormHeapAlloc(0x20u); /*0x53cb4b*/
  v20 = (float *)FormHeapAlloc(0x20u); /*0x53cb52*/
  *Srca = 0.0; /*0x53cb71*/
  Srca[1] = 0.0; /*0x53cb7b*/
  Srca[2] = 0.0; /*0x53cb88*/
  Srca[3] = 1.0; /*0x53cb95*/
  Srca[4] = 1.0; /*0x53cba4*/
  Srca[5] = 0.0; /*0x53cbb1*/
  Srca[6] = 1.0; /*0x53cbbc*/
  Srca[7] = 1.0; /*0x53cbc7*/
  *v20 = 0.0; /*0x53cbd4*/
  v20[1] = 0.0; /*0x53cbde*/
  v20[2] = 0.0; /*0x53cbeb*/
  v20[3] = 1.0; /*0x53cbf6*/
  v20[4] = 1.0; /*0x53cc01*/
  v20[5] = 0.0; /*0x53cc08*/
  textureCoordinates = v20; /*0x53cc0f*/
  v20[6] = 1.0; /*0x53cc13*/
  v20[7] = 1.0; /*0x53cc16*/
  v21 = (float *)FormHeapAlloc(0x40u); /*0x53cc19*/
  v22 = v21; /*0x53cc1e*/
  v57 = 0; /*0x53cc29*/
  if ( v21 ) /*0x53cc31*/
    sub_401080(v21, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x53cc3d*/
  else
    v22 = 0; /*0x53cc44*/
  v23 = (float *)FormHeapAlloc(0x40u); /*0x53cc50*/
  v24 = v23; /*0x53cc55*/
  v57 = 1; /*0x53cc60*/
  if ( v23 ) /*0x53cc68*/
    sub_401080(v23, 0x10, 4, (void *(__thiscall *)(void *))sub_47EA50); /*0x53cc74*/
  else
    v24 = 0; /*0x53cc7b*/
  *v22 = 1.0; /*0x53cc93*/
  v22[4] = 1.0; /*0x53cc99*/
  v22[1] = 0.0; /*0x53cca8*/
  v22[2] = 0.0; /*0x53ccab*/
  v22[3] = 1.0; /*0x53ccb6*/
  v22[5] = 0.0; /*0x53ccbd*/
  v22[6] = 0.0; /*0x53ccc0*/
  v22[7] = 1.0; /*0x53ccc7*/
  v22[8] = 1.0; /*0x53ccce*/
  v22[9] = 0.0; /*0x53ccd1*/
  v22[0xA] = 0.0; /*0x53ccd4*/
  v22[0xB] = 1.0; /*0x53ccdb*/
  v22[0xC] = 1.0; /*0x53cce2*/
  v22[0xD] = 0.0; /*0x53cce5*/
  v22[0xE] = 0.0; /*0x53cce8*/
  v22[0xF] = 1.0; /*0x53ccef*/
  *v24 = 1.0; /*0x53ccf6*/
  v24[1] = 0.0; /*0x53ccf8*/
  v24[2] = 0.0; /*0x53ccfb*/
  v24[3] = 1.0; /*0x53cd02*/
  v24[4] = 1.0; /*0x53cd09*/
  v24[5] = 0.0; /*0x53cd0c*/
  v24[6] = 0.0; /*0x53cd0f*/
  v24[8] = 1.0; /*0x53cd16*/
  v24[7] = 1.0; /*0x53cd19*/
  v24[0xC] = 1.0; /*0x53cd20*/
  v24[9] = 0.0; /*0x53cd27*/
  v24[0xA] = 0.0; /*0x53cd2a*/
  v24[0xD] = 0.0; /*0x53cd31*/
  v24[0xE] = 0.0; /*0x53cd34*/
  v24[0xB] = 1.0; /*0x53cd37*/
  v24[0xF] = 1.0; /*0x53cd3a*/
  triangleIndicesa = (UInt16 *)FormHeapAlloc(0xCu); /*0x53cd44*/
  v25 = (UInt16 *)FormHeapAlloc(0xCu); /*0x53cd48*/
  *triangleIndicesa = 0; /*0x53cd51*/
  triangleIndicesa[2] = 2; /*0x53cd56*/
  triangleIndicesa[3] = 2; /*0x53cd5c*/
  triangleIndicesa[5] = 3; /*0x53cd62*/
  triangleIndicesa[1] = 1; /*0x53cd6d*/
  triangleIndicesa[4] = 1; /*0x53cd71*/
  v50 = v25; /*0x53cd7f*/
  *v25 = 0; /*0x53cd83*/
  v25[1] = 1; /*0x53cd88*/
  v25[2] = 2; /*0x53cd8c*/
  v25[3] = 2; /*0x53cd90*/
  v25[4] = 1; /*0x53cd94*/
  v25[5] = 3; /*0x53cd98*/
  v26 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x53cd9e*/
  v57 = 2; /*0x53cdac*/
  if ( v26 ) /*0x53cdb4*/
    v27 = NiTriShape_ctorWithGeometryData(v26, 4u, v5, normals, (NiColorAlpha *)v22, Srca, 1, 0, 2u, triangleIndicesa); /*0x53cdd6*/
  else
    v27 = 0; /*0x53cdda*/
  v28 = *((NiAVObject **)this + 4); /*0x53cddc*/
  v57 = 0xFFFFFFFF; /*0x53cde1*/
  if ( v28 != v27 ) /*0x53cde9*/
  {
    if ( v28 ) /*0x53cded*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v28->members) ) /*0x53cdf3*/
        v28->vtbl->super.super.Destructor((NiRefObject *)v28, 1); /*0x53ce09*/
    }
    *((_DWORD *)this + 4) = v27; /*0x53ce0d*/
    if ( v27 ) /*0x53ce10*/
      InterlockedIncrement((volatile LONG *)&v27->members); /*0x53ce16*/
  }
  NiObjectNET_SetName(*((NiObjectNET **)this + 4), "Moon Mesh"); /*0x53ce24*/
  *(_WORD *)(*((_DWORD *)this + 4) + 0x18) |= 2u; /*0x53ce2c*/
  v29 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x53ce36*/
  v57 = 3; /*0x53ce49*/
  if ( v29 ) /*0x53ce4d*/
    v30 = NiTriShape_ctorWithGeometryData( /*0x53ce73*/
            v29,
            4u,
            vertices,
            v52,
            (NiColorAlpha *)v24,
            textureCoordinates,
            1,
            0,
            2u,
            v50);
  else
    v30 = 0; /*0x53ce77*/
  v31 = *((NiAVObject **)this + 5); /*0x53ce79*/
  v57 = 0xFFFFFFFF; /*0x53ce7e*/
  if ( v31 != v30 ) /*0x53ce86*/
  {
    if ( v31 ) /*0x53ce8a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v31->members) ) /*0x53ce90*/
        v31->vtbl->super.super.Destructor((NiRefObject *)v31, 1); /*0x53cea6*/
    }
    *((_DWORD *)this + 5) = v30; /*0x53ceaa*/
    if ( v30 ) /*0x53cead*/
      InterlockedIncrement((volatile LONG *)&v30->members); /*0x53ceb3*/
  }
  NiObjectNET_SetName(*((NiObjectNET **)this + 5), "Shadow Mesh"); /*0x53cec1*/
  *(_WORD *)(*((_DWORD *)this + 5) + 0x18) |= 2u; /*0x53cece*/
  v32 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x53ced4*/
  v33 = (BSShaderProperty *)v32; /*0x53ced9*/
  v57 = 4; /*0x53cee4*/
  if ( v32 ) /*0x53ceec*/
  {
    NiObjectNET::NiObjectNET(v32); /*0x53cef0*/
    v33->vtbl = &NiAlphaProperty::`vftable'; /*0x53cef5*/
    v33->member.super.flags = 0xEC; /*0x53cefb*/
    v33->member.super.pad01A[0] = 0; /*0x53cf01*/
  }
  else
  {
    v33 = 0; /*0x53cf07*/
  }
  if ( v33 ) /*0x53cf0f*/
    InterlockedIncrement((volatile LONG *)&v33->member); /*0x53cf15*/
  v33->member.super.flags |= 1u; /*0x53cf1b*/
  v33->member.super.flags = v33->member.super.flags & 0xFFE1 | 0xC; /*0x53cf2d*/
  v33->member.super.flags &= 0xFE1Fu; /*0x53cf31*/
  v33->member.super.flags |= 0x2000u; /*0x53cf37*/
  v34 = *((NiNode **)this + 4); /*0x53cf3d*/
  v57 = 5; /*0x53cf41*/
  sub_405680(v34, v33); /*0x53cf49*/
  if ( !InterlockedDecrement((volatile LONG *)&v33->member) ) /*0x53cf52*/
    (*(void (__thiscall **)(BSShaderProperty *, int))v33->vtbl)(v33, 1); /*0x53cf64*/
  v57 = 0xFFFFFFFF; /*0x53cf66*/
  if ( Sky_CreateOrGetGlobalObject()->unk0DC == 3 || Sky_CreateOrGetGlobalObject()->unk0DC == 2 ) /*0x53cf86*/
  {
    v35 = 0; /*0x53cf88*/
    if ( this == Sky_CreateOrGetGlobalObject()->masserMoon ) /*0x53cf92*/
    {
      v35 = sub_540EF0; /*0x53cf94*/
    }
    else if ( this == Sky_CreateOrGetGlobalObject()->secundaMoon ) /*0x53cfa3*/
    {
      v35 = sub_540F20; /*0x53cfa5*/
    }
    sub_53FBE0(*((_DWORD *)this + 5), "Textures\\Sky\\MoonShadow.dds", v35, 1); /*0x53cfb6*/
    *((_DWORD *)this + 0x1C) = 2; /*0x53cfbe*/
  }
  v36 = (NiNode *)FormHeapAlloc(0xDCu); /*0x53cfc6*/
  v57 = 6; /*0x53cfd4*/
  if ( v36 ) /*0x53cfdc*/
    v37 = NiNode::NiNode(v36, 0); /*0x53cfe7*/
  else
    v37 = 0; /*0x53cfeb*/
  v38 = *((NiNode **)this + 2); /*0x53cfed*/
  v57 = 0xFFFFFFFF; /*0x53cff5*/
  if ( v38 != v37 ) /*0x53cff9*/
  {
    if ( v38 ) /*0x53cffd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v38->members) ) /*0x53d003*/
        v38->vtbl->super.super.super.Destructor((NiRefObject *)v38, 1); /*0x53d019*/
    }
    *((_DWORD *)this + 2) = v37; /*0x53d01d*/
    if ( v37 ) /*0x53d020*/
      InterlockedIncrement((volatile LONG *)&v37->members); /*0x53d026*/
  }
  v39 = (NiNode *)FormHeapAlloc(0xDCu); /*0x53d031*/
  v57 = 7; /*0x53d03f*/
  if ( v39 ) /*0x53d047*/
    v40 = NiNode::NiNode(v39, 0); /*0x53d052*/
  else
    v40 = 0; /*0x53d056*/
  v41 = *((NiNode **)this + 3); /*0x53d058*/
  v57 = 0xFFFFFFFF; /*0x53d05d*/
  if ( v41 != v40 ) /*0x53d061*/
  {
    if ( v41 ) /*0x53d065*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v41->members) ) /*0x53d06b*/
        v41->vtbl->super.super.super.Destructor((NiRefObject *)v41, 1); /*0x53d081*/
    }
    *((_DWORD *)this + 3) = v40; /*0x53d085*/
    if ( v40 ) /*0x53d088*/
      InterlockedIncrement((volatile LONG *)&v40->members); /*0x53d08e*/
  }
  NiObjectNET_SetName(*((NiObjectNET **)this + 2), "Moon Node"); /*0x53d09c*/
  NiObjectNET_SetName(*((NiObjectNET **)this + 3), "Shadow Node"); /*0x53d0a9*/
  *(_WORD *)(*((_DWORD *)this + 2) + 0x18) |= 2u; /*0x53d0b6*/
  *(_WORD *)(*((_DWORD *)this + 3) + 0x18) |= 2u; /*0x53d0bd*/
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 2) + 0x84))( /*0x53d0d2*/
    *((_DWORD *)this + 2),
    *((_DWORD *)this + 4),
    1);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 3) + 0x84))( /*0x53d0e5*/
    *((_DWORD *)this + 3),
    *((_DWORD *)this + 5),
    1);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 1) + 0x84))( /*0x53d0f8*/
    *((_DWORD *)this + 1),
    *((_DWORD *)this + 3),
    1);
  (*(void (__thiscall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 1) + 0x84))( /*0x53d10b*/
    *((_DWORD *)this + 1),
    *((_DWORD *)this + 2),
    1);
  NiMatrix33_InitRotationXTransposed(&v56, flt_A3721C); /*0x53d11b*/
  v42 = *((float **)this + 4); /*0x53d122*/
  v43 = flt_A427E0; /*0x53d129*/
  v42[0x15] = 0.0; /*0x53d133*/
  v54 = v43; /*0x53d136*/
  v42[0x16] = v54; /*0x53d140*/
  v42[0x17] = 0.0; /*0x53d157*/
  v55 = v43; /*0x53d160*/
  qmemcpy((void *)(*((_DWORD *)this + 4) + 0x30), &v56, 0x24u); /*0x53d170*/
  v44 = (float *)(*((_DWORD *)this + 5) + 0x54); /*0x53d179*/
  *v44 = 0.0; /*0x53d17c*/
  v44[1] = v55; /*0x53d182*/
  v44[2] = 0.0; /*0x53d185*/
  qmemcpy((void *)(*((_DWORD *)this + 5) + 0x30), &v56, 0x24u); /*0x53d199*/
  BSShaderManager_AssignShadersRecursive(*((NiAVObject **)this + 1), 0xAu, 0, 1); /*0x53d1a3*/
  if ( NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4) ) /*0x53d1b0*/
  {
    NiPropertyByID = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4); /*0x53d1be*/
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xB ) /*0x53d1d8*/
    {
      v46 = NiNode_GetNiPropertyByID(*((NiNode **)this + 4), 4); /*0x53d1df*/
      if ( v46 ) /*0x53d1e6*/
        v46[5].members.m_extraDataList = (NiExtraData **)6; /*0x53d1e8*/
    }
  }
  result = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4); /*0x53d1f7*/
  if ( result ) /*0x53d1fe*/
  {
    v48 = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4); /*0x53d205*/
    result = (NiProperty *)((*((int (__thiscall **)(NiProperty *))v48->vtbl + 0x15))(v48) == 0xB); /*0x53d21b*/
    if ( result ) /*0x53d21f*/
    {
      result = NiNode_GetNiPropertyByID(*((NiNode **)this + 5), 4); /*0x53d228*/
      if ( result ) /*0x53d22f*/
        result[5].members.m_extraDataList = (NiExtraData **)7; /*0x53d231*/
    }
  }
  return result; /*0x53d23b*/
}
