int __usercall sub_69C140@<eax>(
        MagicFogProjectile *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  MagicCaster *caster; // ecx
  PlayerCharacter *v7; // eax
  double v8; // st4
  int *unk090; // ecx
  UInt32 v10; // edi
  UInt32 castingVFX; // edi
  float v13; // [esp+Ch] [ebp-14h]

  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicFogProjectile::`vftable'{for `MagicFogProjectile'};
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicFogProjectile::`vftable'{for `TESChildCell'};
  caster = a1->super.caster;
  if ( caster )
    v7 = (PlayerCharacter *)caster->vtbl->GetParentRefr(caster);
  else
    v7 = 0;
  if ( v7 != TESDataHandler_g_PlayerRef )
  {
    v8 = fMagicTrackingMultFog;
    if ( v8 < dbl_A2FC68 )
      v8 = 0.0;
    v13 = v8;
    fNumberOfWeightedProjectileExisting = fNumberOfWeightedProjectileExisting - v13;
  }
  sub_69C100(a1);
  unk090 = (int *)a1->unk090;
  if ( unk090 )
  {
    sub_6B7240(unk090);
    v10 = a1->unk090;
    if ( v10 )
    {
      sub_6B73E0((_DWORD *)a1->unk090);         // something audio related
      FormHeapFree(v10);
      a1->unk090 = 0;
    }
  }
  castingVFX = a1->castingVFX;
  if ( castingVFX )
  {
    MagicCaster_CastingVFX_destr((void *)a1->castingVFX);
    FormHeapFree(castingVFX);
  }
  a1->castingVFX = 0;
  return sub_69FA60((TESForm *)a1, a2, a3, a4, a5);
}
