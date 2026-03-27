void __thiscall ExtraDataList::SetOrRemoveExtraOwnership(ExtraDataList *this, TESForm *a2)
{
  ExtraOwnership *ExtraData; // eax
  ExtraOwnership *v4; // eax
  ExtraOwnership *v5; // eax

  ExtraData = (ExtraOwnership *)BaseExtraList_GetExtraData(this, kExtraData_Ownership);
  if ( ExtraData )
  {
    if ( a2 )
      ExtraData->owner.ownerForm = a2;
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
  else if ( a2 )
  {
    v4 = (ExtraOwnership *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = ExtraOwnership::ExtraOwnership(v4, a2);
    else
      v5 = 0;
    BaseExtraList_AddExtra(this, &v5->super);
  }
}
