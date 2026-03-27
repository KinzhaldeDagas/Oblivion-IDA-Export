ActiveEffect *__cdecl InvisibilityEffect_Make(int a1, int a2, int a3)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu);
  result = 0;
  if ( v3 )
  {
    ValueModifierEffect_constr(v3, a1, a2, a3);
    v3->vtbl = (ActiveEffectVtbl *)&InvisibilityEffect::`vftable';
    return v3;
  }
  return result;
}
