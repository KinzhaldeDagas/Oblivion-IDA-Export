void __usercall DemoralizeEffect_ApplyEffect(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  MagicTarget *v6; // ecx
  Actor *ParentActor; // esi
  MagicCaster *v8; // ecx
  Actor *v9; // edi
  int v10; // eax
  int v11; // [esp+0h] [ebp-Ch]

  v6 = *(MagicTarget **)(a1 + 0x20); /*0x692fc3*/
  if ( v6 ) /*0x692fca*/
    ParentActor = MagicTarget_GetParentActor(v6); /*0x692fd1*/
  else
    ParentActor = 0; /*0x692fd5*/
  v8 = *(MagicCaster **)(a1 + 0x24); /*0x692fd7*/
  if ( v8 ) /*0x692fdc*/
    v9 = MagicCaster_GetParentActor(v8); /*0x692fe3*/
  else
    v9 = 0; /*0x692fe7*/
  if ( ParentActor ) /*0x692feb*/
  {
    if ( v9 ) /*0x692fef*/
    {
      if ( ParentActor->vtbl->GetCombatController(ParentActor) ) /*0x692ffb*/
      {
        v10 = (int)ParentActor->vtbl->GetCombatController(ParentActor); /*0x69300e*/
        sub_6210D0(v10, a2, a3, a4, a5, (PlayerCharacter *)v9, 0); /*0x693012*/
        *(_BYTE *)(a1 + 0x38) = 1; /*0x693019*/
      }
      else if ( !sub_5E6CD0((TESObjectREFR *)ParentActor, 0) ) /*0x69301f*/
      {
        sub_5EAE70(ParentActor, a1, (int)v9, v11); /*0x69302a*/
        ((void (__thiscall *)(Actor *, Actor *, int, int, _DWORD, _DWORD))ParentActor->vtbl->Unk_C6)( /*0x693042*/
          ParentActor,
          v9,
          1,
          1,
          0,
          0);
        *(_BYTE *)(a1 + 0x38) = 1; /*0x693044*/
      }
    }
  }
}
