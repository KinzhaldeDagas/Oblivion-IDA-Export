_DWORD *__thiscall sub_46E480(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESRaceForm `RTTI Type Descriptor',
             0);
  if ( result )
    *(this + 1) = result[1];
  return result;
}
