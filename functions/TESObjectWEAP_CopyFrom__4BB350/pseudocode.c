void *__thiscall TESObjectWEAP_CopyFrom(TESForm *this, TESForm *a2)
{
  void *result; // eax
  void *v4; // edi

  result = OblivionDynamicCast( /*0x4bb368*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESObjectWEAP `RTTI Type Descriptor',
             0);
  v4 = result; /*0x4bb36d*/
  if ( result ) /*0x4bb374*/
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x4bb379*/
    *((_DWORD *)this + 0x24) = *((_DWORD *)v4 + 0x24); /*0x4bb384*/
    *((_DWORD *)this + 0x25) = *((_DWORD *)v4 + 0x25); /*0x4bb390*/
    *((_DWORD *)this + 0x26) = *((_DWORD *)v4 + 0x26); /*0x4bb39c*/
    result = *((void **)v4 + 0x27); /*0x4bb3a2*/
    *((_DWORD *)this + 0x27) = result; /*0x4bb3a8*/
    this->member.type = *((_BYTE *)v4 + 4); /*0x4bb3b1*/
  }
  return result; /*0x4bb3b4*/
}
