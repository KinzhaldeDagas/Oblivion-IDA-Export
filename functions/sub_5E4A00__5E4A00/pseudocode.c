char __thiscall sub_5E4A00(
        int this,
        TESForm *a2,
        signed int a3,
        int a4,
        bool (__thiscall *a5)(BSExtraData *this, BSExtraData *other),
        signed int *a6)
{
  int ****ContainerChanges; // eax

  ContainerChanges = (int ****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44)); /*0x5e4a06*/
  if ( ContainerChanges ) /*0x5e4a0d*/
    return sub_487930(ContainerChanges, a2, a3, a4, a6, a5, (void *)this); /*0x5e4a2b*/
  else
    return 0; /*0x5e4a34*/
}
