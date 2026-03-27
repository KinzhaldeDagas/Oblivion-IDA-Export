void __usercall sub_5C16E0(char bp0@<bpl>, TESForm *a1, char a3, char a4)
{
  double v5; // st6
  CHAR *NameForForm; // eax
  int v7; // edi
  void *v8; // eax
  CHAR *v9; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // edi
  CHAR *v12; // [esp+4h] [ebp-11Ch]
  CHAR *v13; // [esp+4h] [ebp-11Ch]
  int v14; // [esp+8h] [ebp-118h]
  int v15; // [esp+8h] [ebp-118h]
  int v16; // [esp+8h] [ebp-118h]
  char v17[260]; // [esp+18h] [ebp-108h] BYREF

  v17[0] = 0;
  v5 = _memset(&v17[1], 0, 0x103);
  if ( a3 && a1 )
  {
    switch ( a1->member.type )
    {
      case kFormType_Book:
      case kFormType_Misc:
      case kFormType_SoulGem:
      case kFormType_Key:
      case kFormType_SigilStone:
        break;
      case kFormType_Ingredient:
        v14 = dword_B38BA0;
        NameForForm = TESFullName_GetNameForForm(a1);
        _sprintf(v17, "%s %s", NameForForm, v14);
        break;
      case kFormType_Weapon:
        if ( !TESDataHandler_g_PlayerRef->vtbl->super.GetMountedHorse(TESDataHandler_g_PlayerRef)
          || TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetSleepState((TESObjectREFR *)TESDataHandler_g_PlayerRef) == kSitSleep_None )
        {
          goto LABEL_9;
        }
        break;
      case kFormType_AlchemyItem:
        if ( !(unsigned __int8)EffectItemList_AllEffectsHostile(&a1[2].vtbl) )
        {
          v15 = dword_B38BA0;
          v12 = TESFullName_GetNameForForm(a1);
          _sprintf(v17, "%s %s", v12, v15);
        }
        break;
      default:
LABEL_9:
        v7 = dword_B38B90;
        if ( a4 != 1 )
          v7 = dword_B38B98;
        v8 = OblivionDynamicCast(
               a1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESFullName `RTTI Type Descriptor',
               0);
        if ( !v8 || (v9 = *((CHAR **)v8 + 1)) == 0 )
          v9 = EmptyString;
        _sprintf(v17, "%s %s", v9, v7);
        break;
    }
    if ( strlen(v17) )
      QueueUIMessage(bp0, fConstant_2, v5, v17, fConstant_2, 0, 0);
  }
  else
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x416);
    if ( OpenMenuTile )
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile);
      if ( ParentMenu )
      {
        if ( a1 )
        {
          v13 = TESFullName_GetNameForForm(a1);
          _sprintf(v17, "%s", v13);
        }
        else
        {
          v16 = sub_5C1100() + 1;
          _sprintf(v17, "%s %d", dword_B38B88, v16);
        }
        Tile_SetString(*(_DWORD **)(ParentMenu + 0x28), (_DWORD *)0xFDE, v17);
      }
    }
  }
}
