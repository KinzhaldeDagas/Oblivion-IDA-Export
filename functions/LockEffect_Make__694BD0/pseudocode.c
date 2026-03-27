ActiveEffect *__cdecl LockEffect_Make(MagicCaster *a1, MagicItem *a2, EffectItem *a3)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x38u);
  result = 0;
  if ( v3 )
  {
    ActiveEffect::ActiveEffect(v3, a1, a2, a3);
    v3->vtbl = (ActiveEffectVtbl *)&LockEffect::`vftable';
    return v3;
  }
  return result;
}
