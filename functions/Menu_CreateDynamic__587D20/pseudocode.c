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

  switch ( a1 )
  {
    case 0x3E9:
      v1 = (MessageMenu *)FormHeapAlloc(0x64u);
      if ( !v1 )
        goto LABEL_97;
      result = (Menu *)MessageMenu::MessageMenu(v1);
      break;
    case 0x3EA:
      v5 = (Menu *)FormHeapAlloc(0x58u);
      if ( !v5 )
        goto LABEL_97;
      result = InventoryMenu_constr(v5);
      break;
    case 0x3EB:
      v6 = (Menu *)FormHeapAlloc(0xB4u);
      if ( !v6 )
        goto LABEL_97;
      result = StatsMenu_constr(v6);
      break;
    case 0x3EC:
      v7 = (HUDMainMenu *)FormHeapAlloc(0x94u);
      if ( !v7 )
        goto LABEL_97;
      result = (Menu *)HUDMainMenu::HUDMainMenu(v7);
      break;
    case 0x3ED:
      v8 = (Menu *)FormHeapAlloc(0x5Cu);
      if ( !v8 )
        goto LABEL_97;
      result = sub_5A4660(v8);
      break;
    case 0x3EE:
      v28 = (Menu *)FormHeapAlloc(0x28u);
      if ( !v28 )
        goto LABEL_97;
      result = sub_5A7FE0(v28);
      break;
    case 0x3EF:
      v9 = (LoadingMenu *)FormHeapAlloc(0x74u);
      if ( !v9 )
        goto LABEL_97;
      result = (Menu *)LoadingMenu::LoadingMenu(v9);
      break;
    case 0x3F0:
      v10 = (ContainerMenu *)FormHeapAlloc(0x68u);
      if ( !v10 )
        goto LABEL_97;
      result = (Menu *)ContainerMenu::ContainerMenu(v10);
      break;
    case 0x3F1:
      v11 = (DialogMenu *)FormHeapAlloc(0x98u);
      if ( !v11 )
        goto LABEL_97;
      result = (Menu *)DialogMenu::DialogMenu(v11);
      break;
    case 0x3F2:
      v12 = (HUDSubtitleMenu *)FormHeapAlloc(0x44u);
      if ( !v12 )
        goto LABEL_97;
      result = (Menu *)HUDSubtitleMenu::HUDSubtitleMenu(v12);
      break;
    case 0x3F3:
      v13 = (GenericMenu *)FormHeapAlloc(0x38u);
      if ( !v13 )
        goto LABEL_97;
      result = (Menu *)GenericMenu::GenericMenu(v13);
      break;
    case 0x3F4:
      v14 = (SleepWaitMenu *)FormHeapAlloc(0x50u);
      if ( !v14 )
        goto LABEL_97;
      result = (Menu *)SleepWaitMenu::SleepWaitMenu(v14);
      break;
    case 0x3F5:
      v15 = (Menu *)FormHeapAlloc(0x3Cu);
      if ( !v15 )
        goto LABEL_97;
      result = sub_5BD960(v15);
      break;
    case 0x3F6:
      v16 = (Menu *)FormHeapAlloc(0x180u);
      if ( !v16 )
        goto LABEL_97;
      result = sub_5AF310(v16);
      break;
    case 0x3F7:
      v17 = (Menu *)FormHeapAlloc(0x40u);
      if ( !v17 )
        goto LABEL_97;
      result = sub_5BD580(v17);
      break;
    case 0x3F8:
      v18 = (Menu *)FormHeapAlloc(0x58u);
      if ( !v18 )
        goto LABEL_97;
      result = sub_5C04F0(v18);
      break;
    case 0x3F9:
      v19 = (Menu *)FormHeapAlloc(0x54u);
      if ( !v19 )
        goto LABEL_97;
      result = sub_595150(v19);
      break;
    case 0x3FA:
      v21 = (VideoMenu *)FormHeapAlloc(0x118u);
      if ( !v21 )
        goto LABEL_97;
      result = (Menu *)VideoMenu::VideoMenu(v21);
      break;
    case 0x3FB:
      v20 = (Menu *)FormHeapAlloc(0x48u);
      if ( !v20 )
        goto LABEL_97;
      result = sub_5DD960(v20);
      break;
    case 0x3FC:
      v22 = (Menu *)FormHeapAlloc(0x4Cu);
      if ( !v22 )
        goto LABEL_97;
      result = sub_5A3310(v22);
      break;
    case 0x3FD:
      v23 = (Menu *)FormHeapAlloc(0xE8u);
      if ( !v23 )
        goto LABEL_97;
      result = sub_5874A0(v23);
      break;
    case 0x3FE:
      v4 = (MagicMenu *)FormHeapAlloc(0x5Cu);
      if ( !v4 )
        goto LABEL_97;
      result = (Menu *)MagicMenu::MagicMenu(v4);
      break;
    case 0x3FF:
      v3 = (MapMenu *)FormHeapAlloc(0x100u);
      if ( !v3 )
        goto LABEL_97;
      result = (Menu *)MapMenu::MapMenu(v3);
      break;
    case 0x400:
      v25 = (Menu *)FormHeapAlloc(0x60u);
      if ( !v25 )
        goto LABEL_97;
      result = MagicPopupMenu_constr(v25);
      break;
    case 0x401:
      v24 = (Menu *)FormHeapAlloc(0x68u);
      if ( !v24 )
        goto LABEL_97;
      result = sub_5BCE40(v24);
      break;
    case 0x402:
      v26 = (Menu *)FormHeapAlloc(0x3Cu);
      if ( !v26 )
        goto LABEL_97;
      result = sub_595BE0(v26);
      break;
    case 0x403:
      v29 = (Menu *)FormHeapAlloc(0x34u);
      if ( !v29 )
        goto LABEL_97;
      result = sub_5AC550(v29);
      break;
    case 0x404:
      v30 = (Menu *)FormHeapAlloc(0x64u);
      if ( !v30 )
        goto LABEL_97;
      result = sub_5DD200(v30);
      break;
    case 0x406:
      v31 = (ClassMenu *)FormHeapAlloc(0x8Cu);
      if ( !v31 )
        goto LABEL_97;
      result = (Menu *)ClassMenu::ClassMenu(v31);
      break;
    case 0x408:
      v32 = (Menu *)FormHeapAlloc(0x50u);
      if ( !v32 )
        goto LABEL_97;
      result = sub_5D5610(v32);
      break;
    case 0x40A:
      v33 = (Menu *)FormHeapAlloc(0xFCu);
      if ( !v33 )
        goto LABEL_97;
      result = sub_5BDFF0(v33);
      break;
    case 0x40B:
      v35 = (RepairMenu *)FormHeapAlloc(0x78u);
      if ( !v35 )
        goto LABEL_97;
      result = (Menu *)RepairMenu::RepairMenu(v35);
      break;
    case 0x40C:
      v34 = (RaceSexMenu *)FormHeapAlloc(0x9B0u);
      if ( !v34 )
        goto LABEL_97;
      result = (Menu *)RaceSexMenu::RaceSexMenu(v34);
      break;
    case 0x40D:
      v37 = (Menu *)FormHeapAlloc(0x68u);
      if ( !v37 )
        goto LABEL_97;
      result = sub_5D8900(v37);
      break;
    case 0x40E:
      v39 = (LoadgameMenu *)FormHeapAlloc(0x68u);
      if ( !v39 )
        goto LABEL_97;
      result = (Menu *)LoadgameMenu::LoadgameMenu(v39);
      break;
    case 0x40F:
      v38 = (SaveMenu *)FormHeapAlloc(0x60u);
      if ( !v38 )
        goto LABEL_97;
      result = (Menu *)SaveMenu::SaveMenu(v38);
      break;
    case 0x410:
      v43 = (AlchemyMenu *)FormHeapAlloc(0xC0u);
      if ( !v43 )
        goto LABEL_97;
      result = (Menu *)AlchemyMenu::AlchemyMenu(v43);
      break;
    case 0x411:
      v41 = (SpellMakingMenu *)FormHeapAlloc(0x78u);
      if ( !v41 )
        goto LABEL_97;
      result = (Menu *)SpellMakingMenu::SpellMakingMenu(v41);
      break;
    case 0x412:
      v42 = (EnchantmentMenu *)FormHeapAlloc(0xA0u);
      if ( !v42 )
        goto LABEL_97;
      result = (Menu *)EnchantmentMenu::EnchantmentMenu(v42);
      break;
    case 0x413:
      v40 = (Menu *)FormHeapAlloc(0x9Cu);
      if ( !v40 )
        goto LABEL_97;
      result = EffectSettingMenu_constr(v40);
      break;
    case 0x414:
      v44 = (MainMenu *)FormHeapAlloc(0x50u);
      if ( !v44 )
        goto LABEL_97;
      result = (Menu *)MainMenu::MainMenu(v44);
      break;
    case 0x415:
      v45 = (Menu *)FormHeapAlloc(0x34u);
      if ( !v45 )
        goto LABEL_97;
      result = sub_596420(v45);
      break;
    case 0x416:
      v46 = (Menu *)FormHeapAlloc(0x50u);
      if ( !v46 )
        goto LABEL_97;
      result = sub_5C0B50(v46);
      break;
    case 0x417:
      v47 = (CreditsMenu *)FormHeapAlloc(0x5Cu);
      if ( !v47 )
        goto LABEL_97;
      result = (Menu *)CreditsMenu::CreditsMenu(v47);
      break;
    case 0x418:
      v27 = (SigilStoneMenu *)FormHeapAlloc(0x80u);
      if ( !v27 )
        goto LABEL_97;
      result = (Menu *)SigilStoneMenu::SigilStoneMenu(v27);
      break;
    case 0x419:
      v36 = (RechargeMenu *)FormHeapAlloc(0x54u);
      if ( !v36 )
        goto LABEL_97;
      result = (Menu *)RechargeMenu::RechargeMenu(v36);
      break;
    case 0x41B:
      v48 = (TextEditMenu *)FormHeapAlloc(0x5Cu);
      if ( v48 )
        result = (Menu *)TextEditMenu::TextEditMenu(v48);
      else
LABEL_97:
        result = (Menu *)Menu_CreateDynamic_::Return_0(0);
      break;
    default:
      PrintError("Unknown menu class!");
      result = (Menu *)Menu_CreateDynamic_::Return_0(a1);
      break;
  }
  return result;
}
