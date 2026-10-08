void __usercall sub_5B03B0(
        int a1@<ecx>,
        double st0_0@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st2>,
        double a7@<st1>,
        double Distance@<st0>)
{
  int v9; // eax
  bool v10; // al
  int *v11; // eax
  int *v12; // edi
  double Float; // st7
  _DWORD *v14; // eax
  Crime *Crime; // eax
  Actor **v16; // edi
  Actor **v17; // eax
  float a2; // [esp+0h] [ebp-10h]

  v9 = *(_DWORD *)(a1 + 0x178); /*0x5b03b4*/
  if ( v9 ) /*0x5b03bc*/
  {
    if ( !*(_DWORD *)(v9 + 0x44) /*0x5b03dd*/
      || TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35ECC])
      || BYTE1(dword_B3B0B4[0xD0]) )
    {
      v10 = *(_BYTE *)(a1 + 0x95) == 0; /*0x5b03f3*/
      if ( !*(_BYTE *)(a1 + 0xBD) ) /*0x5b03f5*/
        v10 = 1; /*0x5b03fe*/
      if ( !*(_BYTE *)(a1 + 0xE5) ) /*0x5b0400*/
        v10 = 1; /*0x5b0409*/
      if ( !*(_BYTE *)(a1 + 0x10D) ) /*0x5b040b*/
        v10 = 1; /*0x5b0414*/
      if ( !*(_BYTE *)(a1 + 0x135) || v10 ) /*0x5b0426*/
      {
        *(_DWORD *)(a1 + 0x150) = 0; /*0x5b0509*/
      }
      else
      {
        v11 = (int *)OblivionDynamicCast( /*0x5b0441*/
                       *(void **)(a1 + 0x144),
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                       &Tile3D `RTTI Type Descriptor',
                       0);
        v12 = v11; /*0x5b0446*/
        if ( v11 ) /*0x5b044d*/
        {
          if ( !v11[0x11] && !BYTE2(dword_B3B0B4[0xD0]) ) /*0x5b045d*/
          {
            Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x178), 0xFAB); /*0x5b0475*/
            Distance = (double)Double_To_SInt32(Float + dbl_A2F928); /*0x5b0489*/
            a2 = Distance; /*0x5b0494*/
            Tile_SetFloat(*(Tile **)(a1 + 0x144), 0xFABu, a2); /*0x5b049c*/
            LOBYTE(dword_B3B0B4[0xD0]) = 0; /*0x5b04a8*/
            BYTE2(dword_B3B0B4[0xD0]) = 1; /*0x5b04af*/
            sub_590740(v12, (BSAnimGroupSequence *)"Open"); /*0x5b04b6*/
            sub_58FBA0((int)v12, a6, a7, Distance, 0); /*0x5b04bf*/
            TESObjectREFR_ClearLockedFlagOnSelfOrLinkedDoor(*(TESObjectREFR **)(a1 + 0x38)); /*0x5b04c7*/
            sub_5AFD50("UILockSuccess"); /*0x5b04d3*/
            sub_5AFD50("DRSLockOpen"); /*0x5b04df*/
            sub_583DF0(0xFF); /*0x5b04e9*/
            *(_DWORD *)(a1 + 0x150) = 1; /*0x5b04f3*/
            ++reference->miscStats[8]; /*0x5b0501*/
          }
        }
      }
      v14 = OblivionDynamicCast( /*0x5b0528*/
              *(void **)(a1 + 0x144),
              0,
              (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
              &Tile3D `RTTI Type Descriptor',
              0);
      if ( v14 ) /*0x5b0532*/
      {
        if ( !v14[0x11] && BYTE2(dword_B3B0B4[0xD0]) ) /*0x5b0542*/
        {
          sub_5AF960(a6, st0_0, a3, a4, a5); /*0x5b054f*/
          if ( *(_BYTE *)(a1 + 0x17C) ) /*0x5b0554*/
          {
            Crime = ActorProcessManager_FindCrime( /*0x5b0573*/
                      (ActorProcessManager *)&qword_B3BB2C[0x75],
                      (Actor *)reference,
                      *(TESObjectREFR **)(a1 + 0x38),
                      kCrime_Trespass);
            if ( Crime ) /*0x5b057a*/
            {
              v16 = sub_675740((ActorProcessManager *)&qword_B3BB2C[0x75], (int)Crime, 0); /*0x5b0589*/
              if ( v16 ) /*0x5b058d*/
              {
                while ( *v16 ) /*0x5b0594*/
                {
                  Distance = TesObjectREF_GetDistance((TESObjectREFR *)*v16, (TESObjectREFR *)reference, 0); /*0x5b059f*/
                  if ( Distance <= dbl_A6BEA0 ) /*0x5b05af*/
                    return; /*0x5b05af*/
                  v17 = (Actor **)v16[1]; /*0x5b05b1*/
                  if ( v17 ) /*0x5b05b6*/
                  {
                    v16[1] = v17[1]; /*0x5b05bb*/
                    *v16 = *v17; /*0x5b05c1*/
                    FormHeapFree((unsigned int)v17); /*0x5b05c3*/
                  }
                  else
                  {
                    *v16 = 0; /*0x5b05cd*/
                  }
                }
                BSSimpleList_Clear(v16); /*0x5b05d7*/
                FormHeapFree((unsigned int)v16); /*0x5b05dd*/
              }
            }
          }
          reference->isMovingToNewSpace = 1; /*0x5b05ee*/
          ActivateRef(*(TESObjectREFR **)(a1 + 0x38), a6, a7, Distance, (TESObjectREFR *)reference, 0, 0, 1); /*0x5b0601*/
          reference->isMovingToNewSpace = 0; /*0x5b060c*/
        }
      }
    }
  }
}
