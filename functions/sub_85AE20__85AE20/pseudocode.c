char __fastcall sub_85AE20(float *a1, int a2, NiNode *a3, int a4, NiTPointerList_Node_void *a5, int a6)
{
  unsigned int v7; // ecx
  __int16 v8; // di
  _DWORD *v9; // eax
  int v10; // eax
  bool v11; // zf
  double v12; // st7
  int v13; // eax
  char v14; // al
  int (__thiscall *v15)(float *); // eax
  int v16; // eax
  char v17; // al
  int (__thiscall *v18)(float *); // eax
  int v19; // eax
  char v20; // al
  int v21; // edx
  int v22; // eax
  BSShaderAccumulator *inited; // eax
  int v24; // eax
  NiProperty *NiPropertyByID; // eax
  LONG (__stdcall *v26)(volatile LONG *); // ebx
  NiProperty *v27; // edi
  volatile LONG *v28; // ebp
  volatile LONG *v29; // ebp
  _DWORD *v30; // eax
  int v31; // eax
  void (__thiscall ***v32)(_DWORD, int); // edi
  char v33; // bp
  unsigned __int16 v34; // dx
  _DWORD *v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  int v38; // eax
  _DWORD *v39; // eax
  int v40; // eax
  int v41; // eax
  _DWORD *i; // eax
  _DWORD *v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int16 v47; // cx
  char v48; // al
  _DWORD *v49; // eax
  int v50; // edi
  char v51; // bl
  int v52; // eax
  int v53; // eax
  __int16 v54; // cx
  char v56; // [esp+15h] [ebp-87h] BYREF
  bool v57; // [esp+16h] [ebp-86h]
  char v58; // [esp+17h] [ebp-85h]
  char v59; // [esp+18h] [ebp-84h]
  char v60; // [esp+19h] [ebp-83h]
  bool v61; // [esp+1Ah] [ebp-82h]
  char v62; // [esp+1Bh] [ebp-81h] BYREF
  unsigned int v63; // [esp+1Ch] [ebp-80h]
  int v64; // [esp+21h] [ebp-7Bh]
  char v65; // [esp+25h] [ebp-77h]
  bool v66; // [esp+26h] [ebp-76h]
  bool v67; // [esp+27h] [ebp-75h]
  int v68; // [esp+28h] [ebp-74h]
  _DWORD *v69; // [esp+2Ch] [ebp-70h]
  _DWORD *j; // [esp+30h] [ebp-6Ch]
  int v71; // [esp+36h] [ebp-66h]
  int v72; // [esp+3Ah] [ebp-62h]
  char v73; // [esp+3Eh] [ebp-5Eh]
  char v74; // [esp+3Fh] [ebp-5Dh]
  char v75; // [esp+43h] [ebp-59h]
  int v76; // [esp+47h] [ebp-55h]
  bool v77; // [esp+4Bh] [ebp-51h]
  bool v78; // [esp+4Ch] [ebp-50h]
  bool v79; // [esp+4Dh] [ebp-4Fh]
  bool v80; // [esp+4Eh] [ebp-4Eh]
  char v81; // [esp+4Fh] [ebp-4Dh]
  BOOL v82; // [esp+50h] [ebp-4Ch] BYREF
  int v83; // [esp+54h] [ebp-48h]
  int v84; // [esp+58h] [ebp-44h]
  int v85; // [esp+5Ch] [ebp-40h]
  int v86; // [esp+60h] [ebp-3Ch] BYREF
  __int64 v87; // [esp+64h] [ebp-38h] BYREF
  int v88; // [esp+6Ch] [ebp-30h]
  int v89; // [esp+70h] [ebp-2Ch]
  NiProperty *v90; // [esp+74h] [ebp-28h]
  char v91; // [esp+78h] [ebp-24h]
  char v92; // [esp+7Ch] [ebp-20h]
  int v93; // [esp+80h] [ebp-1Ch]
  volatile LONG *v94; // [esp+84h] [ebp-18h] BYREF
  volatile LONG *v95; // [esp+88h] [ebp-14h] BYREF
  int v96; // [esp+8Ch] [ebp-10h]
  int v97; // [esp+98h] [ebp-4h]

  v7 = *((_DWORD *)a1 + 7);
  v8 = dword_B42EAC;
  v63 = 0;
  if ( (v7 & 1) != 0 || (LOBYTE(j) = 0, (v7 & 0x10) != 0) )
    LOBYTE(j) = 1;
  v57 = (v7 & 0x80) != 0;
  v92 = (v7 & 0x20000) != 0;
  v91 = (v7 & 2) != 0;
  LOBYTE(v86) = (v7 & 0x200000) != 0;
  LOBYTE(v71) = (v7 & 8) != 0;
  if ( (v7 & 0x20) != 0 || (v59 = 0, v8 == 3) )
    v59 = 1;
  v9 = *((_DWORD **)a1 + 0x31);
  LOBYTE(v84) = (v7 & 0x100) != 0;
  LOBYTE(v76) = *v9 != 0;
  v10 = *(_DWORD *)&a3->members.children.capacity;
  v74 = (v7 & 0x400) != 0;
  v11 = byte_B43074 == 0;
  LOBYTE(v96) = *(_DWORD *)(v10 + 0x24) != 0;
  if ( !v11
    || !dword_B43108
    || (dword_B42F40 & 0x20) == 0
    || ShaderPackage < 2
    || (v7 & 0x2000) != 0
    || (v12 = flt_B44F04, v85 = v82 | 0xC00, v87 = (__int64)v12, !(unsigned int)(__int64)v12)
    || (LOBYTE(v72) = 1, v7 >> 0x1C == 1) )
  {
    LOBYTE(v72) = 0;
  }
  v13 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 4))(a1);
  if ( v13 )
  {
    while ( (_UNKNOWN *)v13 != &unk_B468C8 )
    {
      v13 = *(_DWORD *)(v13 + 4);
      if ( !v13 )
        goto LABEL_18;
    }
    v14 = 1;
  }
  else
  {
LABEL_18:
    v14 = 0;
  }
  v11 = (v14 != 0 ? (unsigned int)a1 : 0) == 0;
  v15 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 4);
  LOBYTE(v64) = !v11;
  v16 = v15(a1);
  if ( v16 )
  {
    while ( (_UNKNOWN *)v16 != &unk_B478B0 )
    {
      v16 = *(_DWORD *)(v16 + 4);
      if ( !v16 )
        goto LABEL_22;
    }
    v17 = 1;
  }
  else
  {
LABEL_22:
    v17 = 0;
  }
  v11 = (v17 != 0 ? (unsigned int)a1 : 0) == 0;
  v18 = *(int (__thiscall **)(float *))(*(_DWORD *)a1 + 4);
  v77 = !v11;
  v19 = v18(a1);
  if ( v19 )
  {
    while ( (_UNKNOWN *)v19 != &unk_B468BC )
    {
      v19 = *(_DWORD *)(v19 + 4);
      if ( !v19 )
        goto LABEL_26;
    }
    v20 = 1;
  }
  else
  {
LABEL_26:
    v20 = 0;
  }
  v21 = ShaderPackage;
  v81 = ImageSpaceEffectEnabled;
  v83 = v21;
  v11 = (v20 != 0 ? (unsigned int)a1 : 0) == 0;
  v22 = *((_DWORD *)a1 + 7);
  v79 = !v11;
  LOBYTE(v88) = (v22 & 0x400000) != 0;
  LOBYTE(v68) = (v22 & 0x800) != 0;
  LOBYTE(v89) = (v22 & 0x1000) != 0;
  v66 = (v22 & 0x4000) != 0;
  v78 = (v22 & 0x8000) != 0;
  LOBYTE(v85) = (v22 & 0x10000) != 0;
  inited = InitBSShaderAccumulator();
  v61 = sub_7AA380(inited);
  v24 = *((_DWORD *)a1 + 7);
  if ( (v24 & 0x100000) == 0 || (v11 = byte_B42E86 == 0, v73 = 0, !v11) )
    v73 = 1;
  v75 = (v24 & 0x40000) != 0;
  NiPropertyByID = NiNode_GetNiPropertyByID(a3, 0);
  v26 = InterlockedDecrement;
  v27 = NiPropertyByID;
  v90 = NiPropertyByID;
  if ( !NiPropertyByID )
  {
    v11 = *sub_405760((NiGeometry *)a3, &v95) == 0;
    v97 = 0;
    if ( v11 )
    {
      v27 = 0;
    }
    else
    {
      v27 = *((NiProperty **)*sub_405760((NiGeometry *)a3, &v94) + 2);
      v63 = 1;
    }
    v90 = v27;
    if ( (v63 & 1) != 0 )
    {
      v28 = v94;
      v63 &= ~1u;
      if ( v94 )
      {
        if ( !v26(v94 + 1) )
        {
          if ( v28 )
            (**(void (__thiscall ***)(volatile LONG *, int))v28)(v28, 1);
        }
      }
    }
    v29 = v95;
    v97 = 0xFFFFFFFF;
    if ( v95 )
    {
      if ( !v26(v95 + 1) )
      {
        if ( v29 )
          (**(void (__thiscall ***)(volatile LONG *, int))v29)(v29, 1);
      }
    }
    if ( !v27 )
      goto LABEL_48;
  }
  v11 = ((int)v27[1].vtbl & 1) == 0;
  v58 = 1;
  if ( v11 )
