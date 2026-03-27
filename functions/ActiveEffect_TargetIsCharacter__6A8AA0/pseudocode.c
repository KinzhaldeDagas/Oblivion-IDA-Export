BOOL __stdcall ActiveEffect_TargetIsCharacter(void *a1)
{
  return OblivionDynamicCast(
           a1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
           &Character `RTTI Type Descriptor',
           0) != 0;
}
