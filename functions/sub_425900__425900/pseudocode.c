void __thiscall sub_425900(ExtraDataList *this, int a2, TESObjectREFR *a3)
{
  BSExtraData *ExtraData; // eax
  TESObjectCELL *vtbl; // edi
  BSExtraData *v6; // eax

  if ( a3 )
  {
    if ( a3->vtbl->IsActor(a3) )
    {
      ExtraData = BaseExtraList_GetExtraData(this, kExtraData_PersistentCell);
      if ( ExtraData )
      {
        vtbl = (TESObjectCELL *)ExtraData[1].vtbl;
        if ( vtbl )
        {
          if ( TESObjectREFR_GetParentCell(a3) )
          {
            v6 = BaseExtraList_GetExtraData(this, kExtraData_PersistentCell);
            if ( v6 )
              BaseExtraList_RemoveExtraByPtr(this, (int)v6, 1);
            sub_4CECD0(vtbl, a3);
          }
        }
      }
    }
  }
}
