_DWORD *__thiscall TESValueForm_CopyFrom(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESValueForm `RTTI Type Descriptor',
             0);
  if ( result )
  {
    *(this + 1) = result[1];
    result = OblivionDynamicCast(
               this,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESValueForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
               0);
    if ( result )
      return (*(_DWORD *(__thiscall **)(_DWORD *, int))(*result + 0x40))(result, 8);
  }
  return result;
}
