Menu *__stdcall Menu_CreateDynamic(int a1)
{
  MessageMenu *v1; // eax
  Menu *result; // eax
  MapMenu *v3; // eax
  MagicMenu *v4; // eax
  Menu *v5; // eax
  Menu *v6; // eax
  HUDMainMenu *v7; // eax
  Menu *v8; // eax
  LoadingMenu *v9; // eax
  ContainerMenu *v10; // eax
  DialogMenu *v11; // eax
  HUDSubtitleMenu *v12; // eax
  GenericMenu *v13; // eax
  SleepWaitMenu *v14; // eax
  Menu *v15; // eax
  Menu *v16; // eax
  Menu *v17; // eax
  Menu *v18; // eax
  Menu *v19; // eax
  Menu *v20; // eax
  VideoMenu *v21; // eax
  Menu *v22; // eax
  Menu *v23; // eax
  Menu *v24; // eax
  Menu *v25; // eax
  Menu *v26; // eax
  SigilStoneMenu *v27; // eax
  Menu *v28; // eax
  Menu *v29; // eax
  Menu *v30; // eax
  ClassMenu *v31; // eax
  Menu *v32; // eax
  Menu *v33; // eax
  RaceSexMenu *v34; // eax
  RepairMenu *v35; // eax
  RechargeMenu *v36; // eax
  Menu *v37; // eax
  SaveMenu *v38; // eax
  LoadgameMenu *v39; // eax
  Menu *v40; // eax
  SpellMakingMenu *v41; // eax
  EnchantmentMenu *v42; // eax
  AlchemyMenu *v43; // eax
  MainMenu *v44; // eax
  Menu *v45; // eax
  Menu *v46; // eax
  CreditsMenu *v47; // eax
  TextEditMenu *v48; // eax

  switch ( a1 ) /*0x587d52*/
  {
    case 0x3E9: /*0x587d52*/
      v1 = (MessageMenu *)FormHeapAlloc(0x64u); /*0x587d5b*/
      if ( !v1 ) /*0x587d71*/
        goto LABEL_97; /*0x587d71*/
      result = (Menu *)MessageMenu::MessageMenu(v1); /*0x587d79*/
      break; /*0x587d8d*/
    case 0x3EA: /*0x587d52*/
      v5 = (Menu *)FormHeapAlloc(0x58u); /*0x587e03*/
      if ( !v5 ) /*0x587e19*/
        goto LABEL_97; /*0x587e19*/
      result = InventoryMenu_constr(v5); /*0x587e21*/
      break; /*0x587e35*/
    case 0x3EB: /*0x587d52*/
      v6 = (Menu *)FormHeapAlloc(0xB4u); /*0x587e3d*/
      if ( !v6 ) /*0x587e53*/
        goto LABEL_97; /*0x587e53*/
      result = StatsMenu_constr(v6); /*0x587e5b*/
      break; /*0x587e6f*/
    case 0x3EC: /*0x587d52*/
      v7 = (HUDMainMenu *)FormHeapAlloc(0x94u); /*0x587e77*/
      if ( !v7 ) /*0x587e8d*/
        goto LABEL_97; /*0x587e8d*/
      result = (Menu *)HUDMainMenu::HUDMainMenu(v7); /*0x587e95*/
      break; /*0x587ea9*/
    case 0x3ED: /*0x587d52*/
      v8 = (Menu *)FormHeapAlloc(0x5Cu); /*0x587eae*/
      if ( !v8 ) /*0x587ec4*/
        goto LABEL_97; /*0x587ec4*/
      result = sub_5A4660(v8); /*0x587ecc*/
      break; /*0x587ee0*/
    case 0x3EE: /*0x587d52*/
      v28 = (Menu *)FormHeapAlloc(0x28u); /*0x588309*/
      if ( !v28 ) /*0x58831f*/
        goto LABEL_97; /*0x58831f*/
      result = sub_5A7FE0(v28); /*0x588327*/
      break; /*0x58833b*/
    case 0x3EF: /*0x587d52*/
      v9 = (LoadingMenu *)FormHeapAlloc(0x74u); /*0x587ee5*/
      if ( !v9 ) /*0x587efb*/
        goto LABEL_97; /*0x587efb*/
      result = (Menu *)LoadingMenu::LoadingMenu(v9); /*0x587f03*/
      break; /*0x587f17*/
    case 0x3F0: /*0x587d52*/
      v10 = (ContainerMenu *)FormHeapAlloc(0x68u); /*0x587f1c*/
      if ( !v10 ) /*0x587f32*/
        goto LABEL_97; /*0x587f32*/
      result = (Menu *)ContainerMenu::ContainerMenu(v10); /*0x587f3a*/
      break; /*0x587f4e*/
    case 0x3F1: /*0x587d52*/
      v11 = (DialogMenu *)FormHeapAlloc(0x98u); /*0x587f56*/
      if ( !v11 ) /*0x587f6c*/
        goto LABEL_97; /*0x587f6c*/
      result = (Menu *)DialogMenu::DialogMenu(v11); /*0x587f74*/
      break; /*0x587f88*/
    case 0x3F2: /*0x587d52*/
      v12 = (HUDSubtitleMenu *)FormHeapAlloc(0x44u); /*0x587f8d*/
      if ( !v12 ) /*0x587fa3*/
        goto LABEL_97; /*0x587fa3*/
      result = (Menu *)HUDSubtitleMenu::HUDSubtitleMenu(v12); /*0x587fab*/
      break; /*0x587fbf*/
    case 0x3F3: /*0x587d52*/
      v13 = (GenericMenu *)FormHeapAlloc(0x38u); /*0x587fc4*/
      if ( !v13 ) /*0x587fda*/
        goto LABEL_97; /*0x587fda*/
      result = (Menu *)GenericMenu::GenericMenu(v13); /*0x587fe2*/
      break; /*0x587ff6*/
    case 0x3F4: /*0x587d52*/
      v14 = (SleepWaitMenu *)FormHeapAlloc(0x50u); /*0x587ffb*/
      if ( !v14 ) /*0x588011*/
        goto LABEL_97; /*0x588011*/
      result = (Menu *)SleepWaitMenu::SleepWaitMenu(v14); /*0x588019*/
      break; /*0x58802d*/
    case 0x3F5: /*0x587d52*/
      v15 = (Menu *)FormHeapAlloc(0x3Cu); /*0x588032*/
      if ( !v15 ) /*0x588048*/
        goto LABEL_97; /*0x588048*/
      result = sub_5BD960(v15); /*0x588050*/
      break; /*0x588064*/
    case 0x3F6: /*0x587d52*/
      v16 = (Menu *)FormHeapAlloc(0x180u); /*0x58806c*/
      if ( !v16 ) /*0x588082*/
        goto LABEL_97; /*0x588082*/
      result = sub_5AF310(v16); /*0x58808a*/
      break; /*0x58809e*/
    case 0x3F7: /*0x587d52*/
      v17 = (Menu *)FormHeapAlloc(0x40u); /*0x5880a3*/
      if ( !v17 ) /*0x5880b9*/
        goto LABEL_97; /*0x5880b9*/
      result = sub_5BD580(v17); /*0x5880c1*/
      break; /*0x5880d5*/
    case 0x3F8: /*0x587d52*/
      v18 = (Menu *)FormHeapAlloc(0x58u); /*0x5880da*/
      if ( !v18 ) /*0x5880f0*/
        goto LABEL_97; /*0x5880f0*/
      result = sub_5C04F0(v18); /*0x5880f8*/
      break; /*0x58810c*/
    case 0x3F9: /*0x587d52*/
      v19 = (Menu *)FormHeapAlloc(0x54u); /*0x588111*/
      if ( !v19 ) /*0x588127*/
        goto LABEL_97; /*0x588127*/
      result = sub_595150(v19); /*0x58812f*/
      break; /*0x588143*/
    case 0x3FA: /*0x587d52*/
      v21 = (VideoMenu *)FormHeapAlloc(0x118u); /*0x588182*/
      if ( !v21 ) /*0x588198*/
        goto LABEL_97; /*0x588198*/
      result = (Menu *)VideoMenu::VideoMenu(v21); /*0x5881a0*/
      break; /*0x5881b4*/
    case 0x3FB: /*0x587d52*/
      v20 = (Menu *)FormHeapAlloc(0x48u); /*0x588148*/
      if ( !v20 ) /*0x58815e*/
        goto LABEL_97; /*0x58815e*/
      result = sub_5DD960(v20); /*0x588166*/
      break; /*0x58817a*/
    case 0x3FC: /*0x587d52*/
      v22 = (Menu *)FormHeapAlloc(0x4Cu); /*0x5881b9*/
      if ( !v22 ) /*0x5881cf*/
        goto LABEL_97; /*0x5881cf*/
      result = sub_5A3310(v22); /*0x5881d7*/
      break; /*0x5881eb*/
    case 0x3FD: /*0x587d52*/
      v23 = (Menu *)FormHeapAlloc(0xE8u); /*0x5881f3*/
      if ( !v23 ) /*0x588209*/
        goto LABEL_97; /*0x588209*/
      result = ControlsMenu::Construct(v23); /*0x588211*/
      break; /*0x588225*/
    case 0x3FE: /*0x587d52*/
      v4 = (MagicMenu *)FormHeapAlloc(0x5Cu); /*0x587dcc*/
      if ( !v4 ) /*0x587de2*/
        goto LABEL_97; /*0x587de2*/
      result = (Menu *)MagicMenu::MagicMenu(v4); /*0x587dea*/
      break; /*0x587dfe*/
    case 0x3FF: /*0x587d52*/
      v3 = (MapMenu *)FormHeapAlloc(0x100u); /*0x587d95*/
      if ( !v3 ) /*0x587dab*/
        goto LABEL_97; /*0x587dab*/
      result = (Menu *)MapMenu::MapMenu(v3); /*0x587db3*/
      break; /*0x587dc7*/
    case 0x400: /*0x587d52*/
      v25 = (Menu *)FormHeapAlloc(0x60u); /*0x588261*/
      if ( !v25 ) /*0x588277*/
        goto LABEL_97; /*0x588277*/
      result = MagicPopupMenu_constr(v25); /*0x58827f*/
      break; /*0x588293*/
    case 0x401: /*0x587d52*/
      v24 = (Menu *)FormHeapAlloc(0x68u); /*0x58822a*/
      if ( !v24 ) /*0x588240*/
        goto LABEL_97; /*0x588240*/
      result = sub_5BCE40(v24); /*0x588248*/
      break; /*0x58825c*/
    case 0x402: /*0x587d52*/
      v26 = (Menu *)FormHeapAlloc(0x3Cu); /*0x588298*/
      if ( !v26 ) /*0x5882ae*/
        goto LABEL_97; /*0x5882ae*/
      result = sub_595BE0(v26); /*0x5882b6*/
      break; /*0x5882ca*/
    case 0x403: /*0x587d52*/
      v29 = (Menu *)FormHeapAlloc(0x34u); /*0x588340*/
      if ( !v29 ) /*0x588356*/
        goto LABEL_97; /*0x588356*/
      result = sub_5AC550(v29); /*0x58835e*/
      break; /*0x588372*/
    case 0x404: /*0x587d52*/
      v30 = (Menu *)FormHeapAlloc(0x64u); /*0x588377*/
      if ( !v30 ) /*0x58838d*/
        goto LABEL_97; /*0x58838d*/
      result = sub_5DD200(v30); /*0x588395*/
      break; /*0x5883a9*/
    case 0x406: /*0x587d52*/
      v31 = (ClassMenu *)FormHeapAlloc(0x8Cu); /*0x5883b1*/
      if ( !v31 ) /*0x5883c7*/
        goto LABEL_97; /*0x5883c7*/
      result = (Menu *)ClassMenu::ClassMenu(v31); /*0x5883cf*/
      break; /*0x5883e3*/
    case 0x408: /*0x587d52*/
      v32 = (Menu *)FormHeapAlloc(0x50u); /*0x5883e8*/
      if ( !v32 ) /*0x5883fe*/
        goto LABEL_97; /*0x5883fe*/
      result = sub_5D5610(v32); /*0x588406*/
      break; /*0x58841a*/
    case 0x40A: /*0x587d52*/
      v33 = (Menu *)FormHeapAlloc(0xFCu); /*0x588422*/
      if ( !v33 ) /*0x588438*/
        goto LABEL_97; /*0x588438*/
      result = sub_5BDFF0(v33); /*0x588440*/
      break; /*0x588454*/
    case 0x40B: /*0x587d52*/
      v35 = (RepairMenu *)FormHeapAlloc(0x78u); /*0x588493*/
      if ( !v35 ) /*0x5884a9*/
        goto LABEL_97; /*0x5884a9*/
      result = (Menu *)RepairMenu::RepairMenu(v35); /*0x5884b1*/
      break; /*0x5884c5*/
    case 0x40C: /*0x587d52*/
      v34 = (RaceSexMenu *)FormHeapAlloc(0x9B0u); /*0x58845c*/
      if ( !v34 ) /*0x588472*/
        goto LABEL_97; /*0x588472*/
      result = (Menu *)RaceSexMenu::RaceSexMenu(v34); /*0x58847a*/
      break; /*0x58848e*/
    case 0x40D: /*0x587d52*/
      v37 = (Menu *)FormHeapAlloc(0x68u); /*0x588501*/
      if ( !v37 ) /*0x588517*/
        goto LABEL_97; /*0x588517*/
      result = sub_5D8900(v37); /*0x58851f*/
      break; /*0x588533*/
    case 0x40E: /*0x587d52*/
      v39 = (LoadgameMenu *)FormHeapAlloc(0x68u); /*0x58856f*/
      if ( !v39 ) /*0x588585*/
        goto LABEL_97; /*0x588585*/
      result = (Menu *)LoadgameMenu::LoadgameMenu(v39); /*0x58858d*/
      break; /*0x5885a1*/
    case 0x40F: /*0x587d52*/
      v38 = (SaveMenu *)FormHeapAlloc(0x60u); /*0x588538*/
      if ( !v38 ) /*0x58854e*/
        goto LABEL_97; /*0x58854e*/
      result = (Menu *)SaveMenu::SaveMenu(v38); /*0x588556*/
      break; /*0x58856a*/
    case 0x410: /*0x587d52*/
      v43 = (AlchemyMenu *)FormHeapAlloc(0xC0u); /*0x588654*/
      if ( !v43 ) /*0x58866a*/
        goto LABEL_97; /*0x58866a*/
      result = (Menu *)AlchemyMenu::AlchemyMenu(v43); /*0x588672*/
      break; /*0x588686*/
    case 0x411: /*0x587d52*/
      v41 = (SpellMakingMenu *)FormHeapAlloc(0x78u); /*0x5885e0*/
      if ( !v41 ) /*0x5885f6*/
        goto LABEL_97; /*0x5885f6*/
      result = (Menu *)SpellMakingMenu::SpellMakingMenu(v41); /*0x5885fe*/
      break; /*0x588612*/
    case 0x412: /*0x587d52*/
      v42 = (EnchantmentMenu *)FormHeapAlloc(0xA0u); /*0x58861a*/
      if ( !v42 ) /*0x588630*/
        goto LABEL_97; /*0x588630*/
      result = (Menu *)EnchantmentMenu::EnchantmentMenu(v42); /*0x588638*/
      break; /*0x58864c*/
    case 0x413: /*0x587d52*/
      v40 = (Menu *)FormHeapAlloc(0x9Cu); /*0x5885a9*/
      if ( !v40 ) /*0x5885bf*/
        goto LABEL_97; /*0x5885bf*/
      result = EffectSettingMenu_constr(v40); /*0x5885c7*/
      break; /*0x5885db*/
    case 0x414: /*0x587d52*/
      v44 = (MainMenu *)FormHeapAlloc(0x50u); /*0x58868b*/
      if ( !v44 ) /*0x5886a1*/
        goto LABEL_97; /*0x5886a1*/
      result = (Menu *)MainMenu::MainMenu(v44); /*0x5886a9*/
      break; /*0x5886bd*/
    case 0x415: /*0x587d52*/
      v45 = (Menu *)FormHeapAlloc(0x34u); /*0x5886c2*/
      if ( !v45 ) /*0x5886d8*/
        goto LABEL_97; /*0x5886d8*/
      result = sub_596420(v45); /*0x5886e0*/
      break; /*0x5886f4*/
    case 0x416: /*0x587d52*/
      v46 = (Menu *)FormHeapAlloc(0x50u); /*0x5886f9*/
      if ( !v46 ) /*0x58870f*/
        goto LABEL_97; /*0x58870f*/
      result = sub_5C0B50(v46); /*0x588717*/
      break; /*0x58872b*/
    case 0x417: /*0x587d52*/
      v47 = (CreditsMenu *)FormHeapAlloc(0x5Cu); /*0x588730*/
      if ( !v47 ) /*0x588746*/
        goto LABEL_97; /*0x588746*/
      result = (Menu *)CreditsMenu::CreditsMenu(v47); /*0x58874a*/
      break; /*0x58875e*/
    case 0x418: /*0x587d52*/
      v27 = (SigilStoneMenu *)FormHeapAlloc(0x80u); /*0x5882d2*/
      if ( !v27 ) /*0x5882e8*/
        goto LABEL_97; /*0x5882e8*/
      result = (Menu *)SigilStoneMenu::SigilStoneMenu(v27); /*0x5882f0*/
      break; /*0x588304*/
    case 0x419: /*0x587d52*/
      v36 = (RechargeMenu *)FormHeapAlloc(0x54u); /*0x5884ca*/
      if ( !v36 ) /*0x5884e0*/
        goto LABEL_97; /*0x5884e0*/
      result = (Menu *)RechargeMenu::RechargeMenu(v36); /*0x5884e8*/
      break; /*0x5884fc*/
    case 0x41B: /*0x587d52*/
      v48 = (TextEditMenu *)FormHeapAlloc(0x5Cu); /*0x588763*/
      if ( v48 ) /*0x588779*/
        result = (Menu *)TextEditMenu::TextEditMenu(v48); /*0x58877d*/
      else
LABEL_97:
        result = (Menu *)Menu_CreateDynamic_::Return_0(0); /*0x588779*/
      break; /*0x588791*/
    default:
      PrintError("Unknown menu class!"); /*0x588799*/
      result = (Menu *)Menu_CreateDynamic_::Return_0(a1); /*0x58879f*/
      break; /*0x58879f*/
  }
  return result; /*0x587d60*/
}
