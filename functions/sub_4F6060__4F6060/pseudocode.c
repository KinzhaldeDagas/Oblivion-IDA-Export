char __usercall sub_4F6060@<al>(double a1@<st3>, Actor *a2, int a3, int a4, double *a5)
{
  void (__thiscall *SaveGame)(TESForm *, UInt32); // eax

  if ( !a2 || !a2->vtbl->super.super.IsActor((TESObjectREFR *)a2) )
    return 1;
  if ( (a2->members.super.super.super.flags & 0x800) != 0 )
    SaveGame = Actor_GetActorBaseForm(a2, 0)->vtbl[1].SaveGame;
  else
    SaveGame = (void (__thiscall *)(TESForm *, UInt32))a2->vtbl->GetAV_F;
  ((void (__stdcall *)(int))SaveGame)(a3);
  *a5 = a1;
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetActorValue: %s >> %0.2f", *(const char **)(4 * a3 + 0xB0A1A8), *a5);
  return 1;
}
