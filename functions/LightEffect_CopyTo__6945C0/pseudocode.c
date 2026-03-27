int *__thiscall LightEffect_CopyTo(int *this, void *a2)
{
  int *result; // eax

  ActiveEffect_Base_CopyTo((int)this, (int)a2);
  result = (int *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                    &LightEffect `RTTI Type Descriptor',
                    0);
  if ( result )
    return sub_55E2A0(result + 0xE, this + 0xE);
  return result;
}
