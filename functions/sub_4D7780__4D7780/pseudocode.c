void __thiscall sub_4D7780(_BYTE *this)
{
  ExtraDataList *v1; // esi
  char *v2; // eax
  BSExtraData *Teleport; // eax
  BSExtraData *v4; // esi
  BSExtraDataVtbl *v5; // eax

  v1 = (ExtraDataList *)(this + 0x44);
  v2 = (char *)sub_41E690((ExtraDataList *)(this + 0x44));
  if ( v2
    || (Teleport = (BSExtraData *)ExtraDataList_GetTeleport(v1), (v4 = Teleport) != 0)
    && sub_42B410(Teleport)
    && (v5 = sub_42B410(v4), (v2 = (char *)sub_41E690((ExtraDataList *)&v5[8].CompareTo)) != 0) )
  {
    sub_429990(v2);
  }
}
