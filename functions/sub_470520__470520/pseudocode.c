double __cdecl sub_470520(void *a1)
{
  char *v2; // eax
  double v3; // st7

  if ( !OblivionDynamicCast(
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESValueForm `RTTI Type Descriptor',
          0) )
  {
    v2 = (char *)OblivionDynamicCast(
                   a1,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &MagicItem `RTTI Type Descriptor',
                   0);
    if ( v2 )
    {
      v3 = ((double (__thiscall *)(char *, _DWORD))**((_DWORD **)v2 + 3))(v2 + 0xC, 0);
      Double_To_SInt32(v3);
    }
  }
  return v3;
}
