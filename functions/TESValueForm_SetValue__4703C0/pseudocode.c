void *__thiscall TESValueForm_SetValue(_DWORD *this, int a2)
{
  void *result; // eax

  *(this + 1) = a2; /*0x4703d3*/
  result = OblivionDynamicCast( /*0x4703d6*/
             this,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESValueForm `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x4703e0*/
    return (*(void *(__thiscall **)(void *, int))(*(_DWORD *)result + 0x40))(result, 8); /*0x4703f1*/
  return result; /*0x4703f3*/
}
