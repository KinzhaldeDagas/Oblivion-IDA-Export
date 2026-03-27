_DWORD *__thiscall sub_517C60(TESForm *this, TESForm *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // edi

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESSound `RTTI Type Descriptor',
             0);
  v4 = result;
  if ( result )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    *((_DWORD *)this + 0xE) = v4[0xE];
    *((_DWORD *)this + 0xF) = v4[0xF];
    result = (_DWORD *)v4[0x10];
    *((_DWORD *)this + 0x10) = result;
  }
  return result;
}
