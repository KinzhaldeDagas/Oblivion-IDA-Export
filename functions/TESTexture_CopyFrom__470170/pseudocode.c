_DWORD *__thiscall TESTexture_CopyFrom(unsigned int *this, void *a2)
{
  _DWORD *result; // eax
  const char *v4; // eax

  result = OblivionDynamicCast( /*0x470186*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESTexture `RTTI Type Descriptor',
             0);
  if ( result ) /*0x470190*/
  {
    v4 = (const char *)result[1]; /*0x470192*/
    if ( !v4 ) /*0x470197*/
      v4 = EmptyString; /*0x470199*/
    return (_DWORD *)BSStringT_Set((BSStringT *)(this + 1), v4, 0); /*0x4701a4*/
  }
  return result; /*0x4701a9*/
}
