BSExtraData *__fastcall sub_4D77D0(BSExtraDataVtbl *a1)
{
  ExtraDataList *p_CompareTo; // esi
  BSExtraData *result; // eax
  BSExtraData *Teleport; // eax
  BSExtraData *v4; // esi

  while ( 1 )
  {
    p_CompareTo = (ExtraDataList *)&a1[8].CompareTo;
    result = BaseExtraList_GetExtraData((ExtraDataList *)&a1[8].CompareTo, kExtraData_Lock);
    if ( result )
      break;
    Teleport = (BSExtraData *)ExtraDataList_GetTeleport(p_CompareTo);
    v4 = Teleport;
    if ( !Teleport || !sub_42B410(Teleport) )
      return 0;
    a1 = sub_42B410(v4);
  }
  return result;
}
