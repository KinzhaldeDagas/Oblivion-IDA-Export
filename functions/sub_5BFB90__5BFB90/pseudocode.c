// Persuasion minigame action/round resolver. Completing the four-action round can award Speechcraft useValue0 after the native disposition-state checks.
void __usercall sub_5BFB90(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int v4; // eax
  InterfaceManager *Singleton; // edi
  double v6; // st7
  int v7; // eax
  int v8; // edi
  double v9; // st7
  _BYTE *v10; // eax
  double v11; // st7
  double v12; // st6
  double v13; // st7
  int v14; // eax
  void (__stdcall *v15)(PlayerCharacter *, _DWORD); // edx
  int v16; // edi
  PlayerCharacter *v17; // eax
  int v18; // ecx
  int (__thiscall *v19)(int, PlayerCharacter *); // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  TESTopic *v24; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v26; // ebp
  const char **v27; // edi
  int v28; // ecx
  TESTopic *v29; // eax
  Unk1C *v30; // eax
  const char *v31; // edi
  UInt32 v32; // eax
  char v33; // dl
  _BYTE *v34; // eax
  int v35; // ecx
  Tile *v36; // ecx
  double v37; // st5
  float v38; // [esp+28h] [ebp-44h]
  PlayerCharacter *v39; // [esp+28h] [ebp-44h]
  float v40; // [esp+28h] [ebp-44h]
  float v41; // [esp+28h] [ebp-44h]
  _DWORD *v42; // [esp+2Ch] [ebp-40h]
  _DWORD *v43; // [esp+30h] [ebp-3Ch]
  int v44; // [esp+34h] [ebp-38h]
  int v45; // [esp+38h] [ebp-34h]
  int v46; // [esp+3Ch] [ebp-30h]
  int v47; // [esp+40h] [ebp-2Ch]
  int v48; // [esp+40h] [ebp-2Ch]
  float v49; // [esp+44h] [ebp-28h]
  double VirtualScreenHeight; // [esp+48h] [ebp-24h] BYREF
  float v51; // [esp+50h] [ebp-1Ch]
  float v52; // [esp+54h] [ebp-18h]
  float v53; // [esp+58h] [ebp-14h]
  unsigned int v54; // [esp+68h] [ebp-4h]

  v4 = *(_DWORD *)(a1 + 0x28); /*0x5bfbb9*/
  if ( v4 != 2 ) /*0x5bfbc1*/
  {
    if ( !v4 ) /*0x5c00b4*/
    {
      v36 = *(Tile **)(a1 + 0xC4); /*0x5c00bd*/
      *(_BYTE *)(a1 + 0x8C) = 1; /*0x5c00cb*/
      Tile_SetFloat(v36, (_DWORD *)0xFA1, 1.0); /*0x5c00d2*/
      sub_5BEA90(1); /*0x5c00d9*/
      Tile_SetFloat(*(Tile **)(a1 + 0xBC), (_DWORD *)0xFAF, 1.0); /*0x5c00ee*/
      *(_DWORD *)(a1 + 0x80) = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x5c00f8*/
      *(_DWORD *)(a1 + 0xF8) = 0; /*0x5c00fe*/
      if ( Actor_GetSkillMasteryLevel((Actor *)reference, kSkillAV_Speechcraft) ) /*0x5c010c*/
        v37 = fConstant_2; /*0x5c0120*/
      else
        v37 = 1.0; /*0x5c011c*/
      v41 = v37; /*0x5c0126*/
      Tile_SetFloat(*(Tile **)(a1 + 0xC0), (_DWORD *)0xFAF, v41); /*0x5c012e*/
      *(_DWORD *)(a1 + 0x28) = 2; /*0x5c0133*/
    }
    goto LABEL_56; /*0x5c0133*/
  }
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5bfbcf*/
  UI_GetVirtualScreenWidth(); /*0x5bfbd1*/
  v47 = Double_To_SInt32(a3 * dbl_A2FAA0 + *(float *)Singleton->unk020); /*0x5bfbe4*/
  VirtualScreenHeight = UI_GetVirtualScreenHeight(); /*0x5bfbed*/
  v6 = UI_GetVirtualScreenHeight(); /*0x5bfbf1*/
  v7 = Double_To_SInt32(VirtualScreenHeight - (v6 * dbl_A2FAA0 + *(float *)&Singleton->unk020[2])); /*0x5bfc03*/
  *(float *)&VirtualScreenHeight = (float)v47; /*0x5bfc11*/
  *((float *)&VirtualScreenHeight + 1) = (float)v7; /*0x5bfc21*/
  v51 = 0.0; /*0x5bfc2e*/
  v52 = (float)*(int *)(a1 + 0xE0); /*0x5bfc41*/
  v53 = (float)*(int *)(a1 + 0xE4); /*0x5bfc4b*/
  v8 = sub_5BE6F0( /*0x5bfc58*/
         (signed int *)a1,
         (HINSTANCE)LODWORD(VirtualScreenHeight),
         *((float *)&VirtualScreenHeight + 1),
         COERCE_VOID_(0.0));
  v9 = v52 - *(float *)&VirtualScreenHeight; /*0x5bfc5a*/
  *(_DWORD *)(a1 + 0x84) = v8; /*0x5bfc5e*/
  *(float *)&v48 = v9; /*0x5bfc64*/
  v49 = v53 - *((float *)&VirtualScreenHeight + 1); /*0x5bfc70*/
  *(float *)&VirtualScreenHeight = 0.0 - 0.0; /*0x5bfc78*/
  *(float *)&VirtualScreenHeight = v49 * v49 /*0x5bfc98*/
                                 + *(float *)&v48 * *(float *)&v48
                                 + *(float *)&VirtualScreenHeight * *(float *)&VirtualScreenHeight;
  *(float *)&VirtualScreenHeight = sqrt(*(float *)&VirtualScreenHeight); /*0x5bfca5*/
  if ( (double)*(int *)(a1 + 0xDC) >= *(float *)&VirtualScreenHeight ) /*0x5bfcc2*/
  {
    a2 = (double)*(int *)(a1 + 0xE8); /*0x5bfcc8*/
    if ( a2 <= *(float *)&VirtualScreenHeight && *(_BYTE *)(a1 + 0x14 * v8 + 0x38) != 1 ) /*0x5bfce3*/
    {
      sub_57DE50(8); /*0x5bfceb*/
      v10 = (_BYTE *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x38); /*0x5bfcf9*/
      if ( !*v10 ) /*0x5bfd00*/
      {
        *v10 = 1; /*0x5bfd08*/
        v11 = sub_5BE780(*(_DWORD *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x2C)); /*0x5bfd1b*/
        v12 = fCostant_100; /*0x5bfd20*/
        v13 = v11 / v12; /*0x5bfd2c*/
        a2 = (double)*(int *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x34) / v12 * *(float *)(a1 + 0x7C); /*0x5bfd35*/
        v14 = Double_To_SInt32(v13 * a2); /*0x5bfd3a*/
        v15 = *(void (__stdcall **)(PlayerCharacter *, _DWORD))(**(_DWORD **)(a1 + 0xD8) + 0x374); /*0x5bfd47*/
        v16 = v14; /*0x5bfd4d*/
        v17 = reference; /*0x5bfd4f*/
        LODWORD(VirtualScreenHeight) = v16; /*0x5bfd54*/
        v38 = (float)v16; /*0x5bfd5d*/
        v15(v17, LODWORD(v38)); /*0x5bfd61*/
        *(_DWORD *)(a1 + 0xF8) += v16; /*0x5bfd63*/
        VirtualScreenHeight = 0.0; /*0x5bfd69*/
        v18 = *(_DWORD *)(a1 + 0xD8); /*0x5bfd77*/
        v19 = *(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v18 + 0x224); /*0x5bfd85*/
        v39 = reference; /*0x5bfd8b*/
        v54 = 0; /*0x5bfd8c*/
        v20 = v19(v18, v39); /*0x5bfd90*/
        BSStringT_Static_Format((BSStringT *)&VirtualScreenHeight, "%i", v20); /*0x5bfd9d*/
        Tile_SetString(*(_DWORD **)(a1 + 0xCC), (_DWORD *)0xFDE, (char *)LODWORD(VirtualScreenHeight)); /*0x5bfdb5*/
        sub_5BE5C0((_DWORD *)a1, 1); /*0x5bfdbe*/
        v54 = 0xFFFFFFFF; /*0x5bfdc7*/
        BSStringT_Clear((unsigned int *)&VirtualScreenHeight); /*0x5bfdcf*/
      }
      v21 = a1 + 0x14 * *(_DWORD *)(a1 + 0x84); /*0x5bfddd*/
      v22 = *(_DWORD *)(v21 + 0x2C); /*0x5bfde0*/
      if ( v22 == 4 ) /*0x5bfde6*/
      {
        sub_5BE400((Actor **)a1, *(_DWORD *)(v21 + 0x30), 1); /*0x5bfdf0*/
        goto LABEL_40; /*0x5bfdf5*/
      }
      v23 = *(_DWORD *)(v21 + 0x30); /*0x5bfdfd*/
      if ( v22 == 1 ) /*0x5bfe00*/
      {
        v24 = 0; /*0x5bfe06*/
        switch ( v23 ) /*0x5bfe0d*/
        {
          case 0: /*0x5bfe0d*/
            v24 = (TESTopic *)TESTopic::GetTopic(3, 0x15); /*0x5bfe16*/
            break; /*0x5bfe16*/
          case 1: /*0x5bfe0d*/
            v24 = (TESTopic *)TESTopic::GetTopic(3, 0x21); /*0x5bfe1a*/
            break; /*0x5bfe1a*/
          case 2: /*0x5bfe0d*/
            v24 = (TESTopic *)TESTopic::GetTopic(3, 0x19); /*0x5bfe1e*/
            break; /*0x5bfe1e*/
          case 3: /*0x5bfe0d*/
            v24 = (TESTopic *)TESTopic::GetTopic(3, 0x1D); /*0x5bfe22*/
            break; /*0x5bfe22*/
          case 5: /*0x5bfe0d*/
            v24 = (TESTopic *)TESTopic::GetTopic(3, 0x24); /*0x5bfe26*/
            break; /*0x5bfe26*/
          case 6: /*0x5bfe0d*/
            v24 = (TESTopic *)TESTopic::GetTopic(3, 0x25); /*0x5bfe2c*/
            break; /*0x5bfe2c*/
          default:
            break;
        }
        DialogueInfo = TESTopic::CreateDialogueItem(v24, *(Actor **)(a1 + 0xD8), (TESObjectREFR *)reference, 0, 0); /*0x5bfe34*/
        v26 = DialogueInfo; /*0x5bfe4b*/
        if ( DialogueInfo ) /*0x5bfe4f*/
        {
          DialogueItem::FirstResponse(DialogueInfo); /*0x5bfe57*/
          v27 = (const char **)DialogueListCursor::GetCurrent(v26); /*0x5bfe63*/
          if ( !v27 ) /*0x5bfe67*/
            goto LABEL_39; /*0x5bfe67*/
          *(_BYTE *)(sub_5E12B0(*(Actor **)(a1 + 0xD8)) + 0x1DB) = 0; /*0x5bfe78*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 7; /*0x5bfe84*/
          (*(void (__stdcall **)(_DWORD, const char **))(**(_DWORD **)(a1 + 0xD8) + 0x304))( /*0x5bfea4*/
            *(float *)&MEMORY[0xB33E90][0xC],
            v27);
          if ( !byte_B13200 ) /*0x5bfea6*/
            goto LABEL_39; /*0x5bfeac*/
          v28 = *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x58); /*0x5bfeb8*/
LABEL_38:
          v31 = *v27; /*0x5bff90*/
          v40 = kTerrainLODQuadRayDirectionZ; /*0x5bffa1*/
          v32 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v28 + 0x33C))(0); /*0x5bffa6*/
          GameUI_QueueMessage(v31, v32, 0, v40); /*0x5bffaa*/
LABEL_39:
          DialogueItem::Destroy((BSSimpleList_VoidPtr *)v26); /*0x5bffb2*/
          FormHeapFree((unsigned int)v26); /*0x5bffba*/
        }
      }
      else
      {
        if ( v22 == 3 ) /*0x5bfec3*/
        {
          v29 = 0; /*0x5bfec5*/
          switch ( v23 ) /*0x5bfecc*/
          {
            case 0: /*0x5bfecc*/
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x17); /*0x5bfed5*/
              break; /*0x5bfed5*/
            case 1: /*0x5bfecc*/
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x23); /*0x5bfed9*/
              break; /*0x5bfed9*/
            case 2: /*0x5bfecc*/
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x1B); /*0x5bfedd*/
              break; /*0x5bfedd*/
            case 3: /*0x5bfecc*/
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x1F); /*0x5bfee1*/
              break; /*0x5bfee1*/
            case 5: /*0x5bfecc*/
              goto LABEL_27;
            case 6: /*0x5bfecc*/
              goto LABEL_33;
            default:
              break;
          }
        }
        else
        {
          v29 = 0; /*0x5bfee7*/
          switch ( v23 ) /*0x5bfeee*/
          {
            case 0: /*0x5bfeee*/
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x16); /*0x5bfef7*/
              break; /*0x5bfef7*/
            case 1: /*0x5bfeee*/
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x22); /*0x5bfefb*/
              break; /*0x5bfefb*/
            case 2: /*0x5bfeee*/
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x1A); /*0x5bfeff*/
              break; /*0x5bfeff*/
            case 3: /*0x5bfeee*/
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x1E); /*0x5bff03*/
              break; /*0x5bff03*/
            case 5: /*0x5bfeee*/
