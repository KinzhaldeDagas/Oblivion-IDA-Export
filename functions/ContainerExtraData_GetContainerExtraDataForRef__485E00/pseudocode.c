ExtraContainerChanges_Data *__cdecl ContainerExtraData_GetContainerExtraDataForRef(TESObjectREFR *a1)
{
  ExtraContainerChanges_Data *result; // eax
  ExtraContainerChanges_Data *v2; // eax
  ExtraContainerChanges_Data *v3; // esi

  result = ExtraDataList_GetContainerChanges(&a1->member.baseExtraList); /*0x485e2b*/
  if ( !result ) /*0x485e32*/
  {
    v2 = (ExtraContainerChanges_Data *)FormHeapAlloc(0x10u); /*0x485e36*/
    if ( v2 ) /*0x485e4c*/
      v3 = ContainerExtraData_constr(v2, a1); /*0x485e56*/
    else
      v3 = 0; /*0x485e5a*/
    ExtraDataList_AddContainerChanges(&a1->member.baseExtraList, v3); /*0x485e67*/
    return v3; /*0x485e6c*/
  }
  return result; /*0x485e6e*/
}
