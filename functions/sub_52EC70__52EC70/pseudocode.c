char __thiscall sub_52EC70(TESForm *this, TESForm *a2)
{
  TESForm *v4; // eax
  void *v5; // eax
  char v6; // al

  if ( !a2 || a2->vtbl != (TESFormVtbl *)dword_B05E20 ) /*0x52ec86*/
LABEL_8:
    JUMPOUT(0x52ECE2); /*0x52ece2*/
  switch ( a2->member.refID ) /*0x52ec90*/
  {
    case 0u: /*0x52ec90*/
      return TESForm_LessThanGroup(this, a2); /*0x52eca3*/
    case 1u: /*0x52ec90*/
    case 2u: /*0x52ec90*/
    case 3u: /*0x52ec90*/
    case 4u: /*0x52ec90*/
    case 5u: /*0x52ec90*/
    case 6u: /*0x52ec90*/
      return 0; /*0x52ecac*/
    case 7u: /*0x52ec90*/
      v4 = TESForm_LookupByFormID(a2->member.flags); /*0x52ecc1*/
      v5 = OblivionDynamicCast( /*0x52ecca*/
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTopic `RTTI Type Descriptor',
             0);
      if ( !v5 ) /*0x52ecd4*/
        goto LABEL_8; /*0x52ecd4*/
      v6 = ((int (__thiscall *)(TESForm *, void *))this->vtbl->Unk_0D)(this, v5); /*0x52ecde*/
      return def_52EC90(v6, (int)a2);
    default:
      goto LABEL_8;
  }
}
