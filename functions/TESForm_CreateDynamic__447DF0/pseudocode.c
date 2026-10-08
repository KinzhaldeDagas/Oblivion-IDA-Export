// Verified runtime serialized-form factory dispatch: form type 0x29 constructs a 0x30-byte TESSubSpace; constructor sets default bounds and the TESSubSpace vtable.
void *__cdecl TESForm_CreateDynamic(unsigned __int8 formType)
{                                               // Cases 44, 50, 51, 55/TLOD, 57, and 58 take the unknown-form path; corroborates TESCS serialized-record rejection.
  TESObjectACTI *v1; // eax
  void *result; // eax
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

  switch ( formType ) /*0x447e26*/
  {
    case 4u: /*0x447e26*/
      v39 = (TESGlobal *)FormHeapAlloc(0x28u); /*0x448643*/
      if ( !v39 ) /*0x448659*/
        goto TESForm_CreateDynamic___Return_0; /*0x448659*/
      result = TESGlobal::TESGlobal(v39); /*0x448661*/
      break; /*0x448678*/
    case 5u: /*0x447e26*/
      v35 = (TESClass *)FormHeapAlloc(0x6Cu); /*0x448563*/
      if ( !v35 ) /*0x448579*/
        goto TESForm_CreateDynamic___Return_0; /*0x448579*/
      result = TESClass::TESClass(v35); /*0x448581*/
      break; /*0x448598*/
    case 6u: /*0x447e26*/
      v37 = (TESForm *)FormHeapAlloc(0x44u); /*0x4485d3*/
      if ( !v37 ) /*0x4485e9*/
        goto TESForm_CreateDynamic___Return_0; /*0x4485e9*/
      result = sub_51F820(v37); /*0x4485f1*/
      break; /*0x448608*/
    case 7u: /*0x447e26*/
      v32 = (TESHair *)FormHeapAlloc(0x4Cu); /*0x4484b8*/
      if ( !v32 ) /*0x4484ce*/
        goto TESForm_CreateDynamic___Return_0; /*0x4484ce*/
      result = TESHair::TESHair(v32); /*0x4484d6*/
      break; /*0x4484ed*/
    case 8u: /*0x447e26*/
      v33 = (TESEyes *)FormHeapAlloc(0x34u); /*0x4484f0*/
      if ( !v33 ) /*0x448506*/
        goto TESForm_CreateDynamic___Return_0; /*0x448506*/
      result = TESEyes::TESEyes(v33); /*0x44850e*/
      break; /*0x448525*/
    case 9u: /*0x447e26*/
      v34 = (TESRace *)FormHeapAlloc(0x318u); /*0x44852b*/
      if ( !v34 ) /*0x448541*/
        goto TESForm_CreateDynamic___Return_0; /*0x448541*/
      result = TESRace::TESRace(v34); /*0x448549*/
      break; /*0x448560*/
    case 0xAu: /*0x447e26*/
      v38 = (TESSound *)FormHeapAlloc(0x44u); /*0x44860b*/
      if ( !v38 ) /*0x448621*/
        goto TESForm_CreateDynamic___Return_0; /*0x448621*/
      result = TESSound::TESSound(v38); /*0x448629*/
      break; /*0x448640*/
    case 0xBu: /*0x447e26*/
      v45 = (TESSkill *)FormHeapAlloc(0x60u); /*0x44879c*/
      if ( !v45 ) /*0x4487b2*/
        goto TESForm_CreateDynamic___Return_0; /*0x4487b2*/
      result = TESSkill::TESSkill(v45); /*0x4487ba*/
      break; /*0x4487d1*/
    case 0xCu: /*0x447e26*/
      v40 = (EffectSetting *)FormHeapAlloc(0xA8u); /*0x44867e*/
      if ( !v40 ) /*0x448694*/
        goto TESForm_CreateDynamic___Return_0; /*0x448694*/
      result = EffectSetting::EffectSetting(v40); /*0x44869c*/
      break; /*0x4486b3*/
    case 0xDu: /*0x447e26*/
      v49 = (TESForm *)FormHeapAlloc(0x50u); /*0x44887c*/
      if ( !v49 ) /*0x448892*/
        goto TESForm_CreateDynamic___Return_0; /*0x448892*/
      result = Script_Constructor(v49); /*0x44889a*/
      break; /*0x4488b1*/
    case 0xEu: /*0x447e26*/
      v46 = (TESForm *)FormHeapAlloc(0x34u); /*0x4487d4*/
      if ( !v46 ) /*0x4487ea*/
        goto TESForm_CreateDynamic___Return_0; /*0x4487ea*/
      result = sub_4C93D0(v46); /*0x4487f2*/
      break; /*0x448809*/
    case 0xFu: /*0x447e26*/
      v28 = (EnchantmentItem *)FormHeapAlloc(0x44u); /*0x4483d5*/
      if ( !v28 ) /*0x4483eb*/
        goto TESForm_CreateDynamic___Return_0; /*0x4483eb*/
      result = EnchantmentItem::EnchantmentItem(v28); /*0x4483f3*/
      break; /*0x44840a*/
    case 0x10u: /*0x447e26*/
      v27 = (SpellItem *)FormHeapAlloc(0x44u); /*0x44839d*/
      if ( !v27 ) /*0x4483b3*/
        goto TESForm_CreateDynamic___Return_0; /*0x4483b3*/
      result = SpellItem::SpellItem(v27); /*0x4483bb*/
      break; /*0x4483d2*/
    case 0x11u: /*0x447e26*/
      v36 = (BirthSign *)FormHeapAlloc(0x4Cu); /*0x44859b*/
      if ( !v36 ) /*0x4485b1*/
        goto TESForm_CreateDynamic___Return_0; /*0x4485b1*/
      result = BirthSign::BirthSign(v36); /*0x4485b9*/
      break; /*0x4485d0*/
    case 0x12u: /*0x447e26*/
      v1 = (TESObjectACTI *)FormHeapAlloc(0x58u); /*0x447e2f*/
      if ( !v1 ) /*0x447e41*/
        goto TESForm_CreateDynamic___Return_0; /*0x447e41*/
      result = TESObjectACTI::TESObjectACTI(v1); /*0x447e45*/
      break; /*0x447e5c*/
    case 0x13u: /*0x447e26*/
      v3 = (TESObjectAPPA *)FormHeapAlloc(0x7Cu); /*0x447e74*/
      if ( !v3 ) /*0x447e8a*/
        goto TESForm_CreateDynamic___Return_0; /*0x447e8a*/
      result = TESObjectAPPA::TESObjectAPPA(v3); /*0x447e8e*/
      break; /*0x447ea5*/
    case 0x14u: /*0x447e26*/
      v4 = (TESObjectARMO *)FormHeapAlloc(0xE8u); /*0x447eab*/
      if ( !v4 ) /*0x447ec1*/
        goto TESForm_CreateDynamic___Return_0; /*0x447ec1*/
      result = TESObjectARMO::TESObjectARMO(v4); /*0x447ec5*/
      break; /*0x447edc*/
    case 0x15u: /*0x447e26*/
      v5 = (TESObjectBOOK *)FormHeapAlloc(0x8Cu); /*0x447ee2*/
      if ( !v5 ) /*0x447ef8*/
        goto TESForm_CreateDynamic___Return_0; /*0x447ef8*/
      result = TESObjectBOOK::TESObjectBOOK(v5); /*0x447f00*/
      break; /*0x447f17*/
    case 0x16u: /*0x447e26*/
      v6 = (TESObjectCLOT *)FormHeapAlloc(0xDCu); /*0x447f1d*/
      if ( !v6 ) /*0x447f33*/
        goto TESForm_CreateDynamic___Return_0; /*0x447f33*/
      result = TESObjectCLOT::TESObjectCLOT(v6); /*0x447f3b*/
      break; /*0x447f52*/
    case 0x17u: /*0x447e26*/
      v7 = (TESObjectCONT *)FormHeapAlloc(0x7Cu); /*0x447f55*/
      if ( !v7 ) /*0x447f6b*/
        goto TESForm_CreateDynamic___Return_0; /*0x447f6b*/
      result = TESObjectCONT::TESObjectCONT(v7); /*0x447f73*/
      break; /*0x447f8a*/
    case 0x18u: /*0x447e26*/
      v8 = (TESObjectDOOR *)FormHeapAlloc(0x70u); /*0x447f8d*/
      if ( !v8 ) /*0x447fa3*/
        goto TESForm_CreateDynamic___Return_0; /*0x447fa3*/
      result = TESObjectDOOR::TESObjectDOOR(v8); /*0x447fab*/
      break; /*0x447fc2*/
    case 0x19u: /*0x447e26*/
      v9 = (IngredientItem *)FormHeapAlloc(0x80u); /*0x447fc8*/
      if ( !v9 ) /*0x447fde*/
        goto TESForm_CreateDynamic___Return_0; /*0x447fde*/
      result = IngredientItem::IngredientItem(v9); /*0x447fe6*/
      break; /*0x447ffd*/
    case 0x1Au: /*0x447e26*/
      v10 = (TESObjectLIGH *)FormHeapAlloc(0x90u); /*0x448003*/
      if ( !v10 ) /*0x448019*/
        goto TESForm_CreateDynamic___Return_0; /*0x448019*/
      result = TESObjectLIGH::TESObjectLIGH(v10); /*0x448021*/
      break; /*0x448038*/
    case 0x1Bu: /*0x447e26*/
      v11 = (TESObjectMISC *)FormHeapAlloc(0x70u); /*0x44803b*/
      if ( !v11 ) /*0x448051*/
        goto TESForm_CreateDynamic___Return_0; /*0x448051*/
      result = TESObjectMISC::TESObjectMISC(v11); /*0x448059*/
      break; /*0x448070*/
    case 0x1Cu: /*0x447e26*/
      v14 = (TESObjectSTAT *)FormHeapAlloc(0x3Cu); /*0x4480e3*/
      if ( !v14 ) /*0x4480f9*/
        goto TESForm_CreateDynamic___Return_0; /*0x4480f9*/
      result = TESObjectSTAT::TESObjectSTAT(v14); /*0x448101*/
      break; /*0x448118*/
    case 0x1Du: /*0x447e26*/
      v15 = (TESGrass *)FormHeapAlloc(0x5Cu); /*0x44811b*/
      if ( !v15 ) /*0x448131*/
        goto TESForm_CreateDynamic___Return_0; /*0x448131*/
      result = TESGrass::TESGrass(v15); /*0x448139*/
      break; /*0x448150*/
    case 0x1Eu: /*0x447e26*/
      v18 = (TESObjectTREE *)FormHeapAlloc(0x80u); /*0x4481c6*/
      if ( !v18 ) /*0x4481dc*/
        goto TESForm_CreateDynamic___Return_0; /*0x4481dc*/
      result = TESObjectTREE_ctor(v18); /*0x4481e4*/
      break; /*0x4481fb*/
    case 0x1Fu: /*0x447e26*/
      v19 = (TESFlora *)FormHeapAlloc(0x64u); /*0x4481fe*/
      if ( !v19 ) /*0x448214*/
        goto LABEL_124; /*0x448214*/
      v20 = TESFlora::TESFlora(v19); /*0x44821c*/
      if ( !v20 ) /*0x448223*/
        goto LABEL_124; /*0x448223*/
      result = (char *)v20 + 0xC; /*0x44822c*/
      break; /*0x44823e*/
    case 0x20u: /*0x447e26*/
      v21 = (TESFurniture *)FormHeapAlloc(0x5Cu); /*0x448241*/
      if ( !v21 ) /*0x448257*/
        goto TESForm_CreateDynamic___Return_0; /*0x448257*/
      result = TESFurniture::TESFurniture(v21); /*0x44825f*/
      break; /*0x448276*/
    case 0x21u: /*0x447e26*/
      v22 = (TESObjectWEAP *)FormHeapAlloc(0xA0u); /*0x44827c*/
      if ( !v22 ) /*0x448292*/
        goto TESForm_CreateDynamic___Return_0; /*0x448292*/
      result = TESObjectWEAP::TESObjectWEAP(v22); /*0x44829a*/
      break; /*0x4482b1*/
    case 0x22u: /*0x447e26*/
      v23 = (TESAmmo *)FormHeapAlloc(0x84u); /*0x4482b7*/
      if ( !v23 ) /*0x4482cd*/
        goto TESForm_CreateDynamic___Return_0; /*0x4482cd*/
      result = TESAmmo::TESAmmo(v23); /*0x4482d5*/
      break; /*0x4482ec*/
    case 0x23u: /*0x447e26*/
      v24 = (TESForm *)FormHeapAlloc(0x200u); /*0x4482f2*/
      if ( !v24 ) /*0x448308*/
        goto TESForm_CreateDynamic___Return_0; /*0x448308*/
      result = TESNPC_constr(v24); /*0x448310*/
      break; /*0x448327*/
    case 0x24u: /*0x447e26*/
      v25 = (TESForm *)FormHeapAlloc(0x140u); /*0x44832d*/
      if ( !v25 ) /*0x448343*/
        goto TESForm_CreateDynamic___Return_0; /*0x448343*/
      result = TESCreature_constr(v25); /*0x44834b*/
      break; /*0x448362*/
    case 0x25u: /*0x447e26*/
      v26 = (TESLevCreature *)FormHeapAlloc(0x44u); /*0x448365*/
      if ( !v26 ) /*0x44837b*/
        goto TESForm_CreateDynamic___Return_0; /*0x44837b*/
      result = TESLevCreature::TESLevCreature(v26); /*0x448383*/
      break; /*0x44839a*/
    case 0x26u: /*0x447e26*/
      v13 = (TESSoulGem *)FormHeapAlloc(0x74u); /*0x4480ab*/
      if ( !v13 ) /*0x4480c1*/
        goto TESForm_CreateDynamic___Return_0; /*0x4480c1*/
      result = TESSoulGem::TESSoulGem(v13); /*0x4480c9*/
      break; /*0x4480e0*/
    case 0x27u: /*0x447e26*/
      v12 = (TESKey *)FormHeapAlloc(0x70u); /*0x448073*/
      if ( !v12 ) /*0x448089*/
        goto TESForm_CreateDynamic___Return_0; /*0x448089*/
      result = TESKey::TESKey(v12); /*0x448091*/
      break; /*0x4480a8*/
    case 0x28u: /*0x447e26*/
      v29 = (AlchemyItem *)FormHeapAlloc(0x80u); /*0x448410*/
      if ( !v29 ) /*0x448426*/
        goto TESForm_CreateDynamic___Return_0; /*0x448426*/
      result = AlchemyItem::AlchemyItem(v29); /*0x44842e*/
      break; /*0x448445*/
    case 0x29u: /*0x447e26*/
      v58 = (TESSubSpace *)FormHeapAlloc(0x30u); /*0x448a7a*/
      if ( !v58 ) /*0x448a90*/
        goto TESForm_CreateDynamic___Return_0; /*0x448a90*/
      result = TESSubSpace::TESSubSpace(v58);   // Verified TESForm_CreateDynamic case 0x29 allocates exactly 0x30 bytes and calls TESSubSpace::TESSubSpace. Confirms the SubSpace UDT size and form-type mapping independently of the constructor. /*0x448a98*/
      break; /*0x448aaf*/
    case 0x2Au: /*0x447e26*/
      v60 = (TESSigilStone *)FormHeapAlloc(0x88u); /*0x448af0*/
      if ( !v60 ) /*0x448b06*/
        goto TESForm_CreateDynamic___Return_0; /*0x448b06*/
      result = TESSigilStone::TESSigilStone(v60); /*0x448b0e*/
      break; /*0x448b25*/
    case 0x2Bu: /*0x447e26*/
      v30 = (TESForm *)FormHeapAlloc(0x34u); /*0x448448*/
      if ( !v30 ) /*0x44845e*/
        goto TESForm_CreateDynamic___Return_0; /*0x44845e*/
      result = TESLevItem_constr(v30); /*0x448466*/
      break; /*0x44847d*/
    case 0x2Du: /*0x447e26*/
      v42 = (TESWeather *)FormHeapAlloc(0x148u); /*0x4486f1*/
      if ( !v42 ) /*0x448707*/
        goto TESForm_CreateDynamic___Return_0; /*0x448707*/
      result = TESWeather::TESWeather(v42); /*0x44870f*/
      break; /*0x448726*/
    case 0x2Eu: /*0x447e26*/
      v41 = (TESClimate *)FormHeapAlloc(0x58u); /*0x4486b6*/
      if ( !v41 ) /*0x4486cc*/
        goto TESForm_CreateDynamic___Return_0; /*0x4486cc*/
      result = TESClimate_ctor(v41); /*0x4486d4*/
      break; /*0x4486eb*/
    case 0x2Fu: /*0x447e26*/
      v48 = (TESRegion *)FormHeapAlloc(0x2Cu); /*0x448844*/
      if ( !v48 ) /*0x44885a*/
        goto TESForm_CreateDynamic___Return_0; /*0x44885a*/
      result = TESRegion_ctor(v48); /*0x448862*/
      break; /*0x448879*/
    case 0x30u: /*0x447e26*/
      v44 = (TESForm *)FormHeapAlloc(0x58u); /*0x448764*/
      if ( !v44 ) /*0x44877a*/
        goto TESForm_CreateDynamic___Return_0; /*0x44877a*/
      result = TESObjectCELL_constr(v44); /*0x448782*/
      break; /*0x448799*/
    case 0x31u: /*0x447e26*/
      v31 = (TESChildCELL *)FormHeapAlloc(0x58u); /*0x448480*/
      if ( !v31 ) /*0x448496*/
        goto TESForm_CreateDynamic___Return_0; /*0x448496*/
      result = TESObjectREFR_constr(v31); /*0x44849e*/
      break; /*0x4484b5*/
    case 0x34u: /*0x447e26*/
      v56 = (TESPathGrid *)FormHeapAlloc(0x54u); /*0x448a0a*/
      if ( !v56 ) /*0x448a20*/
        goto TESForm_CreateDynamic___Return_0; /*0x448a20*/
      result = TESPathGrid_ctor(v56); /*0x448a28*/
      break; /*0x448a3f*/
    case 0x35u: /*0x447e26*/
      v43 = (TESWorldSpace *)FormHeapAlloc(0xE0u); /*0x44872c*/
      if ( !v43 ) /*0x448742*/
        goto TESForm_CreateDynamic___Return_0; /*0x448742*/
      result = TESWorldSpace::TESWorldSpace(v43); /*0x44874a*/
      break; /*0x448761*/
    case 0x36u: /*0x447e26*/
      v55 = (TESObjectLAND *)FormHeapAlloc(0x28u); /*0x4489d2*/
      if ( !v55 ) /*0x4489e8*/
        goto TESForm_CreateDynamic___Return_0; /*0x4489e8*/
      result = TESObjectLAND::TESObjectLAND(v55); /*0x4489f0*/
      break; /*0x448a07*/
    case 0x38u: /*0x447e26*/
      v57 = (TESRoad *)FormHeapAlloc(0x30u);    // Verified TESForm_CreateDynamic form-type 0x38 factory case allocates 0x30 bytes and invokes TESRoad constructor. The serialized ROAD loader has a parallel allocate/construct/load/attach path. /*0x448a42*/
      if ( !v57 ) /*0x448a58*/
        goto TESForm_CreateDynamic___Return_0; /*0x448a58*/
      result = TESRoad_ctor(v57); /*0x448a60*/
      break; /*0x448a77*/
    case 0x3Bu: /*0x447e26*/
      v47 = (TESForm *)FormHeapAlloc(0x68u); /*0x44880c*/
      if ( !v47 ) /*0x448822*/
        goto TESForm_CreateDynamic___Return_0; /*0x448822*/
      result = TESQuest::TESQuest(v47); /*0x44882a*/
      break; /*0x448841*/
    case 0x3Cu: /*0x447e26*/
      v16 = (TESIdleForm *)FormHeapAlloc(0x48u); /*0x448153*/
      if ( !v16 ) /*0x448169*/
        goto TESForm_CreateDynamic___Return_0; /*0x448169*/
      result = TESIdleForm::TESIdleForm(v16); /*0x448171*/
      break; /*0x448188*/
    case 0x3Du: /*0x447e26*/
      v17 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x44818b*/
      if ( !v17 ) /*0x4481a1*/
        goto TESForm_CreateDynamic___Return_0; /*0x4481a1*/
      result = TESPackage::TESPackage(v17); /*0x4481a9*/
      break; /*0x4481c0*/
    case 0x3Eu: /*0x447e26*/
      v50 = (TESForm *)FormHeapAlloc(0x98u); /*0x4488b7*/
      if ( !v50 ) /*0x4488cd*/
        goto TESForm_CreateDynamic___Return_0; /*0x4488cd*/
      result = sub_4ABB40(v50); /*0x4488d5*/
      break; /*0x4488ec*/
    case 0x3Fu: /*0x447e26*/
      v51 = (TESLoadScreen *)FormHeapAlloc(0x3Cu); /*0x4488ef*/
      if ( !v51 ) /*0x448905*/
        goto TESForm_CreateDynamic___Return_0; /*0x448905*/
      result = TESLoadScreen::TESLoadScreen(v51); /*0x44890d*/
      break; /*0x448924*/
    case 0x40u: /*0x447e26*/
      v53 = (TESLevSpell *)FormHeapAlloc(0x34u); /*0x448962*/
      if ( !v53 ) /*0x448978*/
        goto TESForm_CreateDynamic___Return_0; /*0x448978*/
      result = TESLevSpell::TESLevSpell(v53); /*0x448980*/
      break; /*0x448997*/
    case 0x41u: /*0x447e26*/
      v54 = (TESObjectANIO *)FormHeapAlloc(0x34u); /*0x44899a*/
      if ( !v54 ) /*0x4489b0*/
        goto TESForm_CreateDynamic___Return_0; /*0x4489b0*/
      result = TESObjectANIO::TESObjectANIO(v54); /*0x4489b8*/
      break; /*0x4489cf*/
    case 0x42u: /*0x447e26*/
      v52 = (TESWaterForm *)FormHeapAlloc(0xACu); /*0x44892a*/
      if ( !v52 ) /*0x448940*/
        goto TESForm_CreateDynamic___Return_0; /*0x448940*/
      result = TESWaterForm::TESWaterForm(v52); /*0x448948*/
      break; /*0x44895f*/
    case 0x43u: /*0x447e26*/
      v59 = (TESEffectShader *)FormHeapAlloc(0x110u);// Verified (Oblivion): TESForm_CreateDynamic allocates 0x110 bytes for form type 0x38 and immediately calls TESEffectShader::TESEffectShader, establishing sizeof(TESEffectShader) = 0x110. /*0x448ab5*/
      if ( v59 ) /*0x448acb*/
        result = TESEffectShader::TESEffectShader(v59); /*0x448ad3*/
      else
TESForm_CreateDynamic___Return_0:
        result = 0; /*0x447e5d*/
      break; /*0x448aea*/
    default:
      if ( formType >= 0x45u )                  // Unknown-form default reached for TLOD/0x37; logs the failed TESForm creation and returns null. /*0x448b29*/
        v61 = EmptyString; /*0x448b37*/
      else
        v61 = *(const char **)(0xC * formType + 0xB05E04);// Runtime factory switch covers types 4..0x43, with explicit default cases including 55/0x37 (TLOD). /*0x448b2e*/
      PrintError("TESDataHandler trying to create TESForm for unknown type '%s'.", v61); /*0x448b42*/
LABEL_124:
      result = 0; /*0x448b4a*/
      break; /*0x448b4a*/
  }
  return result; /*0x447e4c*/
}
