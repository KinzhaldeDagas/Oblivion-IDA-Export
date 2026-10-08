ActiveEffect *__cdecl DemoralizeEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  int v3; // esi

  v3 = FormHeapAlloc(0x3Cu); /*0x692e69*/
  if ( !v3 ) /*0x692e7c*/
    return 0; /*0x692eb1*/
  ActiveEffect_Ctor((ActiveEffect *)v3, caster, magicItem, effectItem); /*0x692e8f*/
  *(_DWORD *)v3 = &DemoralizeEffect::`vftable'; /*0x692e94*/
  *(_BYTE *)(v3 + 0x38) = 0; /*0x692e9a*/
  return (ActiveEffect *)v3; /*0x692ea0*/
}
