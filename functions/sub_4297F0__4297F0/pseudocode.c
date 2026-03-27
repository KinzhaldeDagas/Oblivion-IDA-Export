bool __thiscall sub_4297F0(const char **this, void *a2)
{
  const char **v3; // eax

  v3 = (const char **)OblivionDynamicCast(
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                        &ExtraLastFinishedSequence `RTTI Type Descriptor',
                        0);
  return !v3 || strcmp(*(this + 3), v3[3]) != 0;
}
