// Verified TESGlobal vtable override at +0xB4 (A498D0): RTTI-casts source to TESGlobal, copies base TESForm components, then copies variable type byte +0x20 and float value +0x24.
char __thiscall TESGlobal_CopyComponentFrom(TESGlobal *self, TESForm *source)
{
  void *v3; // eax
  void *v4; // esi

  v3 = OblivionDynamicCast( /*0x4f9558*/
         source,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESGlobal `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x4f955d*/
  if ( v3 ) /*0x4f9564*/
  {
    TESForm_CopyAllComponentsFrom((TESForm *)self, source); /*0x4f9569*/
    LOBYTE(v3) = *((_BYTE *)v4 + 0x20); /*0x4f956e*/
    self->type = (unsigned __int8)v3; /*0x4f9571*/
    self->data = *((float *)v4 + 9); /*0x4f9577*/
  }
  return (char)v3; /*0x4f957a*/
}
