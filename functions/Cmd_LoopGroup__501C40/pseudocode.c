bool __cdecl Cmd_LoopGroup(
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
  int v9; // eax
  _DWORD *v10; // [esp-8h] [ebp-18h]
  int v11; // [esp-4h] [ebp-14h]
  int v12; // [esp+0h] [ebp-10h]
  int v13; // [esp+4h] [ebp-Ch] BYREF
  _DWORD *v14; // [esp+8h] [ebp-8h] BYREF
  UInt16 v15[2]; // [esp+Ch] [ebp-4h] BYREF

  v13 = 0;
  v14 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v15, &v13, &v14);
  if ( result )
  {
    if ( a4 )
    {
      if ( a4->vtbl->GetAnimData(a4) )
      {
        v11 = v13;
        v10 = v14;
        v9 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl->GetAnimData)(a4, *(_DWORD *)v15);
        ActorAnimData_PlayAnimGroup(v9, v10, v11, v12);
        a4->vtbl->super.SetFromActiveFile((TESForm *)a4, 1);
      }
    }
    return 1;
  }
  return result;
}
