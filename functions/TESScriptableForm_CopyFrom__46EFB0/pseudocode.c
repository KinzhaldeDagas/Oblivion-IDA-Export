_DWORD *__thiscall TESScriptableForm_CopyFrom(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  result = OblivionDynamicCast( /*0x46efc6*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESScriptableForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x46efd0*/
    *(this + 1) = result[1]; /*0x46efd5*/
  return result; /*0x46efd8*/
}
