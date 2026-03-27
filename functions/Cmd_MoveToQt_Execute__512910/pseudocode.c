bool __usercall Cmd_MoveToQt_Execute@<al>(
        double st0_0@<st7>,
        double a2@<st4>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        double a7@<st5>,
        ParamInfo *a1,
        UInt8 *a9,
        TESObjectREFR *a4,
        TESObjectREFR *a11,
        Script *a12,
        ScriptEventList *l,
        int a14,
        UInt32 *a3)
{
  bool result; // al
  int v16; // edx
  float v17; // ebx
  _DWORD *v18; // esi
  int v19; // edi
  _DWORD *v20; // ecx
  float v21; // eax
  UInt16 v22[2]; // [esp+18h] [ebp-4h] BYREF

  *(_DWORD *)v22 = 1;
  result = Script_ExtractArgs(a1, a9, a3, a4, a11, a12, l, v22);
  if ( result )
  {
    v17 = 0.0;
    if ( TESDataHandler_g_PlayerRef->activeQuest )
    {
      v18 = sub_65D830(TESDataHandler_g_PlayerRef, a6, v16);
      if ( !v18 )
        Interface_ConsolePrint("No current targets");
      v19 = 0;
      if ( v18 )
      {
        do
        {
          v20 = (_DWORD *)*v18;
          if ( !*v18 )
            break;
          if ( v19 >= *(int *)v22 )
            break;
          v18 = (_DWORD *)v18[1];
          sub_52B440(v20, 1);
          ++v19;
          v17 = v21;
        }
        while ( v18 );
        if ( v17 != 0.0 )
          TESObjectREFR_Move_(
            st0_0,
            a2,
            st4_0,
            st5_0,
            a5,
            a6,
            0.0,
            a7,
            (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            v17,
            0.0,
            0.0);
      }
      return 1;
    }
    else
    {
      Interface_ConsolePrint("No active quest");
      return 1;
    }
  }
  return result;
}
