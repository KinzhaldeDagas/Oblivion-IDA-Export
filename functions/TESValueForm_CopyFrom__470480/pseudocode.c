_DWORD *__thiscall TESValueForm_CopyFrom(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast( /*0x470496*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESValueForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x4704a0*/
  {
    *(this + 1) = result[1]; /*0x4704b4*/
    result = OblivionDynamicCast( /*0x4704b7*/
               this,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESValueForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
               0);
    if ( result ) /*0x4704c1*/
      return (*(_DWORD *(__thiscall **)(_DWORD *, int))(*result + 0x40))(result, 8); /*0x4704d3*/
  }
  return result; /*0x4704d5*/
}
