void __thiscall sub_4D88C0(TESObjectREFR *this, bool (__thiscall *a2)(BSExtraData *this, BSExtraData *other))
{
  int ****ContainerExtraDataForRef; // eax

  if ( TESObjectREFR_GetContainer(this) ) /*0x4d88c3*/
  {
    ContainerExtraDataForRef = (int ****)ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4d88d0*/
    sub_487820(ContainerExtraDataForRef, a2); /*0x4d88db*/
  }
}
