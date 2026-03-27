void __thiscall CalmEffect_RemoveEffect(MagicTarget **this)
{
  double v1; // st7
  MagicTarget *v3; // ecx
  Actor *ParentActor; // esi
  int v5; // eax

  ValueModifierEffect_Remove();
  v3 = *(this + 8);
  if ( v3 )
  {
    ParentActor = MagicTarget_GetParentActor(v3);
    if ( ParentActor )
    {
      if ( ParentActor->vtbl->GetCombatController(ParentActor) )
      {
        v5 = (int)ParentActor->vtbl->GetCombatController(ParentActor);
        if ( *(_DWORD *)(v5 + 0x70) == 0xB )
        {
          v1 = flt_A30634;
          *(_DWORD *)(v5 + 0x70) = 0xD;
          *(float *)(v5 + 0x188) = v1;
        }
      }
    }
  }
}
