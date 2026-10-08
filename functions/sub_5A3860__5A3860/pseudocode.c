void __userpurge sub_5A3860(
        int a1@<ecx>,
        int a2@<ebx>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        int a7,
        _DWORD *a8)
{
  double v10; // st7
  void **v11; // edx
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  int gameDifficultyLevel_low; // [esp+10h] [ebp+4h]
  float Float; // [esp+14h] [ebp+8h]
  int v20; // [esp+14h] [ebp+8h]

  switch ( a7 ) /*0x5a3873*/
  {
    case 3: /*0x5a3873*/
      v12 = byte_B13208 == 0; /*0x5a38f3*/
      byte_B13208 = v12; /*0x5a38f6*/
      ControlsMenu::SetInvertYButtonLabel(a8, v12); /*0x5a38fd*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13208); /*0x5a3914*/
      break; /*0x5a3917*/
    case 4: /*0x5a3873*/
      v13 = byte_B13200 == 0; /*0x5a3921*/
      byte_B13200 = v13; /*0x5a3924*/
      ControlsMenu::SetInvertYButtonLabel(a8, v13); /*0x5a392f*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13200); /*0x5a3947*/
      break; /*0x5a394a*/
    case 5: /*0x5a3873*/
      v14 = byte_B13210 == 0; /*0x5a3958*/
      byte_B13210 = v14; /*0x5a395b*/
      ControlsMenu::SetInvertYButtonLabel(a8, v14); /*0x5a3964*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13210); /*0x5a397c*/
      break; /*0x5a397f*/
    case 6: /*0x5a3873*/
      v15 = byte_B13218 == 0; /*0x5a398d*/
      byte_B13218 = v15; /*0x5a3990*/
      ControlsMenu::SetInvertYButtonLabel(a8, v15); /*0x5a3999*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13218); /*0x5a39b1*/
      break; /*0x5a39b4*/
    case 7: /*0x5a3873*/
      v16 = byte_B13220 == 0; /*0x5a39c2*/
      byte_B13220 = v16; /*0x5a39c5*/
      ControlsMenu::SetInvertYButtonLabel(a8, v16); /*0x5a39ce*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13220); /*0x5a39e6*/
      break; /*0x5a39e9*/
    case 8: /*0x5a3873*/
      v17 = byte_B13228 == 0; /*0x5a39f7*/
      byte_B13228 = v17; /*0x5a39fa*/
      ControlsMenu::SetInvertYButtonLabel(a8, v17); /*0x5a3a03*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13228); /*0x5a3a1b*/
      break; /*0x5a3a1e*/
    case 9: /*0x5a3873*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFB3u, flt_A6B328); /*0x5a3a34*/
      *(float *)&v20 = MEMORY[0xB37A58][0x4A] - MEMORY[0xB37A58][0x46]; /*0x5a3a49*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFB3u, *(float *)&v20); /*0x5a3a59*/
      Tile_SetFloat(*(Tile **)(a1 + 0x28), 0xFB3u, 0.0); /*0x5a3a6c*/
      byte_B13208 = 1; /*0x5a3a76*/
      ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0x30), 1); /*0x5a3a83*/
      byte_B13200 = 1; /*0x5a3a88*/
      ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0x34), 1); /*0x5a3a95*/
      byte_B13210 = 1; /*0x5a3a9a*/
      ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0x38), 1); /*0x5a3aa7*/
      byte_B13218 = 1; /*0x5a3aac*/
      ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0x3C), 1); /*0x5a3ab9*/
      byte_B13220 = 1; /*0x5a3abe*/
      ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0x40), 1); /*0x5a3acb*/
      byte_B13228 = 1; /*0x5a3ad0*/
      ControlsMenu::SetInvertYButtonLabel(*(_DWORD **)(a1 + 0x44), 1); /*0x5a3add*/
      ((void (__thiscall *)(void ***, char *, int))INISettingCollection[3])(&INISettingCollection, &byte_B13208, a2); /*0x5a3af5*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13200); /*0x5a3b0a*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13210); /*0x5a3b1f*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13218); /*0x5a3b34*/
      ((void (__thiscall *)(void ***, char *))INISettingCollection[3])(&INISettingCollection, &byte_B13220); /*0x5a3b49*/
      ((void (__thiscall *)(void ***))INISettingCollection[3])(&INISettingCollection); /*0x5a3b5e*/
      def_5A3873(a7, v20); /*0x5a3b60*/
      break; /*0x5a3b60*/
    case 0xA: /*0x5a3873*/
      gameDifficultyLevel_low = SLODWORD(reference->gameDifficultyLevel); /*0x5a388d*/
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB5); /*0x5a3896*/
      v10 = Float; /*0x5a38a8*/
      if ( Float != *(float *)&gameDifficultyLevel_low ) /*0x5a38ad*/
      {
        v11 = INISettingCollection; /*0x5a38af*/
        flt_B14EB0 = Float; /*0x5a38b5*/
        ((void (__thiscall *)(void ***, float *))v11[3])(&INISettingCollection, &flt_B14EB0); /*0x5a38c8*/
        v10 = *(float *)&gameDifficultyLevel_low; /*0x5a38ca*/
      }
      reference->gameDifficultyLevel = v10; /*0x5a38d4*/
      sub_5A3810(Float, a3, a4, a5, a6); /*0x5a38da*/
      sub_5BD610(); /*0x5a38df*/
      break; /*0x5a38e5*/
    default:
      JUMPOUT(0x5A3B61); /*0x5a3b61*/
  }
}
