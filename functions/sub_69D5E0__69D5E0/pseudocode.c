// positive sp value has been detected, the output may be wrong!
MagicFogProjectile *__userpurge sub_69D5E0@<eax>(
        MagicFogProjectile *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        Data *a4,
        TESForm::ModReferenceList *a5,
        TESObjectCELL *(__thiscall *a6)(TESChildCELL *this),
        TESForm *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        NiAVObject *a14,
        Ni2DBuffer **a15)
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
  TESObjectCELL *DwordAtOffset40; // eax
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

  sub_69F360((TESObjectREFR *)a1, a2, a3, a4, a5, a6, a7, *(float *)&a8, *(float *)&a9, *(float *)&a10, a11, a12, a13); /*0x69d671*/
  effectCode = (_DWORD *)a1->super.effectCode; /*0x69d676*/
  v40 = 0; /*0x69d67b*/
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicFogProjectile::`vftable'{for `MagicFogProjectile'}; /*0x69d67f*/
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicFogProjectile::`vftable'{for `TESChildCell'}; /*0x69d685*/
  Duration = (float)EffectItem_GetDuration(effectCode); /*0x69d699*/
  v17 = Duration; /*0x69d69d*/
  if ( flt_B37ED0[0x14] >= (double)Duration ) /*0x69d6ae*/
    v17 = flt_B37ED0[0x14]; /*0x69d6b4*/
  v18 = (_DWORD *)a1->super.effectCode; /*0x69d6b6*/
  v35 = v17; /*0x69d6b9*/
  a1->unk080 = v35; /*0x69d6c1*/
  Area = (float)EffectItem_GetArea(v18); /*0x69d6d4*/
  v19 = Area; /*0x69d6d8*/
  v20 = flt_B37ED0[0x16]; /*0x69d6dc*/
  if ( v20 >= Area ) /*0x69d6e9*/
    v19 = flt_B37ED0[0x16]; /*0x69d6ef*/
  effectSetting = a1->super.effectSetting; /*0x69d6f1*/
  v37 = v19; /*0x69d6f4*/
  a1->unk084 = v37; /*0x69d702*/
  v22 = effectSetting->projSpeed * flt_B37ED0[6]; /*0x69d70d*/
  a1->unk088 = 0; /*0x69d713*/
  a1->unk090 = 0; /*0x69d719*/
  a1->castingVFX = 0; /*0x69d71f*/
  a1->super.speed = v22; /*0x69d725*/
  a1->unk094 = 0; /*0x69d728*/
  a1->unk07C = 0.0; /*0x69d730*/
  a1->unk08C = 1.0; /*0x69d735*/
  if ( a14 ) /*0x69d73b*/
    MobileObject_SetNiNode(&a1->super.super, a14); /*0x69d73e*/
  else
    sub_69FD40((UInt32)a1, a2, v20, 1.0); /*0x69d745*/
  sub_69CB30((float *)a1); /*0x69d74c*/
  sub_69D140((TESObjectREFR *)a1); /*0x69d753*/
  v39.x = -flt_A7DEB4; /*0x69d762*/
  v39.y = 0.0; /*0x69d768*/
  v39.z = 0.0; /*0x69d76c*/
  v39.w = 0.0; /*0x69d770*/
  CharProxy = MobileObject_GetCharProxy(&a1->super.super); /*0x69d774*/
  if ( CharProxy ) /*0x69d77b*/
  {
    v24 = *((_OWORD **)CharProxy + 2); /*0x69d77d*/
    if ( v24 ) /*0x69d782*/
      sub_8AC0B0(v24, &v39); /*0x69d78b*/
  }
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x69d793*/
  TESObjectCELL_AddReference(DwordAtOffset40, (TESObjectREFR *)a1); /*0x69d79a*/
  boltSound = a1->super.effectSetting->boltSound; /*0x69d7a2*/
  if ( boltSound ) /*0x69d7aa*/
  {
    unk090 = (_DWORD *)a1->unk090; /*0x69d7ac*/
    refID = boltSound->super.member.super.refID; /*0x69d7b7*/
    if ( unk090 ) /*0x69d7bb*/
    {
      sub_6B73E0(unk090); /*0x69d7bf*/
      FormHeapFree((unsigned int)unk090); /*0x69d7c5*/
      a1->unk090 = 0; /*0x69d7cd*/
    }
    v28 = (int *)sub_65AC50(a1, refID, 1, 0x102, 1); /*0x69d7e3*/
    a1->unk090 = (UInt32)v28; /*0x69d7ea*/
    if ( v28 ) /*0x69d7f0*/
      sub_6B7280(v28, 1.0); /*0x69d7fa*/
  }
  if ( a15 ) /*0x69d805*/
  {
    sub_69E200(a15, (int)a1); /*0x69d80a*/
    unk080 = a1->unk080; /*0x69d816*/
    a1->castingVFX = (UInt32)a15; /*0x69d81c*/
    MagicCaster_CastingVFX_ClearSomething___((int)a15, 0, unk080); /*0x69d822*/
  }
  sub_69FF10((TESObjectREFR *)a1); /*0x69d829*/
  caster = a1->super.caster; /*0x69d82e*/
  if ( caster ) /*0x69d833*/
    v30 = (PlayerCharacter *)caster->vtbl->GetParentRefr(caster); /*0x69d83a*/
  else
    v30 = 0; /*0x69d83e*/
  v31 = v30 == reference; /*0x69d840*/
  result = a1; /*0x69d846*/
  if ( !v31 ) /*0x69d848*/
    MEMORY[0xB3C0D0] = flt_B37ED0[0x92] + MEMORY[0xB3C0D0]; /*0x69d856*/
  return result; /*0x69d86b*/
}
