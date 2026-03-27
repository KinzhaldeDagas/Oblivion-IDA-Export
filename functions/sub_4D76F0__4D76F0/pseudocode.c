void __thiscall sub_4D76F0(_BYTE *this)
{
  BSExtraData *Teleport; // eax
  BSExtraDataVtbl *v2; // eax
  char *v3; // eax

  Teleport = (BSExtraData *)ExtraDataList_GetTeleport((ExtraDataList *)(this + 0x44));
  if ( Teleport )
  {
    v2 = sub_42B410(Teleport);
    if ( v2 )
    {
      v3 = (char *)ExtraDataList_GetTeleport((ExtraDataList *)&v2[8].CompareTo);
      if ( v3 )
        sub_6899C0(v3);
    }
  }
  else
  {
    sub_6899C0(0);
  }
}
