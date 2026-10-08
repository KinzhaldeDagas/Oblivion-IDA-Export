_BYTE *__thiscall TESUsesForm_CopyFrom(_BYTE *this, void *a2)
{
  _BYTE *result; // eax

  result = OblivionDynamicCast( /*0x470356*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESUsesForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x470360*/
    *(this + 4) = result[4]; /*0x470365*/
  return result; /*0x470368*/
}
