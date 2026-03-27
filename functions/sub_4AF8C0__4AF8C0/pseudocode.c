void *__thiscall sub_4AF8C0(TESForm *this, TESForm *a2)
{
  void *result; // eax
  int v4; // esi

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESLevCreature `RTTI Type Descriptor',
             0);
  v4 = (int)result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    result = *(void **)(v4 + 0x40);
    *((_DWORD *)this + 0x10) = result;
  }
  return result;
}
