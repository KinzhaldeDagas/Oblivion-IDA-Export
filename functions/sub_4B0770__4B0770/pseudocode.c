void *__thiscall sub_4B0770(_BYTE *this, int a2, int a3)
{
  void *v4; // [esp+4h] [ebp-4h] BYREF

  v4 = 0;
  sub_4B05E0(this, a2, a3, &v4, &a3, (void *)1);
  if ( v4 )
    return OblivionDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &SpellItem `RTTI Type Descriptor',
             0);
  else
    return 0;
}
