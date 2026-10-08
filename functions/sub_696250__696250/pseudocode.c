MagicBallProjectile *__userpurge sub_696250@<eax>(
        MagicBallProjectile *a1@<ecx>,
        double st5_0@<st2>,
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
        NiAVObject *node,
        Ni2DBuffer **a15)
{
  EffectSetting *effectSetting; // ecx
  double v17; // st7
  bhkCharacterProxy *CharProxy; // eax
  _OWORD *v19; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TESSound *boltSound; // eax
  _DWORD *unk088; // edi
  MagicCaster *caster; // ecx
  PlayerCharacter *v24; // eax
  int refID; // [esp+20h] [ebp-40h]
  hkVector4 a2; // [esp+30h] [ebp-30h] BYREF
  int v28; // [esp+5Ch] [ebp-4h]

  sub_69F360( /*0x6962e5*/
    (TESObjectREFR *)a1,
    st5_0,
    a3,
    a4,
    a5,
    a6,
    a7,
    *(float *)&a8,
    *(float *)&a9,
    *(float *)&a10,
    a11,
    a12,
    a13);
  effectSetting = a1->super.effectSetting; /*0x6962ea*/
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicBallProjectile::`vftable'{for `MagicBallProjectile'}; /*0x6962ed*/
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicBallProjectile::`vftable'{for `TESChildCell'}; /*0x6962f3*/
  v17 = effectSetting->projSpeed * flt_B37ED0[6]; /*0x6962fd*/
  v28 = 0; /*0x696307*/
  a1->super.speed = v17; /*0x69630b*/
  a1->unk080 = 0; /*0x69630e*/
  a1->unk088 = 0; /*0x696316*/
  *(float *)&a1->unk07C = 0.0; /*0x69631c*/
  a1->unk08C = 0; /*0x69631f*/
  a1->unk084 = 1.0; /*0x696329*/
  if ( node ) /*0x69632f*/
    MobileObject_SetNiNode(&a1->super.super, node); /*0x696332*/
  else
    sub_69FD40((UInt32)a1, st5_0, a3, 1.0); /*0x696339*/
  MagicBallProjectile_PlaySpecialIdle(a1); /*0x696340*/
  sub_695DC0(&a1->super.super); /*0x696347*/
  a2.x = -flt_A7DEB4; /*0x696356*/
  a2.y = 0.0; /*0x69635c*/
  a2.z = 0.0; /*0x696360*/
  a2.w = 0.0; /*0x696364*/
  CharProxy = MobileObject_GetCharProxy(&a1->super.super); /*0x696368*/
  if ( CharProxy ) /*0x69636f*/
  {
    v19 = *((_OWORD **)CharProxy + 2); /*0x696371*/
    if ( v19 ) /*0x696376*/
      sub_8AC0B0(v19, &a2); /*0x69637f*/
  }
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x696387*/
  TESObjectCELL_AddReference(DwordAtOffset40, (TESObjectREFR *)a1); /*0x69638e*/
  boltSound = a1->super.effectSetting->boltSound; /*0x696396*/
  if ( boltSound ) /*0x69639e*/
  {
    unk088 = (_DWORD *)a1->unk088; /*0x6963a0*/
    refID = boltSound->super.member.super.refID; /*0x6963ab*/
    if ( unk088 ) /*0x6963af*/
    {
      sub_6B73E0(unk088); /*0x6963b3*/
      FormHeapFree((unsigned int)unk088); /*0x6963b9*/
      a1->unk088 = 0; /*0x6963c1*/
    }
    a1->unk088 = sub_65AC50(a1, refID, 1, 0x102, 1); /*0x6963dc*/
  }
  if ( a15 ) /*0x6963e8*/
  {
    sub_69E200(a15, (int)a1); /*0x6963ed*/
    a1->unk08C = (UInt32)a15; /*0x6963f2*/
  }
  sub_69FF10((TESObjectREFR *)a1); /*0x6963fa*/
  caster = a1->super.caster; /*0x6963ff*/
  if ( caster ) /*0x696404*/
    v24 = (PlayerCharacter *)caster->vtbl->GetParentRefr(caster); /*0x69640b*/
  else
    v24 = 0; /*0x69640f*/
  if ( v24 != reference ) /*0x696417*/
    MEMORY[0xB3C0D0] = flt_B37ED0[0x8E] + MEMORY[0xB3C0D0]; /*0x696425*/
  TESForm_MarkAsModified((TESForm *)a1, 0x2000000); /*0x696432*/
  return a1; /*0x696448*/
}
