int __cdecl ActiveEffect_Base_Clone_::AllocActvEff(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  ActiveEffect *v6; // eax
  int v8; // [esp+Ch] [ebp+Ch]

  v5 = v4; /*0x68d843*/
  v6 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x68d847*/
  v8 = (int)v6; /*0x68d84f*/
  if ( !v6 ) /*0x68d85b*/
    return ActiveEffect_Base_Clone_::CopyMembers(v5, a1, a2, 0, a4); /*0x68d85b*/
  ActiveEffect_Ctor(v6, *(MagicCaster **)(v5 + 0x24), *(MagicItem **)(v5 + 8), *(EffectItem **)(v5 + 0xC)); /*0x68d86b*/
  return ActiveEffect_Base_Clone_::CopyMembers(v5, a1, a2, v8, a4);
}
