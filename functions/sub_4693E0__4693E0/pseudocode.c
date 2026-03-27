const char **__cdecl sub_4693E0(void *a1, TESObjectREFR *a2)
{
  const char **result; // eax
  const char **v3; // esi
  _BYTE *Owner; // ecx
  int IsFemale; // eax

  result = (const char **)OblivionDynamicCast(
                            a1,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESBipedModelForm `RTTI Type Descriptor',
                            0);
  v3 = result;
  if ( result )
  {
    if ( a2 )
    {
      Owner = (_BYTE *)TESObjectREFR_GetOwner(a2);
      IsFemale = 0;
      if ( Owner )
      {
        if ( Owner[4] == 0x23 )
          IsFemale = TESActorBase_IsFemale(Owner);
      }
      return (const char **)TESBipedModelForm_GetWorldModelPath(v3, IsFemale);
    }
    else
    {
      return (const char **)(*((int (__thiscall **)(const char **))result[0xE] + 5))(result + 0xE);
    }
  }
  return result;
}
