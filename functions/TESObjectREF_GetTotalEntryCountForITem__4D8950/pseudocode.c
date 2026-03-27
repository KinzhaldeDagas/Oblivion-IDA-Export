int __thiscall TESObjectREF_GetTotalEntryCountForITem(TESObjectREFR *this, char a2)
{
  int ***ContainerExtraDataForRef; // eax

  if ( !TESObjectREFR_GetContainer(this) )
    return 0xFFFFFFFF;
  if ( a2 )
    return ContainerExtraData_GetCount(*(int ****)(TESDataHandler + 0xCDC));
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(this);
  return ContainerExtraData_GetCount(ContainerExtraDataForRef);
}
