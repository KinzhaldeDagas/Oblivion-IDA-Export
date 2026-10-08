// GetAV execute callback. Extracts one Actor Value parameter with Script_ExtractArgs and forwards to 0x4F6060 helper.
void __usercall Cmd_GetAV_Execute(
        double st6_0@<st1>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        Script *a6,
        ScriptEventList *l,
        double *a8,
        UInt32 *a3)
{
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0; /*0x50169a*/
  if ( Script_ExtractArgs(a1, arg4, a3, a4, a5, a6, l, v10) ) /*0x5016a2*/
    Cmd_GetAV_EvalOrConsole(st6_0, (Actor *)a4, *(int *)v10, 0, a8); /*0x5016be*/
}
