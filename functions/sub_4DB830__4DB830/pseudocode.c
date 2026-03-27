void **__thiscall sub_4DB830(_BYTE *this)
{
  ExtraDataList *v2; // esi
  void **result; // eax
  BSExtraData *Teleport; // eax
  BSExtraData *v5; // esi
  BSExtraDataVtbl *v6; // eax
  ExtraDataList *v7; // ecx

  v2 = (ExtraDataList *)(this + 0x44);
  result = (void **)sub_41E7F0((ExtraDataList *)(this + 0x44));
  if ( result == (void **)0xFFFFFFFF )
  {
    Teleport = (BSExtraData *)ExtraDataList_GetTeleport(v2);
    v5 = Teleport;
    if ( !Teleport
      || !sub_42B410(Teleport)
      || (v6 = sub_42B410(v5),
          result = (void **)sub_41E7F0((ExtraDataList *)&v6[8].CompareTo),
          result == (void **)0xFFFFFFFF) )
    {
      v7 = *((ExtraDataList **)this + 0x10);
      if ( !v7 )
        return 0;
      result = (void **)sub_4CA990(v7);
      if ( result == (void **)0xFFFFFFFF )
        return 0;
    }
  }
  return result;
}
