_DWORD *__thiscall sub_46E110(_DWORD *this, void *a2)
{
  _DWORD *result; // eax
  bool v4; // zf

  result = OblivionDynamicCast( /*0x46e126*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESProduceForm `RTTI Type Descriptor',
             0);
  if ( result ) /*0x46e130*/
  {
    v4 = result + 2 == 0; /*0x46e132*/
    result += 2; /*0x46e132*/
    *(this + 1) = result[0xFFFFFFFF]; /*0x46e138*/
    if ( !v4 ) /*0x46e13b*/
      *(this + 2) = *result; /*0x46e13f*/
  }
  return result; /*0x46e142*/
}
