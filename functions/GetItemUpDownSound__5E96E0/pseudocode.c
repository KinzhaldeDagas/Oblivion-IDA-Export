const char *__stdcall GetItemUpDownSound(_BYTE *a1, char a2, char a3)
{
  const char *result; // eax
  int v4; // edi
  unsigned __int8 v5; // al

  if ( !a1 )
    return 0;
  v4 = (unsigned __int8)a1[4];
  if ( OSGlobals->sound )
  {
    if ( a1 == (_BYTE *)TESDataHandler_g_Lockpick )
    {
      result = "ITMLockpickUp";
      if ( a2 != 1 )
        return "ITMLockpickDown";
    }
    else if ( sub_469980((int)a1) )
    {
      result = "ITMGoldUp";
      if ( a2 != 1 )
        return "ITMGoldDown";
    }
    else
    {
      switch ( v4 )
      {
        case 0x13:
          result = "ITMApparatusUp";
          if ( a2 != 1 )
            result = "ITMApparatusDown";
          break;
        case 0x14:
          if ( TESObjectARMO_ISHeavyArmor(a1) )
          {
            if ( TESObjectARMO_ISHeavyArmor(a1) != 1 )
              goto GetItemUpDownSound___def_5E975A;
            result = "ITMArmorHeavyUp";
            if ( a2 != 1 )
              result = "ITMArmorHeavyDown";
          }
          else
          {
            result = "ITMArmorLightUp";
            if ( a2 != 1 )
              result = "ITMArmorLightDown";
          }
          break;
        case 0x15:
          if ( (a1[0x88] & 1) != 0 )
          {
            result = "ITMScrollUp";
            if ( a2 != 1 )
              result = "ITMScrollDown";
          }
          else
          {
            result = "ITMBookUp";
            if ( a2 != 1 )
              result = "ITMBookDown";
          }
          break;
        case 0x16:
          result = "ITMClothingUp";
          if ( a2 != 1 )
            result = "ITMClothingDown";
          break;
        case 0x19:
          if ( a3 )
          {
            result = "NPCHumanChew";
          }
          else
          {
            result = "ITMIngredientUp";
            if ( a2 != 1 )
              result = "ITMIngredientDown";
          }
          break;
        case 0x21:
          v5 = a1[0x90];
          if ( v5 < 2u )
          {
            result = "ITMWeaponBladeUp";
            if ( a2 != 1 )
              result = "ITMWeaponBladeDown";
          }
          else
          {
            switch ( v5 )
            {
              case 2u:
              case 3u:
                result = "ITMWeaponBluntUp";
                if ( a2 != 1 )
                  result = "ITMWeaponBluntDown";
                break;
              case 4u:
                result = "ITMWeaponStaffUp";
                if ( a2 != 1 )
                  result = "ITMWeaponStaffDown";
                break;
              case 5u:
                result = "ITMWeaponBowUp";
                if ( a2 != 1 )
                  result = "ITMWeaponBowDown";
                break;
              default:
                goto GetItemUpDownSound___def_5E975A;
            }
          }
          break;
        case 0x22:
          result = "ITMAmmoUp";
          if ( a2 != 1 )
            result = "ITMAmmoDown";
          break;
        case 0x26:
          result = "ITMSoulGemUp";
          if ( a2 != 1 )
            result = "ITMSoulGemDown";
          break;
        case 0x27:
          result = "ITMKeyUp";
          if ( a2 != 1 )
            result = "ITMKeyDown";
          break;
        case 0x28:
          if ( a3 )
          {
            result = "NPCHumanSwallow";
          }
          else
          {
            result = "ITMPotionUp";
            if ( a2 != 1 )
              result = "ITMPotionDown";
          }
          break;
        default:
GetItemUpDownSound___def_5E975A:
          result = "ITMGenericUp";
          if ( a2 != 1 )
            result = "ITMGenericDown";
          break;
      }
    }
  }
  else
  {
    result = "ITMGenericUp";
    if ( a2 != 1 )
      return "ITMGenericDown";
  }
  return result;
}
