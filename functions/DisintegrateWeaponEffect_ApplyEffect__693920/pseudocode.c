void __thiscall DisintegrateWeaponEffect_ApplyEffect(int this)
{
  MagicTarget *v5; // ecx
  Actor *ParentActor; // eax
  TESObjectREFR *v7; // esi
  EntryData *v8; // edi
  char *Name; // eax
  CHAR *v10; // [esp+Ch] [ebp-1Ch]
  double v11; // [esp+10h] [ebp-18h]

  v5 = *(MagicTarget **)(this + 0x20);
  if ( v5 )
  {
    ParentActor = MagicTarget_GetParentActor(v5);
    v7 = (TESObjectREFR *)ParentActor;
    if ( ParentActor )
    {
      v8 = ParentActor->members.super.process->GetEquippedWeaponData(ParentActor->members.super.process, 1);
      if ( v8 )
        ((void (__thiscall *)(TESObjectREFR *, EntryData *, _DWORD, _DWORD))v7->vtbl[1].Unk_47)(
          v7,
          v8,
          *(float *)(this + 0x18),
          0);
      if ( byte_B3B908 )
      {
        v11 = *(float *)(this + 0x18);
        v10 = sub_488DF0(v8);
        Name = TESObjectREFR_GetName(v7);
        Interface_ConsolePrint("%s's %s takes %0.2f disintegrate weapon damage!", Name, v10, v11);
      }
    }
  }
}
