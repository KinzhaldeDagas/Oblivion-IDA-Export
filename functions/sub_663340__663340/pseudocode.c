OSGlobals *__userpurge sub_663340@<eax>(TESForm *a1@<ecx>, double a2@<st2>, double a3@<st1>, UInt32 a4)
{
  OSGlobals *result; // eax
  TESSaveLoadGame_SerializationView *v7; // ecx
  bool v8; // al
  TESSaveLoadGame_SerializationView *v9; // ecx
  float *v10; // eax
  float *v11; // ebp
  double v12; // st7
  UInt32 destination; // [esp+20h] [ebp-8h] BYREF
  char v14; // [esp+24h] [ebp-4h]

  result = MEMORY[0xB33398]; /*0x663340*/
  if ( !MEMORY[0xB33398]->unk04 )
  {
    if ( *(_DWORD *)&a1[0x4B].member.type )
    {
      sub_4523F0(g_TESSaveLoadGame); /*0x66337a*/
      g_TESSaveLoadGame->currentVersion = g_TESSaveLoadGame->unknown48[0x29]; /*0x663387*/
      v7 = g_TESSaveLoadGame; /*0x66338a*/
      unk_B3BB07 = 0; /*0x663390*/
      v8 = sub_45A500(v7); /*0x663397*/
      v9 = g_TESSaveLoadGame; /*0x66339c*/
      v14 = v8; /*0x6633a4*/
      sub_45A530(v9, 1); /*0x6633a8*/
      v10 = sub_459FA0(a1); /*0x6633b4*/
      g_TESSaveLoadGame->resetSelector = 0x1FFFF000; /*0x6633c3*/
      v11 = v10; /*0x6633d2*/
      ((void (__thiscall *)(TESForm *, UInt32))a1->vtbl->Unk_18)(a1, a4 & 0x1FFFF000); /*0x6633dc*/
      g_TESSaveLoadGame->bufferCursor = *(unsigned __int8 **)&a1[0x4B].member.type; /*0x6633f0*/
      TESForm_LoadDataFromCurrentSaveGame(a1, &destination, 4u); /*0x6633f6*/
      g_TESSaveLoadGame->useIrefEncoding = 0; /*0x663400*/
      a1->vtbl->LoadGame(a1, destination, a4); /*0x663411*/
      g_TESSaveLoadGame->bufferCursor = 0; /*0x663418*/
      g_TESSaveLoadGame->resetSelector = 0x60000000; /*0x663425*/
      ((void (__thiscall *)(TESForm *, UInt32))a1->vtbl->Unk_18)(a1, a4 & 0x60000000); /*0x66343b*/
      sub_45A020((int)a1, a1, v11); /*0x663445*/
      ((void (__thiscall *)(TESForm *, UInt32, UInt32))a1->vtbl->Unk_16)(a1, destination, a4); /*0x663457*/
      v12 = ((double (__thiscall *)(TESForm *, UInt32, UInt32))a1->vtbl->Unk_17)(a1, destination, a4); /*0x663466*/
      sub_461030(g_TESSaveLoadGame, a2, a3, v12, 0); /*0x663470*/
      g_TESSaveLoadGame->useIrefEncoding = 1; /*0x66347a*/
      ((void (__thiscall *)(TESForm *, UInt32))a1->vtbl->Unk_12)(a1, destination); /*0x66348a*/
      UI_UpdateActorValueDisplays(0xFFFFFFFF); /*0x66348e*/
      UI_UpdateActorValueDisplays(0xAu); /*0x663495*/
      UI_UpdateActorValueDisplays(8u); /*0x66349c*/
      UI_UpdateActorValueDisplays(9u); /*0x6634a3*/
      return (OSGlobals *)sub_45A530(g_TESSaveLoadGame, v14); /*0x6634b6*/
    }
    else
    {
      return (OSGlobals *)PrintError(
                            " PlayerCharacter::RestoreInitialState(): Attempting to restore player's initial state, but t"
                            "he initial state buffer is empty");
    }
  }
  return result; /*0x66336b*/
}
