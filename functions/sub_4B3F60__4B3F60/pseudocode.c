void __thiscall sub_4B3F60(TESForm *this, TESForm *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectACTI `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    *((_DWORD *)this + 0x15) = v3[0x15];
    TESForm_CopyAllComponentsFrom(this, a2);
  }
}
