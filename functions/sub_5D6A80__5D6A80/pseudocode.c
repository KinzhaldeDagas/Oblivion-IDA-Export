void __userpurge sub_5D6A80(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        int a9,
        Tile *a10)
{
  int v12; // eax
  PlayerCharacter *v13; // edx
  UInt8 v14; // cl
  Tile *v15; // ecx
  PlayerCharacter *v16; // eax
  float a2; // [esp+8h] [ebp-8h]

  if ( a9 == 5 ) /*0x5d6a8a*/
  {
    sub_57DE50(1); /*0x5d6a92*/
    Tile_SetFloat(*(Tile **)(a1 + 0x30), 0xFA1u, 1.0); /*0x5d6aa4*/
    if ( *(_BYTE *)(a1 + 0x4C) ) /*0x5d6aa9*/
    {
      if ( !byte_B13218 ) /*0x5d6ab0*/
      {
LABEL_7:
        Tile_GetFloat(*(_DWORD **)(a1 + 0x28), 0xFB5); /*0x5d6ad1*/
        v12 = Double_To_SInt32(a4); /*0x5d6ade*/
        v13 = reference; /*0x5d6ae5*/
        unk_B3B730 = v12; /*0x5d6aeb*/
        v14 = *(_BYTE *)(a1 + 0x4C); /*0x5d6af0*/
        v13->HoursToSleep = v12; /*0x5d6af3*/
        v13->isSleeping = v14; /*0x5d6af9*/
        dword_B14778 = v12; /*0x5d6aff*/
        sub_5732D0((NiNode **)unk_B3A6B0, st5_0, a3, 1.0, 1, 1.0); /*0x5d6b10*/
        unk_B3B724 = 1.0; /*0x5d6b17*/
        v15 = *(Tile **)(a1 + 0x40); /*0x5d6b24*/
        a2 = fConstant_2; /*0x5d6b27*/
        unk_B3B728 = 1; /*0x5d6b2a*/
        Tile_SetFloat(v15, 0xFC9u, a2); /*0x5d6b36*/
        if ( !reference->isInCharGen ) /*0x5d6b40*/
          sub_676D30((int)&qword_B3BB2C[0x75]); /*0x5d6b4e*/
        return; /*0x5d6b54*/
      }
    }
    else if ( !byte_B13220 ) /*0x5d6ac4*/
    {
      goto LABEL_7; /*0x5d6ac4*/
    }
    sub_466B70((int)g_TESSaveLoadGame, 1.0, a5, a6, a7, a8, st5_0, a3, a4); /*0x5d6acc*/
    goto LABEL_7; /*0x5d6acc*/
  }
  if ( a9 == 6 ) /*0x5d6b5a*/
  {
    sub_57DE50(2); /*0x5d6b5e*/
    Tile_SetFloat(a10, 0xFA1u, 1.0); /*0x5d6b71*/
    if ( PlayerCharacter::IsSleeping_(reference) ) /*0x5d6b7c*/
    {
      v16 = reference; /*0x5d6b85*/
      v16->HoursToSleep = 0; /*0x5d6b8a*/
      v16->isSleeping = 0; /*0x5d6b94*/
    }
    else
    {
      unk_B3B72B = 1; /*0x5d6ba4*/
    }
    ClsoeSleepWaitMenu(st5_0, a3, a4, 1.0, a5, a6, a7); /*0x5d6b9b*/
  }
}
