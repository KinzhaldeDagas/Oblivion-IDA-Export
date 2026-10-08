// Verified registration path: switches on TESForm+4 type byte. TESGlobal ctor 4F9604 writes type 4; case 4 pushes the form into TESDataHandler.listGlobals at self+0x74 (self+0x1D pointers) and returns success. Called from TESDataHandler_LoadFormRecord 44E596; this list is consumed by TESSaveLoadGame_LoadGlobalValues.
char __userpurge TESDataHandler_AddForm@<al>(
        TESDataHandler *self@<ecx>,
        double arg2@<st2>,
        double arg3@<st1>,
        double arg4@<st0>,
        TESForm *form)
{
  TESObjectREFR *v7; // eax
  TESObjectREFR *v8; // esi
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *currentInteriorCell; // ebx
  float *v11; // ebx
  int v12; // eax
  _DWORD *v13; // eax
  int type; // eax
  const char *v15; // eax
  TESWorldSpace *CurrentWorldspace; // [esp+8h] [ebp-14h]

  if ( !form ) /*0x44d95a*/
    return 0; /*0x44d960*/
  switch ( form->member.type ) /*0x44d97b*/
  {
    case kFormType_Global: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x74], (int)form); /*0x44da91*/
      return 1; /*0x44da9b*/
    case kFormType_Class: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x54], (int)form); /*0x44d9ae*/
      return 1; /*0x44d9b8*/
    case kFormType_Faction: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x5C], (int)form); /*0x44d99d*/
      return 1; /*0x44d9a7*/
    case kFormType_Hair: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x34], (int)form); /*0x44d9bf*/
      return 1; /*0x44d9c9*/
    case kFormType_Eyes: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x3C], (int)form); /*0x44d9d0*/
      return 1; /*0x44d9da*/
    case kFormType_Race: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x44], (int)form); /*0x44d9e1*/
      return 1; /*0x44d9eb*/
    case kFormType_Sound: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x6C], (int)form); /*0x44da06*/
      return 1; /*0x44da10*/
    case kFormType_Script: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x64], (int)form); /*0x44da28*/
      return 1; /*0x44da32*/
    case kFormType_LandTexture: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x4C], (int)form); /*0x44da17*/
      return 1; /*0x44da21*/
    case kFormType_Enchantment: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x24], (int)form); /*0x44dab3*/
      return 1; /*0x44dabd*/
    case kFormType_Spell: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x2C], (int)form); /*0x44daa2*/
      return 1; /*0x44daac*/
    case kFormType_BirthSign: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x8C], (int)form); /*0x44da3c*/
      return 1; /*0x44da46*/
    case kFormType_Weather: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x1C], (int)form);// Verified: Weather forms are registered at TESDataHandler +0x1C. /*0x44da5e*/
      return 1; /*0x44da68*/
    case kFormType_Climate: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x14], (int)form);// Verified: Climate forms are registered at TESDataHandler +0x14; type 0x2E confirmed in TESClimate ctor. /*0x44da4d*/
      return 1; /*0x44da57*/
    case kFormType_Region: /*0x44d97b*/
      BSSimpleList_PushFront((_DWORD *)(*(_DWORD *)&self[0xBC] + 4), (int)form);// Verified: TESRegion forms are inserted into the handler's owned embedded TESRegionList at TESDataHandler +0xBC. /*0x44d98c*/
      return 1; /*0x44d996*/
    case kFormType_REFR: /*0x44d97b*/
      v7 = (TESObjectREFR *)OblivionDynamicCast( /*0x44db33*/
                              form,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                              0);
      v8 = v7; /*0x44db38*/
      if ( !v7 ) /*0x44db3f*/
        return 1; /*0x44db3f*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v7); /*0x44db47*/
      currentInteriorCell = DwordAtOffset40; /*0x44db4c*/
      if ( DwordAtOffset40 ) /*0x44db50*/
      {
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x44db63*/
          goto LABEL_33; /*0x44db6a*/
      }
      else
      {
        currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell; /*0x44db58*/
        if ( currentInteriorCell ) /*0x44db5d*/
          goto LABEL_34; /*0x44db5d*/
      }
      v11 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))v8->vtbl->GetPos)( /*0x44db80*/
                       v8,
                       arg4,
                       arg3,
                       arg2);
      CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x44db89*/
      v12 = (int)v8->vtbl->GetPos(v8); /*0x44db92*/
      currentInteriorCell = (TESObjectCELL *)sub_44A270( /*0x44dbaa*/
                                               (TESWorldSpace **)self,
                                               *v11,
                                               *(float *)(v12 + 4),
                                               CurrentWorldspace,
                                               1);
LABEL_33:
      if ( !currentInteriorCell ) /*0x44dbae*/
        return 1; /*0x44dbae*/
LABEL_34:
      TESObjectCELL_AddReference(currentInteriorCell, v8); /*0x44dbb0*/
      if ( sub_4DB3C0(v8) ) /*0x44dbba*/
        TESObjectREFR_SetPersistance((TESChildCELL *)v8, arg2, arg3, 1); /*0x44dbc7*/
      if ( !TESObjectREFR_IsTree(v8) ) /*0x44dbd5*/
        return 1; /*0x44dbd5*/
      TESObjectREFR_SetVisibleWhenDistant_((TESChildCELL *)v8, 1); /*0x44dbdb*/
      return 1;
    case kFormType_WorldSpace: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0xC], (int)form); /*0x44da6f*/
      return 1; /*0x44da79*/
    case kFormType_Quest: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x84], (int)form); /*0x44d9f5*/
      return 1; /*0x44d9ff*/
    case kFormType_Package: /*0x44d97b*/
      BSSimpleList_PushFront(&self[4], (int)form); /*0x44da80*/
      return 1; /*0x44da8a*/
    case kFormType_CombatStyle: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x94], (int)form); /*0x44dac7*/
      return 1; /*0x44dad1*/
    case kFormType_LoadScreen: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0x9C], (int)form); /*0x44dadb*/
      return 1; /*0x44dae5*/
    case kFormType_ANIO: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0xB4], (int)form); /*0x44db03*/
      return 1; /*0x44db0d*/
    case kFormType_Water: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0xA4], (int)form); /*0x44daef*/
      return 1; /*0x44daf9*/
    case kFormType_EffectShader: /*0x44d97b*/
      BSSimpleList_PushFront(&self[0xAC], (int)form); /*0x44db17*/
      return 1; /*0x44db21*/
    default:
      v13 = OblivionDynamicCast( /*0x44dbf7*/
              form,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObject `RTTI Type Descriptor',
              0);
      if ( v13 ) /*0x44dc01*/
      {
        TESObjectListHead_AddObject(*(_DWORD **)self, v13); /*0x44dc06*/
        return 1; /*0x44dc0b*/
      }
      else
      {
        type = form->member.type; /*0x44dc13*/
        if ( (unsigned __int8)type >= 0x45u ) /*0x44dc18*/
          v15 = EmptyString; /*0x44dc29*/
        else
          v15 = *(const char **)(0xC * (unsigned __int8)type + 0xB05E04); /*0x44dc20*/
        PrintError("Unknown form type '%s' encountered in AddFormToDataHandler.", v15); /*0x44dc34*/
        return 0; /*0x44dc3e*/
      }
  }
}
