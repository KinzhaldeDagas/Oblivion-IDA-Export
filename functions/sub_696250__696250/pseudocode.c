MagicBallProjectile *__userpurge sub_696250@<eax>(
        MagicBallProjectile *a1@<ecx>,
        double st5_0@<st2>,
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
        _DWORD *a15)
{
  EffectSetting *effectSetting; // ecx
  double v17; // st7
  bhkCharacterProxy *CharProxy; // eax
  _OWORD *v19; // eax
  TESObjectCELL *ParentCell; // eax
  TESSound *boltSound; // eax
  _DWORD *unk088; // edi
  MagicCaster *caster; // ecx
  PlayerCharacter *v24; // eax
  int refID; // [esp+20h] [ebp-40h]
  hkVector4 a2; // [esp+30h] [ebp-30h] BYREF
  int v28; // [esp+5Ch] [ebp-4h]

  sub_69F360((TESObjectREFR *)a1, st5_0, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  effectSetting = a1->super.effectSetting;
  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicBallProjectile::`vftable'{for `MagicBallProjectile'};
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicBallProjectile::`vftable'{for `TESChildCell'};
  v17 = effectSetting->projSpeed * flt_B37EE8;
  v28 = 0;
  a1->super.speed = v17;
  a1->unk080 = 0;
  a1->unk088 = 0;
  *(float *)&a1->unk07C = 0.0;
  a1->unk08C = 0;
  a1->unk084 = 1.0;
  if ( a14 )
    sub_4D7D10(&a1->super.super, a14);
  else
    sub_69FD40((int)a1, st5_0, a3, 1.0);
  sub_695010(a1);
  sub_695DC0(&a1->super.super);
  a2.x = -flt_A7DEB4;
  a2.y = 0.0;
  a2.z = 0.0;
  a2.w = 0.0;
  CharProxy = MobileObject_GetCharProxy(&a1->super.super);
  if ( CharProxy )
  {
    v19 = *((_OWORD **)CharProxy + 2);
    if ( v19 )
      sub_8AC0B0(v19, &a2);
  }
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
  sub_4D35D0(ParentCell, st5_0, a3, 0.0, (TESObjectREFR *)a1);
  boltSound = a1->super.effectSetting->boltSound;
  if ( boltSound )
  {
    unk088 = (_DWORD *)a1->unk088;
    refID = boltSound->super.member.super.refID;
    if ( unk088 )
    {
      sub_6B73E0(unk088);
      FormHeapFree((unsigned int)unk088);
      a1->unk088 = 0;
    }
    a1->unk088 = sub_65AC50(a1, refID, 1, 0x102, 1);
  }
  if ( a15 )
  {
    sub_69E200(a15, (int)a1);
    a1->unk08C = (UInt32)a15;
  }
  sub_69FF10((TESObjectREFR *)a1);
  caster = a1->super.caster;
  if ( caster )
    v24 = (PlayerCharacter *)caster->vtbl->GetParentRefr(caster);
  else
    v24 = 0;
  if ( v24 != TESDataHandler_g_PlayerRef )
    fNumberOfWeightedProjectileExisting = fMagicTrackingMultBall + fNumberOfWeightedProjectileExisting;
  TESForm_MarkAsModified((TESForm *)a1, 0x2000000);
  return a1;
}
