void __thiscall TESForm_InitializeAllComponents(TESForm *this)
{
  int (***v2[26])(void); // [esp+8h] [ebp-74h] BYREF
  unsigned int v3; // [esp+78h] [ebp-4h]

  switch ( this->member.type ) /*0x46b0c9*/
  {
    case kFormType_Script: /*0x46b0c9*/
    case kFormType_REFR: /*0x46b0c9*/
    case kFormType_ACHR: /*0x46b0c9*/
    case kFormType_ACRE: /*0x46b0c9*/
    case kFormType_PathGrid: /*0x46b0c9*/
    case kFormType_Land: /*0x46b0c9*/
    case kFormType_Package: /*0x46b0c9*/
      return;
    case kFormType_Cell: /*0x46b0c9*/
      TESFullName_Initialize((TESForm::ModReferenceList *)this + 3); /*0x46b0d3*/
      break; /*0x46b0e8*/
    default:
      FormComponentList_ZeroInit(v2); /*0x46b0ed*/
      v3 = 0; /*0x46b0f7*/
      FormComponentList_Build(v2, this); /*0x46b0ff*/
      FormComponentList_Initialize(v2); /*0x46b108*/
      v3 = 0xFFFFFFFF; /*0x46b111*/
      Shared_NoOpVirtual_60D0A0(v2); /*0x46b119*/
      break; /*0x46b119*/
  }
}
