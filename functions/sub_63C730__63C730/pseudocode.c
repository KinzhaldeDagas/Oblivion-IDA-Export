void __userpurge sub_63C730(_WORD *this@<ecx>, double st6_0@<st1>, float arg0, int a2, float a5, float a3)
{
  float v7; // esi
  float v8; // edx
  unsigned int v9; // eax
  Actor *v10; // ecx
  bool v11; // zf
  float *AnimData; // edi
  TESObjectREFR *v13; // eax
  __int16 AnimGroupFromField8Value; // bp
  int v15; // edi
  int v16; // ecx
  float v17; // edx
  __int16 v18; // ax
  int v19; // eax
  __int16 v20; // ax
  double v21; // st7
  int v22; // edi
  char v23; // al
  int v24; // ebp
  float v25; // edi
  float v26; // ecx
  int v27; // eax
  float *v28; // eax
  TES *v29; // ecx
  int v30; // edi
  unsigned __int16 v31; // ax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v33; // edi
  int (__thiscall *v34)(_DWORD); // edx
  int v35; // eax
  TESObjectLAND *v36; // eax
  double v37; // st5
  int v38; // ebp
  int v39; // ebx
  int v40; // ecx
  float v41; // edx
  float v42; // eax
  float v43; // ecx
  double v44; // st7
  _DWORD *v45; // eax
  int *v46; // eax
  float *v47; // eax
  int *v48; // eax
  float v49; // [esp+24h] [ebp-5Ch]
  double v50; // [esp+28h] [ebp-58h] BYREF
  float v51; // [esp+30h] [ebp-50h]
  unsigned __int64 v52; // [esp+34h] [ebp-4Ch] BYREF
  float v53; // [esp+3Ch] [ebp-44h]
  _DWORD v54[3]; // [esp+40h] [ebp-40h] BYREF
  int v55[2]; // [esp+4Ch] [ebp-34h] BYREF
  float v56; // [esp+54h] [ebp-2Ch]
  float v57; // [esp+58h] [ebp-28h]
  float v58[9]; // [esp+5Ch] [ebp-24h] BYREF

  if ( sub_45A500(SaveLoad_CurrentSavegame)
    || (SaveLoad_CurrentSavegame->flags & 0x2000) != 0 && sub_572EA0(2) > *(float *)&SrcStr )
  {
    return;
  }
  v7 = arg0;
  v49 = flt_B33E9C;
  v8 = Vector3_InitValue_;
  v9 = *((_DWORD *)&Vector3_InitValue_ + 1);
  v53 = dword_B3F9B0;
  v10 = (Actor *)TESDataHandler_g_PlayerRef;
  v11 = LODWORD(arg0) == (_DWORD)TESDataHandler_g_PlayerRef;
  v52 = __PAIR64__(v9, LODWORD(v8));
  if ( v11 )
  {
    AnimData = (float *)Player_GetAnimData(v10, 0);
    if ( TESDataHandler_g_PlayerRef->isThirdPerson )
      goto LABEL_11;
    *(float *)&v13 = COERCE_FLOAT(Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1));
    arg0 = *(float *)&v13;
    if ( AnimData )
    {
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v13, 0);
      if ( AnimGroupFromField8Value != ActorAnimData_GetAnimGroupFromField8Value(AnimData, 0) )
        goto LABEL_11;
      *(float *)&v13 = arg0;
    }
  }
  else
  {
    *(float *)&v13 = COERCE_FLOAT((*(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(arg0) + 0x164))(LODWORD(arg0)));
  }
  AnimData = (float *)v13;
