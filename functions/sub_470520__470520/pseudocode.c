// Verified ABI/value branches: TESValueForm RTTI cast -> dword+4 returned EAX; else MagicItem component+C virtual0 called with0 and ST0 converted to int; neither returns-1. Cdecl one stack pointer, RET0. Prior double return caused uninitialized-value artifacts in crime-cost functions. Probable descriptive name GetValue; original spelling Unknown.
int __cdecl TESForm_GetValue(TESForm *form)
{
  _DWORD *v1; // eax
  char *v3; // eax
  double v4; // st7

  v1 = OblivionDynamicCast( /*0x470534*/
         form,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESValueForm `RTTI Type Descriptor',
         0);
  if ( v1 ) /*0x47053e*/
    return v1[1]; /*0x470540*/
  v3 = (char *)OblivionDynamicCast( /*0x470554*/
                 form,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &MagicItem `RTTI Type Descriptor',
                 0);
  if ( !v3 ) /*0x47055e*/
    return 0xFFFFFFFF; /*0x470571*/
  v4 = ((double (__thiscall *)(char *, _DWORD))**((_DWORD **)v3 + 3))(v3 + 0xC, 0); /*0x470569*/
  return Double_To_SInt32(v4); /*0x470543*/
}
