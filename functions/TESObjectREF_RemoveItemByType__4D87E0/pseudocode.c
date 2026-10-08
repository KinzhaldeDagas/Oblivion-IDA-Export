void __userpurge TESObjectREF_RemoveItemByType(
        TESObjectREFR *this@<ecx>,
        double st6_0@<st1>,
        double a3@<st0>,
        int a4,
        int a5,
        int a6)
{
  double v6; // st5
  int v7; // esi
  ExtraContainerChanges_Data *v8; // ebx
  TESForm *v9; // eax
  signed int v10; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  ExtraContainerChanges_Data *i; // [esp+0h] [ebp-4h] BYREF

  if ( TESObjectREFR_GetContainer(this) ) /*0x4d87e3*/
  {
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d87ee*/
    i = ContainerExtraDataForRef; /*0x491690*/
    v6 = kTerrainLODQuadRayDirectionZ; /*0x491691*/
    v7 = a6; /*0x491699*/
    v8 = ContainerExtraDataForRef; /*0x49169f*/
    ContainerExtraDataForRef->totalWeight = kTerrainLODQuadRayDirectionZ; /*0x4916a1*/
    for ( i = 0; v7 > 0; v7 -= v10 ) /*0x4916ac*/
    {
      v9 = (TESForm *)sub_486240(v8, a4, (int *)&i); /*0x4916c0*/
      v10 = (signed int)i; /*0x4916c5*/
      if ( (int)i > v7 ) /*0x4916cb*/
      {
        v10 = v7; /*0x4916cd*/
        i = (ExtraContainerChanges_Data *)v7; /*0x4916cf*/
      }
      ContainerExtraData_RemoveForm((int ***)v8, v6, a3, st6_0, 0, v9, a5, v10, 0, 0, 0, 0, 0, 1, 0); /*0x4916e8*/
    }
  }
}
