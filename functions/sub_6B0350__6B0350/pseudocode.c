void __cdecl sub_6B0350(int a1, float a2)
{
  switch ( a1 ) /*0x6b0366*/
  {
    case 0: /*0x6b0366*/
    case 0x1E: /*0x6b0366*/
      if ( a2 >= dbl_A68FE0 ) /*0x6b037c*/
      {
        if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B1625C) <= (double)a2 ) /*0x6b03a6*/
        {
          if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B16264) <= (double)a2 ) /*0x6b03d6*/
            SoundMap_ResolveAnimSoundNote("CStoneLarge"); /*0x6b03e8*/
          else
            SoundMap_ResolveAnimSoundNote("CStoneMedium"); /*0x6b03dd*/
        }
        else
        {
          SoundMap_ResolveAnimSoundNote("CStoneSmall"); /*0x6b03b3*/
        }
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CStoneStatic"); /*0x6b0389*/
      }
      break; /*0x6b038e*/
    case 1: /*0x6b0366*/
      if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B162AC) <= (double)a2 ) /*0x6b05aa*/
      {
        if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B162B4) <= (double)a2 ) /*0x6b05da*/
          SoundMap_ResolveAnimSoundNote("CClothLarge"); /*0x6b05ec*/
        else
          SoundMap_ResolveAnimSoundNote("CClothMedium"); /*0x6b05e1*/
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CClothSmall"); /*0x6b05b7*/
      }
      break; /*0x6b05bc*/
    case 2: /*0x6b0366*/
      if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B1626C) <= (double)a2 ) /*0x6b0405*/
      {
        if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B16274) <= (double)a2 ) /*0x6b0435*/
          SoundMap_ResolveAnimSoundNote("CEarthLarge"); /*0x6b0447*/
        else
          SoundMap_ResolveAnimSoundNote("CEarthMedium"); /*0x6b043c*/
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CEarthSmall"); /*0x6b0412*/
      }
      break; /*0x6b0417*/
    case 3: /*0x6b0366*/
      if ( a2 >= (double)flt_A5977C ) /*0x6b0675*/
      {
        if ( a2 >= dbl_A492F0 ) /*0x6b069b*/
          SoundMap_ResolveAnimSoundNote("CGlassLarge"); /*0x6b06ad*/
        else
          SoundMap_ResolveAnimSoundNote("CGlassMedium"); /*0x6b06a2*/
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CGlassSmall"); /*0x6b0684*/
      }
      break; /*0x6b0689*/
    case 4: /*0x6b0366*/
      if ( a2 >= (double)flt_A5977C ) /*0x6b0460*/
      {
        if ( a2 >= (double)flt_A77740 ) /*0x6b0486*/
          SoundMap_ResolveAnimSoundNote("CGrassLarge"); /*0x6b0498*/
        else
          SoundMap_ResolveAnimSoundNote("CGrassMedium"); /*0x6b048d*/
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CGrassSmall"); /*0x6b046f*/
      }
      break; /*0x6b0474*/
    case 5: /*0x6b0366*/
      if ( a2 >= dbl_A68FE0 ) /*0x6b04ad*/
      {
        if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B1629C) <= (double)a2 ) /*0x6b04d7*/
        {
          if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B162A4) <= (double)a2 ) /*0x6b0507*/
            SoundMap_ResolveAnimSoundNote("CMetalLarge"); /*0x6b0519*/
          else
            SoundMap_ResolveAnimSoundNote("CMetalMedium"); /*0x6b050e*/
        }
        else
        {
          SoundMap_ResolveAnimSoundNote("CMetalSmall"); /*0x6b04e4*/
        }
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CMetalStatic"); /*0x6b04ba*/
      }
      break; /*0x6b04bf*/
    case 6: /*0x6b0366*/
      SoundMap_ResolveAnimSoundNote("COrganicSmall"); /*0x6b05fd*/
      break; /*0x6b0602*/
    case 7: /*0x6b0366*/
      if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B1627C) <= (double)a2 ) /*0x6b061a*/
      {
        if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B16284) <= (double)a2 ) /*0x6b064a*/
          SoundMap_ResolveAnimSoundNote("CSkinLarge"); /*0x6b065c*/
        else
          SoundMap_ResolveAnimSoundNote("CSkinMedium"); /*0x6b0651*/
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CSkinSmall"); /*0x6b0627*/
      }
      break; /*0x6b062c*/
    case 8: /*0x6b0366*/
      if ( a2 < (double)flt_A5977C ) /*0x6b06c6*/
        goto LABEL_49; /*0x6b06c6*/
      if ( a2 >= dbl_A492F0 ) /*0x6b06ec*/
        goto LABEL_31; /*0x6b06ec*/
      goto LABEL_30; /*0x6b06ec*/
    case 9: /*0x6b0366*/
      if ( a2 >= dbl_A68FE0 ) /*0x6b052e*/
      {
        if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B1624C) > (double)a2 ) /*0x6b0558*/
        {
LABEL_49:
          SoundMap_ResolveAnimSoundNote("CWoodSmall"); /*0x6b06ca*/
        }
        else if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B16254) <= (double)a2 ) /*0x6b057b*/
        {
LABEL_31:
          SoundMap_ResolveAnimSoundNote("CWoodLarge"); /*0x6b0588*/
        }
        else
        {
LABEL_30:
          SoundMap_ResolveAnimSoundNote("CWoodMedium"); /*0x6b057d*/
        }
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CWoodStatic"); /*0x6b053b*/
      }
      break; /*0x6b0540*/
    case 0xA: /*0x6b0366*/
      SoundMap_ResolveAnimSoundNote("CSpecialHeavyStone"); /*0x6b0767*/
      break; /*0x6b076c*/
    case 0xB: /*0x6b0366*/
      SoundMap_ResolveAnimSoundNote("CSpecialHeavyMetal"); /*0x6b0778*/
      break; /*0x6b077d*/
    case 0xC: /*0x6b0366*/
      SoundMap_ResolveAnimSoundNote("CSpecialHeavyWood"); /*0x6b0789*/
      break; /*0x6b0789*/
    case 0xD: /*0x6b0366*/
      if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B1628C) <= (double)a2 ) /*0x6b0714*/
      {
        if ( *GameSetting_GetSafeFloatPointer((float *)&dword_B1628C) <= (double)a2 ) /*0x6b0744*/
          SoundMap_ResolveAnimSoundNote("CChainLarge"); /*0x6b0756*/
        else
          SoundMap_ResolveAnimSoundNote("CChainMedium"); /*0x6b074b*/
      }
      else
      {
        SoundMap_ResolveAnimSoundNote("CChainSmall"); /*0x6b0721*/
      }
      break; /*0x6b0726*/
    default:
      return;
  }
}
