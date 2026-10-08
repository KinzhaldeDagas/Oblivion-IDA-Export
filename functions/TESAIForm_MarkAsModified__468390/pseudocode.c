void *__thiscall TESAIForm_MarkAsModified(void *this, int a2)
{
  void *result; // eax

  result = OblivionDynamicCast( /*0x46839f*/
             this,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESAIForm `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x4683a9*/
    return (*(void *(__thiscall **)(void *, int))(*(_DWORD *)result + 0x40))(result, a2); /*0x4683b2*/
  return result; /*0x4683b4*/
}
