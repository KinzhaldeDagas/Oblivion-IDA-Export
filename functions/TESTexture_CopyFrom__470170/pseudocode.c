void *__thiscall TESTexture_CopyFrom(unsigned int *this, void *a2)
{
  void *result; // eax
  const char *v4; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESTexture `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v4 = *((const char **)result + 1);
    if ( !v4 )
      v4 = EmptyString;
    return (void *)BSStringT_Set((BSStringT *)(this + 1), v4, 0);
  }
  return result;
}
