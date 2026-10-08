void __usercall TurnUndeadEffect_Apply(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  MagicTarget *v6; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v8; // ecx
  Actor *v9; // edi
  int v10; // eax

  v6 = *(MagicTarget **)(a1 + 0x20); /*0x6a80d3*/
  if ( v6 ) /*0x6a80da*/
    ParentActor = MagicTarget_GetParentActor(v6); /*0x6a80e1*/
  else
    ParentActor = 0; /*0x6a80e5*/
  v8 = *(MagicCaster **)(a1 + 0x24); /*0x6a80e7*/
  if ( v8 ) /*0x6a80ec*/
    v9 = MagicCaster_GetParentActor(v8); /*0x6a80f3*/
  else
    v9 = 0; /*0x6a80f7*/
  if ( ParentActor ) /*0x6a80fb*/
  {
    if ( v9 ) /*0x6a80ff*/
    {
      if ( ParentActor->vtbl->GetCombatController(ParentActor) ) /*0x6a810b*/
      {
        v10 = (int)ParentActor->vtbl->GetCombatController(ParentActor); /*0x6a811e*/
        sub_6210D0(v10, a2, a3, a4, a5, (PlayerCharacter *)v9, 0); /*0x6a8122*/
        *(_BYTE *)(a1 + 0x38) = 1; /*0x6a8127*/
      }
    }
  }
}
