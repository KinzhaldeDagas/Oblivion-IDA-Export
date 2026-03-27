void __thiscall sub_449D20(char *this, unsigned __int8 *a2)
{
  TESObjectCELL *v3; // eax
  TESForm *v4; // edi
  int v5; // edx
  unsigned int v6; // eax
  TESForm **i; // ecx
  char *v8; // esi
  TESWorldSpace *v9; // eax
  void *v10; // eax
  void *v11; // eax
  _WORD *v12; // eax
  _WORD *v13; // esi
  int *TopicInfoParent; // eax
  void *v15; // eax
  void *v16; // eax
  void *v17; // eax
  void *v18; // eax
  void *v19; // eax
  void *v20; // eax
  void *v21; // eax
  void *v22; // eax
  void *v23; // eax
  void *v24; // eax
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // eax
  void *v29; // eax
  void *v30; // eax
  void *v31; // eax
  void *v32; // eax
  void *v33; // eax
  void *v34; // eax
  void *v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // edi

  if ( a2 )
  {
    switch ( a2[4] )
    {
      case 4u:
        v23 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESGlobal `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x1D, (int)v23);
        break;
      case 5u:
        v17 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESClass `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x15, (int)v17);
        break;
      case 6u:
        v16 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESFaction `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x17, (int)v16);
        break;
      case 7u:
        v18 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESHair `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0xD, (int)v18);
        break;
      case 8u:
        v19 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESEyes `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0xF, (int)v19);
        break;
      case 9u:
        v20 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESRace `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x11, (int)v20);
        break;
      case 0xAu:
        v22 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESSound `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x1B, (int)v22);
        break;
      case 0xDu:
        v15 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &Script `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x19, (int)v15);
        break;
      case 0xEu:
        v21 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESLandTexture `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x13, (int)v21);
        break;
      case 0xFu:
        v30 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &EnchantmentItem `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 9, (int)v30);
        break;
      case 0x10u:
        v29 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &SpellItem `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0xB, (int)v29);
        break;
      case 0x11u:
        v24 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &BirthSign `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x23, (int)v24);
        break;
      case 0x2Du:
        v26 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESWeather `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 7, (int)v26);
        break;
      case 0x2Eu:
        v25 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESClimate `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 5, (int)v25);
        break;
      case 0x30u:
        v3 = (TESObjectCELL *)OblivionDynamicCast(
                                a2,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESObjectCELL `RTTI Type Descriptor',
                                0);
        v4 = (TESForm *)v3;
        if ( v3 )
        {
          if ( TESObjectCELL_IsInterior(v3) )
          {
            v5 = *((_DWORD *)this + 0x33);
            v6 = 0;
            if ( v5 > 0 )
            {
              for ( i = *((TESForm ***)this + 0x31); *i != v4; ++i )
              {
                if ( (int)++v6 >= v5 )
                  return;
              }
              v8 = this + 0xC0;
              a2 = 0;
              sub_446C50(v8, v6, &a2);
              sub_5A56F0(v8);
            }
          }
          else
          {
            v9 = sub_4477F0(this, v4);
            if ( v9 )
              TESWorldSpace_RemoveCellFromCellMap(v9, (TESObjectCELL *)v4);
          }
        }
        break;
      case 0x35u:
        v27 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESWorldSpace `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 3, (int)v27);
        break;
      case 0x39u:
        v11 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESTopic `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x1F, (int)v11);
        break;
      case 0x3Au:
        v12 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESTopicInfo `RTTI Type Descriptor',
                0);
        v13 = v12;
        if ( v12 )
        {
          TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)v12);
          if ( TopicInfoParent )
            sub_530590(v13, TopicInfoParent);
        }
        break;
      case 0x3Bu:
        v10 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESQuest `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x21, (int)v10);
        break;
      case 0x3Du:
        v28 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESPackage `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 1, (int)v28);
        break;
      case 0x3Eu:
        v31 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESCombatStyle `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x25, (int)v31);
        break;
      case 0x3Fu:
        v32 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESLoadScreen `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x27, (int)v32);
        break;
      case 0x41u:
        v34 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESObjectANIO `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x2D, (int)v34);
        break;
      case 0x42u:
        v33 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESWaterForm `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x29, (int)v33);
        break;
      case 0x43u:
        v35 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESEffectShader `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((_DWORD *)this + 0x2B, (int)v35);
        break;
      default:
        v36 = OblivionDynamicCast(
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESObject `RTTI Type Descriptor',
                0);
        v37 = v36;
        if ( v36 )
        {
          TESObjectListHead_RemoveObject(*(_DWORD **)this, v36);
          sub_629260(v37, 0);
        }
        break;
    }
  }
}
