ActiveEffect *__cdecl DemoralizeEffect_Make(MagicCaster *a1, MagicItem *a2, EffectItem *a3)
{
  int v3; // esi

  v3 = FormHeapAlloc(0x3Cu);
  if ( !v3 )
    return 0;
  ActiveEffect::ActiveEffect((ActiveEffect *)v3, a1, a2, a3);
  *(_DWORD *)v3 = &DemoralizeEffect::`vftable';
  *(_BYTE *)(v3 + 0x38) = 0;
  return (ActiveEffect *)v3;
}
