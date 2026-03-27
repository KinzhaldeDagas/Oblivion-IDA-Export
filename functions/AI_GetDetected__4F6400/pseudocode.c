char __usercall AI_GetDetected@<al>(double a1@<st1>, double a2@<st0>, int a3, int a4, int a5, double *a6)
{
  int v8; // esi
  int DetectionLevel; // ebx
  int v10; // edi
  int v11; // ebp
  PlayerCharacter *v12; // esi
  char IsPlayerInCombat; // al
  double v14; // st7
  int v15; // eax
  char v17; // [esp+0h] [ebp-10h]

  *a6 = 0.0;
  v8 = a3;
  DetectionLevel = 0;
  v10 = 0;
  if ( a3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 0x190))(a3) )
      v10 = v8;
  }
  v11 = a4;
  v12 = 0;
  if ( a4 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 0x190))(a4) )
      v12 = (PlayerCharacter *)v11;
  }
  if ( v10 && v12 )
  {
    if ( v12 == TESDataHandler_g_PlayerRef )
      IsPlayerInCombat = PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0);
    else
      IsPlayerInCombat = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>))v12->vtbl->super.IsInCombat)(
                           v12,
                           1,
                           a2,
                           a1);
    LOBYTE(a4) = IsPlayerInCombat;
    DetectionLevel = Actor_GetDetectionLevel(v10, v10, 0.0, a1, 0, (int)v12, (int)&a3, 0, a4, 0, v17);
    if ( DetectionLevel > 0 )
      *a6 = 1.0;
    v14 = ((double (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD))v12->super.super.super.process->GetLightAmount)(
            v12->super.super.super.process,
            v12,
            0);
    v15 = Double_To_SInt32(v14);
  }
  else
  {
    v15 = 0xFFFFFFFF;
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetDetected >> %i and light %i", DetectionLevel, v15);
  return 1;
}
