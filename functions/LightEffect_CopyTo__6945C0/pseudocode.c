int *__thiscall LightEffect_CopyTo(LightEffect_DecodedLayout *self, void *destination)
{
  int *result; // eax

  ActiveEffect_Base_CopyTo((int)self, (int)destination); /*0x6945c9*/
  result = (int *)OblivionDynamicCast( /*0x6945dd*/
                    destination,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                    &LightEffect `RTTI Type Descriptor',
                    0);
  if ( result ) /*0x6945e7*/
    return OB_NiSmartPointer_Assign_010201A0(result + 0xE, (int *)&self->transientPointLight_38); /*0x6945f0*/
  return result; /*0x6945f5*/
}
