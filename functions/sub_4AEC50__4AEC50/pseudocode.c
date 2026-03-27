void *__thiscall sub_4AEC50(TESForm *this, TESForm *a2)
{
  void *result; // eax
  int v4; // edi

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESFurniture `RTTI Type Descriptor',
             0);
  v4 = (int)result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    *((_DWORD *)this + 0x16) = *(_DWORD *)(v4 + 0x58);
    return (void *)sub_4AE830(this);
  }
  return result;
}
