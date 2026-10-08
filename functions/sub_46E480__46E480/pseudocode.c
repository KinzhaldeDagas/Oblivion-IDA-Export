_DWORD *__thiscall sub_46E480(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast( /*0x46e496*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESRaceForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x46e4a0*/
    *(this + 1) = result[1]; /*0x46e4a5*/
  return result; /*0x46e4a8*/
}
