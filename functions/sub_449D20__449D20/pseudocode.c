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

  if ( a2 ) /*0x449d29*/
  {
    switch ( a2[4] ) /*0x449d47*/
    {
      case 4u: /*0x449d47*/
        v23 = OblivionDynamicCast( /*0x449faa*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESGlobal `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x1D, (int)v23); /*0x449fb6*/
        break; /*0x449fbd*/
      case 5u: /*0x449d47*/
        v17 = OblivionDynamicCast( /*0x449ecc*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESClass `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x15, (int)v17); /*0x449ed8*/
        break; /*0x449edf*/
      case 6u: /*0x449d47*/
        v16 = OblivionDynamicCast( /*0x449ea7*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESFaction `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x17, (int)v16); /*0x449eb3*/
        break; /*0x449eba*/
      case 7u: /*0x449d47*/
        v18 = OblivionDynamicCast( /*0x449ef1*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESHair `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0xD, (int)v18); /*0x449efd*/
        break; /*0x449f04*/
      case 8u: /*0x449d47*/
        v19 = OblivionDynamicCast( /*0x449f16*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESEyes `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0xF, (int)v19); /*0x449f22*/
        break; /*0x449f29*/
      case 9u: /*0x449d47*/
        v20 = OblivionDynamicCast( /*0x449f3b*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESRace `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x11, (int)v20); /*0x449f47*/
        break; /*0x449f4e*/
      case 0xAu: /*0x449d47*/
        v22 = OblivionDynamicCast( /*0x449f85*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESSound `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x1B, (int)v22); /*0x449f91*/
        break; /*0x449f98*/
      case 0xDu: /*0x449d47*/
        v15 = OblivionDynamicCast( /*0x449e82*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &Script `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x19, (int)v15); /*0x449e8e*/
        break; /*0x449e95*/
      case 0xEu: /*0x449d47*/
        v21 = OblivionDynamicCast( /*0x449f60*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESLandTexture `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x13, (int)v21); /*0x449f6c*/
        break; /*0x449f73*/
      case 0xFu: /*0x449d47*/
        v30 = OblivionDynamicCast( /*0x44a0b0*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &EnchantmentItem `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 9, (int)v30); /*0x44a0bc*/
        break; /*0x44a0c3*/
      case 0x10u: /*0x449d47*/
        v29 = OblivionDynamicCast( /*0x44a08b*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &SpellItem `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0xB, (int)v29); /*0x44a097*/
        break; /*0x44a09e*/
      case 0x11u: /*0x449d47*/
        v24 = OblivionDynamicCast( /*0x449fcf*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &BirthSign `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x23, (int)v24); /*0x449fde*/
        break; /*0x449fe5*/
      case 0x2Du: /*0x449d47*/
        v26 = OblivionDynamicCast( /*0x44a01c*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESWeather `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 7, (int)v26); /*0x44a028*/
        break; /*0x44a02f*/
      case 0x2Eu: /*0x449d47*/
        v25 = OblivionDynamicCast( /*0x449ff7*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESClimate `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 5, (int)v25); /*0x44a003*/
        break; /*0x44a00a*/
      case 0x30u: /*0x449d47*/
        v3 = (TESObjectCELL *)OblivionDynamicCast( /*0x449d5d*/
                                a2,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESObjectCELL `RTTI Type Descriptor',
                                0);
        v4 = (TESForm *)v3; /*0x449d62*/
        if ( v3 ) /*0x449d69*/
        {
          if ( TESObjectCELL_IsInterior(v3) ) /*0x449d71*/
          {
            v5 = *((_DWORD *)this + 0x33); /*0x449d7a*/
            v6 = 0; /*0x449d80*/
            if ( v5 > 0 ) /*0x449d84*/
            {
              for ( i = *((TESForm ***)this + 0x31); *i != v4; ++i ) /*0x449d8a*/
              {
                if ( (int)++v6 >= v5 ) /*0x449d9c*/
                  return; /*0x449d9c*/
              }
              v8 = this + 0xC0; /*0x449da8*/
              a2 = 0; /*0x449db1*/
              sub_446C50(v8, v6, &a2); /*0x449db9*/
              sub_5A56F0((unsigned int *)v8); /*0x449dc0*/
            }
          }
          else
          {
            v9 = sub_4477F0(this, v4); /*0x449dcd*/
            if ( v9 ) /*0x449dd4*/
              TESWorldSpace_RemoveCellFromCellMap(v9, (TESObjectCELL *)v4); /*0x449ddd*/
          }
        }
        break; /*0x449dc7*/
      case 0x35u: /*0x449d47*/
        v27 = OblivionDynamicCast( /*0x44a041*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESWorldSpace `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 3, (int)v27); /*0x44a04d*/
        break; /*0x44a054*/
      case 0x39u: /*0x449d47*/
        v11 = OblivionDynamicCast( /*0x449e1e*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESTopic `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x1F, (int)v11); /*0x449e2a*/
        break; /*0x449e31*/
      case 0x3Au: /*0x449d47*/
        v12 = OblivionDynamicCast( /*0x449e43*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESTopicInfo `RTTI Type Descriptor',
                0);
        v13 = v12; /*0x449e48*/
        if ( v12 ) /*0x449e4f*/
        {
          TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)v12); /*0x449e56*/
          if ( TopicInfoParent ) /*0x449e60*/
            sub_530590(v13, TopicInfoParent); /*0x449e69*/
        }
        break; /*0x449e70*/
      case 0x3Bu: /*0x449d47*/
        v10 = OblivionDynamicCast( /*0x449df6*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESQuest `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x21, (int)v10); /*0x449e05*/
        break; /*0x449e0c*/
      case 0x3Du: /*0x449d47*/
        v28 = OblivionDynamicCast( /*0x44a066*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESPackage `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 1, (int)v28); /*0x44a072*/
        break; /*0x44a079*/
      case 0x3Eu: /*0x449d47*/
        v31 = OblivionDynamicCast( /*0x44a0d5*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESCombatStyle `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x25, (int)v31); /*0x44a0e4*/
        break; /*0x44a0eb*/
      case 0x3Fu: /*0x449d47*/
        v32 = OblivionDynamicCast( /*0x44a0fd*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESLoadScreen `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x27, (int)v32); /*0x44a10c*/
        break; /*0x44a113*/
      case 0x41u: /*0x449d47*/
        v34 = OblivionDynamicCast( /*0x44a14d*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESObjectANIO `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x2D, (int)v34); /*0x44a15c*/
        break; /*0x44a163*/
      case 0x42u: /*0x449d47*/
        v33 = OblivionDynamicCast( /*0x44a125*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESWaterForm `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x29, (int)v33); /*0x44a134*/
        break; /*0x44a13b*/
      case 0x43u: /*0x449d47*/
        v35 = OblivionDynamicCast( /*0x44a175*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESEffectShader `RTTI Type Descriptor',
                0);
        BSSimpleList_Remove((int *)this + 0x2B, (int)v35); /*0x44a184*/
        break; /*0x44a18b*/
      default:
        v36 = OblivionDynamicCast( /*0x44a19d*/
                a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESObject `RTTI Type Descriptor',
                0);
        v37 = v36; /*0x44a1a2*/
        if ( v36 ) /*0x44a1a9*/
        {
          TESObjectListHead_RemoveObject(*(_DWORD **)this, v36); /*0x44a1ae*/
          sub_629260(v37, 0); /*0x44a1b7*/
        }
        break; /*0x44a1b7*/
    }
  }
}
