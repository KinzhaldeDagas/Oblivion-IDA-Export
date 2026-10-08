char __cdecl sub_4F4980(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  int ***ContainerExtraDataForRef; // eax

  *a4 = 0.0; /*0x4f4987*/
  if ( a1 ) /*0x4f4990*/
  {
    if ( a1->vtbl->IsActor(a1) ) /*0x4f499c*/
    {
      if ( a2 ) /*0x4f49a9*/
      {
        if ( TESObjectREFR_GetContainer(a1) ) /*0x4f49ad*/
        {
          ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x4f49b8*/
          if ( ContainerExtraDataForRef ) /*0x4f49c2*/
          {
            if ( ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, a2, 0) ) /*0x4f49c9*/
              *a4 = 1.0; /*0x4f49d4*/
          }
        }
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f49d7*/
    Interface_ConsolePrint("GetEquipped >> %0.2f", *a4); /*0x4f49ed*/
  return 1; /*0x4f49f5*/
}
