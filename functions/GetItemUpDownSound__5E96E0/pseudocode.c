const char *__stdcall GetItemUpDownSound(TESKey *a1, char a2, char a3)
{
  const char *result; // eax
  int v4; // edi
  unsigned __int8 v5; // al

  if ( !a1 ) /*0x5e96e7*/
    return 0; /*0x5e96e9*/
  v4 = *((unsigned __int8 *)a1 + 4); /*0x5e96f9*/
  if ( MEMORY[0xB33398]->sound ) /*0x5e96f4*/
  {
    if ( a1 == MEMORY[0xB35EC8] ) /*0x5e9709*/
    {
      result = "ITMLockpickUp"; /*0x5e9710*/
      if ( a2 != 1 ) /*0x5e9715*/
        return "ITMLockpickDown"; /*0x5e9718*/
    }
    else if ( sub_469980((int)a1) ) /*0x5e9722*/
    {
      result = "ITMGoldUp"; /*0x5e9733*/
      if ( a2 != 1 ) /*0x5e9738*/
        return "ITMGoldDown"; /*0x5e973b*/
    }
    else
    {
      switch ( v4 ) /*0x5e975a*/
      {
        case 0x13: /*0x5e975a*/
          result = "ITMApparatusUp"; /*0x5e9873*/
          if ( a2 != 1 ) /*0x5e9878*/
            result = "ITMApparatusDown"; /*0x5e9880*/
          break; /*0x5e9886*/
        case 0x14: /*0x5e975a*/
          if ( TESObjectARMO_ISHeavyArmor(a1) ) /*0x5e977a*/
          {
            if ( TESObjectARMO_ISHeavyArmor(a1) != 1 ) /*0x5e97a3*/
              goto GetItemUpDownSound___def_5E975A; /*0x5e97a3*/
            result = "ITMArmorHeavyUp"; /*0x5e97ad*/
            if ( a2 != 1 ) /*0x5e97b2*/
              result = "ITMArmorHeavyDown"; /*0x5e97b6*/
          }
          else
          {
            result = "ITMArmorLightUp"; /*0x5e9788*/
            if ( a2 != 1 ) /*0x5e978d*/
              result = "ITMArmorLightDown"; /*0x5e9791*/
          }
          break; /*0x5e9797*/
        case 0x15: /*0x5e975a*/
          if ( (*((_BYTE *)a1 + 0x88) & 1) != 0 ) /*0x5e9838*/
          {
            result = "ITMScrollUp"; /*0x5e983e*/
            if ( a2 != 1 ) /*0x5e9843*/
              result = "ITMScrollDown"; /*0x5e984b*/
          }
          else
          {
            result = "ITMBookUp"; /*0x5e9858*/
            if ( a2 != 1 ) /*0x5e985d*/
              result = "ITMBookDown"; /*0x5e9865*/
          }
          break; /*0x5e9851*/
        case 0x16: /*0x5e975a*/
          result = "ITMClothingUp"; /*0x5e97ed*/
          if ( a2 != 1 ) /*0x5e97f2*/
            result = "ITMClothingDown"; /*0x5e97fa*/
          break; /*0x5e9800*/
        case 0x19: /*0x5e975a*/
          if ( a3 ) /*0x5e97c4*/
          {
            result = "NPCHumanChew"; /*0x5e97df*/
          }
          else
          {
            result = "ITMIngredientUp"; /*0x5e97cb*/
            if ( a2 != 1 ) /*0x5e97d0*/
              result = "ITMIngredientDown"; /*0x5e97d4*/
          }
          break; /*0x5e97da*/
        case 0x21: /*0x5e975a*/
          v5 = *((_BYTE *)a1 + 0x90); /*0x5e98a4*/
          if ( v5 < 2u ) /*0x5e98ac*/
          {
            result = "ITMWeaponBladeUp"; /*0x5e9914*/
            if ( a2 != 1 ) /*0x5e9919*/
              result = "ITMWeaponBladeDown"; /*0x5e9921*/
          }
          else
          {
            switch ( v5 ) /*0x5e98b8*/
            {
              case 2u: /*0x5e98b8*/
              case 3u: /*0x5e98b8*/
                result = "ITMWeaponBluntUp"; /*0x5e98fa*/
                if ( a2 != 1 ) /*0x5e98ff*/
                  result = "ITMWeaponBluntDown"; /*0x5e9907*/
                break;
              case 4u: /*0x5e98b8*/
                result = "ITMWeaponStaffUp"; /*0x5e98c2*/
                if ( a2 != 1 ) /*0x5e98c7*/
                  result = "ITMWeaponStaffDown"; /*0x5e98cf*/
                break;
              case 5u: /*0x5e98b8*/
                result = "ITMWeaponBowUp"; /*0x5e98e0*/
                if ( a2 != 1 ) /*0x5e98e5*/
                  result = "ITMWeaponBowDown"; /*0x5e98ed*/
                break;
              default:
                goto GetItemUpDownSound___def_5E975A; /*0x5e98da*/
            }
          }
          break; /*0x5e98d5*/
        case 0x22: /*0x5e975a*/
          result = "ITMAmmoUp"; /*0x5e9766*/
          if ( a2 != 1 ) /*0x5e976b*/
            result = "ITMAmmoDown"; /*0x5e976d*/
          break; /*0x5e976d*/
        case 0x26: /*0x5e975a*/
          result = "ITMSoulGemUp"; /*0x5e992f*/
          if ( a2 != 1 ) /*0x5e9934*/
            result = "ITMSoulGemDown"; /*0x5e993c*/
          break; /*0x5e9942*/
        case 0x27: /*0x5e975a*/
          result = "ITMKeyUp"; /*0x5e988e*/
          if ( a2 != 1 ) /*0x5e9893*/
            result = "ITMKeyDown"; /*0x5e989b*/
          break; /*0x5e98a1*/
        case 0x28: /*0x5e975a*/
          if ( a3 ) /*0x5e9808*/
          {
            result = "NPCHumanSwallow"; /*0x5e9827*/
          }
          else
          {
            result = "ITMPotionUp"; /*0x5e980f*/
            if ( a2 != 1 ) /*0x5e9814*/
              result = "ITMPotionDown"; /*0x5e981c*/
          }
          break; /*0x5e9822*/
        default:
GetItemUpDownSound___def_5E975A:
          result = "ITMGenericUp"; /*0x5e9945*/
          if ( a2 != 1 ) /*0x5e994e*/
            result = "ITMGenericDown"; /*0x5e9956*/
          break; /*0x5e995c*/
      }
    }
  }
  else
  {
    result = "ITMGenericUp"; /*0x5e9964*/
    if ( a2 != 1 ) /*0x5e9969*/
      return "ITMGenericDown"; /*0x5e9970*/
  }
  return result; /*0x5e96eb*/
}
