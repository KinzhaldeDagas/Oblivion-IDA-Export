char __thiscall Actor_IsObjectEquipped(TESObjectREFR *this, int a2)
{
  int ***ContainerExtraDataForRef; // eax
  bool v4; // zf
  char result; // al

  if ( !TESObjectREFR_GetContainer(this) ) /*0x4d8884*/
    return 0; /*0x4d8884*/
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d8891*/
  v4 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, a2, 0) == 0; /*0x4d88a7*/
  result = 1; /*0x4d88a9*/
  if ( v4 ) /*0x4d88ab*/
    return 0; /*0x4d88ad*/
  return result; /*0x4d88af*/
}
