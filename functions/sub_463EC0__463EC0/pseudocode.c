TESForm *__thiscall sub_463EC0(char *this, int a1, int a3, char a4)
{
  TESForm *v5; // eax
  CombatController *v6; // eax
  TESForm *v7; // eax
  TESPackage *v8; // eax
  FleePackage *v9; // eax
  TESPackage *v10; // eax
  TESPackage *v11; // eax
  TESPackage *v12; // eax
  TESForm *v13; // esi

  v5 = TESForm_LookupByFormID(a1);
  if ( v5 )
    sub_45C7A0(this, v5);
  else
    sub_452DF0(*(_DWORD **)this, a1, 1);
  switch ( a4 )
  {
    case 0xC:
      v6 = (CombatController *)FormHeapAlloc(0x1C0u);
      if ( !v6 )
        goto LABEL_17;
      v7 = (TESForm *)CombatController::CombatController(v6, a3, 0, 0, 0.0);
      break;
    case 0xF:
      v8 = (TESPackage *)FormHeapAlloc(0x40u);
      if ( !v8 )
        goto LABEL_17;
      v7 = (TESForm *)sub_606860(v8);
      break;
    case 0x10:
      v9 = (FleePackage *)FormHeapAlloc(0x68u);
      if ( !v9 )
        goto LABEL_17;
      v7 = (TESForm *)FleePackage::FleePackage(v9, 0, 0, 0);
      break;
    case 0x11:
      v11 = (TESPackage *)FormHeapAlloc(0x58u);
      if ( !v11 )
        goto LABEL_17;
      v7 = (TESForm *)sub_67D300(v11);
      break;
    case 0x12:
      v10 = (TESPackage *)FormHeapAlloc(0x64u);
      if ( !v10 )
        goto LABEL_17;
      v7 = (TESForm *)sub_625D00(v10);
      break;
    default:
      v12 = (TESPackage *)FormHeapAlloc(0x3Cu);
      if ( v12 )
        v7 = (TESForm *)TESPackage::TESPackage(v12);
      else
LABEL_17:
        v7 = 0;
      break;
  }
  v13 = v7;
  TESForm_SetFormID(v7, a1, 1);
  return v13;
}
