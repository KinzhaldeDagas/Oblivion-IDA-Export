void __usercall sub_5B0620(
        int a1@<ecx>,
        double a2@<st7>,
        double st1_0@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st2>,
        double a7@<st1>)
{
  int v8; // eax
  int v9; // eax
  double v10; // st7
  char *v11; // ecx
  double v12; // st7
  float a3; // [esp+28h] [ebp-Ch]

  v8 = *(_DWORD *)(a1 + 0x178); /*0x5b0624*/
  if ( v8 ) /*0x5b062c*/
  {
    if ( !*(_DWORD *)(v8 + 0x44) || TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35ECC]) ) /*0x5b0644*/
    {
      v9 = Double_To_SInt32(*(float *)(a1 + 0x148)); /*0x5b0657*/
      v10 = 0.0; /*0x5b0664*/
      if ( 0.0 == *(float *)(a1 + 0x28 * sub_5AF190((signed int *)a1, v9) + 0x7C) || BYTE1(dword_B3B0B4[0xD0]) ) /*0x5b0674*/
      {
        if ( TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35ECC]) ) /*0x5b068e*/
        {
          sub_5AFD50("UILockTumblerFall"); /*0x5b0709*/
        }
        else
        {
          sub_5AFD50("UILockPickBreak"); /*0x5b069e*/
          sub_5AFD50("UILockTumblerFall"); /*0x5b06aa*/
          reference->vtbl->super.super.super.RemoveItem( /*0x5b06d6*/
            (TESObjectREFR *)reference,
            (TESForm *)MEMORY[0xB35EC8],
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            1,
            1);
          v10 = (double)(int)--*(_DWORD *)(a1 + 0x3C); /*0x5b06e3*/
          a3 = v10; /*0x5b06eb*/
          Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFB1u, a3); /*0x5b06f3*/
          *(_DWORD *)(a1 + 0x174) = 0; /*0x5b06f8*/
        }
        if ( *(int *)(a1 + 0x3C) >= 1 ) /*0x5b0712*/
        {
          if ( BYTE1(dword_B3B0B4[0xD0]) /*0x5b076f*/
            || TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35ECC]) )
          {
            *(_DWORD *)(a1 + 0x150) = 0; /*0x5b07bf*/
            BYTE1(dword_B3B0B4[0xD0]) = 0; /*0x5b07c9*/
          }
          else
          {
            v12 = fConstant_2; /*0x5b0778*/
            Tile_SetFloat(*(Tile **)(a1 + 0x178), 0xFAEu, fConstant_2); /*0x5b078d*/
            sub_58FBA0(*(_DWORD *)(a1 + 0x178), a6, a7, v12, 0); /*0x5b079a*/
            *(_DWORD *)(a1 + 0x150) = 3; /*0x5b079f*/
            ++reference->miscStats[9]; /*0x5b07ae*/
            BYTE1(dword_B3B0B4[0xD0]) = 0; /*0x5b07b5*/
          }
        }
        else
        {
          sub_5AFD50("DRSLockOpenFail"); /*0x5b071b*/
          sub_583DF0(0xFF); /*0x5b0725*/
          sub_5AF960(a6, a2, st1_0, a4, a5); /*0x5b072a*/
          ShowUIMessageBox(v11, a6, a7, v10, (char *)stru_B38C48.value, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x5b0742*/
          ++reference->miscStats[9]; /*0x5b074f*/
        }
      }
    }
  }
}
