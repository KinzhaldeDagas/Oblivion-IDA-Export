char __cdecl sub_4F84F0(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESObjectREFR *v4; // esi
  ExtraDataList *****ContainerExtraDataForRef; // eax
  _DWORD *EquippedInstance; // eax
  _BYTE *v7; // eax
  double v8; // st7

  v4 = 0; /*0x4f84f7*/
  if ( a1 ) /*0x4f84fb*/
  {
    if ( a1->vtbl->IsActor(a1) ) /*0x4f8507*/
      v4 = a1; /*0x4f850d*/
  }
  *a4 = 0.0; /*0x4f8517*/
  if ( v4 ) /*0x4f8519*/
  {
    if ( TESObjectREFR_GetContainer(v4) ) /*0x4f851d*/
    {
      ContainerExtraDataForRef = (ExtraDataList *****)ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x4f8528*/
      if ( ContainerExtraDataForRef ) /*0x4f8532*/
      {
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerExtraDataForRef, 2, 0); /*0x4f853a*/
        if ( EquippedInstance ) /*0x4f8541*/
        {
          v7 = (_BYTE *)EquippedInstance[2]; /*0x4f8543*/
          if ( v7 ) /*0x4f8548*/
          {
            if ( v7[4] == 0x14 ) /*0x4f854e*/
            {
              if ( TESObjectARMO_ISHeavyArmor(v7) ) /*0x4f8552*/
                v8 = dbl_A3D0C0; /*0x4f855f*/
              else
                v8 = 1.0; /*0x4f855b*/
              *a4 = v8; /*0x4f8565*/
            }
          }
        }
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f8567*/
    Interface_ConsolePrint("Armor Rating upper body is %0.2f", *a4); /*0x4f857d*/
  return 1; /*0x4f8585*/
}
