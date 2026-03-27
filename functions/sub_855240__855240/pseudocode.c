void __fastcall sub_855240(int a1, int a2, NiNode *a3, int a4, NiTPointerList_Node_void *a5, int a6)
{
  int v7; // eax
  char v8; // bl
  int v9; // eax
  char v10; // al
  int v11; // eax
  char v12; // al
  int v13; // eax
  char v14; // al
  BSShaderAccumulator *inited; // eax
  int v16; // eax
  NiProperty *NiPropertyByID; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  void (__thiscall ***v20)(_DWORD, int); // edi
  NiTPointerList_Node_void *v21; // edi
  int v22; // ebp
  char v23; // bl
  __int16 v24; // ax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  bool v29; // al
  _DWORD *v30; // eax
  char v31; // al
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  bool v34; // al
  _DWORD *v35; // eax
  bool v36; // al
  _DWORD *v37; // eax
  _DWORD *v38; // eax
  char v39; // [esp+12h] [ebp-46h]
  char v40; // [esp+13h] [ebp-45h]
  char v41; // [esp+14h] [ebp-44h]
  bool v42; // [esp+15h] [ebp-43h]
  bool v43; // [esp+16h] [ebp-42h]
  char v44; // [esp+17h] [ebp-41h]
  bool v45; // [esp+18h] [ebp-40h]
  bool v46; // [esp+19h] [ebp-3Fh]
  bool v47; // [esp+1Ah] [ebp-3Eh]
  bool v48; // [esp+1Bh] [ebp-3Dh]
  char v49; // [esp+1Ch] [ebp-3Ch]
  _DWORD *v50; // [esp+1Ch] [ebp-3Ch]
  _DWORD *i; // [esp+1Ch] [ebp-3Ch]
  _DWORD *v52; // [esp+1Ch] [ebp-3Ch]
  _DWORD *j; // [esp+1Ch] [ebp-3Ch]
  _DWORD *v54; // [esp+1Ch] [ebp-3Ch]
  int v55; // [esp+20h] [ebp-38h]
  _DWORD *v56; // [esp+24h] [ebp-34h]
  int v57; // [esp+28h] [ebp-30h]
  char v58; // [esp+2Ch] [ebp-2Ch]
  int v59; // [esp+30h] [ebp-28h]
  int v60; // [esp+34h] [ebp-24h]
  char v61; // [esp+38h] [ebp-20h]
  char v62; // [esp+3Ch] [ebp-1Ch]
  int v63; // [esp+40h] [ebp-18h]
  char v64; // [esp+44h] [ebp-14h]
  char v65; // [esp+48h] [ebp-10h]
  void (__thiscall ***v66)(_DWORD, int); // [esp+48h] [ebp-10h]
  void (__thiscall ***v67)(_DWORD, int); // [esp+48h] [ebp-10h]
  void (__thiscall ***v68)(_DWORD, int); // [esp+48h] [ebp-10h]
  char v69; // [esp+4Ch] [ebp-Ch]
  void (__thiscall ***v70)(_DWORD, int); // [esp+4Ch] [ebp-Ch]
  NiProperty *v71; // [esp+50h] [ebp-8h]
  int v72; // [esp+54h] [ebp-4h] BYREF

  v7 = *(_DWORD *)(a1 + 0x1C);
  v8 = 0;
  v58 = 0;
  LOBYTE(v60) = (v7 & 1) != 0;
  LOBYTE(v59) = (v7 & 0x10) != 0;
  if ( (v7 & 1) != 0 || (v39 = 0, (v7 & 0x10) != 0) )
    v39 = 1;
  v42 = (*(_DWORD *)(a1 + 0x1C) & 0x80) != 0;
  LOBYTE(v57) = (v7 & 8) != 0;
  v65 = (v7 & 2) != 0;
  if ( (v7 & 0x20) != 0 || (v40 = 0, LOWORD(dword_B42EAC) == 3) )
    v40 = 1;
  LOBYTE(v63) = **(_DWORD **)(a1 + 0xC4) != 0;
  v64 = (*(_DWORD *)(a1 + 0x1C) & 0x400) != 0;
  v61 = *(_DWORD *)(*(_DWORD *)&a3->members.children.capacity + 0x24) != 0;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( v9 )
  {
    while ( (_UNKNOWN *)v9 != &unk_B468C8 )
    {
      v9 = *(_DWORD *)(v9 + 4);
      if ( !v9 )
        goto LABEL_10;
    }
    v10 = 1;
  }
  else
  {
LABEL_10:
    v10 = 0;
  }
  LOBYTE(v55) = (v10 != 0 ? a1 : 0) != 0;
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( v11 )
  {
    while ( (_UNKNOWN *)v11 != &unk_B478B0 )
    {
      v11 = *(_DWORD *)(v11 + 4);
      if ( !v11 )
        goto LABEL_14;
    }
    v12 = 1;
  }
  else
  {
LABEL_14:
    v12 = 0;
  }
  v47 = (v12 != 0 ? a1 : 0) != 0;
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( v13 )
  {
    while ( (_UNKNOWN *)v13 != &unk_B468BC )
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
  v48 = (v14 != 0 ? a1 : 0) != 0;
  v43 = (*(_DWORD *)(a1 + 0x1C) & 0x4000) != 0;
  v46 = (*(_DWORD *)(a1 + 0x1C) & 0x8000) != 0;
  v49 = (*(_DWORD *)(a1 + 0x1C) & 0x10000) != 0;
  inited = InitBSShaderAccumulator();
  v45 = sub_7AA380(inited);
  v16 = *(_DWORD *)(a1 + 0x1C);
  if ( (v16 & 0x100000) == 0 || (v44 = 0, byte_B42E86) )
    v44 = 1;
  v69 = (v16 & 0x40000) != 0;
  NiPropertyByID = NiNode_GetNiPropertyByID(a3, 0);
  v71 = NiPropertyByID;
  if ( !NiPropertyByID || (v62 = 1, ((int)NiPropertyByID[1].vtbl & 0x200) == 0) )
    v62 = 0;
  if ( 0.0 == *(float *)(a1 + 0xA4) )
  {
    v42 = 0;
  }
  else if ( (*(_DWORD *)(a1 + 0x1C) & 0x20000) != 0 )
  {
    v42 = 1;
    v39 = 0;
  }
  if ( 0.0 == *(float *)(a1 + 0x9C) )
    v39 = 0;
  v18 = *(_DWORD **)(GetShadowSceneNode(*(_DWORD *)(a1 + 0x1C) >> 0x1C) + 0x118);
  v56 = v18;
  if ( !v39
    || (v19 = sub_405AD0(v18, &v72),
        v8 = 1,
        v58 = 1,
        v41 = 1,
        !sub_8AA390((float *)(*v19 + 0xF8), (float *)&dword_B3FA90)) )
  {
    v41 = 0;
  }
  if ( (v8 & 1) != 0 )
  {
    v20 = (void (__thiscall ***)(_DWORD, int))v72;
    v58 = v8 & 0xFE;
    if ( v72 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v72 + 4)) )
      {
        if ( v20 )
          (**v20)(v20, 1);
      }
    }
  }
  v21 = a5;
  v22 = a6;
  v23 = v65;
  if ( *(float *)(a1 + 0x20) < 1.0 || v71 && ((int)v71[1].vtbl & 1) != 0 )
  {
    LOBYTE(a5) = 1;
    if ( v45 )
    {
      sub_854E90((_DWORD *)a1, (int)a3, v21, a6, (char *)&a5, v65);
      v39 = 0;
    }
    v40 = 1;
  }
  LOBYTE(a5) = 1;
  if ( v46 || v49 )
    sub_854CD0((_DWORD *)a1, (int)a3, v21, v22, (char *)&a5, v65, v49);
  v24 = sub_7ED600((_DWORD *)a1);
  if ( v44 )
  {
    if ( v40 )
      goto LABEL_56;
    if ( a4 == 0xF && !(_BYTE)v57 )
    {
      if ( !v43 )
      {
LABEL_56:
        if ( v24 )
        {
          if ( !v40 )
          {
            v50 = sub_7ED2A0((_DWORD *)a1);
            if ( v62 || v65 || (_BYTE)v63 )
            {
              if ( (a4 & 1) != 0 )
                sub_852150((_DWORD *)a1, (int)a3, (int)v56, v21, v22, &a5, v65, v62, v63, v55);
              v25 = sub_405AD0(v56, &v72);
              LOBYTE(a6) = sub_8AA390((float *)(*v25 + 0xEC), (float *)&dword_B3FA90);
              sub_7016A0((NiD3DVertexShader *)&v72);
              if ( (_BYTE)a6 )
                sub_853720((_DWORD *)a1, (int)a3, (int)v56, v21, v22, (char *)&a5, v65, 0, v57, v55);
              v26 = sub_405AD0(v50, &v72);
              LOBYTE(a6) = sub_8AA390((float *)(*v26 + 0xEC), (float *)&dword_B3FA90);
              sub_7016A0((NiD3DVertexShader *)&v72);
              if ( (_BYTE)a6 )
                sub_853720((_DWORD *)a1, (int)a3, (int)v50, v21, v22, (char *)&a5, v65, 1, v57, v55);
            }
            else
            {
              sub_853580((_DWORD *)a1, (int)a3, (int)v56, (int)v50, v21, v22, &a5, 0, v55);
            }
            for ( i = (_DWORD *)sub_7ED4B0((int **)a1); i; i = (_DWORD *)sub_7ED4B0((int **)a1) )
            {
              v27 = sub_405AD0(i, &v72);
              LOBYTE(a6) = sub_8AA390((float *)(*v27 + 0xEC), (float *)&dword_B3FA90);
              if ( v72 )
              {
                v66 = (void (__thiscall ***)(_DWORD, int))v72;
                if ( !InterlockedDecrement((volatile LONG *)(v72 + 4)) )
                  (**v66)(v66, 1);
              }
              if ( (_BYTE)a6 )
                sub_853720((_DWORD *)a1, (int)a3, (int)i, v21, v22, (char *)&a5, v23, 1, v57, v55);
            }
            sub_853970((_DWORD *)a1, (int)a3, (int)v56, v21, v22, (char *)&a5, v23, v57, v64, v61, v55, v69);
            if ( v39 )
            {
              v52 = sub_7ED2A0((_DWORD *)a1);
              if ( !v41
                || (v28 = sub_405AD0(v56, &v72),
                    v58 |= 2u,
                    v29 = sub_8AA390((float *)(*v28 + 0xEC), (float *)&dword_B3FA90),
                    LOBYTE(a6) = 1,
                    !v29) )
              {
                LOBYTE(a6) = 0;
              }
              if ( (v58 & 2) != 0 )
                sub_7016A0((NiD3DVertexShader *)&v72);
              if ( (_BYTE)a6 )
              {
                sub_853DC0((_DWORD *)a1, (int)a3, (int)v56, v21, v22, (char *)&a5, v23, 0, v57, v60, v59, v55);
              }
              else
              {
                sub_853DC0((_DWORD *)a1, (int)a3, (int)v52, v21, v22, (char *)&a5, v23, 1, v57, v60, v59, v55);
                v52 = (_DWORD *)sub_7ED4B0((int **)a1);
              }
              for ( ; v52; v52 = (_DWORD *)sub_7ED4B0((int **)a1) )
              {
                v30 = sub_405AD0(v52, &v72);
                LOBYTE(a6) = sub_8AA390((float *)(*v30 + 0xEC), (float *)&dword_B3FA90);
                sub_7016A0((NiD3DVertexShader *)&v72);
                if ( (_BYTE)a6 )
                  sub_853DC0((_DWORD *)a1, (int)a3, (int)v52, v21, v22, (char *)&a5, v23, 1, v57, v60, v59, v55);
              }
            }
            if ( v42 )
LABEL_89:
              sub_853F80((_DWORD *)a1, (int)a3, v21, v22, (char *)&a5, v23, v61);
LABEL_90:
            if ( !v43 )
              goto LABEL_92;
            goto LABEL_91;
          }
        }
        else if ( !v40 && v41 )
        {
          goto LABEL_102;
        }
        if ( !v47 && !v48 )
        {
          sub_852470((_DWORD *)a1, (int)a3, (int)v56, v21, v22, &a5, v65, v62, v63, v64, 1, v61, v55);
          v40 = 1;
          goto LABEL_103;
        }
LABEL_102:
        sub_852470((_DWORD *)a1, (int)a3, (int)v56, v21, v22, &a5, v65, v62, v63, v64, 0, v61, v55);
LABEL_103:
        if ( v41 )
        {
          if ( !v40 )
            sub_853DC0((_DWORD *)a1, (int)a3, (int)v56, v21, v22, (char *)&a5, v65, 0, v57, v60, v59, v55);
        }
        if ( v42 )
          goto LABEL_89;
        goto LABEL_90;
      }
LABEL_91:
      sub_854380((_DWORD *)a1, a3, (int)v56, v21, v22, (char *)&a5, 0);
      goto LABEL_92;
    }
  }
  if ( v43 )
    goto LABEL_91;
  LOBYTE(a5) = 1;
  if ( (a4 & 1) != 0 )
    sub_852150((_DWORD *)a1, (int)a3, (int)v56, v21, v22, &a5, v65, v62, v63, v55);
  NiNode_GetNiPropertyByID(a3, 0);
  if ( (a4 & 2) != 0 )
  {
    v32 = sub_405AD0(v56, &v72);
    LOBYTE(a6) = sub_8AA390((float *)(*v32 + 0xEC), (float *)&dword_B3FA90);
    if ( v72 )
    {
      v67 = (void (__thiscall ***)(_DWORD, int))v72;
      if ( !InterlockedDecrement((volatile LONG *)(v72 + 4)) )
        (**v67)(v67, 1);
    }
    if ( (_BYTE)a6 )
      sub_853720((_DWORD *)a1, (int)a3, (int)v56, v21, v22, (char *)&a5, v23, 0, v57, v55);
    for ( j = sub_7ED2A0((_DWORD *)a1); j; j = (_DWORD *)sub_7ED4B0((int **)a1) )
    {
      v33 = sub_405AD0(j, &v72);
      v34 = *(float *)&dword_B3FA90 == *(float *)(*v33 + 0xEC)
         && *(float *)&dword_B3FA94 == *(float *)(*v33 + 0xF0)
         && *(float *)&dword_B3FA98 == *(float *)(*v33 + 0xF4);
      LOBYTE(a6) = !v34;
      if ( v72 )
      {
        v68 = (void (__thiscall ***)(_DWORD, int))v72;
        if ( !InterlockedDecrement((volatile LONG *)(v72 + 4)) )
          (**v68)(v68, 1);
      }
      if ( (_BYTE)a6 )
        sub_853720((_DWORD *)a1, (int)a3, (int)j, v21, v22, (char *)&a5, v23, 1, v57, v55);
    }
  }
  if ( (a4 & 4) != 0 )
    sub_853970((_DWORD *)a1, (int)a3, (int)v56, v21, v22, (char *)&a5, v23, v57, v64, v61, v55, v69);
  if ( v39 && (a4 & 8) != 0 )
  {
    v54 = sub_7ED2A0((_DWORD *)a1);
    if ( !v41
      || (v35 = sub_405AD0(v56, &v72),
          v58 |= 4u,
          v36 = sub_8AA390((float *)(*v35 + 0xEC), (float *)&dword_B3FA90),
          LOBYTE(a6) = 1,
          !v36) )
    {
      LOBYTE(a6) = 0;
    }
    if ( (v58 & 4) != 0 )
      sub_7016A0((NiD3DVertexShader *)&v72);
    if ( (_BYTE)a6 )
    {
      sub_853DC0((_DWORD *)a1, (int)a3, (int)v56, v21, v22, (char *)&a5, v23, 0, v57, v60, v59, v55);
      LOBYTE(a5) = 0;
LABEL_143:
      while ( v54 )
      {
        v38 = sub_405AD0(v54, &v72);
        LOBYTE(a6) = sub_8AA390((float *)(*v38 + 0xEC), (float *)&dword_B3FA90);
        if ( v72 )
        {
          v70 = (void (__thiscall ***)(_DWORD, int))v72;
          if ( !InterlockedDecrement((volatile LONG *)(v72 + 4)) )
            (**v70)(v70, 1);
        }
        if ( (_BYTE)a6 )
          sub_853DC0((_DWORD *)a1, (int)a3, (int)v54, v21, v22, (char *)&a5, v23, 1, v57, v60, v59, v55);
        v54 = (_DWORD *)sub_7ED4B0((int **)a1);
      }
      goto LABEL_150;
    }
    if ( v54 )
    {
      v37 = sub_405AD0(v54, &v72);
      LOBYTE(a6) = sub_8AA390((float *)(*v37 + 0xEC), (float *)&dword_B3FA90);
      sub_7016A0((NiD3DVertexShader *)&v72);
      if ( (_BYTE)a6 )
      {
        sub_853DC0((_DWORD *)a1, (int)a3, (int)v54, v21, v22, (char *)&a5, v23, 1, v57, v60, v59, v55);
        v54 = (_DWORD *)sub_7ED4B0((int **)a1);
      }
      goto LABEL_143;
    }
  }
LABEL_150:
  if ( v42 && (a4 & 8) != 0 )
    sub_853F80((_DWORD *)a1, (int)a3, v21, v22, (char *)&a5, v23, v61);
LABEL_92:
  if ( a4 == 0xF && !v40 )
  {
    v31 = v71 && ((int)v71[1].vtbl & 1) != 0;
    sub_854190((_DWORD *)a1, (int)a3, v21, v22, (char *)&a5, v23, v55, v31);
  }
  if ( *(_DWORD *)(a1 + 0xE0) )
    sub_854B70((_DWORD *)a1, (int)a3, v21, v22, (char *)&a5, v23);
  if ( byte_B43073 )
  {
    if ( (a4 & 1) != 0 )
      sub_854FF0((_DWORD *)a1, (NiGeometry *)a3, v21, v22, v23, v63);
  }
}
