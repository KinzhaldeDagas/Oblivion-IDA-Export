void __thiscall sub_64D710(float *this, TESObjectREFR *a2)
{
  void *v3; // eax
  _DWORD *v4; // edi
  ObjectType v5; // ebx
  char *v7; // eax
  int p_modlist; // eax
  int v9; // eax
  char *v10; // eax
  TargetData *v11; // ecx
  double v12; // st7
  double v13; // st7
  double v14; // st6
  char *v15; // eax
  char *v16; // eax
  TESObjectCELL *ParentCell; // ebx
  double Distance; // st7
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int *SafeFloatPointer; // eax
  TESObjectREFR *v23; // ebx
  int *v24; // eax
  int v25; // ebx
  char v26; // al
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  double v28; // st7
  TESForm *v29; // edi
  double v30; // st7
  double v31; // st7
  double v32; // st7
  int v33; // edi
  TESWorldSpace *WorldSpace; // eax
  double v35; // st7
  TESObjectCELL *v36; // [esp+20h] [ebp-40h]
  TESWorldSpace *v37; // [esp+24h] [ebp-3Ch]
  TESWorldSpace *v38; // [esp+24h] [ebp-3Ch]
  float v39; // [esp+24h] [ebp-3Ch]
  int v40; // [esp+28h] [ebp-38h]
  char v41; // [esp+3Bh] [ebp-25h]
  TESObjectREFR *v42; // [esp+3Ch] [ebp-24h]
  TESObjectCELL *v43; // [esp+40h] [ebp-20h]
  float v44; // [esp+44h] [ebp-1Ch]
  double v45; // [esp+48h] [ebp-18h] BYREF
  int v46; // [esp+54h] [ebp-Ch] BYREF
  int v47; // [esp+58h] [ebp-8h]
  int v48; // [esp+5Ch] [ebp-4h]
  float v49; // [esp+64h] [ebp+4h]
  TESChildCELL *v50; // [esp+64h] [ebp+4h]
  float GameHour; // [esp+64h] [ebp+4h]
  float v52; // [esp+64h] [ebp+4h]
  float v53; // [esp+64h] [ebp+4h]

  v3 = (void *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x184))(this);
  v4 = OblivionDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
         &FleePackage `RTTI Type Descriptor',
         0);
  v5.objectCode = 0;
  v41 = 0;
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this) )
  {
    v7 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this);
    if ( !sub_419CF0(v7) )
    {
      v15 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this);
      if ( !sub_419E50(v15) )
      {
        v16 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this);
        sub_41A610(v16, 0);
      }
      return;
    }
    if ( *(float *)&a2 == 0.0 )
      p_modlist = 0;
    else
      p_modlist = (int)&a2[1].member.super.modlist;
    v9 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x50))(this, p_modlist);
    MagicCaster_CastMagicItem(&a2[1].member, v9, 0, v40);
    v10 = (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x50))(this);
    sub_419F10(v10, 0);
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0x54))(this, 0);
  }
  if ( v4 )
  {
    sub_626DE0((char *)v4);
    v11 = (TargetData *)v4[0xA];
    if ( v11 )
    {
      if ( sub_569E60(v11).form )
        v5.form = sub_569E60((TargetData *)v4[0xA]).form;
    }
    if ( *((_BYTE *)v4 + 0x65) )
    {
      if ( a2->vtbl->GetSleepState(a2) != kSitSleep_Sitting )
        (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)this + 0x560))(this, a2);
    }
    if ( v5.objectCode )
    {
      v44 = *((float *)v4 + 0x13);
      v42 = sub_628140(v4, a2);
      if ( !v42 )
      {
        v12 = *((float *)v4 + 0x13);
        *((_BYTE *)v4 + 0x50) = 1;
        *((float *)v4 + 0x13) = v12 + flt_B33E9C;
        v13 = v44;
        v14 = flt_B36C58;
        goto LABEL_43;
      }
      ParentCell = TESObjectREFR_GetParentCell(a2);
      v43 = ParentCell;
      if ( !ParentCell )
        return;
      *((float *)v4 + 0x13) = *((float *)v4 + 0x13) - flt_B33E9C;
      Distance = TesObjectREF_GetDistance(a2, v42, 0);
      v19 = v4[0x10];
      *(float *)&v45 = Distance;
      v20 = v4[0x11];
      v21 = v4[0x12];
      v46 = v19;
      v47 = v20;
      v48 = v21;
      if ( TESObjectCELL_IsInterior(ParentCell) )
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B37030);
        v41 = 1;
      }
      else
      {
        SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B37028);
      }
      v49 = *(float *)SafeFloatPointer;
      if ( v49 <= (double)*(float *)&v45 )
        goto LABEL_38;
      if ( !*((_BYTE *)this + 0xD0) )
      {
LABEL_39:
        v29 = TESForm_LookupByFormID(0x3Au);
        GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
        v45 = GameHour;
        v30 = sub_6599B0((TESChildCELL *)a2);
        if ( v30 > v45 )
          GameHour = GameHour + dbl_A2F920;
        v45 = GameHour;
        v31 = sub_6599B0((TESChildCELL *)a2);
        *(float *)&v45 = v45 - v31;
        v32 = *(float *)&v29[1].member.refID;
        v33 = *(_DWORD *)this;
        v52 = v32;
        v39 = flt_A30634;
        v53 = dbl_A2F938 / v52 * *(float *)&v45;
        WorldSpace = TESObjectREFR_GetWorldSpace(a2);
        (*(void (__thiscall **)(float *, TESObjectREFR *, int *, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(v33 + 0x418))(
          this,
          a2,
          &v46,
          ParentCell,
          WorldSpace,
          LODWORD(v53),
          LODWORD(v39));
        return;
      }
      if ( ((double (__thiscall *)(TESObjectREFR *))a2->vtbl[1].super.Unk_2A)(a2) == *(float *)&SrcStr )
        sub_627FF0(v4, (Actor *)a2);
      v23 = (TESObjectREFR *)v4[0x18];
      LOBYTE(v49) = 0;
      if ( *(this + 0x22) > 0.0 )
        *(this + 0x22) = *(this + 0x22) - flt_B33E9C;
      else
        LOBYTE(v49) = 1;
      if ( v23 )
      {
        GetPos = v23->vtbl->GetPos;
        *(float *)&v45 = *this;
        v50 = (TESChildCELL *)GetPos(v23);
        v38 = TESObjectREFR_GetWorldSpace(v23);
        v36 = TESObjectREFR_GetParentCell(v23);
        v26 = (*(int (__thiscall **)(float *, TESObjectREFR *, void *, void *, void *, TESObjectCELL *, TESWorldSpace *))(LODWORD(v45) + 0x3DC))(
                this,
                a2,
                v50->vtbl,
                v50[1].vtbl,
                v50[2].vtbl,
                v36,
                v38);
      }
      else
      {
        if ( v41 )
          v24 = (int *)sub_627680((TESPackage *)v4, (int)&v45, (TESChildCELL *)a2, (int)v42, v49);
        else
          v24 = (int *)sub_6279A0((TESPackage *)v4, (int)&v45, (TESChildCELL *)a2, (int)v42, v49);
        v25 = *(_DWORD *)this;
        v46 = *v24;
        v47 = v24[1];
        v48 = v24[2];
        v37 = TESObjectREFR_GetWorldSpace(a2);
        v26 = (*(int (__thiscall **)(float *, TESObjectREFR *, int, int, int, TESObjectCELL *, TESWorldSpace *))(v25 + 0x3DC))(
                this,
                a2,
                v46,
                v47,
                v48,
                v43,
                v37);
      }
      if ( v26 )
      {
        ParentCell = v43;
        v28 = *((float *)v4 + 0x13) - *((float *)v4 + 0x13);
        *((_BYTE *)v4 + 0x50) = 0;
        *((float *)v4 + 0x13) = v28;
LABEL_38:
        if ( *((_BYTE *)this + 0xD0) )
        {
          v35 = *((float *)v4 + 0x13);
          *((_BYTE *)v4 + 0x50) = 1;
          *((float *)v4 + 0x13) = v35 + flt_B33E9C;
          v13 = v44;
          v14 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36C58);
LABEL_43:
          if ( v14 <= v13 )
            (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a2, 1);
          return;
        }
        goto LABEL_39;
      }
    }
  }
}
