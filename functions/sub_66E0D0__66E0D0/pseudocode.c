char __fastcall sub_66E0D0(TESObjectREFR *a1, int a2, void *a3, float *a4, char a5, char a6)
{
  float v6; // esi
  double v7; // st7
  MobileObject *v8; // ecx
  float *CharProxy; // eax
  double (__thiscall *v10)(_DWORD); // eax
  double v11; // st7
  double v12; // st6
  float x; // edi
  NiTransform *v14; // eax
  hkVector4 v15; // xmm0
  MobileObject *v16; // ecx
  TESObjectREFR *v17; // eax
  double v18; // rt0
  int v19; // eax
  double v20; // st6
  TESObjectREFR *v21; // ecx
  TESObjectCELL *ParentCell; // esi
  BSExtraDataVtbl *v23; // eax
  float v24; // eax
  double v25; // st7
  double v26; // st6
  double v27; // st5
  float v28; // eax
  double v29; // st7
  bhkRefObject *v30; // eax
  bhkRefObject *v31; // edi
  MobileObject *v32; // ecx
  TESForm::FormFlags v33; // esi
  double v34; // rt0
  TESObjectCELL *v35; // esi
  int *v36; // eax
  hkRefObject *hkObject; // esi
  int v38; // ecx
  double v40; // st7
  float v41; // eax
  float v42; // [esp+1Ch] [ebp-4D4h]
  float v43; // [esp+1Ch] [ebp-4D4h]
  float v44; // [esp+1Ch] [ebp-4D4h]
  float v45; // [esp+1Ch] [ebp-4D4h]
  float v46; // [esp+1Ch] [ebp-4D4h]
  float v47; // [esp+1Ch] [ebp-4D4h]
  float v48; // [esp+1Ch] [ebp-4D4h]
  float v49; // [esp+1Ch] [ebp-4D4h]
  float v50; // [esp+1Ch] [ebp-4D4h]
  float v51; // [esp+1Ch] [ebp-4D4h]
  char v52; // [esp+23h] [ebp-4CDh]
  float v53; // [esp+24h] [ebp-4CCh]
  float v54; // [esp+24h] [ebp-4CCh]
  float v55; // [esp+24h] [ebp-4CCh]
  float v56; // [esp+24h] [ebp-4CCh]
  float v57; // [esp+24h] [ebp-4CCh]
  float v58; // [esp+24h] [ebp-4CCh]
  int v59; // [esp+24h] [ebp-4CCh]
  float v60; // [esp+28h] [ebp-4C8h]
  float v61; // [esp+28h] [ebp-4C8h]
  float v62; // [esp+28h] [ebp-4C8h]
  float v63; // [esp+28h] [ebp-4C8h]
  float v64; // [esp+28h] [ebp-4C8h]
  NiTransform v65; // [esp+2Ch] [ebp-4C4h] BYREF
  double v66; // [esp+60h] [ebp-490h]
  float v67; // [esp+6Ch] [ebp-484h]
  float v68; // [esp+70h] [ebp-480h]
  float v69; // [esp+74h] [ebp-47Ch]
  float v70; // [esp+78h] [ebp-478h]
  float v71; // [esp+7Ch] [ebp-474h]
  float v72; // [esp+80h] [ebp-470h]
  bhkRefObject v73; // [esp+84h] [ebp-46Ch] BYREF
  TESObjectREFR v74; // [esp+98h] [ebp-458h] BYREF
  float v75[6]; // [esp+F0h] [ebp-400h] BYREF
  NiPoint3 v76; // [esp+108h] [ebp-3E8h] BYREF
  NiTransform v77; // [esp+114h] [ebp-3DCh] BYREF
  void **v78; // [esp+168h] [ebp-388h] BYREF
  int v79; // [esp+16Ch] [ebp-384h]
  char *v80; // [esp+170h] [ebp-380h]
  int v81; // [esp+174h] [ebp-37Ch]
  unsigned int v82; // [esp+178h] [ebp-378h]
  char v83; // [esp+17Ch] [ebp-374h] BYREF
  __m128 v84; // [esp+280h] [ebp-270h] BYREF
  hkVector4 v85; // [esp+290h] [ebp-260h]
  __int128 v86; // [esp+2A0h] [ebp-250h]
  __int128 v87; // [esp+2B0h] [ebp-240h] BYREF
  char v88; // [esp+2D0h] [ebp-220h]
  int v89; // [esp+2D4h] [ebp-21Ch]
  float v90; // [esp+2F4h] [ebp-1FCh]
  int v91; // [esp+300h] [ebp-1F0h]
  hkVector4 v92; // [esp+310h] [ebp-1E0h]
  int v93; // [esp+320h] [ebp-1D0h]
  int v94; // [esp+324h] [ebp-1CCh]
  float *v95; // [esp+328h] [ebp-1C8h]
  float v96[107]; // [esp+330h] [ebp-1C0h] BYREF
  unsigned int v97; // [esp+4ECh] [ebp-4h]

  v6 = *(float *)&a1;
  LODWORD(v65.rot.data[1][2]) = a1;
  LODWORD(v65.rot.data[2][0]) = a4;
  v7 = sub_46D5C0(a3);
  v8 = (MobileObject *)TESDataHandler_g_PlayerRef;
  v65.rot.data[1][1] = v7 + v7;
  CharProxy = (float *)MobileObject_GetCharProxy(v8);
  v53 = sub_8913C0(CharProxy);
  v10 = *(double (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v6) + 0xEC);
  v65.rot.data[2][2] = v53 * dbl_A372E0;
  v11 = v10(LODWORD(v6)) * flt_B37D28;
  v65.rot.data[2][1] = v11;
  sub_5F11F0((Actor *)LODWORD(v6), v11, &v65.pos.y, &v76.x);
  if ( a6 )
  {
    if ( 0.0 != *(float *)(LODWORD(v6) + 0x7FC) )
    {
      v54 = v65.rot.data[1][1] * dbl_A2FAA0 / v65.rot.data[2][1];
      v55 = asin(v54);
      *(float *)(LODWORD(v6) + 0x7FC) = *(float *)(LODWORD(v6) + 0x7FC) + v55;
    }
    NiMatrix33_InitRotationTransform(v77.rot.data[1], *(float *)(LODWORD(v6) + 0x7FC));
    *(float *)(LODWORD(v6) + 0x800) = *(float *)(LODWORD(v6) + 0x7FC);
    v56 = v65.rot.data[1][1] * dbl_A2FAA0 / v65.rot.data[2][1];
    v57 = asin(v56);
    v58 = *(float *)(LODWORD(v6) + 0x7FC) + v57;
    *(float *)(LODWORD(v6) + 0x7FC) = v58;
    v12 = dbl_A3D5B0;
    if ( v12 < v58 )
      *(float *)(LODWORD(v6) + 0x7FC) = v58 - v12;
  }
  else
  {
    NiMatrix33_InitRotationTransform(v77.rot.data[1], *(float *)(LODWORD(v6) + 0x800));
  }
  v52 = 0;
  x = 0.0;
  v59 = a5 != 0 ? 0xA : 0;
  v65.pos.x = 0.0;
  while ( SLODWORD(x) <= v59 )
  {
    sub_7101F0((NiTransform *)v77.rot.data[1], &v65, &v76);
    if ( x != 0.0 )
    {
      v65.rot.data[0][2] = 0.0;
      sub_43F350((float *)&v65);
      v60 = dbl_A3D5B0 / (double)v59 * (double)(LODWORD(x) - 1);
      NiMatrix33_InitRotationTransform(&v77.scale, v60);
      v14 = sub_7101F0((NiTransform *)&v77.scale, &v77, (NiPoint3 *)&v65);
      *(_QWORD *)&v65.rot.data[0][0] = *(_QWORD *)&v14->rot.data[0][0];
      v65.rot.data[0][2] = v14->rot.data[0][2];
    }
    v15 = stru_BA7A40;
    v90 = 1.0;
    v16 = (MobileObject *)TESDataHandler_g_PlayerRef;
    v88 = 0;
    v89 = 0;
    v91 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v92 = v15;
    v17 = sub_65ABE0(v16, (TESObjectREFR *)&v74.member);
    v18 = hkFactor;
    v19 = (HIWORD(v17->vtbl) << 0x10) | 0x1F;
    *(float *)&v86 = v65.pos.y * v18;
    v89 = v19;
    *((float *)&v86 + 1) = v65.pos.z * v18;
    *((float *)&v86 + 2) = v65.scale * v18;
    v87 = v86;
    v66 = v65.rot.data[2][1] + v65.rot.data[1][1];
    v61 = v66;
    v20 = v61;
    v62 = v61 * v65.rot.data[0][0];
    v65.rot.data[1][0] = v20 * v65.rot.data[0][1];
    v42 = v20 * v65.rot.data[0][2];
    v85.x = v62 * v18;
    v85.y = v65.rot.data[1][0] * v18;
    v85.z = v18 * v42;
    v92 = v85;
    sub_538C00(v96);
    v21 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
    v97 = 0;
    v95 = v96;
    v94 = 0;
    ParentCell = TESObjectREFR_GetParentCell(v21);
    if ( TESObjectCELL_IsInterior(ParentCell) )
      v23 = sub_424180(&ParentCell->members.extraData);
    else
      v23 = (BSExtraDataVtbl *)bhkWorldM;
    if ( (*((unsigned __int8 (__thiscall **)(BSExtraDataVtbl *, __int128 *))v23->Destructor + 0x22))(v23, &v87) )
    {
      v24 = v65.rot.data[2][0];
      v43 = *(float *)(LODWORD(v96[4]) + 0x14) * v66;
      v66 = v65.rot.data[1][1] * dbl_A2FAA0;
      v44 = v43 - v66;
      v65.rot.data[0][0] = v65.rot.data[0][0] * v44;
      v65.rot.data[0][1] = v65.rot.data[0][1] * v44;
      v65.rot.data[0][2] = v44 * v65.rot.data[0][2];
      v25 = v65.rot.data[0][0];
      v45 = v65.pos.y + v65.rot.data[0][0];
      v26 = v65.rot.data[0][1];
      v65.rot.data[1][0] = v65.pos.z + v65.rot.data[0][1];
      v63 = v65.scale + v65.rot.data[0][2];
      v70 = v45;
      v27 = v65.rot.data[1][0];
      *(float *)LODWORD(v65.rot.data[2][0]) = v45;
      v71 = v27;
      *(float *)(LODWORD(v24) + 4) = v71;
      v72 = v63;
      *(float *)(LODWORD(v24) + 8) = v63;
      v46 = v25 * v25 + v26 * v26 + 0.0 * 0.0;
      v47 = sqrt(v46);
      v48 = v47 - v66;
      if ( v48 - v65.rot.data[2][2] <= dbl_A2FC68 )
        goto LABEL_39;
    }
    else
    {
      v28 = v65.rot.data[2][0];
      v66 = v65.rot.data[1][1] * dbl_A2FAA0;
      v49 = v66 + v65.rot.data[2][1];
      v65.rot.data[0][0] = v49 * v65.rot.data[0][0];
      v65.rot.data[0][1] = v49 * v65.rot.data[0][1];
      v65.rot.data[0][2] = v49 * v65.rot.data[0][2];
      v50 = v65.pos.y + v65.rot.data[0][0];
      v65.rot.data[1][0] = v65.pos.z + v65.rot.data[0][1];
      v64 = v65.scale + v65.rot.data[0][2];
      v67 = v50;
      v29 = v65.rot.data[1][0];
      *(float *)LODWORD(v65.rot.data[2][0]) = v50;
      v68 = v29;
      *(float *)(LODWORD(v28) + 4) = v68;
      v69 = v64;
      *(float *)(LODWORD(v28) + 8) = v64;
    }
    v30 = (bhkRefObject *)FormHeapAlloc(0x14u);
    LODWORD(v65.rot.data[1][0]) = v30;
    LOBYTE(v97) = 1;
    if ( v30 )
    {
      v51 = v66;
      v31 = sub_532090(v30, v51, COERCE_FLOAT(1));
    }
    else
    {
      v31 = 0;
    }
    v32 = (MobileObject *)TESDataHandler_g_PlayerRef;
    LOBYTE(v97) = 0;
    v33 = (HIWORD(sub_65ABE0(v32, &v74)->vtbl) << 0x10) | 0x1F;
    sub_532250(&v74.member.super.flags);
    LOBYTE(v97) = 2;
    v74.member.super.flags = v33;
    if ( v31 )
      v74.member.super.refID = (UInt32)v31->hkObject;
    else
      v74.member.super.refID = 0;
    v74.member.pos[0] = 0.0;
    v74.member.pos[1] = 0.0;
    v74.member.pos[2] = 0.0;
    v74.member.scale = 0.0;
    *(float *)&v74.member.parentCell = 0.0;
    *(float *)&v74.member.baseExtraList.vtbl = 0.0;
    *(float *)&v74.member.baseExtraList.members.m_data = 0.0;
    *(float *)v74.member.baseExtraList.members.m_presenceBitfield = 0.0;
    *(float *)&v74.member.baseExtraList.members.m_presenceBitfield[8] = 0.0;
    v74.member.rot.z = 1.0;
    *(float *)&v74.member.niNode = 1.0;
    *(float *)&v74.member.baseExtraList.members.m_presenceBitfield[4] = 1.0;
    v75[0] = 0.0;
    v75[1] = 0.0;
    v75[2] = 0.0;
    v75[3] = 0.0;
    v34 = hkFactor;
    v84.m128_f32[0] = *(float *)LODWORD(v65.rot.data[2][0]) * v34;
    v84.m128_f32[1] = *(float *)(LODWORD(v65.rot.data[2][0]) + 4) * v34;
    v84.m128_f32[2] = v34 * *(float *)(LODWORD(v65.rot.data[2][0]) + 8);
    sub_47DCD0(v75, &v84);
    sub_531FC0(&v73, (int)&v74.member.super.flags);
    LOBYTE(v97) = 3;
    v35 = TESObjectREFR_GetParentCell((TESObjectREFR *)LODWORD(v65.rot.data[1][2]));
    if ( TESObjectCELL_IsInterior(v35) )
      v36 = (int *)sub_424180(&v35->members.extraData);
    else
      v36 = (int *)bhkWorldM;
    sub_89F470(&v73, v36);
    v78 = &hkAllCdBodyPairCollector::`vftable';
    v80 = &v83;
    v82 = 0x80000010;
    LOBYTE(v97) = 4;
    v81 = 0;
    LOBYTE(v79) = 0;
    hkObject = v73.hkObject;
    if ( v73.hkObject )
    {
      sub_89F570(&v73);
      hkObject->__vftable[0xE].Destructor(hkObject, (bool)&v78);
      sub_89F570(&v73);
    }
    sub_8AECA0(&v73);
    if ( v31 )
      v31->__vftable->super.Destructor((NiRefObject *)v31, 1);
    if ( !v81 )
      v52 = 1;
    LOBYTE(v97) = 3;
    hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector((hkAllCdBodyPairCollector *)&v78);
    LOBYTE(v97) = 2;
    bhkSimpleShapePhantom::~bhkSimpleShapePhantom((bhkSimpleShapePhantom *)&v73);
    LOBYTE(v97) = 0;
    if ( (int)v74.member.baseForm >= 0 )
    {
      v38 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v38 )
        v38 = dword_BA7D9C;
      sub_8A75D0(v38, &v74.member.super.modlist.next->data, 8 * (int)v74.member.baseForm, 0x14);
    }
    x = v65.pos.x;
LABEL_39:
    v97 = 0xFFFFFFFF;
    sub_538C80(v96);
    ++LODWORD(x);
    v65.pos.x = x;
    if ( v52 )
      return v52;
    v6 = v65.rot.data[1][2];
  }
  if ( !a5 )
    return v52;
  v65.rot.data[2][2] = v65.rot.data[1][1] * dbl_A2FAA0;
  v40 = v65.rot.data[2][2];
  if ( v65.rot.data[2][2] > dbl_A4D910 )
    v40 = flt_A56670;
  v41 = v65.rot.data[2][0];
  v65.rot.data[1][2] = v40;
  *(_DWORD *)LODWORD(v65.rot.data[2][0]) = *(_DWORD *)(LODWORD(v6) + 0x2C);
  *(_DWORD *)(LODWORD(v41) + 4) = *(_DWORD *)(LODWORD(v6) + 0x30);
  *(_DWORD *)(LODWORD(v41) + 8) = *(_DWORD *)(LODWORD(v6) + 0x34);
  *(float *)(LODWORD(v41) + 8) = *(float *)(LODWORD(v41) + 8) + v65.rot.data[1][2];
  return 1;
}
