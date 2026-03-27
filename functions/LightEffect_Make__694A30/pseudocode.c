ActiveEffect *__cdecl LightEffect_Make(MagicCaster *a1, MagicItem *a2, EffectItem *a3)
{
  ActiveEffect *v3; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu);
  if ( v3 )
    return LightEffect_constr(v3, a1, a2, a3);
  else
    return 0;
}