LABEL_48:
    v58 = 0;
  if ( v27 && ((int)v27[1].vtbl & 0x200) != 0 )
  {
    LOBYTE(v93) = 1;
    LOBYTE(v84) = 0;
  }
  else
  {
    LOBYTE(v93) = 0;
  }
  if ( 0.0 == a1[0x29] )
  {
    v57 = 0;
  }
  else if ( v92 )
  {
    v57 = 1;
    LOBYTE(j) = 0;
  }
  if ( 0.0 == a1[0x27] )
    LOBYTE(j) = 0;
  v30 = *(_DWORD **)(GetShadowSceneNode(*((_DWORD *)a1 + 7) >> 0x1C) + 0x118);
  v69 = v30;
  if ( !(_BYTE)j
    || (v31 = *sub_405AD0(v30, &v82), v63 |= 2u, v65 = 1, !sub_8AA390((float *)(v31 + 0xF8), (float *)&dword_B3FA90)) )
  {
    v65 = 0;
  }
  if ( (v63 & 2) != 0 )
  {
    v32 = (void (__thiscall ***)(_DWORD, int))v82;
    if ( v82 )
    {
      if ( !v26((volatile LONG *)(v82 + 4)) )
      {
        if ( v32 )
          (**v32)(v32, 1);
      }
    }
  }
  v33 = v91;
  if ( a1[8] < 1.0 || v58 )
  {
    v62 = 1;
    if ( v61 )
    {
      sub_854E90(a1, (int)a3, a5, a6, &v62, v91);
      LOBYTE(j) = 0;
    }
    v59 = 1;
  }
  v56 = 1;
  v34 = sub_7ED600(a1);
  v80 = (a4 & 1) != 0;
  v67 = (a4 & 2) != 0;
  LODWORD(v87) = a4 & 1;
  v58 = (a4 & 4) != 0;
  if ( (a4 & 8) == 0 || (v60 = 1, !(_BYTE)j) )
    v60 = 0;
  if ( !v57 || (v61 = 1, (a4 & 8) == 0) )
    v61 = 0;
  LOBYTE(v82) = (a4 & 0xF) == 0xF;
  v57 = v82;
  v62 = 1;
  v63 = v34;
  if ( v78 || (_BYTE)v85 )
  {
    LOBYTE(v49) = (unsigned __int8)sub_854CD0(a1, (int)a3, a5, a6, &v56, v33, v85);
    return (char)v49;
  }
  if ( v77 || v79 )
  {
    LOBYTE(v49) = (*(char (__thiscall **)(float *, NiNode *, int, NiTPointerList_Node_void *, int))(*(_DWORD *)a1 + 0x98))(
                    a1,
                    a3,
                    a4,
                    a5,
                    a6);
    return (char)v49;
  }
  if ( v66 )
  {
    sub_85A390((int **)a1, a3, v69, a5, a6, &v56, (int)j, v72);
  }
  else if ( v73 )
  {
    if ( !v80 )
      goto LABEL_122;
    if ( !byte_B43073 )
    {
      if ( v59 )
        goto LABEL_101;
      if ( !v67 )
        goto LABEL_121;
      if ( v58 != v59 && v60 != v59 && v74 == v59 && (v81 == v59 || (_BYTE)v84 == v59) )
      {
LABEL_101:
        if ( (v34 <= 1u || v59) && v65 && (!v34 || !(_BYTE)v72) && (v83 >= 5 || !(_BYTE)v68 && !v75) && 1.0 == a1[0x27] )
        {
          if ( v74 )
          {
            sub_856D60(a1, (int)a3, (int)v69, a5, a6, &v56, v33, v76, v74, v71, v72, v68, v89, v64, v88, v75);
            v57 = 0;
          }
          else
          {
            if ( v34 )
            {
              v35 = sub_7ED2A0(a1);
              sub_8588E0(a1, (int)a3, (int)v69, (int)v35, a5, a6, &v56, v33, v76, 0, v71, v72, v68, v64, v75);
            }
            else
            {
              sub_8580E0(a1, (int)a3, (int)v69, a5, a6, &v56, v33, v76, 0, v71, v72, v68, v64, v75);
            }
            v57 = 0;
          }
          goto LABEL_140;
        }
      }
    }
    if ( v67 )
    {
      if ( v58 && (v34 <= 1u || v59) )
      {
        if ( v34 )
        {
          v36 = sub_7ED2A0(a1);
          sub_857750(a1, (int)a3, (int)v69, (int)v36, a5, a6, &v56, v33, v76, v74, v71, v72, v68, v64, v75);
        }
        else
        {
          sub_856D60(a1, (int)a3, (int)v69, a5, a6, &v56, v33, v76, v74, v71, v72, v68, v89, v64, v88, v75);
        }
        if ( !v60 )
        {
          v57 = 0;
LABEL_140:
          if ( v61 )
          {
            v43 = sub_7ED2A0(a1);
            sub_85A010(a1, (int)a3, (int)v69, (int)v43, a5, a6, &v56, v33, v92, v86);
            v57 = 1;
          }
          if ( *((_DWORD *)a1 + 0xD) > 2u || LOWORD(a5->next) > 2u )
          {
            if ( OcclusionCullngBool )
            {
              if ( !(_BYTE)v64 && !v59 && !(_BYTE)v84 )
              {
                if ( (_BYTE)a6 == 1 )
                {
                  v44 = FormHeapAlloc(0x10u);
                  v86 = v44;
                  v97 = 1;
                  if ( v44 )
                    v45 = sub_7E2370(v44, (int)a3, 3, 1, 0, 0);
                  else
                    v45 = 0;
                  v97 = 0xFFFFFFFF;
                  v86 = v45;
                  sub_6AA320((_DWORD *)a1 + 0xA, &v86);
                }
                else
                {
                  ++LOWORD(a5->next);
                }
              }
            }
          }
          goto LABEL_155;
        }
LABEL_136:
        if ( v65 )
          sub_859880(a1, (int)a3, (int)v69, a5, a6, &v56, v33, v71, v72, v68, v64, v75);
        for ( i = sub_7ED2A0(a1); i; i = (_DWORD *)sub_7ED4B0((int **)a1) )
          sub_859880(a1, (int)a3, (int)i, a5, a6, &v56, v33, v71, v72, v68, v64, v75);
        goto LABEL_140;
      }
      if ( v34 > 1u )
      {
        v83 = (int)sub_7ED2A0(a1);
        v38 = sub_7ED4B0((int **)a1);
        sub_856510(a1, (int)a3, (int)v69, v83, v38, a5, a6, &v56, v33, v76, v74, v71, v72, v68, v64);
        v63 -= 2;
      }
      else
      {
        v37 = sub_7ED2A0(a1);
        sub_855E80(a1, (int)a3, (int)v69, (int)v37, a5, a6, &v56, v33, v76, v74, v71, v72, v68, v64);
        v63 = 0;
      }
      v62 = 0;
LABEL_122:
      if ( v67 )
      {
        if ( v62 )
        {
          sub_853720(a1, (int)a3, (int)v69, a5, a6, &v56, v33, 0, v71, v64);
          v39 = sub_7ED2A0(a1);
        }
        else
        {
          v39 = (_DWORD *)sub_7ED4B0((int **)a1);
        }
        for ( j = v39; j; j = (_DWORD *)sub_7ED4B0((int **)a1) )
        {
          v40 = sub_7ED4B0((int **)a1);
          if ( v63 > 2 )
          {
            v83 = v40;
            v41 = sub_7ED4B0((int **)a1);
            sub_859430(a1, (int)a3, (int)j, v83, v41, a5, a6, &v56, v33, v74, v71, v68, v64);
            v63 -= 3;
          }
          else
          {
            sub_859160(a1, (int)a3, (int)j, v40, a5, a6, &v56, v33, v74, v71, v68, v64);
            if ( v63 > 1 )
              v63 -= 2;
            else
              v63 = 0;
          }
        }
      }
      if ( v58 )
        sub_859720(a1, (int)a3, (int)v69, a5, a6, &v56, v33, v71, v74, v96, v64, 0, v68, v75);
      if ( !v60 )
        goto LABEL_140;
      goto LABEL_136;
    }
LABEL_121:
    sub_852150(a1, (int)a3, (int)v69, a5, a6, &v56, v33, v93, v76, v64);
    goto LABEL_122;
  }
