void __userpurge sub_5A3860(int a1@<ecx>, int a2@<ebx>, char a3@<bpl>, int a4, _DWORD *a5)
{
  double v6; // st6
  double v7; // st5
  double v8; // st7
  void **v9; // edx
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  int gameDifficultyLevel_low; // [esp+10h] [ebp+4h]
  float Float; // [esp+14h] [ebp+8h]
  float v18; // [esp+14h] [ebp+8h]

  switch ( a4 )
  {
    case 3:
      v10 = byte_B13208 == 0;
      byte_B13208 = v10;
      sub_59B640(a5, v10);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13208);
      break;
    case 4:
      v11 = byte_B13200 == 0;
      byte_B13200 = v11;
      sub_59B640(a5, v11);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13200);
      break;
    case 5:
      v12 = byte_B13210 == 0;
      byte_B13210 = v12;
      sub_59B640(a5, v12);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13210);
      break;
    case 6:
      v13 = byte_B13218 == 0;
      byte_B13218 = v13;
      sub_59B640(a5, v13);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13218);
      break;
    case 7:
      v14 = byte_B13220 == 0;
      byte_B13220 = v14;
      sub_59B640(a5, v14);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13220);
      break;
    case 8:
      v15 = byte_B13228 == 0;
      byte_B13228 = v15;
      sub_59B640(a5, v15);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13228);
      break;
    case 9:
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFB3, flt_A6B328);
      v18 = fDifficultyDefaultValue - fDifficultyMinValue;
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFB3, v18);
      Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFB3, 0.0);
      byte_B13208 = 1;
      sub_59B640(*(_DWORD **)(a1 + 0x30), 1);
      byte_B13200 = 1;
      sub_59B640(*(_DWORD **)(a1 + 0x34), 1);
      byte_B13210 = 1;
      sub_59B640(*(_DWORD **)(a1 + 0x38), 1);
      byte_B13218 = 1;
      sub_59B640(*(_DWORD **)(a1 + 0x3C), 1);
      byte_B13220 = 1;
      sub_59B640(*(_DWORD **)(a1 + 0x40), 1);
      byte_B13228 = 1;
      sub_59B640(*(_DWORD **)(a1 + 0x44), 1);
      ((void (__thiscall *)(void ***, char *, int))INISettingCollection[3])(&INISettingCollection, &byte_B13208, a2);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13200);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13210);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13218);
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13220);
      ((void (__thiscall *)(void ***))INISettingCollection[3])(&INISettingCollection);
      def_5A3873(a4, LODWORD(v18));
      break;
    case 0xA:
      gameDifficultyLevel_low = SLODWORD(TESDataHandler_g_PlayerRef->gameDifficultyLevel);
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB5);
      v6 = Float;
      v7 = Float;
      v8 = Float;
      if ( Float != *(float *)&gameDifficultyLevel_low )
      {
        v9 = INISettingCollection;
        flt_B14EB0 = Float;
        ((void (__thiscall *)(void ***, float *))v9[3])(&INISettingCollection, &flt_B14EB0);
        v8 = *(float *)&gameDifficultyLevel_low;
      }
      TESDataHandler_g_PlayerRef->gameDifficultyLevel = v8;
      sub_5A3810(v7, v6);
      sub_5BD610(a3, v7, v6);
      break;
    default:
      JUMPOUT(0x5A3B61);
  }
}
