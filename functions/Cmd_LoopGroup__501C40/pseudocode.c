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
  ActorAnimData *v9; // eax
  unsigned int v10; // [esp-8h] [ebp-18h]
  unsigned int v11; // [esp-4h] [ebp-14h]
  int v12; // [esp+0h] [ebp-10h]
  unsigned int playImmediately; // [esp+4h] [ebp-Ch] BYREF
  unsigned int encodedKey; // [esp+8h] [ebp-8h] BYREF
  UInt16 v15[2]; // [esp+Ch] [ebp-4h] BYREF

  playImmediately = 0; /*0x501c76*/
  encodedKey = 0; /*0x501c7e*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v15, &playImmediately, &encodedKey); /*0x501c86*/
  if ( result ) /*0x501c90*/
  {
    if ( a4 ) /*0x501c99*/
    {
      if ( a4->vtbl->GetAnimData(a4) ) /*0x501ca5*/
      {
        v11 = playImmediately; /*0x501cb7*/
        v10 = encodedKey; /*0x501cba*/
        v9 = (ActorAnimData *)((int (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl->GetAnimData)(a4, *(_DWORD *)v15); /*0x501cc4*/
        ActorAnimData_PlayAnimGroup(v9, v10, v11, v12); /*0x501cc8*/
        a4->vtbl->super.SetFromActiveFile((TESForm *)a4, 1); /*0x501cd9*/
      }
    }
    return 1; /*0x501cdb*/
  }
  return result; /*0x501c92*/
}
