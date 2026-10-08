_DWORD *__thiscall ShieldEffect_CopyTo(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  ValueModifierEffect_CopyTo(this, a2); /*0x6a4839*/
  result = OblivionDynamicCast( /*0x6a484d*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
             &ShieldEffect `RTTI Type Descriptor',
             0);
  if ( result ) /*0x6a4857*/
    result[0xF] = *(this + 0xF); /*0x6a485c*/
  return result; /*0x6a485f*/
}
