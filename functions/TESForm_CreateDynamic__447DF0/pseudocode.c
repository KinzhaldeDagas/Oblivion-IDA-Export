TESForm *__cdecl TESForm_CreateDynamic(unsigned __int8 a1)
{
  TESObjectACTI *v1; // eax
  TESForm *result; // eax
  TESObjectAPPA *v3; // eax
  TESObjectARMO *v4; // eax
  TESObjectBOOK *v5; // eax
  TESObjectCLOT *v6; // eax
  TESObjectCONT *v7; // eax
  TESObjectDOOR *v8; // eax
  IngredientItem *v9; // eax
  TESObjectLIGH *v10; // eax
  TESObjectMISC *v11; // eax
  TESKey *v12; // eax
  TESSoulGem *v13; // eax
  TESObjectSTAT *v14; // eax
  TESGrass *v15; // eax
  TESIdleForm *v16; // eax
  TESPackage *v17; // eax
  TESObjectTREE *v18; // eax
  TESFlora *v19; // eax
  TESFlora *v20; // eax
  TESFurniture *v21; // eax
  TESObjectWEAP *v22; // eax
  TESAmmo *v23; // eax
  TESForm *v24; // eax
  TESForm *v25; // eax
  TESLevCreature *v26; // eax
  SpellItem *v27; // eax
  EnchantmentItem *v28; // eax
  AlchemyItem *v29; // eax
  TESForm *v30; // eax
  TESChildCELL *v31; // eax
  TESHair *v32; // eax
  TESEyes *v33; // eax
  TESRace *v34; // eax
  TESClass *v35; // eax
  BirthSign *v36; // eax
  TESForm *v37; // eax
  TESSound *v38; // eax
  TESGlobal *v39; // eax
  EffectSetting *v40; // eax
  TESClimate *v41; // eax
  TESWeather *v42; // eax
  TESWorldSpace *v43; // eax
  TESForm *v44; // eax
  TESSkill *v45; // eax
  TESForm *v46; // eax
  TESForm *v47; // eax
  TESRegion *v48; // eax
  TESForm *v49; // eax
  TESForm *v50; // eax
  TESLoadScreen *v51; // eax
  TESWaterForm *v52; // eax
  TESLevSpell *v53; // eax
  TESObjectANIO *v54; // eax
  TESObjectLAND *v55; // eax
  TESPathGrid *v56; // eax
  TESRoad *v57; // eax
  TESSubSpace *v58; // eax
  TESEffectShader *v59; // eax
  TESSigilStone *v60; // eax
  const char *v61; // eax

  switch ( a1 )
  {
    case 4u:
      v39 = (TESGlobal *)FormHeapAlloc(0x28u);
      if ( !v39 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESGlobal::TESGlobal(v39);
      break;
    case 5u:
      v35 = (TESClass *)FormHeapAlloc(0x6Cu);
      if ( !v35 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESClass::TESClass(v35);
      break;
    case 6u:
      v37 = (TESForm *)FormHeapAlloc(0x44u);
      if ( !v37 )
        goto TESForm_CreateDynamic___Return_0;
      result = sub_51F820(v37);
      break;
    case 7u:
      v32 = (TESHair *)FormHeapAlloc(0x4Cu);
      if ( !v32 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESHair::TESHair(v32);
      break;
    case 8u:
      v33 = (TESEyes *)FormHeapAlloc(0x34u);
      if ( !v33 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESEyes::TESEyes(v33);
      break;
    case 9u:
      v34 = (TESRace *)FormHeapAlloc(0x318u);
      if ( !v34 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESRace::TESRace(v34);
      break;
    case 0xAu:
      v38 = (TESSound *)FormHeapAlloc(0x44u);
      if ( !v38 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESSound::TESSound(v38);
      break;
    case 0xBu:
      v45 = (TESSkill *)FormHeapAlloc(0x60u);
      if ( !v45 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESSkill::TESSkill(v45);
      break;
    case 0xCu:
      v40 = (EffectSetting *)FormHeapAlloc(0xA8u);
      if ( !v40 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)EffectSetting::EffectSetting(v40);
      break;
    case 0xDu:
      v49 = (TESForm *)FormHeapAlloc(0x50u);
      if ( !v49 )
        goto TESForm_CreateDynamic___Return_0;
      result = Script_Constructor(v49);
      break;
    case 0xEu:
      v46 = (TESForm *)FormHeapAlloc(0x34u);
      if ( !v46 )
        goto TESForm_CreateDynamic___Return_0;
      result = sub_4C93D0(v46);
      break;
    case 0xFu:
      v28 = (EnchantmentItem *)FormHeapAlloc(0x44u);
      if ( !v28 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)EnchantmentItem::EnchantmentItem(v28);
      break;
    case 0x10u:
      v27 = (SpellItem *)FormHeapAlloc(0x44u);
      if ( !v27 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)SpellItem::SpellItem(v27);
      break;
    case 0x11u:
      v36 = (BirthSign *)FormHeapAlloc(0x4Cu);
      if ( !v36 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)BirthSign::BirthSign(v36);
      break;
    case 0x12u:
      v1 = (TESObjectACTI *)FormHeapAlloc(0x58u);
      if ( !v1 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectACTI::TESObjectACTI(v1);
      break;
    case 0x13u:
      v3 = (TESObjectAPPA *)FormHeapAlloc(0x7Cu);
      if ( !v3 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectAPPA::TESObjectAPPA(v3);
      break;
    case 0x14u:
      v4 = (TESObjectARMO *)FormHeapAlloc(0xE8u);
      if ( !v4 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectARMO::TESObjectARMO(v4);
      break;
    case 0x15u:
      v5 = (TESObjectBOOK *)FormHeapAlloc(0x8Cu);
      if ( !v5 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectBOOK::TESObjectBOOK(v5);
      break;
    case 0x16u:
      v6 = (TESObjectCLOT *)FormHeapAlloc(0xDCu);
      if ( !v6 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectCLOT::TESObjectCLOT(v6);
      break;
    case 0x17u:
      v7 = (TESObjectCONT *)FormHeapAlloc(0x7Cu);
      if ( !v7 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectCONT::TESObjectCONT(v7);
      break;
    case 0x18u:
      v8 = (TESObjectDOOR *)FormHeapAlloc(0x70u);
      if ( !v8 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectDOOR::TESObjectDOOR(v8);
      break;
    case 0x19u:
      v9 = (IngredientItem *)FormHeapAlloc(0x80u);
      if ( !v9 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)IngredientItem::IngredientItem(v9);
      break;
    case 0x1Au:
      v10 = (TESObjectLIGH *)FormHeapAlloc(0x90u);
      if ( !v10 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectLIGH::TESObjectLIGH(v10);
      break;
    case 0x1Bu:
      v11 = (TESObjectMISC *)FormHeapAlloc(0x70u);
      if ( !v11 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectMISC::TESObjectMISC(v11);
      break;
    case 0x1Cu:
      v14 = (TESObjectSTAT *)FormHeapAlloc(0x3Cu);
      if ( !v14 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectSTAT::TESObjectSTAT(v14);
      break;
    case 0x1Du:
      v15 = (TESGrass *)FormHeapAlloc(0x5Cu);
      if ( !v15 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESGrass::TESGrass(v15);
      break;
    case 0x1Eu:
      v18 = (TESObjectTREE *)FormHeapAlloc(0x80u);
      if ( !v18 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectTREE::TESObjectTREE(v18);
      break;
    case 0x1Fu:
      v19 = (TESFlora *)FormHeapAlloc(0x64u);
      if ( !v19 )
        goto LABEL_124;
      v20 = TESFlora::TESFlora(v19);
      if ( !v20 )
        goto LABEL_124;
      result = (TESForm *)((char *)v20 + 0xC);
      break;
    case 0x20u:
      v21 = (TESFurniture *)FormHeapAlloc(0x5Cu);
      if ( !v21 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESFurniture::TESFurniture(v21);
      break;
    case 0x21u:
      v22 = (TESObjectWEAP *)FormHeapAlloc(0xA0u);
      if ( !v22 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectWEAP::TESObjectWEAP(v22);
      break;
    case 0x22u:
      v23 = (TESAmmo *)FormHeapAlloc(0x84u);
      if ( !v23 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESAmmo::TESAmmo(v23);
      break;
    case 0x23u:
      v24 = (TESForm *)FormHeapAlloc(0x200u);
      if ( !v24 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESNPC_constr(v24);
      break;
    case 0x24u:
      v25 = (TESForm *)FormHeapAlloc(0x140u);
      if ( !v25 )
        goto TESForm_CreateDynamic___Return_0;
      result = TESCreature_constr(v25);
      break;
    case 0x25u:
      v26 = (TESLevCreature *)FormHeapAlloc(0x44u);
      if ( !v26 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESLevCreature::TESLevCreature(v26);
      break;
    case 0x26u:
      v13 = (TESSoulGem *)FormHeapAlloc(0x74u);
      if ( !v13 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESSoulGem::TESSoulGem(v13);
      break;
    case 0x27u:
      v12 = (TESKey *)FormHeapAlloc(0x70u);
      if ( !v12 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESKey::TESKey(v12);
      break;
    case 0x28u:
      v29 = (AlchemyItem *)FormHeapAlloc(0x80u);
      if ( !v29 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)AlchemyItem::AlchemyItem(v29);
      break;
    case 0x29u:
      v58 = (TESSubSpace *)FormHeapAlloc(0x30u);
      if ( !v58 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESSubSpace::TESSubSpace(v58);
      break;
    case 0x2Au:
      v60 = (TESSigilStone *)FormHeapAlloc(0x88u);
      if ( !v60 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESSigilStone::TESSigilStone(v60);
      break;
    case 0x2Bu:
      v30 = (TESForm *)FormHeapAlloc(0x34u);
      if ( !v30 )
        goto TESForm_CreateDynamic___Return_0;
      result = TESLevItem_constr(v30);
      break;
    case 0x2Du:
      v42 = (TESWeather *)FormHeapAlloc(0x148u);
      if ( !v42 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESWeather::TESWeather(v42);
      break;
    case 0x2Eu:
      v41 = (TESClimate *)FormHeapAlloc(0x58u);
      if ( !v41 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESClimate::TESClimate(v41);
      break;
    case 0x2Fu:
      v48 = (TESRegion *)FormHeapAlloc(0x2Cu);
      if ( !v48 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESRegion::TESRegion(v48);
      break;
    case 0x30u:
      v44 = (TESForm *)FormHeapAlloc(0x58u);
      if ( !v44 )
        goto TESForm_CreateDynamic___Return_0;
      result = TESObjectCELL_constr(v44);
      break;
    case 0x31u:
      v31 = (TESChildCELL *)FormHeapAlloc(0x58u);
      if ( !v31 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectREFR_constr(v31);
      break;
    case 0x34u:
      v56 = (TESPathGrid *)FormHeapAlloc(0x54u);
      if ( !v56 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESPathGrid::TESPathGrid(v56);
      break;
    case 0x35u:
      v43 = (TESWorldSpace *)FormHeapAlloc(0xE0u);
      if ( !v43 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESWorldSpace::TESWorldSpace(v43);
      break;
    case 0x36u:
      v55 = (TESObjectLAND *)FormHeapAlloc(0x28u);
      if ( !v55 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectLAND::TESObjectLAND(v55);
      break;
    case 0x38u:
      v57 = (TESRoad *)FormHeapAlloc(0x30u);
      if ( !v57 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESRoad::TESRoad(v57);
      break;
    case 0x3Bu:
      v47 = (TESForm *)FormHeapAlloc(0x68u);
      if ( !v47 )
        goto TESForm_CreateDynamic___Return_0;
      result = sub_52AA00(v47);
      break;
    case 0x3Cu:
      v16 = (TESIdleForm *)FormHeapAlloc(0x48u);
      if ( !v16 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESIdleForm::TESIdleForm(v16);
      break;
    case 0x3Du:
      v17 = (TESPackage *)FormHeapAlloc(0x3Cu);
      if ( !v17 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESPackage::TESPackage(v17);
      break;
    case 0x3Eu:
      v50 = (TESForm *)FormHeapAlloc(0x98u);
      if ( !v50 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)sub_4ABB40(v50);
      break;
    case 0x3Fu:
      v51 = (TESLoadScreen *)FormHeapAlloc(0x3Cu);
      if ( !v51 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESLoadScreen::TESLoadScreen(v51);
      break;
    case 0x40u:
      v53 = (TESLevSpell *)FormHeapAlloc(0x34u);
      if ( !v53 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESLevSpell::TESLevSpell(v53);
      break;
    case 0x41u:
      v54 = (TESObjectANIO *)FormHeapAlloc(0x34u);
      if ( !v54 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESObjectANIO::TESObjectANIO(v54);
      break;
    case 0x42u:
      v52 = (TESWaterForm *)FormHeapAlloc(0xACu);
      if ( !v52 )
        goto TESForm_CreateDynamic___Return_0;
      result = (TESForm *)TESWaterForm::TESWaterForm(v52);
      break;
    case 0x43u:
      v59 = (TESEffectShader *)FormHeapAlloc(0x110u);
      if ( v59 )
        result = (TESForm *)TESEffectShader::TESEffectShader(v59);
      else
TESForm_CreateDynamic___Return_0:
        result = 0;
      break;
    default:
      if ( a1 >= 0x45u )
        v61 = EmptyString;
      else
        v61 = *(const char **)(0xC * a1 + 0xB05E04);
      PrintError("TESDataHandler trying to create TESForm for unknown type '%s'.", v61);
LABEL_124:
      result = 0;
      break;
  }
  return result;
}
