void __usercall CalmEffect_ApplyEffect(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // esi
  char *Name; // eax
  MagicTarget *v8; // ecx
  Actor *ParentActor; // esi
  int v10; // eax
  float v11; // [esp+0h] [ebp-4h]

  ValueModifierEffect_Apply((float *)a1, v11);
  v8 = *(MagicTarget **)(a1 + 0x20);
  if ( v8 )
  {
    ParentActor = MagicTarget_GetParentActor(v8);
    if ( ParentActor )
    {
      if ( ParentActor->vtbl->GetCombatController(ParentActor) )
      {
        v10 = (int)ParentActor->vtbl->GetCombatController(ParentActor);
        v5 = v10;
        if ( *(_DWORD *)(v10 + 0x70) != 0xB )
        {
          if ( byte_B3B908 )
          {
            Name = TESObjectREFR_GetName(*(TESObjectREFR **)(v10 + 0x3C));
            Interface_ConsolePrint("%.20s is going to %s!", Name, "...just kinda stand around");
          }
          a4 = flt_A30634;
          *(float *)(v5 + 0x188) = flt_A30634;
        }
        *(_DWORD *)(v5 + 0x70) = 0xB;
        sub_6160B0((Actor **)v5);
        sub_6191B0(v5, a2, a3, a4);
      }
    }
  }
}
