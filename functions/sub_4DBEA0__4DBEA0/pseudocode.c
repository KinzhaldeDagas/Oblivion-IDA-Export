void __thiscall sub_4DBEA0(_BYTE *this)
{
  ExtraDataList *v2; // esi
  BSExtraData *ExtraData; // eax
  BSExtraData *Teleport; // eax
  BSExtraData *v5; // esi
  BSExtraDataVtbl *v6; // eax

  v2 = (ExtraDataList *)(this + 0x44);
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x44), kExtraData_Lock);
  if ( ExtraData
    || (Teleport = (BSExtraData *)ExtraDataList_GetTeleport(v2), (v5 = Teleport) != 0)
    && sub_42B410(Teleport)
    && (v6 = sub_42B410(v5), (ExtraData = sub_4D77D0(v6)) != 0) )
  {
    sub_428E90(ExtraData);
    sub_4D9070(this);
  }
}
