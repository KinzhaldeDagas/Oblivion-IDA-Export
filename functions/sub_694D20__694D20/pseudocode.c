int __usercall sub_694D20@<eax>(TESForm *a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  TESForm::FormFlags flags; // ecx
  PlayerCharacter *v7; // eax
  double v8; // st4
  Data *data; // ecx
  Data *v10; // edi
  TESForm::ModReferenceList *next; // edi
  float v13; // [esp+Ch] [ebp-14h]

  a1->vtbl = (TESFormVtbl *)&MagicBallProjectile::`vftable'{for `MagicBallProjectile'};
  a1[1].vtbl = (TESFormVtbl *)&MagicBallProjectile::`vftable'{for `TESChildCell'};
  flags = a1[4].member.flags;
  if ( flags )
    v7 = (PlayerCharacter *)(*(int (__thiscall **)(TESForm::FormFlags))(*(_DWORD *)flags + 0x20))(flags);
  else
    v7 = 0;
  if ( v7 != TESDataHandler_g_PlayerRef )
  {
    v8 = fMagicTrackingMultBall;
    if ( v8 < dbl_A2FC68 )
      v8 = 0.0;
    v13 = v8;
    fNumberOfWeightedProjectileExisting = fNumberOfWeightedProjectileExisting - v13;
  }
  data = a1[5].member.modlist.data;
  if ( data )
  {
    sub_6B7240((int *)data);
    v10 = a1[5].member.modlist.data;
    if ( v10 )
    {
      sub_6B73E0(&a1[5].member.modlist.data->errorState);
      FormHeapFree((unsigned int)v10);
      a1[5].member.modlist.data = 0;
    }
  }
  next = a1[5].member.modlist.next;
  if ( next )
  {
    MagicCaster_CastingVFX_destr(a1[5].member.modlist.next);
    FormHeapFree((unsigned int)next);
  }
  a1[5].member.modlist.next = 0;
  return sub_69FA60(a1, a2, a3, a4, a5);
}
