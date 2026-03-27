void __thiscall TESForm_ClearAllComponentReferences(TESForm *this)
{
  _DWORD *v2[26]; // [esp+8h] [ebp-74h] BYREF
  unsigned int v3; // [esp+78h] [ebp-4h]

  switch ( this->member.type )
  {
    case kFormType_Script:
    case kFormType_REFR:
    case kFormType_ACHR:
    case kFormType_ACRE:
    case kFormType_PathGrid:
    case kFormType_Land:
    case kFormType_Package:
      return;
    case kFormType_Cell:
      TESTexture::ClearComponentReferences(this + 1);
      break;
    default:
      FormComponentList_ZeroInit(v2);
      v3 = 0;
      FormComponentList_Build(v2, this);
      FormComponentList_ClearReferences(v2);
      v3 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v2);
      break;
  }
}
