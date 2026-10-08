// positive sp value has been detected, the output may be wrong!
void __userpurge ValueModifierEffect_UpdateEffect_::KillOnEnduranceDmg_(
        Actor *a1@<edi>,
        int a2@<esi>,
        double a3@<st0>,
        int a4)
{
  double v6; // st6
  MagicCaster *v7; // ecx
  Actor *ParentActor; // eax

  if ( *(float *)(a2 + 0x18) < 0.0 ) /*0x6a8872*/
  {
    v6 = ((double (__usercall *)@<st0>(Actor *@<ecx>, int, double@<st0>))a1->vtbl->GetAV_F)(a1, 8, a3); /*0x6a8880*/
    if ( a3 <= fConstant_1 ) /*0x6a888d*/
    {
      v7 = *(MagicCaster **)(a2 + 0x24); /*0x6a888f*/
      if ( v7 ) /*0x6a8894*/
      {
        ParentActor = MagicCaster_GetParentActor(v7); /*0x6a8896*/
        Actor_Kill(a1, 0.0, v6, 0.0, ParentActor, COERCE_INT(0.0)); /*0x6a88a4*/
        return; /*0x6a88ab*/
      }
      Actor_Kill(a1, 0.0, v6, 0.0, 0, COERCE_INT(0.0)); /*0x6a88b9*/
    }
  }
  ValueModifierEffect_UpdateEffect_::Done_(a4); /*0x6a88ba*/
}
