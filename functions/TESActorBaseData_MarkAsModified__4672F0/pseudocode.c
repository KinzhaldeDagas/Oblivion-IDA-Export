void *__thiscall TESActorBaseData_MarkAsModified(void *this, int a2)
{
  void *result; // eax

  result = OblivionDynamicCast(
             this,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESActorBaseData `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
             0);
  if ( result )
    return (void *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)result + 0x40))(result, a2);
  return result;
}
