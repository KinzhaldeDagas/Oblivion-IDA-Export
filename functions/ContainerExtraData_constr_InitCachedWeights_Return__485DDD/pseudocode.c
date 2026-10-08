// positive sp value has been detected, the output may be wrong!
ExtraContainerChanges_Data *__userpurge ContainerExtraData_constr_::InitCachedWeights_Return@<eax>(
        ExtraContainerChanges_Data *a1@<esi>,
        int a2)
{
  double v2; // st7

  v2 = kTerrainLODQuadRayDirectionZ; /*0x485ddd*/
  a1->totalWeight = kTerrainLODQuadRayDirectionZ; /*0x485de5*/
  a1->armorWeight = v2; /*0x485de8*/
  return a1; /*0x485dfb*/
}