LABEL_11:
  if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 0x19C))(COERCE_FLOAT(LODWORD(v7)))
    && (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0x2E4))(this) != 6
    || (*(unsigned __int8 (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(v7) + 0x198))(COERCE_FLOAT(LODWORD(v7)), 0)
    || *((_BYTE *)this + 0x2A9) )
  {
    v22 = *(_DWORD *)(LODWORD(v7) + 0x3C);
    v23 = (*(int (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(v7) + 0x198))(COERCE_FLOAT(LODWORD(v7)), 0);
    sub_88F700(v22, (float *)&v52, v23 == 0);
    v24 = *(_DWORD *)(*(int (__thiscall **)(_WORD *, float *))(*(_DWORD *)this + 0x18C))(this, &arg0);
    if ( arg0 != 0.0 )
    {
      v25 = arg0;
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(arg0) + 4)) )
        (**(void (__thiscall ***)(_DWORD, int))LODWORD(v25))(LODWORD(v25), 1);
    }
    if ( v24 )
      *(_DWORD *)(v24 + 0x1F4) |= 0x1000u;
    v26 = *(float *)(LODWORD(v7) + 0x24);
    v27 = *(int *)(LODWORD(v7) + 0x20);
    a3 = *(float *)(LODWORD(v7) + 0x28);
    a5 = v26;
    a2 = v27;
    NiMatrix33_InitRotationTransform(v58, a3);
    v28 = sub_710250((float *)&a2, (float *)&v52, v58);
    v52 = *(_QWORD *)v28;
    v53 = v28[2];
  }
  else
  {
    if ( AnimData )
    {
      if ( (*(_DWORD *)(LODWORD(v7) + 8) & 0x10) != 0 )
        sub_4723A0(AnimData, st6_0, (float *)&v52, (Actor *)LODWORD(v7), 1, 0);
      else
        sub_4723A0(AnimData, st6_0, (float *)&v52, (Actor *)LODWORD(v7), 0, 1);
    }
    v15 = *(_DWORD *)(*(int (__thiscall **)(_WORD *, float *))(*(_DWORD *)this + 0x18C))(this, &arg0);
    sub_7016A0((NiD3DVertexShader *)&arg0);
    if ( v15 )
    {
      if ( v15 != 0xFFFFFE10 )
      {
        if ( sub_628E70(v15 + 0x1F0) )
        {
          v16 = *((_DWORD *)&Vector3_InitValue_ + 1);
          v17 = dword_B3F9B0;
          *(float *)&v52 = Vector3_InitValue_;
          HIDWORD(v52) = v16;
          v53 = v17;
        }
      }
    }
    v18 = *(this + 0xFE);
    if ( (v18 & 3) != 0
      && (v18 & 0xC) != 0
      && !(*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 0x1F8))(COERCE_FLOAT(LODWORD(v7))) )
    {
      v19 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0x2D0))(this);
      if ( (v19 < 0xB || v19 > 0xC) && *((float *)&v52 + 1) != 0.0 )
      {
        v20 = *(this + 0xFE);
        arg0 = flt_B33E9C * *(float *)&a2;
        arg0 = arg0 / *((float *)&v52 + 1) * dbl_A4D918;
        v21 = arg0;
        if ( (v20 & 4) != 0 )
        {
          v50 = *(float *)&v52;
          *(float *)&a2 = dbl_A6E740 - v21;
          *(float *)&a2 = cos(*(float *)&a2);
          *(float *)&a2 = *(float *)&a2 * *((float *)&v52 + 1);
          *(float *)&a2 = fabs(*(float *)&a2);
          *(float *)&v52 = *(float *)&v52 - *(float *)&a2;
        }
        else if ( (v20 & 8) != 0 )
        {
          *(float *)&a2 = dbl_A6E740 - v21;
          *(float *)&a2 = cos(*(float *)&a2);
          *(float *)&a2 = *(float *)&a2 * *((float *)&v52 + 1);
          *(float *)&a2 = fabs(*(float *)&a2);
          *(float *)&v52 = *(float *)&a2 + *(float *)&v52;
        }
        arg0 = cos(arg0);
        *((float *)&v52 + 1) = arg0 * *((float *)&v52 + 1);
      }
    }
  }
  if ( (*(_DWORD *)(LODWORD(v7) + 8) & 0x10) != 0 )
  {
    v29 = TES;
    *(float *)&a2 = *(float *)(LODWORD(v7) + 0x2C) + *(float *)&v52;
    a5 = *(float *)(LODWORD(v7) + 0x30) + *((float *)&v52 + 1);
    a3 = *(float *)(LODWORD(v7) + 0x34) + v53;
    if ( !v29->currentInteriorCell && (PlayerCharacter *)LODWORD(v7) != TESDataHandler_g_PlayerRef )
      GetTerrainHeight(v29, (float *)&a2, &a3);
    (*(void (__thiscall **)(float, int *))(*(_DWORD *)LODWORD(v7) + 0x1CC))(COERCE_FLOAT(LODWORD(v7)), &a2);
    return;
  }
  v30 = *(_DWORD *)LODWORD(v7);
  v31 = (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 0x2C0))(this);
  (*(void (__thiscall **)(float, float, unsigned __int64 *, _DWORD))(v30 + 0x1B4))(
    COERCE_FLOAT(LODWORD(v7)),
    COERCE_FLOAT(LODWORD(v49)),
    &v52,
    v31);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)LODWORD(v7));
  v33 = ParentCell;
  if ( !ParentCell )
    return;
  if ( TESObjectCELL_IsInterior(ParentCell) )
  {
    v38 = sub_441800(v33, 0, 2u);
    if ( v38 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 0x190))(COERCE_FLOAT(LODWORD(v7))) )
      {
        v39 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v7) + 0x174))(COERCE_FLOAT(LODWORD(v7)));
        v40 = *(_DWORD *)(v39 + 4);
        v41 = *(float *)(v39 + 8);
        LODWORD(v50) = *(_DWORD *)v39;
        v55[0] = *(_DWORD *)(v38 + 0x20);
        v42 = *(float *)(v38 + 0x2C);
        HIDWORD(v50) = v40;
        v43 = *(float *)(v38 + 0x24);
        *(float *)&a2 = *(float *)v55 - *(float *)&v50;
        *(float *)&v55[1] = v43;
        v51 = v41;
        v56 = *(float *)(v38 + 0x28);
        a5 = v43 - *((float *)&v50 + 1);
        v57 = v42;
        a3 = v56 - v41;
        v44 = sub_404C90((float *)&a2);
        if ( v57 < v44 )
        {
          sub_5E2E20(
            (TESObjectREFR *)LODWORD(v7),
            &a2,
            *(_DWORD *)v39,
            *(_DWORD *)(v39 + 4),
            *(float *)(v39 + 8),
            v33,
            0.0,
            0,
            0);
          if ( sub_8AA350((float *)&a2, (float *)&v50) )
          {
            if ( sub_5E0260((_DWORD *)LODWORD(v7)) && (TESObjectCELL *)sub_5E1F60((_DWORD *)LODWORD(v7)) == v33 )
            {
              v45 = sub_628E40((_DWORD *)LODWORD(v7), v54);
              v46 = sub_5E2E20((TESObjectREFR *)LODWORD(v7), v55, *v45, v45[1], *((float *)v45 + 2), v33, 0.0, 0, 0);
              a2 = *v46;
              a5 = *((float *)v46 + 1);
              a3 = *((float *)v46 + 2);
            }
            if ( sub_8AA350((float *)&a2, (float *)&v50) )
            {
              if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) == v33 )
              {
                v47 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
                v48 = sub_5E2E20(
                        (TESObjectREFR *)LODWORD(v7),
                        v55,
                        *(_DWORD *)v47,
                        *((_DWORD *)v47 + 1),
                        v47[2],
                        v33,
                        0.0,
                        0,
                        0);
                a2 = *v48;
                a5 = *((float *)v48 + 1);
                a3 = *((float *)v48 + 2);
              }
            }
          }
          goto LABEL_50;
        }
      }
    }
  }
  else
  {
    v34 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v7) + 0x174);
    arg0 = 0.0;
    v35 = v34(LODWORD(v7));
    a2 = *(int *)v35;
    a5 = *(float *)(v35 + 4);
    a3 = *(float *)(v35 + 8);
    v36 = sub_4CE3C0(v33);
    if ( sub_4C5B50(v36, (float *)&a2, &arg0) )
    {
      v37 = dbl_A46970;
      if ( v37 < arg0 - a3 )
      {
        a3 = arg0 + v37;
LABEL_50:
        (*(void (__thiscall **)(float, int *))(*(_DWORD *)LODWORD(v7) + 0x1CC))(COERCE_FLOAT(LODWORD(v7)), &a2);
      }
    }
  }
}
