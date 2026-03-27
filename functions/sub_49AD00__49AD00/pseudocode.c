void __fastcall sub_49AD00(int **this)
{
  TESObjectREFR *v3; // ecx
  bool v4; // zf
  double v5; // st6
  TESForm *CurrentCell; // eax
  TESObjectCELL *v7; // ebx
  float v8; // eax
  PlayerCharacter *v9; // esi
  double v10; // st7
  float v11; // eax
  float v12; // ecx
  double v13; // st7
  double v14; // st6
  int v15; // eax
  double v16; // st6
  float v17; // ecx
  float v18; // edx
  float v19; // eax
  double v20; // st6
  double v21; // st7
  double v22; // st5
  float v23; // ecx
  float v24; // edx
  double v25; // st2
  _BYTE *v26; // edi
  float v27; // ebp
  double v28; // st4
  double v29; // st3
  double v30; // st2
  double v31; // rt2
  double v32; // st2
  double v33; // st3
  double v34; // st7
  double v35; // st5
  float v36; // eax
  double v37; // rt2
  double v38; // st6
  double v39; // st7
  TES *v40; // ecx
  TESWorldSpace *CurrentWorldspace; // eax
  _BYTE *v42; // eax
  double v43; // st7
  NiNode *v44; // esi
  BSShaderProperty *v45; // eax
  double v46; // st7
  bool v47; // c0
  double v48; // st7
  double y; // st7
  double v50; // st7
  BSShaderProperty *v51; // eax
  double v52; // st7
  bool v53; // c0
  double v54; // st7
  double v55; // st7
  double v56; // st7
  double v57; // st5
  double v58; // st4
  double v59; // st6
  int *v60; // ecx
  unsigned int v61; // esi
  int v62; // eax
  NiNode *v63; // esi
  BSShaderProperty *v64; // eax
  double v65; // st7
  NiAVObject *v66; // esi
  BSShaderProperty *v67; // eax
  int *v68; // ecx
  unsigned int v69; // esi
  int *v70; // ecx
  int v71; // eax
  int *v72; // eax
  int *v73; // ecx
  float v74; // [esp+8h] [ebp-D4h]
  float v75; // [esp+8h] [ebp-D4h]
  float v76; // [esp+8h] [ebp-D4h]
  float a3; // [esp+20h] [ebp-BCh] BYREF
  float WaterHeight; // [esp+24h] [ebp-B8h]
  float v79; // [esp+28h] [ebp-B4h] BYREF
  float v80; // [esp+2Ch] [ebp-B0h]
  float v81; // [esp+30h] [ebp-ACh]
  NiPoint3 a2; // [esp+34h] [ebp-A8h] BYREF
  float v83; // [esp+40h] [ebp-9Ch]
  float v84; // [esp+44h] [ebp-98h]
  float v85; // [esp+48h] [ebp-94h]
  int v86; // [esp+4Ch] [ebp-90h]
  int **v87; // [esp+50h] [ebp-8Ch]
  int v88; // [esp+54h] [ebp-88h]
  int v89; // [esp+58h] [ebp-84h] BYREF
  float v90; // [esp+5Ch] [ebp-80h]
  float v91; // [esp+60h] [ebp-7Ch]
  float v92; // [esp+64h] [ebp-78h]
  float v93; // [esp+68h] [ebp-74h]
  float v94; // [esp+6Ch] [ebp-70h]
  float v95; // [esp+70h] [ebp-6Ch]
  double v96; // [esp+74h] [ebp-68h] BYREF
  float v97; // [esp+7Ch] [ebp-60h]
  int v98; // [esp+84h] [ebp-58h] BYREF
  float v99; // [esp+88h] [ebp-54h]
  float v100; // [esp+8Ch] [ebp-50h]
  float v101; // [esp+90h] [ebp-4Ch]
  float x; // [esp+94h] [ebp-48h]
  float v103; // [esp+98h] [ebp-44h]
  float v104; // [esp+9Ch] [ebp-40h]
  float v105[5]; // [esp+A0h] [ebp-3Ch] BYREF
  float v106; // [esp+B4h] [ebp-28h]
  float v107[3]; // [esp+B8h] [ebp-24h] BYREF
  double v108; // [esp+C4h] [ebp-18h]
  double v109; // [esp+CCh] [ebp-10h]
  double v110; // [esp+D4h] [ebp-8h]

  v3 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v4 = TESDataHandler_g_PlayerRef == 0;
  v87 = this;
  if ( v4 )
  {
    CurrentCell = TES_GetCurrentCell(TES);
  }
  else
  {
    v5 = (double)dword_B070B0;
    if ( dword_B070B0 < 0 )
      v5 = v5 + flt_A2FC78;
    v74 = v5;
    CurrentCell = sub_65E5E0(v3, v74);
  }
  v7 = (TESObjectCELL *)CurrentCell;
  if ( OSGlobals->sound )
  {
    if ( !CurrentCell || (CurrentCell[1].member.refID & 2) == 0 )
    {
      if ( byte_B35248 )
      {
        v73 = *(this + 0x10);
        if ( v73 )
        {
          byte_B35248 = 0;
          sub_6B7240(v73);
        }
      }
      goto LABEL_81;
    }
    WaterHeight = TESObjectCELL_GetWaterHeight(CurrentCell);
    v8 = flt_B3FC80;
    v80 = flt_B3FC84;
    v79 = v8;
    if ( TESObjectCELL_IsInterior(v7) )
    {
      v4 = IsRenderWaterUnderWaterSurface == 0;
      v9 = TESDataHandler_g_PlayerRef;
      v10 = flt_B070D0;
      v11 = TESDataHandler_g_PlayerRef->super.super.super.super.pos[1];
      v12 = TESDataHandler_g_PlayerRef->super.super.super.super.pos[2];
      v93 = TESDataHandler_g_PlayerRef->super.super.super.super.pos[0];
      v94 = v11;
      v95 = v12;
      if ( !v4 )
      {
        a3 = 0.0;
        goto LABEL_55;
      }
      WaterHeight = WaterHeight - v95;
      WaterHeight = fabs(WaterHeight);
      if ( WaterHeight >= v10 )
      {
        a3 = 0.0;
        goto LABEL_55;
      }
      v13 = (v10 - WaterHeight) / v10;
      goto LABEL_14;
    }
    v14 = (double)dword_B070B8;
    if ( dword_B070B8 < 0 )
      v14 = v14 + flt_A2FC78;
    v15 = dword_B070B0;
    v83 = v14;
    v16 = (double)dword_B070B0;
    if ( v15 < 0 )
      v16 = v16 + flt_A2FC78;
    v85 = v16;
    v17 = Vector3_InitValue_;
    v18 = *(&Vector3_InitValue_ + 1);
    v109 = flt_B070D8;
    v19 = dword_B3F9B0;
    v20 = 0.0;
    v21 = v109;
    v9 = TESDataHandler_g_PlayerRef;
    a3 = 0.0;
    a2.z = v19;
    v22 = v85;
    a2.x = v17;
    v96 = v85;
    a2.y = v18;
    v23 = v9->super.super.super.super.pos[0];
    v24 = v9->super.super.super.super.pos[1];
    v25 = dbl_A2F928;
    v106 = v9->super.super.super.super.pos[2];
    v26 = 0;
    v27 = 0.0;
    v105[3] = v23;
    v105[4] = v24;
    v88 = 0;
    v28 = v83;
    v85 = (v85 + v85) / (v83 - v25);
    v29 = 0.0;
    if ( v83 <= 0.0 )
    {
LABEL_47:
      v57 = v28;
      v83 = v27;
      v58 = (double)SLODWORD(v27);
      if ( v27 < 0.0 )
        v58 = v58 + flt_A2FC78;
      v4 = IsRenderWaterUnderWaterSurface == 0;
      v83 = v58;
      this = v87;
      v79 = v79 / v83;
      v80 = v80 / v83;
      v79 = v79 - v9->super.super.super.super.pos[0];
      v80 = v80 - v9->super.super.super.super.pos[1];
      a3 = (v83 + v83) / (v57 * v57);
      if ( !v4 )
      {
        a3 = v20;
        goto LABEL_55;
      }
      WaterHeight = WaterHeight - v106;
      WaterHeight = fabs(WaterHeight);
      if ( WaterHeight >= v21 )
      {
        a3 = v20;
        goto LABEL_55;
      }
      WaterHeight = (v21 - WaterHeight) / v21;
      v13 = WaterHeight * a3;
LABEL_14:
      a3 = v13;
      if ( a3 > 1.0 )
        a3 = 1.0;
LABEL_55:
      sub_499020(&v79);
      v59 = (double)dword_B070B0;
      if ( dword_B070B0 < 0 )
        v59 = v59 + flt_A2FC78;
      WaterHeight = (1.0 - a3) * v59;
      v84 = v80;
      v83 = WaterHeight * v79;
      v79 = v83;
      v60 = *(this + 0x10);
      v84 = WaterHeight * v80;
      v80 = v84;
      v79 = v83 + v9->super.super.super.super.pos[0];
      v80 = v9->super.super.super.super.pos[1] + v84;
      if ( v60 )
      {
        if ( !sub_6B73A0(v60) )
        {
          v61 = (unsigned int)*(this + 0x10);
          if ( v61 )
          {
            sub_6B73E0(*(this + 0x10));
            FormHeapFree(v61);
          }
          *(this + 0x10) = 0;
        }
        v9 = TESDataHandler_g_PlayerRef;
      }
      if ( *(this + 0x10) )
      {
        if ( byte_B3522A )
        {
          v62 = (int)v9->vtbl->super.super.super.GetPos((TESObjectREFR *)v9);
          v96 = *(double *)v62;
          v97 = *(float *)(v62 + 8);
          v97 = v97 + dbl_A3F3E8;
          a2.x = v79;
          a2.y = v80;
          a2.z = v97;
          *(float *)&v89 = 1.0;
          v90 = 0.0;
          v91 = 0.0;
          v92 = 0.0;
          v63 = (NiNode *)sub_47FD30(flt_A31C80, (NiD3DPassVtbl **)&v89);
          v64 = (BSShaderProperty *)sub_4E70B0();
          sub_405680(v63, v64);
          v65 = flt_A31C80;
          v63->members.super.m_localTransform.pos = a2;
          v75 = v65;
          sub_440E60(TES, (int)v63, v75);
          *(float *)&v89 = 1.0;
          v90 = 1.0;
          v91 = 0.0;
          v92 = 0.0;
          v100 = 0.0;
          v101 = 0.0;
          *(float *)&v98 = 1.0;
          v99 = 1.0;
          v66 = sub_47F070(&v96, &v98, &a2, &v89);
          v67 = (BSShaderProperty *)sub_4E70B0();
          sub_405680((NiNode *)v66, v67);
          sub_440E60(TES, (int)v66, flt_A31C80);
        }
        v76 = TESObjectCELL_GetWaterHeight(v7);
        sub_6B7360(*(this + 0x10), v79, v80, v76);
        if ( sub_6B7260(*(this + 0x10)) && a3 <= 0.0 )
        {
          v68 = *(this + 0x10);
          byte_B35248 = 0;
          sub_6B7240(v68);
          sub_6B73C0(*(this + 0x10));
          v69 = (unsigned int)*(this + 0x10);
          if ( v69 )
          {
            sub_6B73E0(*(this + 0x10));
            FormHeapFree(v69);
          }
          *(this + 0x10) = 0;
          byte_B3522A = 0;
          return;
        }
        if ( !sub_6B7260(*(this + 0x10)) && a3 > 0.0 )
        {
          v70 = *(this + 0x10);
          byte_B35248 = 1;
          sub_6B7190(v70, 1);
          byte_B3522A = 0;
          return;
        }
      }
      else if ( a3 > 0.0 )
      {
        if ( dword_B35220 )
        {
          v71 = *(_DWORD *)(dword_B35220 + 0x38);
          if ( v71 )
          {
            OSGLobals_PlaySound(*(_DWORD *)(v71 + 0xC), 0x12, 0);
            *(this + 0x10) = v72;
            byte_B3522A = 0;
            return;
          }
        }
      }
LABEL_81:
      byte_B3522A = 0;
      return;
    }
    v30 = 0.0;
    while ( 1 )
    {
      v31 = v30;
      v32 = v29;
      v33 = v31;
      v86 = 0;
      if ( v32 < v28 )
        break;
      v29 = v32;
LABEL_46:
      v30 = (double)++v88;
      if ( v30 >= v28 )
        goto LABEL_47;
    }
    v110 = v22 * dbl_A3D360;
    v34 = v110;
    v108 = v33 * v85 + v110;
    v81 = v20;
    v35 = v81;
    while ( 1 )
    {
      a2.x = v9->super.super.super.super.pos[0];
      a2.y = v9->super.super.super.super.pos[1];
      v36 = v9->super.super.super.super.pos[2];
      a3 = v20;
      a2.z = v36;
      a2.x = a2.x + v108;
      v37 = v20;
      v38 = v34 + v35 * v85 + a2.y;
      v39 = v37;
      a2.y = v38;
      if ( v26 )
      {
        v107[0] = a2.x;
        v107[1] = a2.y;
        v107[2] = v39;
        if ( sub_4CC540((int)v26, v107) )
          goto LABEL_30;
        v39 = 0.0;
      }
      v40 = TES;
      v105[0] = a2.x;
      v105[1] = a2.y;
      v105[2] = v39;
      CurrentWorldspace = TES::GetCurrentWorldspace(v40);
      TESWorldSpace::GetCellAtPos(CurrentWorldspace, v105);
      v26 = v42;
LABEL_30:
      if ( v26 )
        v43 = TESObjectCELL_GetWaterHeight(v26);
      else
        v43 = flt_A3B888;
      v81 = v43;
      if ( GetTerrainHeight(TES, &a2.x, &a3) && v81 > (double)a3 )
      {
        ++LODWORD(v27);
        v4 = byte_B3522A == 0;
        v79 = v79 + a2.x;
        v80 = v80 + a2.y;
        if ( v4 )
          goto LABEL_44;
        *(float *)&v98 = 0.0;
        v99 = 1.0;
        v100 = 0.0;
        v101 = 0.0;
        v44 = (NiNode *)sub_47FD30(flt_A31C80, (NiD3DPassVtbl **)&v98);
        v45 = (BSShaderProperty *)sub_4E70B0();
        sub_405680(v44, v45);
        v46 = TESObjectCELL_GetWaterHeight(v7);
        v47 = a3 < v46;
        v48 = a3;
        if ( v47 )
          v48 = TESObjectCELL_GetWaterHeight(v7);
        v81 = v48;
        x = a2.x;
        y = a2.y;
        v44->members.super.m_localTransform.pos.x = a2.x;
        v103 = y;
        v50 = v81;
        v44->members.super.m_localTransform.pos.y = v103;
        v104 = v50 + dbl_A3F3E8;
        v44->members.super.m_localTransform.pos.z = v104;
      }
      else
      {
        if ( !byte_B3522A )
          goto LABEL_44;
        *(float *)&v89 = 0.0;
        v90 = 0.0;
        v91 = 1.0;
        v92 = 0.0;
        v44 = (NiNode *)sub_47FD30(flt_A31C80, (NiD3DPassVtbl **)&v89);
        v51 = (BSShaderProperty *)sub_4E70B0();
        sub_405680(v44, v51);
        v52 = TESObjectCELL_GetWaterHeight(v7);
        v53 = a3 < v52;
        v54 = a3;
        if ( v53 )
          v54 = TESObjectCELL_GetWaterHeight(v7);
        v81 = v54;
        v93 = a2.x;
        v55 = a2.y;
        v44->members.super.m_localTransform.pos.x = a2.x;
        v94 = v55;
        v56 = v81;
        v44->members.super.m_localTransform.pos.y = v94;
        v95 = v56 + dbl_A3F3E8;
        v44->members.super.m_localTransform.pos.z = v95;
      }
      sub_440E60(TES, (int)v44, flt_A31C80);
LABEL_44:
      ++v86;
      v9 = TESDataHandler_g_PlayerRef;
      v81 = (float)v86;
      if ( v83 <= (double)v81 )
      {
        v20 = 0.0;
        v22 = v96;
        v21 = v109;
        v29 = 0.0;
        v28 = v83;
        goto LABEL_46;
      }
      v20 = 0.0;
      v35 = v81;
      v34 = v110;
    }
  }
}
