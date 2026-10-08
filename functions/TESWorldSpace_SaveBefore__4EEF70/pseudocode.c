// DoFixup?
//
char __thiscall TESWorldSpace::SaveBefore(TESForm *this, TESForm *a2)
{
  char v2; // bl
  char result; // al
  TESForm *v5; // eax
  void *v6; // eax
  struct TypeDescriptor *v7; // [esp-8h] [ebp-10h]

  v2 = 0; /*0x4eef75*/
  if ( !a2 || a2->vtbl != (TESFormVtbl *)dword_B05E20 ) /*0x4eef86*/
    return v2; /*0x4eeffd*/
  switch ( a2->member.refID ) /*0x4eef90*/
  {
    case 0u: /*0x4eef90*/
      return TESForm_LessThanGroup(this, a2); /*0x4eefa3*/
    case 1u: /*0x4eef90*/
      v7 = &TESWorldSpace `RTTI Type Descriptor'; /*0x4eefec*/
      v5 = TESForm_LookupByFormID(a2->member.flags); /*0x4eeff9*/
      goto LABEL_7; /*0x4eeff9*/
    case 2u: /*0x4eef90*/
    case 3u: /*0x4eef90*/
      return 0; /*0x4eefac*/
    case 6u: /*0x4eef90*/
      v7 = &TESObjectCELL `RTTI Type Descriptor'; /*0x4eefb4*/
      v5 = TESForm_LookupByFormID(a2->member.flags); /*0x4eefc1*/
LABEL_7:
      v6 = OblivionDynamicCast(v5, 0, (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor', v7, 0); /*0x4eefc6*/
      if ( !v6 ) /*0x4eefd4*/
        return v2; /*0x4eefd4*/
      result = ((char (__thiscall *)(TESForm *, void *))this->vtbl->Unk_0D)(this, v6); /*0x4eefde*/
      break; /*0x4eefe4*/
    case 7u: /*0x4eef90*/
      return 1; /*0x4eeffb*/
    default:
      return v2;
  }
  return result; /*0x4eef9f*/
}
