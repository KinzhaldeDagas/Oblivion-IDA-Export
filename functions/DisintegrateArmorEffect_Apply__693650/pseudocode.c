void __thiscall DisintegrateArmorEffect_Apply(int this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  TESObjectREFR *v4; // esi
  int **v5; // eax
  char *Name; // eax
  CHAR *v7; // [esp+8h] [ebp-18h]
  double v8; // [esp+Ch] [ebp-14h]

  v2 = *(MagicTarget **)(this + 0x20); /*0x693654*/
  if ( v2 ) /*0x693659*/
  {
    ParentActor = MagicTarget_GetParentActor(v2); /*0x69365c*/
    v4 = (TESObjectREFR *)ParentActor; /*0x693661*/
    if ( ParentActor ) /*0x693665*/
    {
      v5 = Actor_SelectArmorOrShieldForHitDamage(ParentActor); /*0x693669*/
      *(_DWORD *)(this + 0x38) = v5; /*0x693670*/
      if ( v5 ) /*0x693673*/
      {
        ((void (__thiscall *)(TESObjectREFR *, int **, _DWORD, int))v4->vtbl[1].Unk_47)( /*0x693689*/
          v4,
          v5,
          *(float *)(this + 0x18),
          1);
        if ( unk_B3B908 ) /*0x69368b*/
        {
          v8 = *(float *)(this + 0x18); /*0x6936a5*/
          v7 = sub_488DF0(*(EntryData **)(this + 0x38)); /*0x6936ad*/
          Name = TESObjectREFR_GetName(v4); /*0x6936b0*/
          Interface_ConsolePrint("%s's %s takes %0.2f disintegrate armor damage!", Name, v7, v8); /*0x6936bb*/
        }
      }
    }
  }
}
