void __cdecl sub_6B0350(int a1, float a2)
{
  switch ( a1 )
  {
    case 0:
    case 0x1E:
      if ( a2 >= dbl_A68FE0 )
      {
        if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B1625C) <= (double)a2 )
        {
          if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B16264) <= (double)a2 )
            sub_447490("CStoneLarge");
          else
            sub_447490("CStoneMedium");
        }
        else
        {
          sub_447490("CStoneSmall");
        }
      }
      else
      {
        sub_447490("CStoneStatic");
      }
      break;
    case 1:
      if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B162AC) <= (double)a2 )
      {
        if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B162B4) <= (double)a2 )
          sub_447490("CClothLarge");
        else
          sub_447490("CClothMedium");
      }
      else
      {
        sub_447490("CClothSmall");
      }
      break;
    case 2:
      if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B1626C) <= (double)a2 )
      {
        if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B16274) <= (double)a2 )
          sub_447490("CEarthLarge");
        else
          sub_447490("CEarthMedium");
      }
      else
      {
        sub_447490("CEarthSmall");
      }
      break;
    case 3:
      if ( a2 >= (double)flt_A5977C )
      {
        if ( a2 >= dbl_A492F0 )
          sub_447490("CGlassLarge");
        else
          sub_447490("CGlassMedium");
      }
      else
      {
        sub_447490("CGlassSmall");
      }
      break;
    case 4:
      if ( a2 >= (double)flt_A5977C )
      {
        if ( a2 >= (double)flt_A77740 )
          sub_447490("CGrassLarge");
        else
          sub_447490("CGrassMedium");
      }
      else
      {
        sub_447490("CGrassSmall");
      }
      break;
    case 5:
      if ( a2 >= dbl_A68FE0 )
      {
        if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B1629C) <= (double)a2 )
        {
          if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B162A4) <= (double)a2 )
            sub_447490("CMetalLarge");
          else
            sub_447490("CMetalMedium");
        }
        else
        {
          sub_447490("CMetalSmall");
        }
      }
      else
      {
        sub_447490("CMetalStatic");
      }
      break;
    case 6:
      sub_447490("COrganicSmall");
      break;
    case 7:
      if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B1627C) <= (double)a2 )
      {
        if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B16284) <= (double)a2 )
          sub_447490("CSkinLarge");
        else
          sub_447490("CSkinMedium");
      }
      else
      {
        sub_447490("CSkinSmall");
      }
      break;
    case 8:
      if ( a2 < (double)flt_A5977C )
        goto LABEL_49;
      if ( a2 >= dbl_A492F0 )
        goto LABEL_31;
      goto LABEL_30;
    case 9:
      if ( a2 >= dbl_A68FE0 )
      {
        if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B1624C) > (double)a2 )
        {
LABEL_49:
          sub_447490("CWoodSmall");
        }
        else if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B16254) <= (double)a2 )
        {
LABEL_31:
          sub_447490("CWoodLarge");
        }
        else
        {
LABEL_30:
          sub_447490("CWoodMedium");
        }
      }
      else
      {
        sub_447490("CWoodStatic");
      }
      break;
    case 0xA:
      sub_447490("CSpecialHeavyStone");
      break;
    case 0xB:
      sub_447490("CSpecialHeavyMetal");
      break;
    case 0xC:
      sub_447490("CSpecialHeavyWood");
      break;
    case 0xD:
      if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B1628C) <= (double)a2 )
      {
        if ( *(float *)GameSetting_GetSafeFloatPointer(&dword_B1628C) <= (double)a2 )
          sub_447490("CChainLarge");
        else
          sub_447490("CChainMedium");
      }
      else
      {
        sub_447490("CChainSmall");
      }
      break;
    default:
      return;
  }
}
