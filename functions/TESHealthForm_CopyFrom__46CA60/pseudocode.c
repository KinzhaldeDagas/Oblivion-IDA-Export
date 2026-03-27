void *__thiscall TESHealthForm_CopyFrom(_DWORD *this, void *a2)
{
  void *result; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESHealthForm `RTTI Type Descriptor',
             0);
  if ( result )
  {
    result = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)result + 0x10))(result);
    *(this + 1) = result;
  }
  return result;
}
