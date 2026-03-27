void __thiscall DisintegrateArmorEffect_Apply(int this)
{
  MagicTarget *v5; // ecx
  Actor *ParentActor; // eax
  TESObjectREFR *v7; // esi
  int **v8; // eax
  char *Name; // eax
  CHAR *v10; // [esp+8h] [ebp-18h]
  double v11; // [esp+Ch] [ebp-14h]

  v5 = *(MagicTarget **)(this + 0x20);
  if ( v5 )
  {
    ParentActor = MagicTarget_GetParentActor(v5);
    v7 = (TESObjectREFR *)ParentActor;
    if ( ParentActor )
    {
      v8 = sub_5E5A00(ParentActor);
      *(_DWORD *)(this + 0x38) = v8;
      if ( v8 )
      {
        ((void (__thiscall *)(TESObjectREFR *, int **, _DWORD, int))v7->vtbl[1].Unk_47)(
          v7,
          v8,
          *(float *)(this + 0x18),
          1);
        if ( byte_B3B908 )
        {
          v11 = *(float *)(this + 0x18);
          v10 = sub_488DF0(*(EntryData **)(this + 0x38));
          Name = TESObjectREFR_GetName(v7);
          Interface_ConsolePrint("%s's %s takes %0.2f disintegrate armor damage!", Name, v10, v11);
        }
      }
    }
  }
}
