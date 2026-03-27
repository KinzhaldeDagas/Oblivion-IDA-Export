void __thiscall sub_4D88C0(TESObjectREFR *this, bool (__thiscall *a2)(BSExtraData *this, BSExtraData *other))
{
  int ****ContainerExtraDataForRef; // eax

  if ( TESObjectREFR_GetContainer(this) )
  {
    ContainerExtraDataForRef = (int ****)ContainerExtraData_GetContainerExtraDataForRef(this);
    sub_487820(ContainerExtraDataForRef, a2);
  }
}
