char __usercall AI_GetDetected@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  int v6; // esi
  int v7; // ebx
  TESObjectREFR *v8; // edi
  int v9; // ebp
  PlayerCharacter *v10; // esi
  bool IsPlayerInCombat; // al
  int v12; // eax
  double v13; // st7
  int v14; // eax
  char v16; // [esp+0h] [ebp-10h]

  *a6 = 0.0; /*0x4f6408*/
  v6 = a3; /*0x4f640b*/
  v7 = 0; /*0x4f6410*/
  v8 = 0; /*0x4f6412*/
  if ( a3 ) /*0x4f641e*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) ) /*0x4f642a*/
      v8 = (TESObjectREFR *)v6; /*0x4f6430*/
  }
  v9 = a4; /*0x4f6433*/
  v10 = 0; /*0x4f6437*/
  if ( a4 ) /*0x4f643b*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 0x190))(a4) ) /*0x4f6448*/
      v10 = (PlayerCharacter *)v9; /*0x4f644e*/
  }
  if ( v8 && v10 ) /*0x4f6457*/
  {
    if ( v10 == reference ) /*0x4f6461*/
      IsPlayerInCombat = PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0); /*0x4f6465*/
    else
      a2 = ((double (__usercall *)@<st0>(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>))v10->vtbl->super.IsInCombat)( /*0x4f6478*/
             v10,
             1,
             a2,
             a1);
    LOBYTE(a4) = IsPlayerInCombat; /*0x4f647c*/
    Actor_GetDetectionLevelAgainstActor(v8, (int)v8, 0.0, a1, a2, 0, (TESObjectREFR *)v10, &a3, 0, a4, 0, v16); /*0x4f6491*/
    v7 = v12; /*0x4f6496*/
    if ( v12 > 0 ) /*0x4f649a*/
      *a6 = 1.0; /*0x4f64a2*/
    v13 = ((double (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD))v10->super.super.super.process->GetLightAmount)( /*0x4f64b2*/
            v10->super.super.super.process,
            v10,
            0);
    v14 = Double_To_SInt32(v13); /*0x4f64b4*/
  }
  else
  {
    v14 = 0xFFFFFFFF; /*0x4f64bb*/
  }
  if ( MEMORY[0xB361AC] ) /*0x4f64bf*/
    Interface_ConsolePrint("GetDetected >> %i and light %i", v7, v14); /*0x4f64cf*/
  return 1; /*0x4f64d7*/
}
