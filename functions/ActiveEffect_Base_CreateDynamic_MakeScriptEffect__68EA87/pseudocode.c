// positive sp value has been detected, the output may be wrong!
ActiveEffect *__usercall ActiveEffect_Base_CreateDynamic_::MakeScriptEffect@<eax>(
        int a1@<esi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v7; // [esp-4Ch] [ebp-4Ch]
  int v8; // [esp-48h] [ebp-48h]
  int v9; // [esp-44h] [ebp-44h]
  int v10; // [esp-40h] [ebp-40h]
  MagicCaster *v11; // [esp-3Ch] [ebp-3Ch]
  MagicItem *v12; // [esp-38h] [ebp-38h]
  EffectItem *v13; // [esp-34h] [ebp-34h]

  if ( FormHeapAlloc(0x40u) ) /*0x68ea89*/
    return ScriptEffect::ScriptEffect(a5, a6, a1, v7, v8, v9, v10, v11, v12, v13); /*0x68eaae*/
  else
    return (ActiveEffect *)ActiveEffect_Base_CreateDynamic_::Return_0_immediate(); /*0x68ea9f*/
}
