int __usercall sub_694D20@<eax>(ActorVtbl *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  TESForm::FormFlags SeekRecordTypeFast; // ecx
  PlayerCharacter *v7; // eax
  double v8; // st4
  Data *Unk_22; // ecx
  Data *v10; // edi
  TESForm::ModReferenceList *Unk_23; // edi
  float v13; // [esp+Ch] [ebp-14h]

  a1->super.super.super.super.InitializeComponent = (void (__thiscall *)(BaseFormComponent *))&MagicBallProjectile::`vftable'{for `MagicBallProjectile'}; /*0x694d4b*/
  a1->super.super.super.Unk_06 = (void (__thiscall *)(TESForm *))&MagicBallProjectile::`vftable'{for `TESChildCell'}; /*0x694d51*/
  SeekRecordTypeFast = (TESForm::FormFlags)a1->super.super.super.SeekRecordTypeFast; /*0x694d58*/
  if ( SeekRecordTypeFast ) /*0x694d65*/
    v7 = (PlayerCharacter *)(*(int (__thiscall **)(TESForm::FormFlags))(*(_DWORD *)SeekRecordTypeFast + 0x20))(SeekRecordTypeFast); /*0x694d6c*/
  else
    v7 = 0; /*0x694d70*/
  if ( v7 != reference ) /*0x694d78*/
  {
    v8 = flt_B37ED0[0x8E]; /*0x694d7a*/
    if ( v8 < dbl_A2FC68 ) /*0x694d8b*/
      v8 = 0.0; /*0x694d8f*/
    v13 = v8; /*0x694d91*/
    MEMORY[0xB3C0D0] = MEMORY[0xB3C0D0] - v13; /*0x694d9f*/
  }
  Unk_22 = (Data *)a1->super.super.super.Unk_22; /*0x694da5*/
  if ( Unk_22 ) /*0x694dad*/
  {
    sub_6B7240((int *)Unk_22); /*0x694daf*/
    v10 = (Data *)a1->super.super.super.Unk_22; /*0x694db4*/
    if ( v10 ) /*0x694dbc*/
    {
      sub_6B73E0((_DWORD *)a1->super.super.super.Unk_22); /*0x694dc0*/
      FormHeapFree((unsigned int)v10); /*0x694dc6*/
      a1->super.super.super.Unk_22 = 0; /*0x694dce*/
    }
  }
  Unk_23 = (TESForm::ModReferenceList *)a1->super.super.super.Unk_23; /*0x694dd8*/
  if ( Unk_23 ) /*0x694de0*/
  {
    MagicCaster_CastingVFX_destr(a1->super.super.super.Unk_23); /*0x694de4*/
    FormHeapFree((unsigned int)Unk_23); /*0x694dea*/
  }
  a1->super.super.super.Unk_23 = 0; /*0x694df4*/
  return sub_69FA60(a1, a2, a3, a4, a5); /*0x694e0b*/
}
