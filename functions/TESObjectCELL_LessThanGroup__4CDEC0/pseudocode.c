char __thiscall TESObjectCELL_LessThanGroup(int this, TESForm *a2)
{
  TESForm::FormFlags v4; // eax
  TESForm *v5; // eax
  void *v6; // eax
  TESForm *v7; // eax

  if ( a2 )
  {
    if ( a2->vtbl == (TESFormVtbl *)dword_B05E20 )
    {
      switch ( a2->member.refID )
      {
        case 0u:
          return TESForm_LessThanGroup((TESForm *)this, a2);
        case 1u:
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
            return TESObjectCELL_LessThanGroup_::def_4CDEE1(a2);
          v7 = TESForm_LookupByFormID(a2->member.flags);
          v6 = OblivionDynamicCast(
                 v7,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESWorldSpace `RTTI Type Descriptor',
                 0);
          if ( !v6 )
            break;
          return (*(char (__thiscall **)(int, void *))(*(_DWORD *)this + 0x34))(this, v6);
        case 2u:
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
            goto LABEL_6;
          break;
        case 3u:
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
            goto LABEL_10;
          break;
        case 4u:
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (*(_DWORD *)(this + 8) & 0x400) != 0 )
            return TESObjectCELL_LessThanGroup_::def_4CDEE1(a2);
LABEL_6:
          v4 = sub_4CA5F0(this);
          goto LABEL_7;
        case 5u:
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (*(_DWORD *)(this + 8) & 0x400) != 0 )
            return TESObjectCELL_LessThanGroup_::def_4CDEE1(a2);
LABEL_10:
          v4 = sub_4CA640(this);
LABEL_7:
          if ( (unsigned int)v4 < a2->member.flags )
            return TESObjectCELL_LessThanGroup_::def_4CDEE1(a2);
          break;
        case 6u:
        case 8u:
        case 9u:
        case 0xAu:
          v5 = TESForm_LookupByFormID(a2->member.flags);
          v6 = OblivionDynamicCast(
                 v5,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESObjectCELL `RTTI Type Descriptor',
                 0);
          if ( !v6 )
            break;
          return (*(char (__thiscall **)(int, void *))(*(_DWORD *)this + 0x34))(this, v6);
        case 7u:
          return TESObjectCELL_LessThanGroup_::def_4CDEE1(a2);
        default:
          break;
      }
    }
  }
  JUMPOUT(0x4CDF08);
}
