_DWORD *__thiscall sub_46E110(_DWORD *this, void *a2)
{
  _DWORD *result; // eax
  bool v4; // zf

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESProduceForm `RTTI Type Descriptor',
             0);
  if ( result )
  {
    v4 = result + 2 == 0;
    result += 2;
    *(this + 1) = result[0xFFFFFFFF];
    if ( !v4 )
      *(this + 2) = *result;
  }
  return result;
}
