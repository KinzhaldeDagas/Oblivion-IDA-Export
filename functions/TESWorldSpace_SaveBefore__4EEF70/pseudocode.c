// DoFixup?
// 
char __thiscall TESWorldSpace::SaveBefore(TESForm *this, TESForm *a2)
{
  char v2; // bl
  char result; // al
  TESForm *v5; // eax
  void *v6; // eax
  struct TypeDescriptor *v7; // [esp-8h] [ebp-10h]

  v2 = 0;
  if ( !a2 || a2->vtbl != (TESFormVtbl *)dword_B05E20 )
    return v2;
  switch ( a2->member.refID )
  {
    case 0u:
      return TESForm_LessThanGroup(this, a2);
    case 1u:
      v7 = &TESWorldSpace `RTTI Type Descriptor';
      v5 = TESForm_LookupByFormID(a2->member.flags);
      goto LABEL_7;
    case 2u:
    case 3u:
      return 0;
    case 6u:
      v7 = &TESObjectCELL `RTTI Type Descriptor';
      v5 = TESForm_LookupByFormID(a2->member.flags);
LABEL_7:
      v6 = OblivionDynamicCast(v5, 0, (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor', v7, 0);
      if ( !v6 )
        return v2;
      result = ((char (__thiscall *)(TESForm *, void *))this->vtbl->Unk_0D)(this, v6);
      break;
    case 7u:
      return 1;
    default:
      return v2;
  }
  return result;
}
