// positive sp value has been detected, the output may be wrong!
MagicFogProjectile *__userpurge sub_69D5E0@<eax>(
        MagicFogProjectile *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        void *a4,
        TESForm::ModReferenceList *a5,
        void *a6,
        TESForm *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        volatile LONG *a14,
        TESObjectCELL *a15)
{
  _DWORD *effectCode; // ecx
  double v17; // st7
  _DWORD *v18; // ecx
  double v19; // st7
  double v20; // st6
  EffectSetting *effectSetting; // ecx
  double v22; // st7
  bhkCharacterProxy *CharProxy; // eax
  _OWORD *v24; // eax
  TESObjectCELL *ParentCell; // eax
  TESSound *boltSound; // eax
  _DWORD *unk090; // edi
  int *v28; // eax
  MagicCaster *caster; // ecx
  PlayerCharacter *v30; // eax
  bool v31; // zf
  MagicFogProjectile *result; // eax
  float unk080; // [esp-14h] [ebp-74h]
  float Duration; // [esp+4h] [ebp-5Ch]
  float v35; // [esp+4h] [ebp-5Ch]
  float Area; // [esp+4h] [ebp-5Ch]
  float v37; // [esp+4h] [ebp-5Ch]
  int refID; // [esp+8h] [ebp-58h]
  hkVector4 v39; // [esp+14h] [ebp-4Ch] BYREF
  int v40; // [esp+40h] [ebp-20h]

  sub_69F360((TESObjectREFR *)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  effectCode = (_DWORD *)a1->super.effectCode;
  v40 = 0;
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicFogProjectile::`vftable'{for `MagicFogProjectile'};
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicFogProjectile::`vftable'{for `TESChildCell'};
  Duration = (float)EffectItem_GetDuration(effectCode);
  v17 = Duration;
  if ( flt_B37F20 >= (double)Duration )
    v17 = flt_B37F20;
  v18 = (_DWORD *)a1->super.effectCode;
  v35 = v17;
  a1->unk080 = v35;
  Area = (float)EffectItem_GetArea(v18);
  v19 = Area;
  v20 = flt_B37F28;
  if ( v20 >= Area )
    v19 = flt_B37F28;
  effectSetting = a1->super.effectSetting;
  v37 = v19;
  a1->unk084 = v37;
  v22 = effectSetting->projSpeed * flt_B37EE8;
  a1->unk088 = 0;
  a1->unk090 = 0;
  a1->castingVFX = 0;
  a1->super.speed = v22;
  a1->unk094 = 0;
  a1->unk07C = 0.0;
  a1->unk08C = 1.0;
  if ( a14 )
    sub_4D7D10(&a1->super.super, a14);
  else
    sub_69FD40((int)a1, a2, v20, 1.0);
  sub_69CB30((float *)a1);
  sub_69D140((TESObjectREFR *)a1);
  v39.x = -flt_A7DEB4;
  v39.y = 0.0;
  v39.z = 0.0;
  v39.w = 0.0;
  CharProxy = MobileObject_GetCharProxy(&a1->super.super);
  if ( CharProxy )
  {
    v24 = *((_OWORD **)CharProxy + 2);
    if ( v24 )
      sub_8AC0B0(v24, &v39);
  }
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
  sub_4D35D0(ParentCell, a2, v20, 0.0, (TESObjectREFR *)a1);
  boltSound = a1->super.effectSetting->boltSound;
  if ( boltSound )
  {
    unk090 = (_DWORD *)a1->unk090;
    refID = boltSound->super.member.super.refID;
    if ( unk090 )
    {
      sub_6B73E0(unk090);
      FormHeapFree((unsigned int)unk090);
      a1->unk090 = 0;
    }
    v28 = (int *)sub_65AC50(a1, refID, 1, 0x102, 1);
    a1->unk090 = (UInt32)v28;
    if ( v28 )
      sub_6B7280(v28, 1.0);
  }
  if ( a15 )
  {
    sub_69E200(a15, (int)a1);
    unk080 = a1->unk080;
    a1->castingVFX = (UInt32)a15;
    MagicCaster_CastingVFX_ClearSomething___((int)a15, 0, unk080);
  }
  sub_69FF10((TESObjectREFR *)a1);
  caster = a1->super.caster;
  if ( caster )
    v30 = (PlayerCharacter *)caster->vtbl->GetParentRefr(caster);
  else
    v30 = 0;
  v31 = v30 == TESDataHandler_g_PlayerRef;
  result = a1;
  if ( !v31 )
    fNumberOfWeightedProjectileExisting = fMagicTrackingMultFog + fNumberOfWeightedProjectileExisting;
  return result;
}
