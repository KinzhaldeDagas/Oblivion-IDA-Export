void __usercall sub_5BFB90(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  int v7; // eax
  InterfaceManager *Singleton; // edi
  double v9; // st7
  int v10; // eax
  int v11; // edi
  double v12; // st7
  _BYTE *v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  int v17; // eax
  void (__stdcall *v18)(PlayerCharacter *, _DWORD); // edx
  int v19; // edi
  PlayerCharacter *v20; // eax
  int v21; // ecx
  int (__thiscall *v22)(int, PlayerCharacter *); // eax
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // edx
  TESTopic *v27; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v29; // ebp
  const char **v30; // edi
  int v31; // ecx
  TESTopic *v32; // eax
  Unk1C *v33; // eax
  const char *v34; // edi
  UInt32 v35; // eax
  char v36; // dl
  _BYTE *v37; // eax
  int v38; // ecx
  Tile *v39; // ecx
  double v40; // st4
  float v41; // [esp+28h] [ebp-44h]
  PlayerCharacter *v42; // [esp+28h] [ebp-44h]
  float v43; // [esp+28h] [ebp-44h]
  float v44; // [esp+28h] [ebp-44h]
  _DWORD *v45; // [esp+2Ch] [ebp-40h]
  _DWORD *v46; // [esp+30h] [ebp-3Ch]
  int v47; // [esp+34h] [ebp-38h]
  int v48; // [esp+38h] [ebp-34h]
  int v49; // [esp+3Ch] [ebp-30h]
  int v50; // [esp+40h] [ebp-2Ch]
  int v51; // [esp+40h] [ebp-2Ch]
  float v52; // [esp+44h] [ebp-28h]
  double v53; // [esp+48h] [ebp-24h] BYREF
  float v54; // [esp+50h] [ebp-1Ch]
  float v55; // [esp+54h] [ebp-18h]
  float v56; // [esp+58h] [ebp-14h]
  unsigned int v57; // [esp+68h] [ebp-4h]

  v7 = *(_DWORD *)(a1 + 0x28);
  if ( v7 != 2 )
  {
    if ( !v7 )
    {
      v39 = *(Tile **)(a1 + 0xC4);
      *(_BYTE *)(a1 + 0x8C) = 1;
      Tile_SetFloat(v39, (_DWORD *)0xFA1, 1.0);
      sub_5BEA90(1);
      Tile_SetFloat(*(Tile **)(a1 + 0xBC), (_DWORD *)0xFAF, 1.0);
      *(_DWORD *)(a1 + 0x80) = Seed;
      *(_DWORD *)(a1 + 0xF8) = 0;
      if ( Actor_GetSkillMasteryLevel(0x20) )
        v40 = fConstant_2;
      else
        v40 = 1.0;
      v44 = v40;
      Tile_SetFloat(*(Tile **)(a1 + 0xC0), (_DWORD *)0xFAF, v44);
      *(_DWORD *)(a1 + 0x28) = 2;
    }
    goto LABEL_56;
  }
  Singleton = InterfaceManager_GetSingleton(0, 1);
  sub_57D7A0();
  v50 = Double_To_SInt32(a3 * dbl_A2FAA0 + *(float *)Singleton->unk020);
  v53 = sub_57D7F0();
  v9 = sub_57D7F0();
  v10 = Double_To_SInt32(v53 - (v9 * dbl_A2FAA0 + *(float *)&Singleton->unk020[2]));
  *(float *)&v53 = (float)v50;
  *((float *)&v53 + 1) = (float)v10;
  v54 = 0.0;
  v55 = (float)*(int *)(a1 + 0xE0);
  v56 = (float)*(int *)(a1 + 0xE4);
  v11 = sub_5BE6F0((signed int *)a1, (HINSTANCE)LODWORD(v53), *((float *)&v53 + 1), COERCE_VOID_(0.0));
  v12 = v55 - *(float *)&v53;
  *(_DWORD *)(a1 + 0x84) = v11;
  *(float *)&v51 = v12;
  v52 = v56 - *((float *)&v53 + 1);
  *(float *)&v53 = 0.0 - 0.0;
  *(float *)&v53 = v52 * v52 + *(float *)&v51 * *(float *)&v51 + *(float *)&v53 * *(float *)&v53;
  *(float *)&v53 = sqrt(*(float *)&v53);
  if ( (double)*(int *)(a1 + 0xDC) >= *(float *)&v53 )
  {
    a2 = (double)*(int *)(a1 + 0xE8);
    if ( a2 <= *(float *)&v53 && *(_BYTE *)(a1 + 0x14 * v11 + 0x38) != 1 )
    {
      sub_57DE50(8);
      v13 = (_BYTE *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x38);
      if ( !*v13 )
      {
        *v13 = 1;
        v14 = sub_5BE780(*(_DWORD *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x2C));
        v15 = fCostant_100;
        v16 = v14 / v15;
        a2 = (double)*(int *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x34) / v15 * *(float *)(a1 + 0x7C);
        v17 = Double_To_SInt32(v16 * a2);
        v18 = *(void (__stdcall **)(PlayerCharacter *, _DWORD))(**(_DWORD **)(a1 + 0xD8) + 0x374);
        v19 = v17;
        v20 = TESDataHandler_g_PlayerRef;
        LODWORD(v53) = v19;
        v41 = (float)v19;
        v18(v20, LODWORD(v41));
        *(_DWORD *)(a1 + 0xF8) += v19;
        v53 = 0.0;
        v21 = *(_DWORD *)(a1 + 0xD8);
        v22 = *(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v21 + 0x224);
        v42 = TESDataHandler_g_PlayerRef;
        v57 = 0;
        v23 = v22(v21, v42);
        BSStringT_Static_Format((BSStringT *)&v53, "%i", v23);
        Tile_SetString(*(_DWORD **)(a1 + 0xCC), (_DWORD *)0xFDE, (char *)LODWORD(v53));
        sub_5BE5C0((_DWORD *)a1, 1);
        v57 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v53);
      }
      v24 = a1 + 0x14 * *(_DWORD *)(a1 + 0x84);
      v25 = *(_DWORD *)(v24 + 0x2C);
      if ( v25 == 4 )
      {
        sub_5BE400(a1, *(_DWORD *)(v24 + 0x30), 1);
        goto LABEL_40;
      }
      v26 = *(_DWORD *)(v24 + 0x30);
      if ( v25 == 1 )
      {
        v27 = 0;
        switch ( v26 )
        {
          case 0:
            v27 = (TESTopic *)TESTopic::GEtTopic(3, 0x15);
            break;
          case 1:
            v27 = (TESTopic *)TESTopic::GEtTopic(3, 0x21);
            break;
          case 2:
            v27 = (TESTopic *)TESTopic::GEtTopic(3, 0x19);
            break;
          case 3:
            v27 = (TESTopic *)TESTopic::GEtTopic(3, 0x1D);
            break;
          case 5:
            v27 = (TESTopic *)TESTopic::GEtTopic(3, 0x24);
            break;
          case 6:
            v27 = (TESTopic *)TESTopic::GEtTopic(3, 0x25);
            break;
          default:
            break;
        }
        DialogueInfo = TESTopic::CreateDialogueInfo(
                         v27,
                         *(Actor **)(a1 + 0xD8),
                         (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                         0,
                         0);
        v29 = DialogueInfo;
        if ( DialogueInfo )
        {
          sub_6B7BA0(DialogueInfo);
          v30 = (const char **)sub_6B7C20(v29);
          if ( !v30 )
            goto LABEL_39;
          *(_BYTE *)(sub_5E12B0(*(Actor **)(a1 + 0xD8)) + 0x1DB) = 0;
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 7;
          (*(void (__stdcall **)(float, const char **))(**(_DWORD **)(a1 + 0xD8) + 0x304))(flt_B33E9C, v30);
          if ( !byte_B13200 )
            goto LABEL_39;
          v31 = *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x58);
LABEL_38:
          v34 = *v30;
          v43 = flt_A30634;
          v35 = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)v31 + 0x33C))(0);
          GameUI_QueueMessage(v34, v35, 0, v43);
LABEL_39:
          sub_6B81D0(v29->unk00);
          FormHeapFree((unsigned int)v29);
        }
      }
      else
      {
        if ( v25 == 3 )
        {
          v32 = 0;
          switch ( v26 )
          {
            case 0:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x17);
              break;
            case 1:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x23);
              break;
            case 2:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x1B);
              break;
            case 3:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x1F);
              break;
            case 5:
              goto LABEL_27;
            case 6:
              goto LABEL_33;
            default:
              break;
          }
        }
        else
        {
          v32 = 0;
          switch ( v26 )
          {
            case 0:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x16);
              break;
            case 1:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x22);
              break;
            case 2:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x1A);
              break;
            case 3:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x1E);
              break;
            case 5:
