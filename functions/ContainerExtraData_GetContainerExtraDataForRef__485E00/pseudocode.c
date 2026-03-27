ExtraContainerChanges_Data *__cdecl ContainerExtraData_GetContainerExtraDataForRef(TESObjectREFR *a1)
{
  ExtraContainerChanges_Data *result; // eax
  ExtraContainerChanges_Data *v2; // eax
  ExtraContainerChanges_Data *v3; // esi

  result = ExtraDataList_GetContainerChanges(&a1->member.baseExtraList);
  if ( !result )
  {
    v2 = (ExtraContainerChanges_Data *)FormHeapAlloc(0x10u);
    if ( v2 )
      v3 = ContainerExtraData_constr(v2, a1);
    else
      v3 = 0;
    ExtraDataList_AddContainerChanges(&a1->member.baseExtraList, v3);
    return v3;
  }
  return result;
}
