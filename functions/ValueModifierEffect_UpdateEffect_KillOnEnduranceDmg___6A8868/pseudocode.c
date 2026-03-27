// positive sp value has been detected, the output may be wrong!
void __userpurge ValueModifierEffect_UpdateEffect_::KillOnEnduranceDmg_(
        Actor *a1@<edi>,
        int a2@<esi>,
        double a3@<st2>,
        double a4@<st1>,
        int a5)
{
  MagicCaster *v5; // ecx
  Actor *ParentActor; // eax

  if ( *(float *)(a2 + 0x18) < 0.0 && ((double (__thiscall *)(Actor *, int))a1->vtbl->GetAV_F)(a1, 8) <= fConstant_1 )
  {
    v5 = *(MagicCaster **)(a2 + 0x24);
    if ( v5 )
    {
      ParentActor = MagicCaster_GetParentActor(v5);
      Actor_Kill(a1, a3, a4, 0.0, ParentActor, COERCE_INT(0.0));
      return;
    }
    Actor_Kill(a1, a3, a4, 0.0, 0, COERCE_INT(0.0));
  }
  ValueModifierEffect_UpdateEffect_::Done_(a5);
}
