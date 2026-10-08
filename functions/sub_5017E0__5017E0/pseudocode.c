// ModAV / ModActorValue execute callback. Script execution uses the actor's script-offset modifier; console execution uses the damage modifier. Neither path is native skill advancement.
bool __cdecl Cmd_ModAV_Execute(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  void *v9; // eax
  int v10; // [esp+4h] [ebp-8h] BYREF
  UInt16 v11[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v11 = 0; /*0x501811*/
  v10 = 0; /*0x501819*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &v10); /*0x501821*/
  if ( result ) /*0x50182b*/
  {
    v9 = OblivionDynamicCast( /*0x501841*/
           a4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( v9 ) /*0x50184d*/
    {
      if ( MEMORY[0xB361AC] ) /*0x50184f*/
      {
        (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v9 + 0x2A8))(*(_DWORD *)v11, v10, 0);// Console ModAV dispatches through the integer damage-modifier vfunc. /*0x50186c*/
        return 1; /*0x501874*/
      }
      (*(void (__stdcall **)(_DWORD, int, _DWORD))(*(_DWORD *)v9 + 0x2A0))(*(_DWORD *)v11, v10, 0);// Script ModAV dispatches through the integer script-offset modifier vfunc. /*0x501887*/
    }
    return 1; /*0x501889*/
  }
  return result; /*0x50182d*/
}