LABEL_27:
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x24); /*0x5bfee3*/
              break; /*0x5bfee5*/
            case 6: /*0x5bfeee*/
LABEL_33:
              v29 = (TESTopic *)TESTopic::GetTopic(3, 0x25); /*0x5bff05*/
              break; /*0x5bff09*/
            default:
              break;
          }
        }
        v30 = TESTopic::CreateDialogueItem(v29, *(Actor **)(a1 + 0xD8), (TESObjectREFR *)reference, 0, 0); /*0x5bff11*/
        v26 = v30; /*0x5bff28*/
        if ( v30 ) /*0x5bff2c*/
        {
          DialogueItem::FirstResponse(v30); /*0x5bff34*/
          v27 = (const char **)DialogueListCursor::GetCurrent(v26); /*0x5bff40*/
          if ( !v27 ) /*0x5bff44*/
            goto LABEL_39; /*0x5bff44*/
          *(_BYTE *)(sub_5E12B0(*(Actor **)(a1 + 0xD8)) + 0x1DB) = 0; /*0x5bff51*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 7; /*0x5bff5d*/
          (*(void (__stdcall **)(_DWORD, const char **))(**(_DWORD **)(a1 + 0xD8) + 0x304))( /*0x5bff7d*/
            *(float *)&MEMORY[0xB33E90][0xC],
            v27);
          if ( !byte_B13200 ) /*0x5bff7f*/
            goto LABEL_39; /*0x5bff85*/
          v28 = *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x58); /*0x5bff8d*/
          goto LABEL_38; /*0x5bff8d*/
        }
      }
