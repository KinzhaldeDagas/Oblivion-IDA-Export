_DWORD *__thiscall AssociatedItemEffect_CopyTo(_DWORD *this, void *a2)
{
  _DWORD *result; // eax

  ActiveEffect_Base_CopyTo((int)this, (int)a2);
  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
             &AssociatedItemEffect `RTTI Type Descriptor',
             0);
  if ( result )
    result[0xE] = *(this + 0xE);
  return result;
}
