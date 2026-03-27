_DWORD *__thiscall TESScriptableForm_CopyFrom(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
  if ( result )
    *(this + 1) = result[1];
  return result;
}
