char __thiscall sub_41FFC0(ExtraDataList *this, int a2, char a3)
{
  BSExtraData *ExtraData; // esi
  ExtraRunOncePacks *v5; // eax
  BSExtraData *v6; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RunOncePacks);
  if ( !ExtraData )
  {
    v5 = (ExtraRunOncePacks *)FormHeapAlloc(0x10u);
    if ( v5 )
      v6 = (BSExtraData *)ExtraRunOncePacks::ExtraRunOncePacks(v5);
    else
      v6 = 0;
    ExtraData = v6;
    BaseExtraList_AddExtra(this, v6);
  }
  return sub_42A440(ExtraData, a2, a3);
}
