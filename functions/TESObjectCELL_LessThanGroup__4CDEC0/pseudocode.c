char __thiscall TESObjectCELL_LessThanGroup(int this, TESForm *a2)
{
  TESForm::FormFlags CellGroupSubBlockLabel; // eax
  TESForm *v5; // eax
  void *v6; // eax
  TESForm *v7; // eax

  if ( a2 ) /*0x4cdecd*/
  {
    if ( a2->vtbl == (TESFormVtbl *)dword_B05E20 ) /*0x4cded7*/
    {
      switch ( a2->member.refID ) /*0x4cdee1*/
      {
        case 0u: /*0x4cdee1*/
          return TESForm_LessThanGroup((TESForm *)this, a2); /*0x4cdef3*/
        case 1u: /*0x4cdee1*/
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4cdf81*/
            return TESObjectCELL_LessThanGroup_::def_4CDEE1(1, (int)a2); /*0x4cdf81*/
          v7 = TESForm_LookupByFormID(a2->member.flags); /*0x4cdf95*/
          v6 = OblivionDynamicCast( /*0x4cdf9e*/
                 v7,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESWorldSpace `RTTI Type Descriptor',
                 0);
          if ( !v6 ) /*0x4cdfa8*/
            break; /*0x4cdfa8*/
          return (*(char (__thiscall **)(int, void *))(*(_DWORD *)this + 0x34))(this, v6); /*0x4cdfa8*/
        case 2u: /*0x4cdee1*/
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4cdefa*/
            goto LABEL_6; /*0x4cdefa*/
          break; /*0x4cdefa*/
        case 3u: /*0x4cdee1*/
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4cdf14*/
            goto LABEL_10; /*0x4cdf14*/
          break; /*0x4cdf14*/
        case 4u: /*0x4cdee1*/
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (*(_DWORD *)(this + 8) & 0x400) != 0 ) /*0x4cdf63*/
            return TESObjectCELL_LessThanGroup_::def_4CDEE1(1, (int)a2); /*0x4cdf63*/
LABEL_6:
          CellGroupSubBlockLabel = sub_4CA5F0(this); /*0x4cdefc*/
          goto LABEL_7; /*0x4cdefc*/
        case 5u: /*0x4cdee1*/
          if ( (*(_BYTE *)(this + 0x24) & 1) != 0 || (*(_DWORD *)(this + 8) & 0x400) != 0 ) /*0x4cdf74*/
            return TESObjectCELL_LessThanGroup_::def_4CDEE1(1, (int)a2); /*0x4cdf74*/
LABEL_10:
          CellGroupSubBlockLabel = TESObjectCELL_GetCellGroupSubBlockLabel((const void *)this); /*0x4cdf16*/
LABEL_7:
          if ( (unsigned int)CellGroupSubBlockLabel < a2->member.flags ) /*0x4cdf04*/
            return TESObjectCELL_LessThanGroup_::def_4CDEE1(1, (int)a2); /*0x4cdf04*/
          break; /*0x4cdf04*/
        case 6u: /*0x4cdee1*/
        case 8u: /*0x4cdee1*/
        case 9u: /*0x4cdee1*/
        case 0xAu: /*0x4cdee1*/
          v5 = TESForm_LookupByFormID(a2->member.flags); /*0x4cdf2f*/
          v6 = OblivionDynamicCast( /*0x4cdf38*/
                 v5,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESObjectCELL `RTTI Type Descriptor',
                 0);
          if ( !v6 ) /*0x4cdf42*/
            break; /*0x4cdf42*/
          return (*(char (__thiscall **)(int, void *))(*(_DWORD *)this + 0x34))(this, v6); /*0x4cdf53*/
        case 7u: /*0x4cdee1*/
          return TESObjectCELL_LessThanGroup_::def_4CDEE1(1, (int)a2);
        default:
          break;
      }
    }
  }
  JUMPOUT(0x4CDF08); /*0x4cdf08*/
}
