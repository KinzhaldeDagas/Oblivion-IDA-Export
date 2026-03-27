char __thiscall sub_478290(void **this, signed int a2)
{
  char v2; // bl
  int v3; // edi
  void **i; // esi
  _BYTE *v5; // eax

  if ( a2 < 6 )
    return 0;
  if ( a2 > 7 )
  {
    if ( a2 == 8 )
    {
      v2 = 2;
      goto LABEL_6;
    }
    return 0;
  }
  v2 = 1;
LABEL_6:
  v3 = 0;
  for ( i = this + 0x13; ; i += 4 )
  {
    v5 = OblivionDynamicCast(
           *i,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESBipedModelForm `RTTI Type Descriptor',
           0);
    if ( v5 )
    {
      if ( ((unsigned __int8)v2 & v5[6]) != 0 )
        break;
    }
    if ( ++v3 >= 0x10 )
      return 0;
  }
  return 1;
}
