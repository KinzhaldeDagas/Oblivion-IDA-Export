_DWORD *__thiscall ShieldEffect_CopyTo(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  ValueModifierEffect_CopyTo(this, a2);
  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
             &ShieldEffect `RTTI Type Descriptor',
             0);
  if ( result )
    result[0xF] = *(this + 0xF);
  return result;
}
