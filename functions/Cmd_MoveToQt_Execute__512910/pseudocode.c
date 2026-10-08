bool __usercall Cmd_MoveToQt_Execute@<al>(
        double st3_0@<st4>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a5@<st0>,
        double a6@<st5>,
        ParamInfo *a1,
        UInt8 *a8,
        TESObjectREFR *a4,
        TESObjectREFR *a10,
        Script *a11,
        ScriptEventList *l,
        int a13,
        UInt32 *a3)
{
  bool result; // al
  float v16; // ebx
  double v17; // st1
  int v18; // eax
  int v19; // esi
  int v20; // edi
  _DWORD *v21; // ecx
  float v22; // eax
  UInt16 v23[2]; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)v23 = 1; /*0x512938*/
  result = Script_ExtractArgs(a1, a8, a3, a4, a10, a11, l, v23); /*0x512940*/
  if ( result ) /*0x51294a*/
  {
    v16 = 0.0; /*0x512955*/
    if ( reference->activeQuest ) /*0x512957*/
    {
      v17 = sub_65D830(reference, a5); /*0x512960*/
      v19 = v18; /*0x512965*/
      if ( !v18 ) /*0x512969*/
        Interface_ConsolePrint("No current targets"); /*0x512970*/
      v20 = 0; /*0x512979*/
      if ( v19 ) /*0x51297d*/
      {
        do /*0x51299d*/
        {
          v21 = *(_DWORD **)v19; /*0x512980*/
          if ( !*(_DWORD *)v19 ) /*0x512980*/
            break; /*0x512984*/
          if ( v20 >= *(int *)v23 ) /*0x51298a*/
            break; /*0x51298a*/
          v19 = *(_DWORD *)(v19 + 4); /*0x51298c*/
          sub_52B440(v21, 1); /*0x512991*/
          ++v20; /*0x512996*/
          v16 = v22; /*0x51299b*/
        }
        while ( v19 ); /*0x51299d*/
        if ( v16 != 0.0 ) /*0x5129a1*/
          TESObjectREFR_Move_(0.0, st3_0, st4_0, st5_0, st6_0, a5, v17, a6, reference, v16, 0.0, 0.0); /*0x5129bb*/
      }
      return 1; /*0x5129c5*/
    }
    else
    {
      Interface_ConsolePrint("No active quest"); /*0x5129cf*/
      return 1; /*0x5129d7*/
    }
  }
  return result; /*0x51294d*/
}
