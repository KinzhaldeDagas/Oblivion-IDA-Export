int __usercall ValueModifierEffect_Apply_::KillOnEnduranceDmg@<eax>(Actor *a1@<edi>, int a2@<esi>, double a3@<st0>)
{
  double v5; // st6
  MagicCaster *v6; // ecx
  Actor *ParentActor; // eax

  if ( *(float *)(a2 + 0x18) < 0.0 )
  {
    v5 = ((double (__usercall *)@<st0>(Actor *@<ecx>, int, double@<st0>))a1->vtbl->GetAV_F)(a1, 8, a3);
    if ( a3 <= fConstant_1 )
    {
      v6 = *(MagicCaster **)(a2 + 0x24);
      if ( v6 )
        ParentActor = MagicCaster_GetParentActor(v6);
      else
        ParentActor = 0;
      Actor_Kill(a1, 0.0, v5, 0.0, ParentActor, COERCE_INT(0.0));
    }
  }
  return ValueModifierEffect_Apply_::Wrapup();
}
