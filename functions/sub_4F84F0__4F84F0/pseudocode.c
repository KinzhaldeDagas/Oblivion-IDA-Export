char __cdecl sub_4F84F0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectREFR *v7; // esi
  ExtraDataList *****ContainerExtraDataForRef; // eax
  _DWORD *EquippedInstance; // eax
  _BYTE *v10; // eax
  double v11; // st5

  v7 = 0;
  if ( a1 )
  {
    if ( a1->vtbl->IsActor(a1) )
      v7 = a1;
  }
  *a4 = 0.0;
  if ( v7 )
  {
    if ( TESObjectREFR_GetContainer(v7) )
    {
      ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(a1);
      if ( ContainerExtraDataForRef )
      {
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, 2, 0);
        if ( EquippedInstance )
        {
          v10 = (_BYTE *)EquippedInstance[2];
          if ( v10 )
          {
            if ( v10[4] == 0x14 )
            {
              if ( TESObjectARMO_ISHeavyArmor(v10) )
                v11 = dbl_A3D0C0;
              else
                v11 = 1.0;
              *a4 = v11;
            }
          }
        }
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("Armor Rating upper body is %0.2f", *a4);
  return 1;
}
