// positive sp value has been detected, the output may be wrong!
ScriptEffect *__usercall ActiveEffect_Base_CreateDynamic_::MakeScriptEffect@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20)
{
  int v21; // [esp-4Ch] [ebp-4Ch]
  int v22; // [esp-48h] [ebp-48h]
  int v23; // [esp-44h] [ebp-44h]
  int v24; // [esp-40h] [ebp-40h]
  int v25; // [esp-3Ch] [ebp-3Ch]
  int v26; // [esp-38h] [ebp-38h]
  _DWORD *v27; // [esp-34h] [ebp-34h]

  if ( FormHeapAlloc(0x40u) )
    return ScriptEffect::ScriptEffect(a5, a6, a1, v21, v22, v23, v24, v25, v26, v27);
  else
    return (ScriptEffect *)ActiveEffect_Base_CreateDynamic_::Return_0_immediate(
                             a2,
                             0,
                             a4,
                             a5,
                             a6,
                             0,
                             a8,
                             a9,
                             a10,
                             a11,
                             a12,
                             a13,
                             a14,
                             a15,
                             a16,
                             a17,
                             a18,
                             a19,
                             a20);
}
