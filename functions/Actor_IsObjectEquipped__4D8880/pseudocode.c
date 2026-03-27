char __thiscall Actor_IsObjectEquipped(TESObjectREFR *this, int a2)
{
  int ***ContainerExtraDataForRef; // eax
  bool v4; // zf
  char result; // al

  if ( !TESObjectREFR_GetContainer(this) )
    return 0;
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(this);
  v4 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, a2, 0) == 0;
  result = 1;
  if ( v4 )
    return 0;
  return result;
}
