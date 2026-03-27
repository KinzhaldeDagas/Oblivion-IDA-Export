bool __thiscall sub_4190C0(_DWORD *this, void *a2)
{
  _BYTE *v3; // eax
  bool result; // al
  _BYTE *v5; // eax
  _WORD *v6; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObject `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 0;
  switch ( v3[4] )
  {
    case 0x14:
      return !EffectItemList_HasEffectWithFlags(this + 9, 0x20000) && *(this + 0xD) == 3;
    case 0x15:
      if ( (v3[0x88] & 1) == 0 )
        return 0;
      return *(this + 0xD) == 0;
    case 0x16:
      v6 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESBipedModelForm `RTTI Type Descriptor',
             0);
      if ( !v6 || !sub_469050(v6) && EffectItemList_HasEffectWithFlags(this + 9, 0x20000) )
        return 0;
      return *(this + 0xD) == 3;
    case 0x21:
      v5 = OblivionDynamicCast(
             v3,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
             &TESObjectWEAP `RTTI Type Descriptor',
             0);
      if ( !v5 )
        return 0;
      if ( v5[0x90] != 4 )
        goto LABEL_3;
      result = *(this + 0xD) == 1;
      break;
    case 0x22:
LABEL_3:
      result = *(this + 0xD) == 2;
      break;
    default:
      return 0;
  }
  return result;
}
