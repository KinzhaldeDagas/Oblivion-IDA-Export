int __thiscall sub_6A5510(_DWORD *this, int *arg0, TESObjectREFR *arg4, int a4)
{
  TESObjectCELL *ParentCell; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  float *v7; // eax
  char *v8; // esi
  int v9; // eax
  float *v10; // ecx
  _DWORD *v11; // eax
  double v12; // st6
  int v13; // edx
  int v14; // ecx
  double v15; // st7
  int v16; // esi
  char *v17; // eax
  float v18; // ecx
  float v19; // edx
  float v20; // edi
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
  float y; // edx
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
  NiPoint3 v70; // [esp+30h] [ebp-94h] BYREF
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

  ParentCell = TESObjectREFR_GetParentCell(arg4);
  if ( sub_4AF170(ParentCell) )
  {
    GetPos = arg4->vtbl->GetPos;
    a3[0] = 0.0;
    a3[1] = 0.0;
    v7 = GetPos(arg4);
    v8 = sub_67D820(v7, arg4, 1, 0);
    if ( v8 )
    {
      sub_4E80B0(v8, flt_A34A80, a3);
      BSSimpleList_PushFront(a3, (int)v8);
      v9 = 0;
      v10 = a3;
      do
      {
        if ( *(_DWORD *)v10 )
          ++v9;
        v10 = *((float **)v10 + 1);
      }
      while ( v10 );
      v75 = 0xD * v9 + 1;
      v11 = (_DWORD *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)v75) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v75);
      v12 = dbl_A3F3D0 * 0.0;
      *arg0 = (int)v11;
      *v11 = *(this + 0x12);
      v13 = *(this + 0x13);
      v82 = v12;
      v11[1] = v13;
      v14 = *(this + 0x14);
      v86 = v82;
      v15 = 0.0 * dbl_A3F450;
      v11[2] = v14;
      v58 = a3;
      v16 = 0xC;
      v89 = v15;
      v60 = v89;
      do
      {
        v17 = sub_4BEF40(*(char **)v58);
        v18 = *(float *)v17;
        v19 = *((float *)v17 + 1);
        v20 = *((float *)v17 + 2);
        v21 = (float *)(v16 + *arg0);
        *v21 = v18;
        v21[1] = v19;
        a2 = v18;
        v72 = v19;
        v73 = v20;
        v21[2] = v20;
        v22 = v16 + 0xC;
        v23 = 4;
        v24 = v16 + 0x3C;
        v50 = (double)GetRandomLargeInteger_(0) * dbl_A6E740 / dbl_A3D5A8;
        v76 = v73;
        v85 = v73 + v86;
        do
        {
          v53 = cos(v50);
          *(float *)v90 = v53;
          v54 = sin(v50);
          v25 = *arg0;
          *(float *)&v90[4] = v54;
          v26 = (float *)(v22 + v25);
          v22 += 0xC;
          --v23;
          v27 = dbl_A3F3D0;
          v80 = *(float *)v90 * v27;
          v81 = v27 * v54;
          v83 = v80 + a2;
          v28 = v72;
          *v26 = v83;
          v29 = v85;
          v84 = v28 + v81;
          v26[1] = v84;
          v30 = v50 + dbl_A6E740;
          v26[2] = v29;
          v50 = v30;
        }
        while ( v23 );
        v31 = v24;
        v32 = 8;
        v16 = v24 + 0x60;
        v51 = (double)GetRandomLargeInteger_(0) * dbl_A4D918 / dbl_A3D5A8;
        v79 = v60 + v76;
        do
        {
          v55 = cos(v51);
          v70.x = v55;
          v56 = sin(v51);
          v33 = *arg0;
          v70.y = v56;
          v34 = (float *)(v31 + v33);
          v31 += 0xC;
          --v32;
          v35 = dbl_A3F450;
          v87 = v70.x * v35;
          v88 = v35 * v56;
          v77 = v87 + a2;
          v36 = v88;
          *v34 = v77;
          v37 = v79;
          v78 = v36 + v72;
          v34[1] = v78;
          v38 = v51 + dbl_A4D918;
          v34[2] = v37;
          v51 = v38;
        }
        while ( v32 );
        v58 = *((float **)v58 + 1);
      }
      while ( v58 );
      return v75;
    }
    return 0;
  }
  v40 = TESObjectREFR_GetParentCell(arg4);
  if ( TESObjectCELL_IsInterior(v40) )
    return 0;
  v75 = 0x64;
  *arg0 = FormHeapAlloc(0x4B0u);
  v41 = arg4->vtbl->GetPos(arg4);
  v61 = *v41;
  v67 = v41[2];
  v64 = v41[1];
  y = arg4->member.rot.y;
  v70.z = arg4->member.rot.z;
  v70.y = y;
  NiMatrix33_InitRotationTransform((float *)&v90[0xC], v70.z);
  v70.x = 0.0;
  v70.y = flt_A2FE78;
  v70.z = 0.0;
  v43 = sub_7101F0((NiTransform *)&v90[0xC], (NiTransform *)v90, &v70);
  v44 = 0;
  v59 = 0;
  v62 = v43->rot.data[0][0] + v61;
  v65 = v43->rot.data[0][1] + v64;
  v68 = v43->rot.data[0][2] + v67;
  v45 = dbl_A529C0;
  v63 = v62 - v45;
  v66 = v65 - v45;
  v69 = v68 - 0.0;
  v76 = v63;
  *(float *)&v86 = v69 + 0.0;
  do
  {
    v46 = 0;
    v47 = v44;
    v52 = 0;
    v44 += 0x78;
    v70.x = (double)v59 * dbl_A3F3D0;
    v57 = v70.x + v76;
    do
    {
      v48 = TES;
      v70.y = (double)v52 * dbl_A3F3D0;
      a2 = v57;
      v72 = v70.y + v66;
      v73 = *(float *)&v86;
      if ( GetTerrainHeight(v48, &a2, a3) )
        v73 = a3[0];
      v49 = (float *)(v47 + *arg0);
      *v49 = a2;
      v49[1] = v72;
      ++v46;
      v47 += 0xC;
      v49[2] = v73;
      v52 = v46;
    }
    while ( v46 < 0xA );
    ++v59;
  }
  while ( v59 < 0xA );
  return v75;
}
