ActiveEffect *__cdecl FrenzyEffect_Make(int a1, int a2, int a3)
{
  int v3; // esi

  v3 = FormHeapAlloc(0x40u);
  if ( !v3 )
    return 0;
  ValueModifierEffect_constr((ActiveEffect *)v3, a1, a2, a3);
  *(_DWORD *)v3 = &FrenzyEffect::`vftable';
  *(_BYTE *)(v3 + 0x3C) = 0;
  return (ActiveEffect *)v3;
}
