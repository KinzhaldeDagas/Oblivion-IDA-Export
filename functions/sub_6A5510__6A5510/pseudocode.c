int __thiscall sub_6A5510(_DWORD *this, int *arg0, TESObjectREFR *arg4, int a4)
{
  _DWORD *DwordAtOffset40; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  const NiPoint3 *v7; // eax
  char *NearestReachablePointForActor; // esi
  int v9; // eax
  float *v10; // ecx
  _DWORD *v11; // eax
  double v12; // st6
  int v13; // edx
  int v14; // ecx
  double v15; // st7
  int v16; // esi
  NiPoint3 *Position; // eax
  float x; // ecx
  float y; // edx
  float z; // edi
  float *v21; // eax
  int v22; // edi
  int v23; // ebp
  int v24; // esi
  int v25; // eax
  float *v26; // eax
  double v27; // rt0
  double v28; // st7
  float v29; // ecx
  double v30; // st7
  int v31; // edi
  int v32; // ebp
  int v33; // eax
  float *v34; // eax
  double v35; // rt1
  double v36; // st7
  float v37; // edx
  double v38; // st7
  TESObjectCELL *v40; // eax
  float *v41; // eax
  float v42; // edx
  NiTransform *v43; // eax
  int v44; // ebp
  double v45; // st6
  int v46; // edi
  int v47; // esi
  TES *v48; // ecx
  float *v49; // eax
  float v50; // [esp+18h] [ebp-ACh]
  float v51; // [esp+18h] [ebp-ACh]
  int v52; // [esp+18h] [ebp-ACh]
  float v53; // [esp+1Ch] [ebp-A8h]
  float v54; // [esp+1Ch] [ebp-A8h]
  float v55; // [esp+1Ch] [ebp-A8h]
  float v56; // [esp+1Ch] [ebp-A8h]
  float v57; // [esp+1Ch] [ebp-A8h]
  float *v58; // [esp+20h] [ebp-A4h]
  int v59; // [esp+20h] [ebp-A4h]
  double v60; // [esp+24h] [ebp-A0h]
  float v61; // [esp+24h] [ebp-A0h]
  float v62; // [esp+24h] [ebp-A0h]
  float v63; // [esp+24h] [ebp-A0h]
  float v64; // [esp+28h] [ebp-9Ch]
  float v65; // [esp+28h] [ebp-9Ch]
  float v66; // [esp+28h] [ebp-9Ch]
  float v67; // [esp+2Ch] [ebp-98h]
  float v68; // [esp+2Ch] [ebp-98h]
  float v69; // [esp+2Ch] [ebp-98h]
  NiPoint3 angleZ; // [esp+30h] [ebp-94h] BYREF
  float a2; // [esp+3Ch] [ebp-88h] BYREF
  float v72; // [esp+40h] [ebp-84h]
  float v73; // [esp+44h] [ebp-80h]
  float a3[2]; // [esp+48h] [ebp-7Ch] BYREF
  int v75; // [esp+50h] [ebp-74h]
  double v76; // [esp+54h] [ebp-70h]
  float v77; // [esp+5Ch] [ebp-68h]
  float v78; // [esp+60h] [ebp-64h]
  float v79; // [esp+64h] [ebp-60h]
  float v80; // [esp+68h] [ebp-5Ch]
  float v81; // [esp+6Ch] [ebp-58h]
  float v82; // [esp+70h] [ebp-54h]
  float v83; // [esp+74h] [ebp-50h]
  float v84; // [esp+78h] [ebp-4Ch]
  float v85; // [esp+7Ch] [ebp-48h]
  double v86; // [esp+80h] [ebp-44h]
  float v87; // [esp+88h] [ebp-3Ch]
  float v88; // [esp+8Ch] [ebp-38h]
  float v89; // [esp+90h] [ebp-34h]
  _BYTE v90[48]; // [esp+94h] [ebp-30h] BYREF

  DwordAtOffset40 = (_DWORD *)Shared_GetDwordAtOffset40(arg4); /*0x6a5525*/
  if ( sub_4AF170(DwordAtOffset40) )
  {
    GetPos = arg4->vtbl->GetPos; /*0x6a553d*/
    a3[0] = 0.0; /*0x6a5549*/
    a3[1] = 0.0; /*0x6a554d*/
    v7 = (const NiPoint3 *)GetPos(arg4); /*0x6a5551*/
    NearestReachablePointForActor = (char *)TESPathGrid_FindNearestReachablePointForActor(v7, arg4, 1, 0); /*0x6a5559*/
    if ( NearestReachablePointForActor )
    {
      sub_4E80B0(NearestReachablePointForActor, flt_A34A80, a3); /*0x6a5577*/
      BSSimpleList_PushFront(a3, (int)NearestReachablePointForActor); /*0x6a5581*/
      v9 = 0; /*0x6a5586*/
      v10 = a3; /*0x6a5588*/
      do /*0x6a559c*/
      {
        if ( *(_DWORD *)v10 ) /*0x6a5590*/
          ++v9; /*0x6a5594*/
        v10 = *((float **)v10 + 1); /*0x6a5597*/
      }
      while ( v10 ); /*0x6a559c*/
      v75 = 0xD * v9 + 1; /*0x6a55a6*/
      v11 = (_DWORD *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v75) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v75);
      v12 = dbl_A3F3D0 * 0.0; /*0x6a55cd*/
      *arg0 = (int)v11; /*0x6a55cf*/
      *v11 = *(this + 0x12); /*0x6a55d4*/
      v13 = *(this + 0x13); /*0x6a55d6*/
      v82 = v12; /*0x6a55d9*/
      v11[1] = v13; /*0x6a55dd*/
      v14 = *(this + 0x14); /*0x6a55e4*/
      v86 = v82; /*0x6a55e7*/
      v15 = 0.0 * dbl_A3F450; /*0x6a55f2*/
      v11[2] = v14; /*0x6a55f8*/
      v58 = a3; /*0x6a55fb*/
      v16 = 0xC; /*0x6a55ff*/
      v89 = v15; /*0x6a5604*/
      v60 = v89; /*0x6a5612*/
      do /*0x6a5809*/
      {
        Position = PathGraphNode_GetPosition(*(void **)v58); /*0x6a5626*/
        x = Position->x; /*0x6a562b*/
        y = Position->y; /*0x6a562d*/
        z = Position->z; /*0x6a5630*/
        v21 = (float *)(v16 + *arg0); /*0x6a5635*/
        *v21 = x; /*0x6a5637*/
        v21[1] = y; /*0x6a5639*/
        a2 = x; /*0x6a563e*/
        v72 = y; /*0x6a5642*/
        v73 = z; /*0x6a5646*/
        v21[2] = z; /*0x6a564a*/
        v22 = v16 + 0xC; /*0x6a5660*/
        v23 = 4; /*0x6a5662*/
        v24 = v16 + 0x3C; /*0x6a566d*/
        v50 = (double)Game_RandomLargeInteger(0) * dbl_A6E740 / dbl_A3D5A8; /*0x6a5676*/
        v76 = v73; /*0x6a567e*/
        v85 = v73 + v86; /*0x6a5686*/
        do /*0x6a5724*/
        {
          v53 = cos(v50); /*0x6a5699*/
          *(float *)v90 = v53; /*0x6a56a1*/
          v54 = sin(v50); /*0x6a56b1*/
          v25 = *arg0; /*0x6a56b9*/
          *(float *)&v90[4] = v54; /*0x6a56bb*/
          v26 = (float *)(v22 + v25); /*0x6a56c2*/
          v22 += 0xC; /*0x6a56cb*/
          --v23; /*0x6a56ce*/
          v27 = dbl_A3F3D0; /*0x6a56d9*/
          v80 = *(float *)v90 * v27; /*0x6a56db*/
          v81 = v27 * v54; /*0x6a56e6*/
          v83 = v80 + a2; /*0x6a56f2*/
          v28 = v72; /*0x6a56fa*/
          *v26 = v83; /*0x6a56fe*/
          v29 = v85; /*0x6a5704*/
          v84 = v28 + v81; /*0x6a5708*/
          v26[1] = v84; /*0x6a5714*/
          v30 = v50 + dbl_A6E740; /*0x6a5717*/
          v26[2] = v29; /*0x6a571d*/
          v50 = v30; /*0x6a5720*/
        }
        while ( v23 ); /*0x6a5724*/
        v31 = v24; /*0x6a573c*/
        v32 = 8; /*0x6a573e*/
        v16 = v24 + 0x60; /*0x6a5749*/
        v51 = (double)Game_RandomLargeInteger(0) * dbl_A4D918 / dbl_A3D5A8; /*0x6a5752*/
        v79 = v60 + v76; /*0x6a575e*/
        do /*0x6a57f6*/
        {
          v55 = cos(v51); /*0x6a576b*/
          angleZ.x = v55; /*0x6a5773*/
          v56 = sin(v51); /*0x6a5780*/
          v33 = *arg0; /*0x6a5788*/
          angleZ.y = v56; /*0x6a578a*/
          v34 = (float *)(v31 + v33); /*0x6a578e*/
          v31 += 0xC; /*0x6a5794*/
          --v32; /*0x6a5797*/
          v35 = dbl_A3F450; /*0x6a57a2*/
          v87 = angleZ.x * v35; /*0x6a57a4*/
          v88 = v35 * v56; /*0x6a57af*/
          v77 = v87 + a2; /*0x6a57c1*/
          v36 = v88; /*0x6a57c9*/
          *v34 = v77; /*0x6a57d0*/
          v37 = v79; /*0x6a57d6*/
          v78 = v36 + v72; /*0x6a57da*/
          v34[1] = v78; /*0x6a57e6*/
          v38 = v51 + dbl_A4D918; /*0x6a57e9*/
          v34[2] = v37; /*0x6a57ef*/
          v51 = v38; /*0x6a57f2*/
        }
        while ( v32 ); /*0x6a57f6*/
        v58 = *((float **)v58 + 1); /*0x6a5805*/
      }
      while ( v58 ); /*0x6a5809*/
      return v75; /*0x6a581d*/
    }
    return 0; /*0x6a59fd*/
  }
  v40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg4); /*0x6a5820*/
  if ( TESObjectCELL_IsInterior(v40) ) /*0x6a5827*/
    return 0; /*0x6a582e*/
  v75 = 0x64; /*0x6a583b*/
  *arg0 = FormHeapAlloc(0x4B0u); /*0x6a585a*/
  v41 = arg4->vtbl->GetPos(arg4); /*0x6a5869*/
  v61 = *v41; /*0x6a5873*/
  v67 = v41[2]; /*0x6a587a*/
  v64 = v41[1]; /*0x6a5881*/
  v42 = arg4->member.rot.y; /*0x6a5885*/
  angleZ.z = arg4->member.rot.z; /*0x6a5888*/
  angleZ.y = v42; /*0x6a589f*/
  NiMatrix33_InitRotationZ((NiMatrix33 *)&v90[0xC], angleZ.z); /*0x6a58a3*/
  angleZ.x = 0.0; /*0x6a58aa*/
  angleZ.y = flt_A2FE78; /*0x6a58b9*/
  angleZ.z = 0.0; /*0x6a58cc*/
  v43 = sub_7101F0((NiTransform *)&v90[0xC], (NiTransform *)v90, &angleZ); /*0x6a58d0*/
  v44 = 0; /*0x6a58d7*/
  v59 = 0; /*0x6a58dd*/
  v62 = v43->rot.data[0][0] + v61; /*0x6a58e1*/
  v65 = v43->rot.data[0][1] + v64; /*0x6a58ec*/
  v68 = v43->rot.data[0][2] + v67; /*0x6a58f7*/
  v45 = dbl_A529C0; /*0x6a58ff*/
  v63 = v62 - v45; /*0x6a5909*/
  v66 = v65 - v45; /*0x6a5911*/
  v69 = v68 - 0.0; /*0x6a591f*/
  v76 = v63; /*0x6a5927*/
  *(float *)&v86 = v69 + 0.0; /*0x6a592f*/
  do /*0x6a59e3*/
  {
    v46 = 0; /*0x6a5937*/
    v47 = v44; /*0x6a5939*/
    v52 = 0; /*0x6a593b*/
    v44 += 0x78; /*0x6a5945*/
    angleZ.x = (double)v59 * dbl_A3F3D0; /*0x6a5948*/
    v57 = angleZ.x + v76; /*0x6a5954*/
    do /*0x6a59d3*/
    {
      v48 = MEMORY[0xB333A0]; /*0x6a5974*/
      angleZ.y = (double)v52 * dbl_A3F3D0; /*0x6a597a*/
      a2 = v57; /*0x6a5982*/
      v72 = angleZ.y + v66; /*0x6a598e*/
      v73 = *(float *)&v86; /*0x6a5999*/
      if ( GetTerrainHeight(v48, &a2, a3) ) /*0x6a599d*/
        v73 = a3[0]; /*0x6a59aa*/
      v49 = (float *)(v47 + *arg0); /*0x6a59b4*/
      *v49 = a2; /*0x6a59b6*/
      v49[1] = v72; /*0x6a59bc*/
      ++v46; /*0x6a59c3*/
      v47 += 0xC; /*0x6a59c6*/
      v49[2] = v73; /*0x6a59cc*/
      v52 = v46; /*0x6a59cf*/
    }
    while ( v46 < 0xA ); /*0x6a59d3*/
    ++v59; /*0x6a59df*/
  }
  while ( v59 < 0xA ); /*0x6a59e3*/
  return v75; /*0x6a5813*/
}
