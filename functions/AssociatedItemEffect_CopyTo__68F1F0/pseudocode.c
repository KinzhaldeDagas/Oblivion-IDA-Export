_DWORD *__thiscall AssociatedItemEffect_CopyTo(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  ActiveEffect_Base_CopyTo((int)this, (int)a2); /*0x68f1f9*/
  result = OblivionDynamicCast( /*0x68f20d*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
             &AssociatedItemEffect `RTTI Type Descriptor',
             0);
  if ( result ) /*0x68f217*/
    result[0xE] = *(this + 0xE); /*0x68f21c*/
  return result; /*0x68f21f*/
}
