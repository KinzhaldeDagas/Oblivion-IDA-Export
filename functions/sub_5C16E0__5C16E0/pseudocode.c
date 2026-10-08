void __usercall sub_5C16E0(double st6_0@<st1>, TESForm *a1, char a3, char a4)
{
  CHAR *NameForForm; // eax
  const char *v6; // edi
  void *v7; // eax
  CHAR *v8; // eax
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // edi
  CHAR *v11; // [esp+4h] [ebp-11Ch]
  CHAR *v12; // [esp+4h] [ebp-11Ch]
  const char *value; // [esp+8h] [ebp-118h]
  const char *v14; // [esp+8h] [ebp-118h]
  int v15; // [esp+8h] [ebp-118h]
  char v16[260]; // [esp+18h] [ebp-108h] BYREF

  memset(v16, 0, sizeof(v16)); /*0x5c1709*/
  if ( a3 && a1 ) /*0x5c1726*/
  {
    switch ( a1->member.type ) /*0x5c173f*/
    {
      case kFormType_Book: /*0x5c173f*/
      case kFormType_Misc: /*0x5c173f*/
      case kFormType_SoulGem: /*0x5c173f*/
      case kFormType_Key: /*0x5c173f*/
      case kFormType_SigilStone: /*0x5c173f*/
        break;
      case kFormType_Ingredient: /*0x5c173f*/
        value = stru_B38BA0.value; /*0x5c174c*/
        NameForForm = TESFullName_GetNameForForm(a1); /*0x5c174e*/
        _sprintf(v16, "%s %s", NameForForm, value); /*0x5c1756*/
        break; /*0x5c1756*/
      case kFormType_Weapon: /*0x5c173f*/
        if ( !reference->vtbl->super.GetMountedHorse(reference) /*0x5c17aa*/
          || reference->vtbl->super.super.super.GetSleepState((TESObjectREFR *)reference) == kSitSleep_None )
        {
          goto LABEL_9; /*0x5c17ae*/
        }
        break; /*0x5c17ae*/
      case kFormType_AlchemyItem: /*0x5c173f*/
        if ( !EffectItemList_AllEffectsHostile(&a1[2].vtbl) ) /*0x5c175e*/
        {
          v14 = stru_B38BA0.value; /*0x5c1771*/
          v11 = TESFullName_GetNameForForm(a1); /*0x5c177b*/
          _sprintf(v16, "%s %s", v11, v14); /*0x5c1786*/
        }
        break; /*0x5c1786*/
      default:
LABEL_9:
        v6 = stru_B38B90.value; /*0x5c17b0*/
        if ( a4 != 1 ) /*0x5c17be*/
          v6 = stru_B38B98.value; /*0x5c17c0*/
        v7 = OblivionDynamicCast( /*0x5c17d5*/
               a1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &TESFullName `RTTI Type Descriptor',
               0);
        if ( !v7 || (v8 = *((CHAR **)v7 + 1)) == 0 ) /*0x5c17e6*/
          v8 = EmptyString; /*0x5c17e8*/
        _sprintf(v16, "%s %s", v8, v6); /*0x5c17f9*/
        break; /*0x5c17f9*/
    }
    if ( strlen(v16) ) /*0x5c1808*/
      QueueUIMessage(fConstant_2, st6_0, v16, fConstant_2, 0, 0); /*0x5c182c*/
  }
  else
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x416); /*0x5c1850*/
    if ( OpenMenuTile ) /*0x5c185a*/
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5c1863*/
      if ( ParentMenu ) /*0x5c1867*/
      {
        if ( a1 ) /*0x5c186b*/
        {
          v12 = TESFullName_GetNameForForm(a1); /*0x5c1873*/
          _sprintf(v16, "%s", v12); /*0x5c187e*/
        }
        else
        {
          v15 = sub_5C1100() + 1; /*0x5c1888*/
          _sprintf(v16, "%s %d", stru_B38B88.value, v15); /*0x5c1899*/
        }
        Tile_SetString(*(_DWORD **)(ParentMenu + 0x28), (_DWORD *)0xFDE, v16); /*0x5c18ae*/
      }
    }
  }
}
