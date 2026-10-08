void __fastcall sub_49AD00(int **this)
{
  TESObjectREFR *v2; // ecx
  bool v3; // zf
  double v4; // st7
  ExtraDataList *CurrentCell; // eax
  TESObjectCELL *v6; // ebx
  float v7; // eax
  PlayerCharacter *v8; // esi
  double v9; // st7
  float v10; // eax
  float v11; // ecx
  double v12; // st7
  double v13; // st6
  int v14; // eax
  double v15; // st6
  float x; // ecx
  float y; // edx
  float z; // eax
  double v19; // st6
  double v20; // st7
  double v21; // st5
  float v22; // ecx
  float v23; // edx
  double v24; // st2
  TESObjectCELL *CellAtWorldPosition; // edi
  float v26; // ebp
  double v27; // st4
  double v28; // st3
  double v29; // st2
  double v30; // rt2
  double v31; // st2
  double v32; // st3
  double v33; // st7
  double v34; // st5
  float v35; // eax
  double v36; // rt2
  double v37; // st6
  double v38; // st7
  TES *v39; // ecx
  TESWorldSpace *CurrentWorldspace; // eax
  double v41; // st7
  NiNode *v42; // esi
  BSShaderProperty *v43; // eax
  double v44; // st7
  bool v45; // c0
  double v46; // st7
  double v47; // st7
  double v48; // st7
  BSShaderProperty *v49; // eax
  double v50; // st7
  bool v51; // c0
  double v52; // st7
  double v53; // st7
  double v54; // st7
  double v55; // st5
  double v56; // st4
  double v57; // st6
  int *v58; // ecx
  unsigned int v59; // esi
  int v60; // eax
  NiNode *v61; // esi
  BSShaderProperty *v62; // eax
  double v63; // st7
  NiAVObject *v64; // esi
  BSShaderProperty *v65; // eax
  int *v66; // ecx
  unsigned int v67; // esi
  int *v68; // ecx
  int v69; // eax
  int *v70; // ecx
  float v71; // [esp+8h] [ebp-D4h]
  float v72; // [esp+8h] [ebp-D4h]
  float v73; // [esp+8h] [ebp-D4h]
  float a3; // [esp+20h] [ebp-BCh] BYREF
  float WaterHeight; // [esp+24h] [ebp-B8h]
  float v76; // [esp+28h] [ebp-B4h] BYREF
  float v77; // [esp+2Ch] [ebp-B0h]
  float v78; // [esp+30h] [ebp-ACh]
  NiPoint3 a2; // [esp+34h] [ebp-A8h] BYREF
  float v80; // [esp+40h] [ebp-9Ch]
  float v81; // [esp+44h] [ebp-98h]
  float v82; // [esp+48h] [ebp-94h]
  int v83; // [esp+4Ch] [ebp-90h]
  int **v84; // [esp+50h] [ebp-8Ch]
  int v85; // [esp+54h] [ebp-88h]
  int v86; // [esp+58h] [ebp-84h] BYREF
  float v87; // [esp+5Ch] [ebp-80h]
  float v88; // [esp+60h] [ebp-7Ch]
  float v89; // [esp+64h] [ebp-78h]
  float v90; // [esp+68h] [ebp-74h]
  float v91; // [esp+6Ch] [ebp-70h]
  float v92; // [esp+70h] [ebp-6Ch]
  double v93; // [esp+74h] [ebp-68h] BYREF
  float v94; // [esp+7Ch] [ebp-60h]
  int v95; // [esp+84h] [ebp-58h] BYREF
  float v96; // [esp+88h] [ebp-54h]
  float v97; // [esp+8Ch] [ebp-50h]
  float v98; // [esp+90h] [ebp-4Ch]
  float v99; // [esp+94h] [ebp-48h]
  float v100; // [esp+98h] [ebp-44h]
  float v101; // [esp+9Ch] [ebp-40h]
  float worldXY[5]; // [esp+A0h] [ebp-3Ch] BYREF
  float v103; // [esp+B4h] [ebp-28h]
  float v104[3]; // [esp+B8h] [ebp-24h] BYREF
  double v105; // [esp+C4h] [ebp-18h]
  double v106; // [esp+CCh] [ebp-10h]
  double v107; // [esp+D4h] [ebp-8h]

  v2 = (TESObjectREFR *)reference; /*0x49ad12*/
  v3 = reference == 0; /*0x49ad18*/
  v84 = this; /*0x49ad1a*/
  if ( v3 ) /*0x49ad1e*/
  {
    CurrentCell = (ExtraDataList *)TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x49ad46*/
  }
  else
  {
    v4 = (double)dword_B070B0; /*0x49ad25*/
    if ( dword_B070B0 < 0 ) /*0x49ad2d*/
      v4 = v4 + flt_A2FC78; /*0x49ad2f*/
    v71 = v4; /*0x49ad36*/
    CurrentCell = (ExtraDataList *)sub_65E5E0(v2, v71); /*0x49ad39*/
  }
  v6 = (TESObjectCELL *)CurrentCell; /*0x49ad55*/
  if ( MEMORY[0xB33398]->sound ) /*0x49ad51*/
  {
    if ( !CurrentCell || (CurrentCell[1].members.m_presenceBitfield[8] & 2) == 0 ) /*0x49ad6e*/
    {
      if ( MEMORY[0xB33E90][0x13B8] ) /*0x49b5c4*/
      {
        v70 = *(this + 0x10); /*0x49b5cd*/
        if ( v70 ) /*0x49b5d2*/
        {
          MEMORY[0xB33E90][0x13B8] = 0; /*0x49b5d4*/
          sub_6B7240(v70); /*0x49b5db*/
        }
      }
      goto LABEL_81; /*0x49b5db*/
    }
    WaterHeight = TESObjectCELL_GetWaterHeight(CurrentCell); /*0x49ad7b*/
    v7 = g_TESObjectTREE_InitialBillboardSizeX; /*0x49ad85*/
    v77 = g_TESObjectTREE_InitialBillboardSizeY; /*0x49ad8a*/
    v76 = v7; /*0x49ad90*/
    if ( TESObjectCELL_IsInterior(v6) ) /*0x49ad94*/
    {
      v3 = MEMORY[0xB33E90][0x138C] == 0; /*0x49ada3*/
      v8 = reference; /*0x49adac*/
      v9 = flt_B070D0; /*0x49adb2*/
      v10 = reference->super.super.super.super.pos[1]; /*0x49adbb*/
      v11 = reference->super.super.super.super.pos[2]; /*0x49adbe*/
      v90 = reference->super.super.super.super.pos[0]; /*0x49adc1*/
      v91 = v10; /*0x49adc5*/
      v92 = v11; /*0x49adc9*/
      if ( !v3 ) /*0x49adcd*/
      {
        a3 = 0.0; /*0x49add3*/
        goto LABEL_55; /*0x49add7*/
      }
      WaterHeight = WaterHeight - v92; /*0x49ade4*/
      WaterHeight = fabs(WaterHeight); /*0x49adee*/
      if ( WaterHeight >= v9 ) /*0x49adfd*/
      {
        a3 = 0.0; /*0x49ae27*/
        goto LABEL_55; /*0x49ae2b*/
      }
      v12 = (v9 - WaterHeight) / v9; /*0x49ae01*/
      goto LABEL_14; /*0x49ae01*/
    }
    v13 = (double)dword_B070B8; /*0x49ae36*/
    if ( dword_B070B8 < 0 ) /*0x49ae3e*/
      v13 = v13 + flt_A2FC78; /*0x49ae40*/
    v14 = dword_B070B0; /*0x49ae46*/
    v80 = v13; /*0x49ae4b*/
    v15 = (double)dword_B070B0; /*0x49ae51*/
    if ( v14 < 0 ) /*0x49ae57*/
      v15 = v15 + flt_A2FC78; /*0x49ae59*/
    v82 = v15; /*0x49ae5f*/
    x = g_zeroNiPoint3.x; /*0x49ae63*/
    y = g_zeroNiPoint3.y; /*0x49ae6f*/
    v106 = flt_B070D8; /*0x49ae75*/
    z = g_zeroNiPoint3.z; /*0x49ae7c*/
    v19 = 0.0; /*0x49ae81*/
    v20 = v106; /*0x49ae81*/
    v8 = reference; /*0x49ae83*/
    a3 = 0.0; /*0x49ae89*/
    a2.z = z; /*0x49ae8d*/
    v21 = v82; /*0x49ae91*/
    a2.x = x; /*0x49ae95*/
    v93 = v82; /*0x49ae99*/
    a2.y = y; /*0x49ae9d*/
    v22 = v8->super.super.super.super.pos[0]; /*0x49aea8*/
    v23 = v8->super.super.super.super.pos[1]; /*0x49aeaf*/
    v24 = dbl_A2F928; /*0x49aeb2*/
    v103 = v8->super.super.super.super.pos[2]; /*0x49aeb8*/
    CellAtWorldPosition = 0; /*0x49aec1*/
    v26 = 0.0; /*0x49aec3*/
    worldXY[3] = v22; /*0x49aec5*/
    worldXY[4] = v23; /*0x49aece*/
    v85 = 0; /*0x49aed5*/
    v27 = v80; /*0x49aed9*/
    v82 = (v82 + v82) / (v80 - v24); /*0x49aedb*/
    v28 = 0.0; /*0x49aedf*/
    if ( v80 <= 0.0 ) /*0x49aee8*/
    {
LABEL_47:
      v55 = v27; /*0x49b21c*/
      v80 = v26; /*0x49b222*/
      v56 = (double)SLODWORD(v26); /*0x49b226*/
      if ( v26 < 0.0 ) /*0x49b22a*/
        v56 = v56 + flt_A2FC78; /*0x49b22c*/
      v3 = MEMORY[0xB33E90][0x138C] == 0; /*0x49b232*/
      v80 = v56; /*0x49b239*/
      this = v84; /*0x49b241*/
      v76 = v76 / v80; /*0x49b257*/
      v77 = v77 / v80; /*0x49b25f*/
      v76 = v76 - v8->super.super.super.super.pos[0]; /*0x49b26a*/
      v77 = v77 - v8->super.super.super.super.pos[1]; /*0x49b275*/
      a3 = (v80 + v80) / (v55 * v55); /*0x49b281*/
      if ( !v3 ) /*0x49b285*/
      {
        a3 = v19; /*0x49b289*/
        goto LABEL_55; /*0x49b28d*/
      }
      WaterHeight = WaterHeight - v103; /*0x49b2a1*/
      WaterHeight = fabs(WaterHeight); /*0x49b2ab*/
      if ( WaterHeight >= v20 ) /*0x49b2ba*/
      {
        a3 = v19; /*0x49b2d7*/
        goto LABEL_55; /*0x49b2d7*/
      }
      WaterHeight = (v20 - WaterHeight) / v20; /*0x49b2c2*/
      v12 = WaterHeight * a3; /*0x49b2ca*/
LABEL_14:
      a3 = v12; /*0x49ae03*/
      if ( a3 > 1.0 ) /*0x49ae12*/
        a3 = 1.0; /*0x49ae18*/
LABEL_55:
      sub_499020(&v76); /*0x49b2df*/
      v57 = (double)dword_B070B0; /*0x49b2fa*/
      if ( dword_B070B0 < 0 ) /*0x49b300*/
        v57 = v57 + flt_A2FC78; /*0x49b302*/
      WaterHeight = (1.0 - a3) * v57; /*0x49b316*/
      v81 = v77; /*0x49b31a*/
      v80 = WaterHeight * v76; /*0x49b32a*/
      v76 = v80; /*0x49b332*/
      v58 = *(this + 0x10); /*0x49b33a*/
      v81 = WaterHeight * v77; /*0x49b33f*/
      v77 = v81; /*0x49b34b*/
      v76 = v80 + v8->super.super.super.super.pos[0]; /*0x49b352*/
      v77 = v8->super.super.super.super.pos[1] + v81; /*0x49b35d*/
      if ( v58 ) /*0x49b361*/
      {
        if ( !sub_6B73A0(v58) ) /*0x49b363*/
        {
          v59 = (unsigned int)*(this + 0x10); /*0x49b36c*/
          if ( v59 ) /*0x49b371*/
          {
            sub_6B73E0(*(this + 0x10)); /*0x49b375*/
            FormHeapFree(v59); /*0x49b37b*/
          }
          *(this + 0x10) = 0; /*0x49b383*/
        }
        v8 = reference; /*0x49b386*/
      }
      if ( *(this + 0x10) ) /*0x49b38c*/
      {
        if ( MEMORY[0xB33E90][0x139A] ) /*0x49b395*/
        {
          v60 = (int)v8->vtbl->super.super.super.GetPos((TESObjectREFR *)v8); /*0x49b3ac*/
          v93 = *(double *)v60; /*0x49b3b0*/
          v94 = *(float *)(v60 + 8); /*0x49b3be*/
          v94 = v94 + dbl_A3F3E8; /*0x49b3d2*/
          a2.x = v76; /*0x49b3da*/
          a2.y = v77; /*0x49b3e2*/
          a2.z = v94; /*0x49b3ea*/
          *(float *)&v86 = 1.0; /*0x49b3f0*/
          v87 = 0.0; /*0x49b3f6*/
          v88 = 0.0; /*0x49b3fa*/
          v89 = 0.0; /*0x49b3fe*/
          v61 = (NiNode *)sub_47FD30(flt_A31C80, (NiD3DPassVtbl **)&v86); /*0x49b413*/
          v62 = (BSShaderProperty *)sub_4E70B0(); /*0x49b415*/
          sub_405680(v61, v62); /*0x49b41d*/
          v63 = flt_A31C80; /*0x49b422*/
          v61->members.super.m_localTransform.pos = a2; /*0x49b42c*/
          v72 = v63; /*0x49b43b*/
          sub_440E60(MEMORY[0xB333A0], (int)v61, v72); /*0x49b448*/
          *(float *)&v86 = 1.0; /*0x49b44f*/
          v87 = 1.0; /*0x49b457*/
          v88 = 0.0; /*0x49b462*/
          v89 = 0.0; /*0x49b467*/
          v97 = 0.0; /*0x49b472*/
          v98 = 0.0; /*0x49b47a*/
          *(float *)&v95 = 1.0; /*0x49b486*/
          v96 = 1.0; /*0x49b48d*/
          v64 = sub_47F070(&v93, &v95, &a2, &v86); /*0x49b49c*/
          v65 = (BSShaderProperty *)sub_4E70B0(); /*0x49b49e*/
          sub_405680((NiNode *)v64, v65); /*0x49b4a6*/
          sub_440E60(MEMORY[0xB333A0], (int)v64, flt_A31C80); /*0x49b4bc*/
        }
        v73 = TESObjectCELL_GetWaterHeight((ExtraDataList *)v6); /*0x49b4ce*/
        sub_6B7360(*(this + 0x10), v76, v77, v73); /*0x49b4e1*/
        if ( SoundHandle::IsPlaying((UInt32 *)*(this + 0x10)) && a3 <= 0.0 ) /*0x49b4fd*/
        {
          v66 = *(this + 0x10); /*0x49b4ff*/
          MEMORY[0xB33E90][0x13B8] = 0; /*0x49b502*/
          sub_6B7240(v66); /*0x49b509*/
          sub_6B73C0(*(this + 0x10)); /*0x49b511*/
          v67 = (unsigned int)*(this + 0x10); /*0x49b516*/
          if ( v67 ) /*0x49b51b*/
          {
            sub_6B73E0(*(this + 0x10)); /*0x49b51f*/
            FormHeapFree(v67); /*0x49b525*/
          }
          *(this + 0x10) = 0; /*0x49b52d*/
          MEMORY[0xB33E90][0x139A] = 0; /*0x49b530*/
          return; /*0x49b53e*/
        }
        if ( !SoundHandle::IsPlaying((UInt32 *)*(this + 0x10)) && a3 > 0.0 ) /*0x49b55a*/
        {
          v68 = *(this + 0x10); /*0x49b560*/
          MEMORY[0xB33E90][0x13B8] = 1; /*0x49b565*/
          sub_6B7190(v68, 1); /*0x49b56c*/
          MEMORY[0xB33E90][0x139A] = 0; /*0x49b571*/
          return; /*0x49b57f*/
        }
      }
      else if ( a3 > 0.0 ) /*0x49b58b*/
      {
        if ( *(_DWORD *)&MEMORY[0xB33E90][0x1390] ) /*0x49b58d*/
        {
          v69 = *(_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0x1390] + 0x38); /*0x49b596*/
          if ( v69 ) /*0x49b59b*/
          {
            *(this + 0x10) = OSGLobals_PlaySound((int *)MEMORY[0xB33398]->sound, *(void **)(v69 + 0xC), 0x12, 0); /*0x49b5b2*/
            MEMORY[0xB33E90][0x139A] = 0; /*0x49b5b5*/
            return; /*0x49b5c3*/
          }
        }
      }
LABEL_81:
      MEMORY[0xB33E90][0x139A] = 0; /*0x49b5e0*/
      return; /*0x49b5e0*/
    }
    v29 = 0.0; /*0x49aeee*/
    while ( 1 ) /*0x49aef0*/
    {
      v30 = v29; /*0x49aef0*/
      v31 = v28; /*0x49aef0*/
      v32 = v30; /*0x49aef0*/
      v83 = 0; /*0x49aef2*/
      if ( v31 < v27 ) /*0x49af01*/
        break; /*0x49af01*/
      v28 = v31; /*0x49b28f*/
LABEL_46:
      v29 = (double)++v85; /*0x49b209*/
      if ( v29 >= v27 ) /*0x49b214*/
        goto LABEL_47; /*0x49b214*/
    }
    v107 = v21 * dbl_A3D360; /*0x49af13*/
    v33 = v107; /*0x49af22*/
    v105 = v32 * v82 + v107; /*0x49af24*/
    v78 = v19; /*0x49af2b*/
    v34 = v78; /*0x49af2f*/
    while ( 1 ) /*0x49af49*/
    {
      a2.x = v8->super.super.super.super.pos[0]; /*0x49af49*/
      a2.y = v8->super.super.super.super.pos[1]; /*0x49af50*/
      v35 = v8->super.super.super.super.pos[2]; /*0x49af54*/
      a3 = v19; /*0x49af57*/
      a2.z = v35; /*0x49af5f*/
      a2.x = a2.x + v105; /*0x49af6a*/
      v36 = v19; /*0x49af74*/
      v37 = v33 + v34 * v82 + a2.y; /*0x49af7e*/
      v38 = v36; /*0x49af7e*/
      a2.y = v37; /*0x49af80*/
      if ( CellAtWorldPosition ) /*0x49af84*/
      {
        v104[0] = a2.x; /*0x49af91*/
        v104[1] = a2.y; /*0x49af9f*/
        v104[2] = v38; /*0x49afa6*/
        if ( sub_4CC540((int)CellAtWorldPosition, v104) ) /*0x49afad*/
          goto LABEL_30; /*0x49afb4*/
        v38 = 0.0; /*0x49afb6*/
      }
      v39 = MEMORY[0xB333A0]; /*0x49afbc*/
      worldXY[0] = a2.x; /*0x49afc2*/
      worldXY[1] = a2.y; /*0x49afd5*/
      worldXY[2] = v38; /*0x49afdc*/
      CurrentWorldspace = TES::GetCurrentWorldspace(v39); /*0x49afe3*/
      CellAtWorldPosition = TESWorldSpace_GetCellAtWorldPosition(CurrentWorldspace, worldXY); /*0x49afef*/
LABEL_30:
      if ( CellAtWorldPosition ) /*0x49aff3*/
        v41 = TESObjectCELL_GetWaterHeight((ExtraDataList *)CellAtWorldPosition); /*0x49aff7*/
      else
        v41 = flt_A3B888; /*0x49affe*/
      v78 = v41; /*0x49b008*/
      if ( GetTerrainHeight(MEMORY[0xB333A0], &a2.x, &a3) && v78 > (double)a3 ) /*0x49b034*/
      {
        ++LODWORD(v26); /*0x49b03e*/
        v3 = MEMORY[0xB33E90][0x139A] == 0; /*0x49b041*/
        v76 = v76 + a2.x; /*0x49b04c*/
        v77 = v77 + a2.y; /*0x49b058*/
        if ( v3 ) /*0x49b05c*/
          goto LABEL_44; /*0x49b05c*/
        *(float *)&v95 = 0.0; /*0x49b068*/
        v96 = 1.0; /*0x49b070*/
        v97 = 0.0; /*0x49b077*/
        v98 = 0.0; /*0x49b07e*/
        v42 = (NiNode *)sub_47FD30(flt_A31C80, (NiD3DPassVtbl **)&v95); /*0x49b096*/
        v43 = (BSShaderProperty *)sub_4E70B0(); /*0x49b098*/
        sub_405680(v42, v43); /*0x49b0a0*/
        v44 = TESObjectCELL_GetWaterHeight((ExtraDataList *)v6); /*0x49b0a7*/
        v45 = a3 < v44; /*0x49b0b0*/
        v46 = a3; /*0x49b0b4*/
        if ( v45 ) /*0x49b0b9*/
          v46 = TESObjectCELL_GetWaterHeight((ExtraDataList *)v6); /*0x49b0bf*/
        v78 = v46; /*0x49b0c4*/
        v99 = a2.x; /*0x49b0cc*/
        v47 = a2.y; /*0x49b0da*/
        v42->members.super.m_localTransform.pos.x = a2.x; /*0x49b0de*/
        v100 = v47; /*0x49b0e1*/
        v48 = v78; /*0x49b0ef*/
        v42->members.super.m_localTransform.pos.y = v100; /*0x49b0f3*/
        v101 = v48 + dbl_A3F3E8; /*0x49b0fc*/
        v42->members.super.m_localTransform.pos.z = v101; /*0x49b10a*/
      }
      else
      {
        if ( !MEMORY[0xB33E90][0x139A] ) /*0x49b119*/
          goto LABEL_44; /*0x49b119*/
        *(float *)&v86 = 0.0; /*0x49b125*/
        v87 = 0.0; /*0x49b12a*/
        v88 = 1.0; /*0x49b131*/
        v89 = 0.0; /*0x49b135*/
        v42 = (NiNode *)sub_47FD30(flt_A31C80, (NiD3DPassVtbl **)&v86); /*0x49b14a*/
        v49 = (BSShaderProperty *)sub_4E70B0(); /*0x49b14c*/
        sub_405680(v42, v49); /*0x49b154*/
        v50 = TESObjectCELL_GetWaterHeight((ExtraDataList *)v6); /*0x49b15b*/
        v51 = a3 < v50; /*0x49b164*/
        v52 = a3; /*0x49b168*/
        if ( v51 ) /*0x49b16d*/
          v52 = TESObjectCELL_GetWaterHeight((ExtraDataList *)v6); /*0x49b173*/
        v78 = v52; /*0x49b178*/
        v90 = a2.x; /*0x49b180*/
        v53 = a2.y; /*0x49b188*/
        v42->members.super.m_localTransform.pos.x = a2.x; /*0x49b18c*/
        v91 = v53; /*0x49b18f*/
        v54 = v78; /*0x49b197*/
        v42->members.super.m_localTransform.pos.y = v91; /*0x49b19b*/
        v92 = v54 + dbl_A3F3E8; /*0x49b1a4*/
        v42->members.super.m_localTransform.pos.z = v92; /*0x49b1ac*/
      }
      sub_440E60(MEMORY[0xB333A0], (int)v42, flt_A31C80); /*0x49b1c0*/
LABEL_44:
      ++v83; /*0x49b1c5*/
      v8 = reference; /*0x49b1ce*/
      v78 = (float)v83; /*0x49b1d4*/
      if ( v80 <= (double)v78 ) /*0x49b1e7*/
      {
        v19 = 0.0; /*0x49b1ef*/
        v21 = v93; /*0x49b1fe*/
        v20 = v106; /*0x49b200*/
        v28 = 0.0; /*0x49b202*/
        v27 = v80; /*0x49b202*/
        goto LABEL_46; /*0x49b202*/
      }
      v19 = 0.0; /*0x49af37*/
      v34 = v78; /*0x49af40*/
      v33 = v107; /*0x49af40*/
    }
  }
}
