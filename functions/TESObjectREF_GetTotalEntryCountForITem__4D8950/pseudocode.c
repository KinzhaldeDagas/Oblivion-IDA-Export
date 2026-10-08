int __thiscall TESObjectREF_GetTotalEntryCountForITem(TESObjectREFR *this, char a2)
{
  int ***ContainerExtraDataForRef; // eax

  if ( !TESObjectREFR_GetContainer(this) ) /*0x4d8953*/
    return 0xFFFFFFFF; /*0x4d8991*/
  if ( a2 ) /*0x4d8964*/
    return ContainerExtraData_GetCount((int ***)g_TESDataHandler->containerExtraData); /*0x4d8973*/
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d897e*/
  return ContainerExtraData_GetCount(ContainerExtraDataForRef); /*0x4d8978*/
}
