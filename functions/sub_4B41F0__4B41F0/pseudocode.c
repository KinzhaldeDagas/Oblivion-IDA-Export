void *__thiscall sub_4B41F0(TESForm *this, TESForm *a2)
{
  void *result; // eax
  int v4; // esi

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectANIO `RTTI Type Descriptor',
             0);
  v4 = (int)result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    result = *(void **)(v4 + 0x30);
    *((_DWORD *)this + 0xC) = result;
  }
  return result;
}
