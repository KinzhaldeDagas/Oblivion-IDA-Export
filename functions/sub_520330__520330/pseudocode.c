TESForm *__thiscall sub_520330(TESForm *this, void *a2)
{
  TESForm *result; // eax
  TESForm *v4; // esi

  result = (TESForm *)OblivionDynamicCast( /*0x520347*/
                        a2,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESIdleForm `RTTI Type Descriptor',
                        0);
  v4 = result; /*0x52034c*/
  if ( result ) /*0x520353*/
  {
    TESForm_CopyAllComponentsFrom(this, result); /*0x520358*/
    result = (TESForm *)sub_56A850((BSSimpleList_VoidPtr *)this + 6, (BSSimpleList_VoidPtr::NodeVoid *)&v4[2]); /*0x520364*/
    *((_BYTE *)this + 0x38) = v4[2].member.flags; /*0x52036c*/
  }
  return result; /*0x52036f*/
}
