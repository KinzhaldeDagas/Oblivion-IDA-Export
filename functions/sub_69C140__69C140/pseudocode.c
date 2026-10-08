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

  a1->super.super.vtbl = (MobileObjectVtbl *)&MagicFogProjectile::`vftable'{for `MagicFogProjectile'}; /*0x69c16b*/
  a1->super.super.super.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))&MagicFogProjectile::`vftable'{for `TESChildCell'}; /*0x69c171*/
  caster = a1->super.caster; /*0x69c178*/
  if ( caster ) /*0x69c185*/
    v7 = (PlayerCharacter *)caster->vtbl->GetParentRefr(caster); /*0x69c18c*/
  else
    v7 = 0; /*0x69c190*/
  if ( v7 != reference ) /*0x69c198*/
  {
    v8 = flt_B37ED0[0x92]; /*0x69c19a*/
    if ( v8 < dbl_A2FC68 ) /*0x69c1ab*/
      v8 = 0.0; /*0x69c1af*/
    v13 = v8; /*0x69c1b1*/
    MEMORY[0xB3C0D0] = MEMORY[0xB3C0D0] - v13; /*0x69c1bf*/
  }
  sub_69C100(a1); /*0x69c1c7*/
  unk090 = (int *)a1->unk090; /*0x69c1cc*/
  if ( unk090 ) /*0x69c1d4*/
  {
    sub_6B7240(unk090); /*0x69c1d6*/
    v10 = a1->unk090; /*0x69c1db*/
    if ( v10 ) /*0x69c1e3*/
    {
      sub_6B73E0((_DWORD *)a1->unk090);         // something audio related /*0x69c1e7*/
      FormHeapFree(v10); /*0x69c1ed*/
      a1->unk090 = 0; /*0x69c1f5*/
    }
  }
  castingVFX = a1->castingVFX; /*0x69c1ff*/
  if ( castingVFX ) /*0x69c207*/
  {
    MagicCaster_CastingVFX_destr((void *)a1->castingVFX); /*0x69c20b*/
    FormHeapFree(castingVFX); /*0x69c211*/
  }
  a1->castingVFX = 0; /*0x69c21b*/
  return sub_69FA60((ActorVtbl *)a1, a2, a3, a4, a5); /*0x69c232*/
}
