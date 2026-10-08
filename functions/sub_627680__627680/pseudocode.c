float *__thiscall sub_627680(TESPackage *this, float *a2, TESObjectREFR *arg4, int a4, float argC)
{
  TESObjectREFR *v6; // esi
  _DWORD *v7; // eax
  TESForm *v8; // eax
  TESWorldSpace *WorldSpace; // ebp
  char v10; // al
  TESObjectCELL *DwordAtOffset40; // eax
  int v12; // eax
  bool v13; // zf
  TESObjectREFR *v14; // ecx
  float *v15; // eax
  float v16; // edx
  float v17; // ecx
  float v18; // eax
  int (__thiscall **vtbl)(TESObjectREFR *); // edx
  float *v20; // eax
  float v21; // ecx
  float v22; // edx
  float v23; // eax
  TESObjectCELL *v24; // eax
  float *v25; // eax
  NiPoint3 *LinkedTeleportMarkerPosition; // eax
  float *v27; // eax
  float *v29; // [esp-4h] [ebp-58h]
  float a3; // [esp+0h] [ebp-54h]
  float *v31; // [esp+4h] [ebp-50h]
  float a5; // [esp+8h] [ebp-4Ch]
  NiPoint3 v33; // [esp+24h] [ebp-30h] BYREF
  float v34; // [esp+30h] [ebp-24h]
  float v35; // [esp+34h] [ebp-20h]
  float v36; // [esp+38h] [ebp-1Ch]
  float v37; // [esp+3Ch] [ebp-18h]
  float v38; // [esp+40h] [ebp-14h]
  float v39; // [esp+44h] [ebp-10h]
  NiPoint3 v40; // [esp+48h] [ebp-Ch] BYREF
  float v41; // [esp+64h] [ebp+10h]

  if ( !sub_4D7930(arg4) || ((int (__thiscall *)(TESObjectREFR *))arg4->vtbl[2].super.Unk_0C)(arg4) ) /*0x6276a6*/
  {
    if ( ((int (__thiscall *)(TESObjectREFR *))arg4->vtbl[2].super.Unk_0C)(arg4) ) /*0x627750*/
    {
      v10 = 0; /*0x627756*/
      goto LABEL_14; /*0x627758*/
    }
  }
  else
  {
    v6 = sub_4D7930(arg4); /*0x6276c3*/
    v7 = OblivionDynamicCast( /*0x6276c8*/
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( v6 ) /*0x6276d2*/
    {
      if ( v7 ) /*0x6276da*/
      {
        if ( v7[0x16] ) /*0x6276dc*/
        {
          v8 = arg4->vtbl->GetBaseForm(arg4); /*0x6276ec*/
          ExtraDataList::SetOrRemoveExtraOwnership(&v6->member.baseExtraList, v8); /*0x6276f2*/
          WorldSpace = TESObjectREFR_GetWorldSpace(v6); /*0x627700*/
          if ( WorldSpace == TESObjectREFR_GetWorldSpace(arg4) /*0x62773c*/
            && !v6->vtbl->IsDead(v6, 0)
            && (v6->member.super.flags & 0x800) == 0
            && TesObjectREF_GetDistance(v6, arg4, 0) <= dbl_A3F470 )
          {
            *((_BYTE *)this + 0x65) = 1; /*0x62773e*/
            v10 = 0; /*0x627742*/
            goto LABEL_14; /*0x627744*/
          }
        }
      }
    }
  }
  v10 = LOBYTE(argC); /*0x62775a*/
LABEL_14:
  if ( !*((_BYTE *)this + 0x3C) ) /*0x627766*/
  {
    v27 = sub_566B30(this, &v40.x, (Actor *)arg4); /*0x62796c*/
    *a2 = *v27; /*0x627973*/
    a2[1] = v27[1]; /*0x627978*/
    a2[2] = v27[2]; /*0x62797e*/
    goto LABEL_28; /*0x62797e*/
  }
  if ( a4 ) /*0x627772*/
  {
    unk_B3B924 = a4; /*0x62777a*/
    *((_DWORD *)this + 0x17) = 0; /*0x627780*/
    if ( v10 ) /*0x627787*/
    {
      if ( TESObjectREFR_IsPersistent(arg4) && Actor::CanUSeDoor_((Actor *)arg4) ) /*0x627795*/
      {
        a5 = flt_A578C0; /*0x6277b8*/
        v31 = arg4->vtbl->GetPos(arg4); /*0x6277c5*/
        a3 = flt_A578C0; /*0x6277cf*/
        v29 = arg4->vtbl->GetPos(arg4); /*0x6277d4*/
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg4); /*0x6277d7*/
        sub_446B90( /*0x6277e3*/
          DwordAtOffset40,
          v29,
          a3,
          v31,
          a5,
          (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_626CC0,
          (int)arg4);
      }
    }
    v12 = unk_B3B91C; /*0x6277e8*/
    v13 = unk_B3B91C == 0; /*0x6277ef*/
    unk_B3B924 = 0; /*0x6277f1*/
    if ( !v13 ) /*0x6277f7*/
    {
      *((_DWORD *)this + 0x17) = v12; /*0x6277f9*/
      unk_B3B91C = 0; /*0x6277fc*/
    }
    v14 = *((TESObjectREFR **)this + 0x17); /*0x627802*/
    if ( v14 ) /*0x627807*/
    {
      LinkedTeleportMarkerPosition = TESObjectREFR_GetLinkedTeleportMarkerPosition(v14); /*0x62794d*/
      goto LABEL_26; /*0x62794d*/
    }
    v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x174))(a4); /*0x627818*/
    v16 = v15[1]; /*0x62781a*/
    v17 = *v15; /*0x62781d*/
    v18 = v15[2]; /*0x62781f*/
    v38 = v16; /*0x627822*/
    vtbl = (int (__thiscall **)(TESObjectREFR *))arg4->vtbl; /*0x627826*/
    v37 = v17; /*0x627828*/
    v39 = v18; /*0x62782c*/
    v20 = (float *)vtbl[0x5D](arg4); /*0x627838*/
    v21 = *v20; /*0x627840*/
    v41 = g_GameSettingStringPointers_B36CD8[0xD6]; /*0x627842*/
    v22 = v20[1]; /*0x627846*/
    v23 = v20[2]; /*0x627849*/
    v34 = v21; /*0x62784c*/
    v35 = v22; /*0x627858*/
    v36 = v23; /*0x62785c*/
    v33.x = v21 - v37; /*0x627864*/
    v33.y = v22 - v38; /*0x627870*/
    v33.z = v23 - v39; /*0x62787c*/
    Vector3_NormalizeInPlace(&v33.x); /*0x627880*/
    v37 = v33.x * v41; /*0x627895*/
    v38 = v33.y * v41; /*0x62789f*/
    v39 = v41 * v33.z; /*0x6278a7*/
    v40.x = v37 + v34; /*0x6278b3*/
    v40.y = v38 + v35; /*0x6278c9*/
    v40.z = v39 + v36; /*0x6278dd*/
    v33 = v40; /*0x6278e5*/
    v24 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg4); /*0x6278e9*/
    v25 = Actor_ChoosePathGridSteeringPosition(arg4, &v40.x, v33, v24, 0.0, 0.0, 0); /*0x627915*/
    *a2 = *v25; /*0x62791c*/
    a2[1] = v25[1]; /*0x627921*/
    a2[2] = v25[2]; /*0x62792e*/
    if ( sub_8AA350(a2, &v33.x) ) /*0x627931*/
    {
      LinkedTeleportMarkerPosition = (NiPoint3 *)sub_5E03E0(arg4, &v40.x, &v33.x); /*0x627946*/
LABEL_26:
      *a2 = LinkedTeleportMarkerPosition->x; /*0x627952*/
      a2[1] = LinkedTeleportMarkerPosition->y; /*0x627959*/
      a2[2] = LinkedTeleportMarkerPosition->z; /*0x62795f*/
    }
  }
LABEL_28:
  *((float *)this + 0x10) = *a2; /*0x627981*/
  *((float *)this + 0x11) = a2[1]; /*0x627989*/
  *((float *)this + 0x12) = a2[2]; /*0x627994*/
  return a2; /*0x62798f*/
}
