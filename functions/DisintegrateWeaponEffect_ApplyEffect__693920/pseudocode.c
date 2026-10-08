void __thiscall DisintegrateWeaponEffect_ApplyEffect(int this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  TESObjectREFR *v4; // esi
  EntryData *v5; // edi
  char *Name; // eax
  CHAR *v7; // [esp+Ch] [ebp-1Ch]
  double v8; // [esp+10h] [ebp-18h]

  v2 = *(MagicTarget **)(this + 0x20); /*0x693924*/
  if ( v2 ) /*0x693929*/
  {
    ParentActor = MagicTarget_GetParentActor(v2); /*0x69392c*/
    v4 = (TESObjectREFR *)ParentActor; /*0x693931*/
    if ( ParentActor ) /*0x693935*/
    {
      v5 = ParentActor->members.super.process->GetEquippedWeaponData(ParentActor->members.super.process, 1); /*0x693947*/
      if ( v5 ) /*0x69394b*/
        ((void (__thiscall *)(TESObjectREFR *, EntryData *, _DWORD, _DWORD))v4->vtbl[1].Unk_47)( /*0x693961*/
          v4,
          v5,
          *(float *)(this + 0x18),
          0);
      if ( unk_B3B908 ) /*0x693963*/
      {
        v8 = *(float *)(this + 0x18); /*0x69397c*/
        v7 = sub_488DF0(v5); /*0x693984*/
        Name = TESObjectREFR_GetName(v4); /*0x693987*/
        Interface_ConsolePrint("%s's %s takes %0.2f disintegrate weapon damage!", Name, v7, v8); /*0x693992*/
      }
    }
  }
}
