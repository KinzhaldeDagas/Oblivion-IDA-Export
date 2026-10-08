void __thiscall sub_4268B0(ExtraDataList *this, TESPackage *self, int a3, BSExtraData *a4, char a5, char a6)
{
  TESPackageType type; // al
  BSExtraData *ExtraData; // eax
  _DWORD *v9; // eax
  BSExtraData *v10; // eax
  BSExtraData *v11; // eax

  if ( !self /*0x42690d*/
    || (!TESPackage_IsRuntimePackage(self) || self->members.type == kPackageType_Follow)
    && !sub_5660E0(self)
    && (type = self->members.type, type != kPackageType_Spectator)
    && type != kPackageType_Trespass )
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x426917*/
    if ( self ) /*0x42691e*/
    {
      if ( ExtraData ) /*0x426926*/
      {
        ExtraData[1].vtbl = (BSExtraDataVtbl *)self; /*0x42698e*/
        *(_DWORD *)&ExtraData[1].members.type = a3; /*0x426991*/
        ExtraData[1].members.next = a4; /*0x426994*/
      }
      else
      {
        v9 = (_DWORD *)FormHeapAlloc(0x1Cu); /*0x42692a*/
        if ( v9 ) /*0x426940*/
          v10 = (BSExtraData *)sub_42A1A0(v9, (int)self, a3, (int)a4, a5, a6); /*0x426959*/
        else
          v10 = 0; /*0x426960*/
        BaseExtraList_AddExtra(this, v10); /*0x42696d*/
      }
    }
    else if ( ExtraData ) /*0x4269ad*/
    {
      v11 = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x4269b3*/
      if ( v11 ) /*0x4269ba*/
        BaseExtraList_RemoveExtraByPtr(this, (int)v11, 1); /*0x4269c1*/
    }
  }
}
