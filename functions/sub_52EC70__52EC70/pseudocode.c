char __thiscall sub_52EC70(TESForm *this, TESForm *a2)
{
  TESForm *v4; // eax
  void *v5; // eax

  if ( !a2 || a2->vtbl != (TESFormVtbl *)dword_B05E20 )
LABEL_8:
    JUMPOUT(0x52ECE2);
  switch ( a2->member.refID )
  {
    case 0u:
      return TESForm_LessThanGroup(this, a2);
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
      return 0;
    case 7u:
      v4 = TESForm_LookupByFormID(a2->member.flags);
      v5 = OblivionDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTopic `RTTI Type Descriptor',
             0);
      if ( !v5 )
        goto LABEL_8;
      ((void (__thiscall *)(TESForm *, void *))this->vtbl->Unk_0D)(this, v5);
      return def_52EC90(a2);
    default:
      goto LABEL_8;
  }
}