LABEL_40:
      if ( *(_DWORD *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x30) == 1 ) /*0x5bffd4*/
        ++reference->miscStats[0x19]; /*0x5bffdb*/
      v33 = 1; /*0x5bffe1*/
      v34 = (_BYTE *)(a1 + 0x38); /*0x5bffe3*/
      v35 = 4; /*0x5bffe6*/
      do /*0x5bfffb*/
      {
        if ( !*v34 ) /*0x5bfff0*/
          v33 = 0; /*0x5bfff4*/
        v34 += 0x14; /*0x5bfff6*/
        --v35; /*0x5bfff9*/
      }
      while ( v35 ); /*0x5bfffb*/
      if ( v33 == 1 ) /*0x5c0000*/
      {
        if ( *(_DWORD *)(a1 + 0xF0) /*0x5c002a*/
          || *(_DWORD *)(a1 + 0xEC) != (*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(a1 + 0xD8)
                                                                                        + 0x224))(
                                         *(_DWORD *)(a1 + 0xD8),
                                         reference) )
        {
          ((void (__stdcall *)(int, _DWORD, _DWORD))reference->vtbl->super.ModExperience)(0x20, 0, 0.0);// Completed persuasion round: Speechcraft (0x20), useValue0, identity scale (0.0). /*0x5c0043*/
        }
        Tile_SetFloat(*(Tile **)(a1 + 0xBC), (_DWORD *)0xFAF, fConstant_2); /*0x5c005a*/
        Tile_SetFloat(*(Tile **)(a1 + 0xC4), (_DWORD *)0xFA1, fConstant_2); /*0x5c0074*/
        Tile_SetFloat(*(Tile **)(a1 + 0xC0), (_DWORD *)0xFAF, 1.0); /*0x5c008a*/
        sub_5BF7D0((int)v42, (int)v43, v44, v45, v46, v48, LODWORD(v49)); /*0x5c008f*/
        sub_5BF170(a2, 1); /*0x5c0096*/
        return; /*0x5c00b1*/
      }
LABEL_56:
      sub_5BF170(a2, 1); /*0x5c013a*/
    }
  }
}
