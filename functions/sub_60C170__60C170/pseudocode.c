void __thiscall sub_60C170(float *this, float a2)
{
  _DWORD *v3; // eax
  int v4; // eax
  void (__thiscall *v5)(float *, int, _DWORD); // edx
  double v6; // st7
  NiAVObject *v7; // ebp
  double v8; // st6
  int v9; // edx
  int (__thiscall *v10)(float *); // eax
  float *v11; // eax
  float v12; // ecx
  float v13; // edx
  float v14; // eax
  bhkCharacterProxy *CharProxy; // eax
  int v16; // edx
  int (__thiscall *v17)(float *); // eax
  double v18; // st7
  double v19; // st7
  int v20; // eax
  int v21; // esi
  int v22; // eax
  float v23; // edx
  float v24; // ecx
  float v25; // edx
  double v26; // st7
  double v27; // st7
  double v28; // st7
  int v29; // ecx
  int *v30; // eax
  int v31; // ecx
  TESObjectREFR *v32; // ecx
  TESObjectCELL *ParentCell; // esi
  int v34; // eax
  double v35; // st6
  int v36; // eax
  int v37; // [esp+18h] [ebp-74h]
  double v38; // [esp+30h] [ebp-5Ch] BYREF
  float v39; // [esp+38h] [ebp-54h]
  float v40; // [esp+3Ch] [ebp-50h] BYREF
  float v41; // [esp+40h] [ebp-4Ch] BYREF
  float v42; // [esp+44h] [ebp-48h]
  float v43; // [esp+48h] [ebp-44h]
  float v44; // [esp+4Ch] [ebp-40h]
  float v45; // [esp+50h] [ebp-3Ch]
  float v46; // [esp+54h] [ebp-38h]
  float v47; // [esp+58h] [ebp-34h]
  float a3[3]; // [esp+5Ch] [ebp-30h] BYREF
  float v49[9]; // [esp+68h] [ebp-24h] BYREF

  if ( *((_BYTE *)this + 0x94) )
  {
    v3 = *((_DWORD **)this + 0x17);
    if ( !v3 || *v3 > 1u || (v4 = v3[0xA]) == 0 || *(_DWORD *)(v4 + 0x3C) )
    {
      v5 = *(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)this + 0x5C);
      v37 = *((_DWORD *)this + 0x26);
      *((_BYTE *)this + 0x94) = 0;
      v5(this, v37, 0);
      sub_45D190(SaveLoad_CurrentSavegame);
    }
  }
  v6 = 0.0;
  v7 = (NiAVObject *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this);
  if ( a2 < 0.0 )
    goto LABEL_42;
  *(float *)&v38 = a2 + *(this + 0x1A);
  v8 = *(float *)&v38;
  *(this + 0x1A) = *(float *)&v38;
  if ( flt_B37048 < v8 )
    *((_DWORD *)this + 0x18) = 3;
  if ( (*(_DWORD *)(this + 2) & 0x20) == 0 )
  {
    if ( !*((_DWORD *)this + 0x18) )
    {
      v6 = 0.0;
      if ( MobileObject_GetCharProxy((MobileObject *)this) )
      {
        v9 = *(_DWORD *)this;
        a3[0] = 0.0;
        v10 = *(int (__thiscall **)(float *))(v9 + 0x174);
        a3[1] = *(this + 0x1B) * a2;
        a3[2] = 0.0;
        v11 = (float *)v10(this);
        v12 = *v11;
        v13 = v11[1];
        v14 = v11[2];
        v45 = v12;
        v46 = v13;
        v47 = v14;
        CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
        v16 = *(_DWORD *)this;
        *(float *)&v38 = *((float *)CharProxy + 0xC6);
        v17 = *(int (__thiscall **)(float *))(v16 + 0x174);
        *(float *)&v38 = *(float *)&v38 * dbl_A372E0;
        if ( *(float *)&v38 >= (double)*(float *)(v17(this) + 8) )
        {
          *(float *)&v38 = (*(this + 0x1D) - a2) / *(this + 0x1D);
          v18 = *(float *)&v38;
          *(this + 0x1B) = *(this + 0x1B) * *(float *)&v38;
          *(this + 0x1C) = v18 * *(this + 0x1C);
          *((float *)MobileObject_GetCharProxy((MobileObject *)this) + 0xC9) = *(float *)&v38;
          *(float *)&v38 = *(this + 0x1D) - a2;
          v19 = *(float *)&v38;
          *(this + 0x1D) = *(float *)&v38;
          if ( v19 < flt_A3D65C )
          {
            sub_6079A0((MobileObject *)this, 0);
            sub_60BE90((unsigned int *)this);
          }
        }
        (*(void (__thiscall **)(float *, _DWORD, float *, int))(*(_DWORD *)this + 0x1B4))(this, LODWORD(a2), a3, 0xF);
        v20 = *((_DWORD *)this + 0x18);
        if ( v20 )
        {
          v21 = (v20 == 3) + 2;
          if ( sub_60BE90((unsigned int *)this) )
          {
            if ( v7 )
              TESObjectREFR_SetPosition(
                (TESObjectREFR *)this,
                v7->members.m_localTransform.pos.x,
                v7->members.m_localTransform.pos.y,
                v7->members.m_localTransform.pos.z);
            *((_DWORD *)this + 0x18) = v21;
            return;
          }
        }
        v22 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174))(this);
        v23 = *(float *)(v22 + 4);
        v42 = *(float *)v22;
        v24 = *(float *)(v22 + 8);
        v43 = v23;
        v44 = v24;
        if ( !v7 )
          return;
        v7->members.m_localTransform.pos.x = *(float *)v22;
        v7->members.m_localTransform.pos.y = *(float *)(v22 + 4);
        v25 = *(float *)(v22 + 8);
        qmemcpy(v49, &v7->members.m_localTransform, sizeof(v49));
        v7->members.m_localTransform.pos.z = v25;
        sub_711440(v49, &v41, (float *)&v38, &v40);
        *(float *)&v38 = v42 - v45;
        v26 = v43;
        *(this + 0x22) = *(float *)&v38;
        *((float *)&v38 + 1) = v26 - v46;
        v27 = v44;
        *(this + 0x23) = *((float *)&v38 + 1);
        v39 = v27 - v47;
        *(this + 0x24) = v39;
        v38 = *(this + 0x24);
        v28 = sub_404C90(this + 0x22);
        *(float *)&v38 = v38 / v28;
        *(float *)&v38 = -sub_47D970(*(float *)&v38);
        sub_7117C0(v49, v41, *(float *)&v38, v40);
        qmemcpy(&v7->members.m_localTransform, v49, 0x24u);
        goto LABEL_42;
      }
    }
    v29 = *((_DWORD *)this + 0x18);
    if ( v29 == 2 )
    {
      v30 = *((int **)this + 0x17);
      if ( v30 )
      {
        v31 = *v30;
        if ( !v7 )
          return;
        if ( v31 )
        {
          if ( v31 != 1 )
            goto LABEL_42;
          v34 = v30[0xA];
          if ( v34 )
          {
            if ( *(_DWORD *)(v34 + 0x3C) )
              goto LABEL_42;
          }
LABEL_31:
          (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x8C))(this, 1);
          goto LABEL_42;
        }
        TESObjectREFR_SetPosition(
          (TESObjectREFR *)this,
          v7->members.m_worldTransform.pos.x,
          v7->members.m_worldTransform.pos.y,
          v7->members.m_worldTransform.pos.z);
        v32 = *(TESObjectREFR **)(*((_DWORD *)this + 0x17) + 0x28);
        ParentCell = 0;
        if ( v32 )
          ParentCell = TESObjectREFR_GetParentCell(v32);
        if ( ParentCell == TESObjectREFR_GetParentCell((TESObjectREFR *)this) )
          goto LABEL_42;
        if ( !ParentCell )
          goto LABEL_31;
        sub_6748B0(&ActorProcessManager_ptr, (TESObjectREFR *)this);
LABEL_42:
        if ( v7 )
          NiAVObject_UpdateNiAVObject(v7, a2, 1);
        return;
      }
    }
    if ( v29 != 3 )
      goto LABEL_42;
    v41 = *(this + 0x19) - a2 / dbl_A30E48;
    v35 = v41;
    *(this + 0x19) = v41;
    if ( v35 <= v6 )
    {
      v36 = *(_DWORD *)this;
      *(this + 0x19) = v6;
      (*(void (__thiscall **)(float *, int))(v36 + 0x8C))(this, 1);
    }
    if ( v7 )
    {
      sub_4A2A90((int)v7, *(this + 0x19));
      goto LABEL_42;
    }
  }
}
