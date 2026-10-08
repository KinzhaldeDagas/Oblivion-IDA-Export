void __thiscall sub_4B3F60(TESForm *this, TESForm *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast( /*0x4b3f77*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectACTI `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x4b3f81*/
  {
    *((_DWORD *)this + 0x15) = v3[0x15]; /*0x4b3f89*/
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4b3f8c*/
  }
}
