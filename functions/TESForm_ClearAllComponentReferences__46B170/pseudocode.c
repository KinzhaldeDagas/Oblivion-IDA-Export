void __thiscall TESForm_ClearAllComponentReferences(TESForm *this)
{
  _DWORD *v2[26]; // [esp+8h] [ebp-74h] BYREF
  unsigned int v3; // [esp+78h] [ebp-4h]

  switch ( this->member.type ) /*0x46b1a9*/
  {
    case kFormType_Script: /*0x46b1a9*/
    case kFormType_REFR: /*0x46b1a9*/
    case kFormType_ACHR: /*0x46b1a9*/
    case kFormType_ACRE: /*0x46b1a9*/
    case kFormType_PathGrid: /*0x46b1a9*/
    case kFormType_Land: /*0x46b1a9*/
    case kFormType_Package: /*0x46b1a9*/
      return;
    case kFormType_Cell: /*0x46b1a9*/
      Shared_NoOpVirtual_60D0A0(this + 1); /*0x46b1b3*/
      break; /*0x46b1c8*/
    default:
      FormComponentList_ZeroInit(v2); /*0x46b1cd*/
      v3 = 0; /*0x46b1d7*/
      FormComponentList_Build(v2, this); /*0x46b1df*/
      FormComponentList_ClearReferences(v2); /*0x46b1e8*/
      v3 = 0xFFFFFFFF; /*0x46b1f1*/
      Shared_NoOpVirtual_60D0A0(v2); /*0x46b1f9*/
      break; /*0x46b1f9*/
  }
}
