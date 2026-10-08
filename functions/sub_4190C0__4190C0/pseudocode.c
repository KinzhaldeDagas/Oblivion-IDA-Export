bool __thiscall sub_4190C0(_DWORD *this, void *a2)
{
  _BYTE *v3; // eax
  bool result; // al
  _BYTE *v5; // eax
  char v6; // al
  _WORD *v7; // eax
  char v8; // al

  v3 = OblivionDynamicCast( /*0x4190d7*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObject `RTTI Type Descriptor',
         0);
  if ( !v3 ) /*0x4190e1*/
    return 0; /*0x4191cc*/
  switch ( v3[4] ) /*0x4190fe*/
  {
    case 0x14: /*0x4190fe*/
      EffectItemList_HasEffectWithFlags(this + 9, 0x20000); /*0x419151*/
      return !v6 && *(this + 0xD) == 3; /*0x419167*/
    case 0x15: /*0x4190fe*/
      if ( (v3[0x88] & 1) == 0 ) /*0x4191bd*/
        return 0; /*0x4191bd*/
      return *(this + 0xD) == 0; /*0x4191c9*/
    case 0x16: /*0x4190fe*/
      v7 = OblivionDynamicCast( /*0x419180*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESBipedModelForm `RTTI Type Descriptor',
             0);
      if ( !v7 ) /*0x41918a*/
        return 0; /*0x41918a*/
      if ( !sub_469050(v7) ) /*0x41918e*/
      {
        EffectItemList_HasEffectWithFlags(this + 9, 0x20000); /*0x41919f*/
        if ( v8 ) /*0x4191a6*/
          return 0; /*0x4191a6*/
      }
      return *(this + 0xD) == 3; /*0x4191b3*/
    case 0x21: /*0x4190fe*/
      v5 = OblivionDynamicCast( /*0x419122*/
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
             &TESObjectWEAP `RTTI Type Descriptor',
             0);
      if ( !v5 ) /*0x41912c*/
        return 0; /*0x41912c*/
      if ( v5[0x90] != 4 ) /*0x419139*/
        goto LABEL_3; /*0x419139*/
      result = *(this + 0xD) == 1; /*0x419142*/
      break; /*0x419146*/
    case 0x22: /*0x4190fe*/
LABEL_3:
      result = *(this + 0xD) == 2; /*0x419105*/
      break; /*0x419110*/
    default:
      return 0;
  }
  return result; /*0x41910b*/
}
