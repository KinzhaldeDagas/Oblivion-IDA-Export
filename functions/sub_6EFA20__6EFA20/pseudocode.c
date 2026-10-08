// Load FREGT003 texture-morph data. Validate the magic, read the 56-byte descriptor, and materialize two banks of 64-byte RGB basis records. The descriptor supplies image dimensions and independent bank counts.
bool __cdecl BSFaceGenEgtData_LoadFile(
        void *sourceString,
        unsigned int *coordinateMetadata,
        FaceGenEgtBasisBank *bank0,
        FaceGenEgtBasisBank *bank1)
{
  unsigned int v5; // edi
  unsigned int v6; // ebp
  int v7; // edi
  void *begin; // ecx
  void *v9; // ecx
  void *v10; // ecx
  void *v11; // ecx
  unsigned int v12; // ebp
  void *v13; // ecx
  void *v14; // ecx
  char *v15; // eax
  char *v16; // edi
  int v17; // edi
  unsigned int v18; // ebp
  int v19; // eax
  unsigned int v20; // esi
  unsigned int v21; // esi
  int v22; // edi
  void *v23; // ecx
  void *v24; // ecx
  void *v25; // ecx
  void *v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edi
  unsigned int v29; // ebp
  void *v30; // ecx
  void *v31; // ecx
  char *v32; // eax
  int v33; // ecx
  char *v34; // esi
  int v35; // esi
  unsigned int v36; // edi
  int v37; // eax
  int v38; // [esp-40h] [ebp-100h] BYREF
  int v39; // [esp-3Ch] [ebp-FCh]
  int v40; // [esp-38h] [ebp-F8h]
  int v41; // [esp-34h] [ebp-F4h]
  char v42; // [esp-30h] [ebp-F0h] BYREF
  int v43; // [esp-2Ch] [ebp-ECh]
  int v44; // [esp-28h] [ebp-E8h]
  int v45; // [esp-24h] [ebp-E4h]
  OB_stString28_010201A0 v46; // [esp-20h] [ebp-E0h] BYREF
  int v47; // [esp-4h] [ebp-C4h]
  unsigned int v48; // [esp+14h] [ebp-ACh]
  unsigned int v49; // [esp+18h] [ebp-A8h]
  OB_stString28_010201A0 *p_storage; // [esp+1Ch] [ebp-A4h]
  int v51; // [esp+20h] [ebp-A0h]
  unsigned int v52; // [esp+24h] [ebp-9Ch]
  int v53; // [esp+28h] [ebp-98h]
  int v54; // [esp+2Ch] [ebp-94h]
  unsigned int v55; // [esp+30h] [ebp-90h]
  unsigned int v56; // [esp+34h] [ebp-8Ch] BYREF
  int v57; // [esp+38h] [ebp-88h]
  unsigned int v58; // [esp+3Ch] [ebp-84h]
  unsigned int v59; // [esp+40h] [ebp-80h]
  unsigned int v60; // [esp+44h] [ebp-7Ch]
  unsigned int v61[16]; // [esp+6Ch] [ebp-54h] BYREF
  void (__thiscall ***v62)(_DWORD, int); // [esp+ACh] [ebp-14h]
  int v63; // [esp+BCh] [ebp-4h]

  p_storage = (OB_stString28_010201A0 *)&v46.storage; /*0x6efa7c*/
  v47 = 0xF; /*0x6efa82*/
  v46.capacity = 0; /*0x6efa89*/
  v46.storage.inlineData[4] = 0; /*0x6efa95*/
  OB_stString28_AssignBytes_010201A0((OB_stString28_010201A0 *)&v46.storage, "FREGT003", 8u); /*0x6efa99*/
  sub_6F6110( /*0x6efaa5*/
    (FutBinaryFileC *)v61,
    (int)v46.storage.heapData,
    *((unsigned int *)&v46.storage.heapData + 1),
    *((int *)&v46.storage.heapData + 2),
    *((int *)&v46.storage.heapData + 3),
    v46.size,
    v46.capacity,
    v47);
  v47 = 0; /*0x6efaac*/
  p_storage = &v46; /*0x6efab2*/
  v46.capacity = 0xF; /*0x6efab9*/
  v46.size = 0; /*0x6efac0*/
  v63 = 0; /*0x6efac4*/
  v46.storage.inlineData[0] = 0; /*0x6efacb*/
  OB_stString28_AssignSubstring_010201A0(&v46, (const OB_stString28_010201A0 *)sourceString, 0, 0xFFFFFFFF); /*0x6eface*/
  if ( !sub_6F66E0( /*0x6efada*/
          v61,
          v46.allocatorState,
          (unsigned int)v46.storage.heapData,
          *((int *)&v46.storage.heapData + 1),
          *((int *)&v46.storage.heapData + 2),
          *((int *)&v46.storage.heapData + 3),
          v46.size,
          v46.capacity,
          v47) )
  {
    v63 = 0xFFFFFFFF; /*0x6efae7*/
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v61); /*0x6efaf2*/
    return 0; /*0x6efaf9*/
  }
  if ( !sub_6F5E50(v61, (int)&v56, 1, 0x38) )   // Read the 56-byte FREGT003 descriptor after the magic. Its first fields are width, height, and basis counts for two texture banks. Every one of the 20 vanilla EGT entries in Oblivion - Meshes.bsa declares 50/0 bases. /*0x6efb07*/
    goto LABEL_4; /*0x6efb0e*/
  *coordinateMetadata = v60; /*0x6efb2f*/
  sub_559930((int *)bank0); /*0x6efb33*/
  sub_559930((int *)bank1); /*0x6efb3a*/
  v5 = v58; /*0x6efb43*/
  v52 = ((v57 + 7) & 0xFFFFFFF8) - v57; /*0x6efb54*/
  p_storage = (OB_stString28_010201A0 *)&v38; /*0x6efb5c*/
  v55 = (v57 + 7) & 0xFFFFFFF8; /*0x6efb63*/
  v54 = v55 * v56; /*0x6efb7b*/
  ArrayConstructor( /*0x6efb82*/
    &v42,
    0x10u,
    3,
    (void (__thiscall *)(char *))FaceGenEgtBasisBank_Construct,
    (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0);
  sub_6EF920( /*0x6efb8a*/
    (int *)bank0,
    v5,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46.allocatorState,
    (int)v46.storage.heapData,
    *((int *)&v46.storage.heapData + 1),
    *((int *)&v46.storage.heapData + 2),
    *((int *)&v46.storage.heapData + 3),
    v46.size,
    v46.capacity,
    v47);
  v6 = 0; /*0x6efb8f*/
  v49 = 0; /*0x6efb95*/
  if ( v58 ) /*0x6efb99*/
  {
    v7 = 0; /*0x6efb9f*/
    v53 = 0; /*0x6efba1*/
    while ( 2 ) /*0x6efbb8*/
    {
      begin = bank0->begin; /*0x6efbb8*/
      if ( !begin || v6 >= ((char *)bank0->end - (char *)begin) >> 6 ) /*0x6efbc9*/
        _invalid_parameter_noinfo((int)bank1, v7, (int)bank0); /*0x6efbcb*/
      if ( !sub_6F5D40(v61, (int)bank0->begin + v7, 4u, 1) ) /*0x6efbe5*/
        goto LABEL_4; /*0x6efbe5*/
      v9 = bank0->begin; /*0x6efbeb*/
      if ( !v9 || v6 >= ((char *)bank0->end - (char *)v9) >> 6 ) /*0x6efbfc*/
        _invalid_parameter_noinfo((int)bank1, v7, (int)bank0); /*0x6efbfe*/
      *(_DWORD *)((char *)bank0->begin + v7 + 4) = v57; /*0x6efc0a*/
      v10 = bank0->begin; /*0x6efc0e*/
      if ( !v10 || v6 >= ((char *)bank0->end - (char *)v10) >> 6 ) /*0x6efc1f*/
        _invalid_parameter_noinfo((int)bank1, v7, (int)bank0); /*0x6efc21*/
      *(_DWORD *)((char *)bank0->begin + v7 + 8) = v56; /*0x6efc2d*/
      v11 = bank0->begin; /*0x6efc31*/
      if ( !v11 || v6 >= ((char *)bank0->end - (char *)v11) >> 6 ) /*0x6efc42*/
        _invalid_parameter_noinfo((int)bank1, v7, (int)bank0); /*0x6efc44*/
      v12 = v54 - v55; /*0x6efc4d*/
      *(_DWORD *)((char *)bank0->begin + v7 + 0xC) = v52; /*0x6efc58*/
      p_storage = (OB_stString28_010201A0 *)v12; /*0x6efc5c*/
      v48 = 0; /*0x6efc60*/
      v51 = v7; /*0x6efc68*/
      while ( 1 ) /*0x6efc78*/
      {
        v13 = bank0->begin; /*0x6efc78*/
        if ( !v13 || v49 >= ((char *)bank0->end - (char *)v13) >> 6 ) /*0x6efc8b*/
          _invalid_parameter_noinfo((int)bank1, v7, (int)bank0); /*0x6efc8d*/
        OB_stVectorByte_ResizeFill_010201A0((char **)((char *)bank0->begin + v51 + 0x10), v54, 0); /*0x6efca4*/
        v14 = bank0->begin; /*0x6efca9*/
        if ( !v14 || v49 >= ((char *)bank0->end - (char *)v14) >> 6 ) /*0x6efcbc*/
          _invalid_parameter_noinfo((int)bank1, v7, (int)bank0); /*0x6efcbe*/
        v15 = (char *)bank0->begin + v7; /*0x6efcca*/
        v16 = &v15[v48 + 0x14]; /*0x6efccc*/
        if ( !*(_DWORD *)v16 || v12 >= *(_DWORD *)&v15[v48 + 0x18] - *(_DWORD *)v16 ) /*0x6efce2*/
          _invalid_parameter_noinfo((int)bank1, (int)v16, (int)bank0); /*0x6efce4*/
        v17 = v12 + *(_DWORD *)v16; /*0x6efceb*/
        v18 = 0; /*0x6efced*/
        if ( v56 ) /*0x6efcf3*/
        {
          v19 = v57; /*0x6efcf5*/
          while ( sub_6F5D40(v61, v17, 1u, v19) ) /*0x6efd0f*/
          {
            v19 = v57; /*0x6efd15*/
            ++v18; /*0x6efd20*/
            v17 -= v57 + v52; /*0x6efd23*/
            if ( v18 >= v56 ) /*0x6efd29*/
              goto LABEL_36; /*0x6efd29*/
          }
          v61[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6efda2*/
          v63 = 1; /*0x6efdaa*/
LABEL_41:
          if ( v62 ) /*0x6efdbe*/
            (**v62)(v62, 1); /*0x6efdc6*/
          v62 = 0; /*0x6efdcc*/
          v63 = 0xFFFFFFFF; /*0x6efdd7*/
          FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v61); /*0x6efde2*/
          return 0; /*0x6efde9*/
        }
LABEL_36:
        v51 += 0x10; /*0x6efd2f*/
        v48 += 0x10; /*0x6efd3a*/
        if ( v48 >= 0x30 ) /*0x6efd3e*/
          break; /*0x6efd3e*/
        v12 = (unsigned int)p_storage; /*0x6efc70*/
        v7 = v53; /*0x6efc74*/
      }
      v53 += 0x40; /*0x6efd48*/
      if ( ++v49 < v58 ) /*0x6efd58*/
      {
        v7 = v53; /*0x6efbb0*/
        v6 = v49; /*0x6efbb4*/
        continue; /*0x6efbb4*/
      }
      break;
    }
  }
  v20 = v59;                                    // Load EGT basis bank 1 using the second descriptor count. Every shipped Oblivion EGT asset declares 50 bases in bank 0 and zero in bank 1. /*0x6efd5e*/
  p_storage = (OB_stString28_010201A0 *)&v38; /*0x6efd67*/
  ArrayConstructor( /*0x6efd7d*/
    &v42,
    0x10u,
    3,
    (void (__thiscall *)(char *))FaceGenEgtBasisBank_Construct,
    (void (__thiscall *)(void *))OB_stVector4_DestroyThiscall_010201A0);
  sub_6EF920( /*0x6efd85*/
    (int *)bank1,
    v20,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46.allocatorState,
    (int)v46.storage.heapData,
    *((int *)&v46.storage.heapData + 1),
    *((int *)&v46.storage.heapData + 2),
    *((int *)&v46.storage.heapData + 3),
    v46.size,
    v46.capacity,
    v47);
  v21 = 0; /*0x6efd8a*/
  v49 = 0; /*0x6efd90*/
  if ( v59 ) /*0x6efd94*/
  {
    v22 = 0; /*0x6efd9a*/
    v48 = 0; /*0x6efd9c*/
    while ( 2 ) /*0x6efdf8*/
    {
      v23 = bank1->begin; /*0x6efdf8*/
      if ( !v23 || v21 >= ((char *)bank1->end - (char *)v23) >> 6 ) /*0x6efe09*/
        _invalid_parameter_noinfo((int)bank1, v22, v21); /*0x6efe0b*/
      if ( sub_6F5D40(v61, (int)bank1->begin + v22, 4u, 1) ) /*0x6efe1e*/
      {
        v24 = bank1->begin; /*0x6efe2b*/
        if ( !v24 || v21 >= ((char *)bank1->end - (char *)v24) >> 6 ) /*0x6efe3c*/
          _invalid_parameter_noinfo((int)bank1, v22, v21); /*0x6efe3e*/
        *(_DWORD *)((char *)bank1->begin + v22 + 4) = v57; /*0x6efe4a*/
        v25 = bank1->begin; /*0x6efe4e*/
        if ( !v25 || v21 >= ((char *)bank1->end - (char *)v25) >> 6 ) /*0x6efe5f*/
          _invalid_parameter_noinfo((int)bank1, v22, v21); /*0x6efe61*/
        *(_DWORD *)((char *)bank1->begin + v22 + 8) = v56; /*0x6efe6d*/
        v26 = bank1->begin; /*0x6efe71*/
        if ( !v26 || v21 >= ((char *)bank1->end - (char *)v26) >> 6 ) /*0x6efe82*/
          _invalid_parameter_noinfo((int)bank1, v22, v21); /*0x6efe84*/
        v27 = v48; /*0x6efe90*/
        *(_DWORD *)((char *)bank1->begin + v22 + 0xC) = v52; /*0x6efe94*/
        v28 = v54 - v55; /*0x6efe9c*/
        v29 = 0; /*0x6efea0*/
        p_storage = (OB_stString28_010201A0 *)(v54 - v55); /*0x6efea2*/
        v51 = v27; /*0x6efea6*/
        while ( 1 ) /*0x6efeb8*/
        {
          v30 = bank1->begin; /*0x6efeb8*/
          if ( !v30 || v21 >= ((char *)bank1->end - (char *)v30) >> 6 ) /*0x6efec9*/
            _invalid_parameter_noinfo((int)bank1, v28, v21); /*0x6efecb*/
          OB_stVectorByte_ResizeFill_010201A0((char **)((char *)bank1->begin + v51 + 0x10), v54, 0); /*0x6efee2*/
          v31 = bank1->begin; /*0x6efee7*/
          if ( !v31 || v21 >= ((char *)bank1->end - (char *)v31) >> 6 ) /*0x6efef8*/
            _invalid_parameter_noinfo((int)bank1, v28, v21); /*0x6efefa*/
          v32 = (char *)bank1->begin + v48; /*0x6eff02*/
          v33 = *(_DWORD *)&v32[v29 + 0x14]; /*0x6eff06*/
          v34 = &v32[v29 + 0x14]; /*0x6eff0c*/
          if ( !v33 || v28 >= *(_DWORD *)&v32[v29 + 0x18] - v33 ) /*0x6eff1a*/
            _invalid_parameter_noinfo((int)bank1, v28, (int)v34); /*0x6eff1c*/
          v35 = v28 + *(_DWORD *)v34; /*0x6eff23*/
          v36 = 0; /*0x6eff25*/
          if ( v56 ) /*0x6eff2b*/
          {
            v37 = v57; /*0x6eff2d*/
            while ( sub_6F5D40(v61, v35, 1u, v37) ) /*0x6eff40*/
            {
              v37 = v57; /*0x6eff46*/
              ++v36; /*0x6eff51*/
              v35 -= v57 + v52; /*0x6eff54*/
              if ( v36 >= v56 ) /*0x6eff5a*/
                goto LABEL_73; /*0x6eff5a*/
            }
            v61[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6efff6*/
            v63 = 2; /*0x6efffe*/
            goto LABEL_41; /*0x6f0009*/
          }
LABEL_73:
          v51 += 0x10; /*0x6eff5c*/
          v29 += 0x10; /*0x6eff61*/
          if ( v29 >= 0x30 ) /*0x6eff67*/
            break; /*0x6eff67*/
          v28 = (unsigned int)p_storage; /*0x6efeb0*/
          v21 = v49; /*0x6efeb4*/
        }
        v48 += 0x40; /*0x6eff71*/
        if ( ++v49 < v59 ) /*0x6eff81*/
        {
          v21 = v49; /*0x6efdf0*/
          v22 = v48; /*0x6efdf4*/
          continue; /*0x6efdf4*/
        }
        goto LABEL_75; /*0x6eff81*/
      }
      break;
    }
LABEL_4:
    v63 = 0xFFFFFFFF; /*0x6efb10*/
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v61); /*0x6efb1f*/
    return 0; /*0x6efb26*/
  }
LABEL_75:
  v61[0] = (unsigned int)&BSFaceGenBinaryFile::`vftable'; /*0x6eff87*/
  v63 = 3; /*0x6eff98*/
  if ( v62 ) /*0x6effa3*/
    (**v62)(v62, 1); /*0x6effab*/
  v62 = 0; /*0x6effb1*/
  v63 = 0xFFFFFFFF; /*0x6effbc*/
  FutBinaryFileC::~FutBinaryFileC((FutBinaryFileC *)v61); /*0x6effc7*/
  return 1; /*0x6effce*/
}
