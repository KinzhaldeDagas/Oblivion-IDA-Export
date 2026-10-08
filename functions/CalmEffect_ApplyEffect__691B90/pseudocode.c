void __usercall CalmEffect_ApplyEffect(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v4; // esi
  char *Name; // eax
  MagicTarget *v7; // ecx
  Actor *ParentActor; // esi
  int v9; // eax
  float v10; // [esp+0h] [ebp-4h]

  ValueModifierEffect_Apply((float *)a1, v10); /*0x691b93*/
  v7 = *(MagicTarget **)(a1 + 0x20); /*0x691b98*/
  if ( v7 ) /*0x691b9d*/
  {
    ParentActor = MagicTarget_GetParentActor(v7); /*0x691ba4*/
    if ( ParentActor ) /*0x691ba8*/
    {
      if ( ParentActor->vtbl->GetCombatController(ParentActor) ) /*0x691bb4*/
      {
        v9 = (int)ParentActor->vtbl->GetCombatController(ParentActor); /*0x691bc4*/
        v4 = v9; /*0x6193d1*/
        if ( *(_DWORD *)(v9 + 0x70) != 0xB ) /*0x6193d7*/
        {
          if ( unk_B3B908 ) /*0x6193d9*/
          {
            Name = TESObjectREFR_GetName(*(TESObjectREFR **)(v9 + 0x3C)); /*0x6193ea*/
            Interface_ConsolePrint("%.20s is going to %s!", Name, "...just kinda stand around"); /*0x6193f5*/
          }
          a4 = kTerrainLODQuadRayDirectionZ; /*0x6193fd*/
          *(float *)(v4 + 0x188) = kTerrainLODQuadRayDirectionZ; /*0x619403*/
        }
        *(_DWORD *)(v4 + 0x70) = 0xB; /*0x61940b*/
        sub_6160B0((Actor **)v4); /*0x619412*/
        sub_6191B0(v4, a2, a3, a4); /*0x61941a*/
      }
    }
  }
}
