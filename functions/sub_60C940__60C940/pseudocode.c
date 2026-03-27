ArrowProjectile *__thiscall sub_60C940(
        ArrowProjectile *this,
        TESChildCELL *arg0,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float a8,
        float a9,
        ExtraDataList ***a10)
{
  int v11; // eax
  double v12; // st6
  double v13; // st6
  double v14; // st4
  double v15; // st5
  double y; // st6
  double v17; // st7
  AlchemyItem *v18; // eax
  void *v19; // eax
  char v20; // cl
  ExtraContainerChanges_Data *ContainerChanges; // eax
  EnchantmentItem *arrowEnch; // eax
  int FXEffect; // eax
  int v24; // edi
  float *v25; // eax
  volatile LONG *v26; // edi
  unsigned __int8 (__thiscall *v27)(volatile LONG *); // eax
  HighProcess *v28; // eax
  HighProcess *v29; // eax
  TESObjectCELL *ParentCell; // eax
  NiObjectNET *NiNode; // eax
  bhkCharacterProxy *CharProxy; // eax
  _OWORD *v33; // eax
  TESObjectCELL *v34; // eax
  int v35; // ecx
  int v36; // eax
  bool v37; // cc
  ExtraDataList *v39; // [esp+24h] [ebp-7Ch]
  EnchantmentItem *a2; // [esp+2Ch] [ebp-74h]
  int a2a; // [esp+2Ch] [ebp-74h]
  float v42; // [esp+34h] [ebp-6Ch]
  double v43; // [esp+38h] [ebp-68h] BYREF
  hkVector4 v44; // [esp+40h] [ebp-60h]
  int v45; // [esp+50h] [ebp-50h]
  float v46; // [esp+54h] [ebp-4Ch]
  float v47; // [esp+58h] [ebp-48h]
  float v48; // [esp+5Ch] [ebp-44h]
  int v49; // [esp+64h] [ebp-3Ch]
  ArrowProjectile *v50; // [esp+6Ch] [ebp-34h]
  float v51; // [esp+70h] [ebp-30h]
  int v52; // [esp+9Ch] [ebp-4h]
  int savedregs; // [esp+A0h] [ebp+0h] BYREF

  v50 = this;
  v46 = a9;
  MobilObject_constr((TESObjectREFR *)this);
  this->super.vtbl = (MobileObjectVtbl *)&ArrowProjectile::`vftable'{for `ArrowProjectile'};
  this->super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&ArrowProjectile::`vftable'{for `TESChildCell'};
  v11 = *(_DWORD *)(LODWORD(a9) + 8);
  this->unk064 = 1.0;
  this->unk05C = 0;
  this->unk060 = 0;
  v47 = *(float *)(v11 + 0x7C);
  v49 = v11;
  v12 = flt_B37040;
  v52 = 0;
  v47 = v12 * v47;
  v13 = v47;
  this->speed = v47;
  v14 = (1.0 - a8) * flt_B37090;
  this->shooter = (Actor *)arg0;
  v15 = a8 + v14;
  this->speed = v13 * v15;
  this->unk074 = 1.0;
  y = 0.0;
  this->elapsedTime = 0.0;
  this->unk088 = Vector3_InitValue_;
  this->unk08C = *(&Vector3_InitValue_ + 1);
  this->unk090 = dword_B3F9B0;
  LOBYTE(this->unk094) = 0;
  this->unk098 = 0;
  BYTE1(this->unk094) = 0;
  BYTE2(this->unk094) = 0;
  HIBYTE(this->unk094) = 0;
  if ( a10 )
  {
    if ( arg0 )
    {
      EquippedWeaponData_GetDamage(
        (int)a10,
        (int)&savedregs,
        (int *)arg0,
        COERCE_INT(1.0),
        *((float *)&v43 + 1),
        *(double *)&v44.x,
        SLODWORD(v44.z),
        v44.w,
        v45,
        v46,
        v47,
        v48);
      EquippedWeaponData_GetDamage(
        SLODWORD(v44.w),
        (int)&savedregs,
        (int *)arg0,
        COERCE_INT(1.0),
        v42,
        v43,
        SLODWORD(v44.x),
        v44.y,
        SLODWORD(v44.z),
        v44.w,
        COERCE_FLOAT(COERCE_UNSIGNED_INT64(1.0)),
        COERCE_FLOAT(HIDWORD(COERCE_UNSIGNED_INT64(1.0))));
      v44.z = *(double *)&v44.z + 1.0;
      v17 = v44.z * a8;
      this->unk070 = v17;
      v18 = (AlchemyItem *)sub_484DF0(a10);
      this->poison = v18;
      if ( v18 )
        sub_484E50(a10, (char)&savedregs, v15, 0.0, v17);
      this->arrowEnch = *(EnchantmentItem **)(LODWORD(v46) + 0x58);
      v19 = OblivionDynamicCast(
              a10[2],
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESObjectWEAP `RTTI Type Descriptor',
              0);
      if ( v19 )
        v20 = *((_BYTE *)v19 + 0x9C) & 1;
      else
        v20 = 0;
      BYTE2(this->unk094) = v20;
      this->bowEnch = 0;
      if ( v19 )
        v44.y = *((float *)v19 + 0x19);
      else
        v44.y = 0.0;
      if ( LODWORD(v44.y) )
      {
        v47 = sub_4849C0((void **)a10);
        v44.y = ((double (__thiscall *)(int, TESChildCELL *))**(_DWORD **)(LODWORD(v44.y) + 0x24))(
                  LODWORD(v44.y) + 0x24,
                  arg0);
        y = v44.y;
        if ( v44.y <= (double)v46 )
        {
          v39 = **a10;
          ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)&arg0[0x11]);
          v44.y = v46 - v44.y;
          sub_488AA0((void **)a10, (BSExtraDataVtbl *)LODWORD(v44.y), ContainerChanges, v39);
          if ( arg0[0x16].vtbl )
          {
            *(double *)&v44.y = sub_4849C0((void **)a10);
            if ( ((double (__thiscall *)(int, TESChildCELL *))**(_DWORD **)(LODWORD(v44.x) + 0x24))(
                   LODWORD(v44.x) + 0x24,
                   arg0) > *(double *)&v44.x )
              (*(void (__thiscall **)(void *, TESChildCELL *, int, _DWORD, _DWORD))(*(_DWORD *)arg0[0x16].vtbl + 0x42C))(
                arg0[0x16].vtbl,
                arg0,
                1,
                0,
                0);
          }
          this->bowEnch = a2;
        }
        BYTE2(this->unk094) = 1;
      }
      arrowEnch = this->arrowEnch;
      if ( arrowEnch || (arrowEnch = this->bowEnch) != 0 )
      {
        FXEffect = MagicItem_GetFXEffect((_DWORD *)arrowEnch + 6, 0);
        if ( FXEffect )
        {
          v24 = *(_DWORD *)(FXEffect + 0x7C);
          if ( v24 )
          {
            v25 = (float *)FormHeapAlloc(0x4Cu);
            LOBYTE(v51) = 1;
            if ( v25 )
              v26 = (volatile LONG *)MagicShaderHitEffect_constr_args2(v25, (int)this, v24, flt_A30634);
            else
              v26 = 0;
            v27 = *(unsigned __int8 (__thiscall **)(volatile LONG *))(*v26 + 0x68);
            LOBYTE(v51) = 0;
            if ( v27(v26) )
              sub_678D30((int *)&ActorProcessManager_ptr, v26);
            else
              (**(void (__thiscall ***)(volatile LONG *, int))v26)(v26, 1);
          }
        }
      }
    }
  }
  TESObjectREFR_SetPosition((TESObjectREFR *)this, *(float *)&a3, *(float *)&a4, *(float *)&a5);
  v28 = (HighProcess *)FormHeapAlloc(0x2ECu);
  a2a = (int)v28;
  LOBYTE(v51) = 2;
  if ( v28 )
    v29 = HighProcess::HighProcess(v28);
  else
    v29 = 0;
  LOBYTE(v51) = 0;
  this->super.process = v29;
  sub_4D8A10(a6);
  sub_4D89D0(a7);
  sub_4D89F0(0.0);
  if ( arg0 )
  {
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)arg0);
    MobileObject_ChangeCell((TESObjectREFR *)this, ParentCell);
  }
  TESObjectREFR_SetBaseForm((TESObjectREFR *)this, a2a);
  NiNode = (NiObjectNET *)MobileObject_GenerateNiNode((TESObjectREFR *)this, v15, y, 0.0);
  if ( NiNode )
    NiObjectNET_SetName(NiNode, "Arrow");
  sub_608CB0(this);
  sub_60A230(this, (TESObjectREFRVtbl *)arg0, a8);
  *(float *)&v43 = -flt_A7DEB4;
  *((float *)&v43 + 1) = 0.0;
  v44.x = 0.0;
  v44.y = 0.0;
  CharProxy = MobileObject_GetCharProxy(&this->super);
  if ( CharProxy )
  {
    v33 = *((_OWORD **)CharProxy + 2);
    if ( v33 )
      sub_8AC0B0(v33, (hkVector4 *)&v43);
  }
  v34 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
  sub_4D35D0(v34, v15, y, 0.0, (TESObjectREFR *)this);
  sub_60C5B0(this);
  v35 = dword_B370D0;
  v36 = dword_B3B7D0 + 1;
  v37 = v36 <= dword_B370D0;
  dword_B3B7D0 = v36;
  if ( !v37 )
    sub_608120(v35, 0);
  return this;
}