LABEL_27:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x24);
              break;
            case 6:
LABEL_33:
              v32 = (TESTopic *)TESTopic::GEtTopic(3, 0x25);
              break;
            default:
              break;
          }
        }
        v33 = TESTopic::CreateDialogueInfo(
                v32,
                *(Actor **)(a1 + 0xD8),
                (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                0,
                0);
        v29 = v33;
        if ( v33 )
        {
          sub_6B7BA0(v33);
          v30 = (const char **)sub_6B7C20(v29);
          if ( !v30 )
            goto LABEL_39;
          *(_BYTE *)(sub_5E12B0(*(Actor **)(a1 + 0xD8)) + 0x1DB) = 0;
          *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 7;
          (*(void (__stdcall **)(float, const char **))(**(_DWORD **)(a1 + 0xD8) + 0x304))(flt_B33E9C, v30);
          if ( !byte_B13200 )
            goto LABEL_39;
          v31 = *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x58);
          goto LABEL_38;
        }
      }
LABEL_40:
      if ( *(_DWORD *)(a1 + 0x14 * *(_DWORD *)(a1 + 0x84) + 0x30) == 1 )
        ++TESDataHandler_g_PlayerRef->miscStats[0x19];
      v36 = 1;
      v37 = (_BYTE *)(a1 + 0x38);
      v38 = 4;
      do
      {
        if ( !*v37 )
          v36 = 0;
        v37 += 0x14;
        --v38;
      }
      while ( v38 );
      if ( v36 == 1 )
      {
        if ( *(_DWORD *)(a1 + 0xF0)
          || *(_DWORD *)(a1 + 0xEC) != (*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(a1 + 0xD8)
                                                                                        + 0x224))(
                                         *(_DWORD *)(a1 + 0xD8),
                                         TESDataHandler_g_PlayerRef) )
        {
          ((void (__stdcall *)(int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.ModExperience)(0x20, 0, 0.0);
        }
        Tile_SetFloat(*(Tile **)(a1 + 0xBC), (_DWORD *)0xFAF, fConstant_2);
        Tile_SetFloat(*(Tile **)(a1 + 0xC4), (_DWORD *)0xFA1, fConstant_2);
        Tile_SetFloat(*(Tile **)(a1 + 0xC0), (_DWORD *)0xFAF, 1.0);
        sub_5BF7D0((int)v45, (int)v46, v47, v48, v49, v51, LODWORD(v52));
        sub_5BF170(a2, 1);
        return;
      }
LABEL_56:
      sub_5BF170(a2, 1);
    }
  }
}
