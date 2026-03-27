void __usercall TurnUndeadEffect_Apply(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  MagicTarget *v6; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v8; // ecx
  Actor *v9; // edi
  int v10; // eax

  v6 = *(MagicTarget **)(a1 + 0x20);
  if ( v6 )
    ParentActor = MagicTarget_GetParentActor(v6);
  else
    ParentActor = 0;
  v8 = *(MagicCaster **)(a1 + 0x24);
  if ( v8 )
    v9 = MagicCaster_GetParentActor(v8);
  else
    v9 = 0;
  if ( ParentActor )
  {
    if ( v9 )
    {
      if ( ParentActor->vtbl->GetCombatController(ParentActor) )
      {
        v10 = (int)ParentActor->vtbl->GetCombatController(ParentActor);
        sub_6210D0(v10, a2, a3, a4, a5, (PlayerCharacter *)v9, 0);
        *(_BYTE *)(a1 + 0x38) = 1;
      }
    }
  }
}
