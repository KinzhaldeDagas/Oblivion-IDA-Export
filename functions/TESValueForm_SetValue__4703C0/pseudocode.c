void *__thiscall TESValueForm_SetValue(_DWORD *this, int a2)
{
  void *result; // eax

  *(this + 1) = a2;
  result = OblivionDynamicCast(
             this,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESValueForm `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
             0);
  if ( result )
    return (void *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)result + 0x40))(result, 8);
  return result;
}