LABEL_155:
  if ( !v57 )
  {
    if ( *((_DWORD *)a1 + 0xD) )
    {
      v46 = *(_DWORD *)(*((_DWORD *)a1 + 0xC) + 8);
      v47 = *(_WORD *)(v46 + 4);
      if ( v47 != 0x190 && v47 != 0x192 )
        *(_BYTE *)(v46 + 7) = 1;
    }
  }
  if ( v82 )
  {
    if ( *((_DWORD *)a1 + 0x23) )
      sub_85A200(a1, (int)a3, a5, a6, &v56, v84, *((_DWORD *)a1 + 0x23));
  }
  if ( v57 )
  {
    v48 = v90 && ((int)v90[1].vtbl & 1) != 0;
    sub_854190(a1, (int)a3, a5, a6, &v56, v33, v64, v48);
  }
  if ( *((_DWORD *)a1 + 0x38) )
    sub_85ACC0(a1, (int)a3, a5, a6, &v56, v33);
  if ( byte_B43073 )
  {
    if ( (_DWORD)v87 )
      sub_854FF0(a1, (NiGeometry *)a3, a5, a6, v33, v76);
    if ( !(_BYTE)v64 && !(_BYTE)v88 && !(_BYTE)v68 && !(_BYTE)v89 && !v66 && !v75 )
      sub_855170(a1, (int)a3, (int)a5, a6, v33);
  }
  LOBYTE(v49) = sub_405A80();
  if ( (_BYTE)v49 )
  {
    v49 = sub_7ED1A0(a1);
    v50 = (int)v49;
    if ( v49 )
    {
      v51 = v64;
      do
      {
        if ( *(_BYTE *)(v50 + 0xF4) )
        {
          v52 = FormHeapAlloc(0x10u);
          LODWORD(v87) = v52;
          v97 = 2;
          if ( v52 )
            v53 = sub_7E2370(v52, (int)a3, 0, 0, 1u, v50);
          else
            v53 = 0;
          v97 = 0xFFFFFFFF;
          LODWORD(v87) = v53;
          if ( v91 )
          {
            v54 = 0x178;
          }
          else if ( v66 )
          {
            v54 = 0x179;
          }
          else
          {
            v54 = v51 != 0 ? 0x17A : 0x177;
          }
          *(_WORD *)(v53 + 4) = v54;
          *(_BYTE *)(v53 + 7) = 1;
          sub_6AA320((_DWORD *)a1 + 0xA, &v87);
        }
        v49 = (_DWORD *)sub_7ED3B0((int **)a1);
        v50 = (int)v49;
      }
      while ( v49 );
    }
  }
  return (char)v49;
}
