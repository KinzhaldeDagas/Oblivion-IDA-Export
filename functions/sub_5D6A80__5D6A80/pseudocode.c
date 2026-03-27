void __userpurge sub_5D6A80(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        int a9,
        Tile *a10)
{
  int v12; // eax
  PlayerCharacter *v13; // edx
  UInt8 v14; // cl
  Tile *v15; // ecx
  PlayerCharacter *v16; // eax
  float a2; // [esp+8h] [ebp-8h]

  if ( a9 == 5 )
  {
    sub_57DE50(1);
    Tile_SetFloat(*(Tile **)(a1 + 0x30), (_DWORD *)0xFA1, 1.0);
    if ( *(_BYTE *)(a1 + 0x4C) )
    {
      if ( !byte_B13218 )
      {
LABEL_7:
        Tile_GetFloat(*(_DWORD **)(a1 + 0x28), 0xFB5);
        v12 = Double_To_SInt32(a4);
        v13 = TESDataHandler_g_PlayerRef;
        dword_B3B730 = v12;
        v14 = *(_BYTE *)(a1 + 0x4C);
        v13->HoursToSleep = v12;
        v13->isSleeping = v14;
        dword_B14778 = v12;
        sub_5732D0((NiNode **)dword_B3A6B0, st5_0, a3, 1.0, 1, 1.0);
        flt_B3B724 = 1.0;
        v15 = *(Tile **)(a1 + 0x40);
        a2 = fConstant_2;
        byte_B3B728 = 1;
        Tile_SetFloat(v15, (_DWORD *)0xFC9, a2);
        if ( !TESDataHandler_g_PlayerRef->isInCharGen )
          sub_676D30((int)&ActorProcessManager_ptr);
        return;
      }
    }
    else if ( !byte_B13220 )
    {
      goto LABEL_7;
    }
    sub_466B70((int)SaveLoad_CurrentSavegame, a5, a6, a7, a8, 1.0, st5_0, a3);
    goto LABEL_7;
  }
  if ( a9 == 6 )
  {
    sub_57DE50(2);
    Tile_SetFloat(a10, (_DWORD *)0xFA1, 1.0);
    if ( PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
    {
      v16 = TESDataHandler_g_PlayerRef;
      v16->HoursToSleep = 0;
      v16->isSleeping = 0;
    }
    else
    {
      byte_B3B72B = 1;
    }
    ClsoeSleepWaitMenu(st5_0, a3, a4);
  }
}
