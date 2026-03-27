_BYTE *__thiscall TESUsesForm_CopyFrom(_BYTE *this, void *a2)
{
  _BYTE *result; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESUsesForm `RTTI Type Descriptor',
             0);
  if ( result )
    *(this + 4) = result[4];
  return result;
}
