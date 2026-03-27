char __cdecl sub_4F4980(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  int ***ContainerExtraDataForRef; // eax

  *a4 = 0.0;
  if ( a1 )
  {
    if ( a1->vtbl->IsActor(a1) )
    {
      if ( a2 )
      {
        if ( TESObjectREFR_GetContainer(a1) )
        {
          ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a1);
          if ( ContainerExtraDataForRef )
          {
            if ( ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, a2, 0) )
              *a4 = 1.0;
          }
        }
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetEquipped >> %0.2f", *a4);
  return 1;
}
