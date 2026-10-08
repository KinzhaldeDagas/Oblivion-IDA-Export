// Verified (Oblivion): reads EffectItem.setting.effectCode; SEFF creates ScriptEffect directly, otherwise looks up the ActiveEffectFactoryCode map and calls its factory. If no factory is registered, it uses the built-in switch fallback.
ActiveEffect *__cdecl ActiveEffect_Base_CreateDynamic(
        MagicCaster *caster,
        MagicItem *magicItem,
        EffectItem *effectItem,
        TESBoundObject *sourceObject)
{
  int v5; // [esp+6Ch] [ebp+14h]
  int v6; // [esp+70h] [ebp+18h]
  int v7; // [esp+74h] [ebp+1Ch]
  int v8; // [esp+78h] [ebp+20h]
  int v9; // [esp+7Ch] [ebp+24h]
  int v10; // [esp+80h] [ebp+28h]
  int v11; // [esp+84h] [ebp+2Ch]
  int v12; // [esp+88h] [ebp+30h]
  int v13; // [esp+8Ch] [ebp+34h]
  int v14; // [esp+90h] [ebp+38h]
  int v15; // [esp+94h] [ebp+3Ch]
  int v16; // [esp+98h] [ebp+40h]
  int v17; // [esp+9Ch] [ebp+44h]
  int v18; // [esp+A0h] [ebp+48h]
  int v19; // [esp+A4h] [ebp+4Ch]
  int v20; // [esp+A8h] [ebp+50h]
  int v21; // [esp+ACh] [ebp+54h]
  int v22; // [esp+B0h] [ebp+58h]
  int v23; // [esp+B4h] [ebp+5Ch]
  int v24; // [esp+B8h] [ebp+60h]
  int (__cdecl *v25)(int, int); // [esp+BCh] [ebp+64h]
  int v26; // [esp+C0h] [ebp+68h]

  if ( effectItem->setting->effectCode == 0x46464553 ) /*0x68ea85*/
    return (ActiveEffect *)ActiveEffect_Base_CreateDynamic_::MakeScriptEffect( /*0x68ea86*/
                             (int)effectItem,
                             (int)caster,
                             (int)magicItem,
                             (int)effectItem,
                             (int)sourceObject,
                             v5,
                             v6,
                             v7,
                             v8,
                             v9,
                             v10,
                             v11,
                             v12,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             v19);
  else
    return (ActiveEffect *)ActiveEffect_Base_CreateDynamic_::NotScriptEffect( /*0x68ea85*/
                             (int *)effectItem,
                             (int)caster,
                             (int)magicItem,
                             (int)effectItem,
                             (int)sourceObject,
                             v5,
                             v6,
                             v7,
                             v8,
                             v9,
                             v10,
                             v11,
                             v12,
                             v13,
                             v14,
                             v15,
                             v16,
                             v17,
                             v18,
                             v19,
                             v20,
                             v21,
                             v22,
                             v23,
                             v24,
                             v25,
                             v26);              // CreateDynamic special-cases EffectSetting.effectCode == 'SEFF' from effectItem->setting +0x98 and allocates ScriptEffect before the normal creator-map/switch path.
}
