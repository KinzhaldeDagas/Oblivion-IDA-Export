_DWORD *__thiscall ValueModifierEffect_CopyTo(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  ActiveEffect_Base_CopyTo((int)this, (int)a2); /*0x6a81b9*/
  result = OblivionDynamicCast( /*0x6a81cd*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
             &ValueModifierEffect `RTTI Type Descriptor',
             0);
  if ( result ) /*0x6a81d7*/
    result[0xE] = *(this + 0xE); /*0x6a81dc*/
  return result; /*0x6a81df*/
}
