char __thiscall sub_5E4A00(
        int this,
        unsigned __int8 *a2,
        signed int a3,
        int a4,
        bool (__thiscall *a5)(BSExtraData *this, BSExtraData *other),
        signed int *a6)
{
  int ****ContainerChanges; // eax

  ContainerChanges = (int ****)ExtraDataList_GetContainerChanges((ExtraDataList *)(this + 0x44));
  if ( ContainerChanges )
    return sub_487930(ContainerChanges, a2, a3, a4, a6, a5, (void *)this);
  else
    return 0;
}
