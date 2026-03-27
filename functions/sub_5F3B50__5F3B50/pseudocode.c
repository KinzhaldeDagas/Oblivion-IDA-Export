int __usercall sub_5F3B50@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v2; // edi
  int BaseCalcAVi; // eax
  int v6; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  int v9; // edx
  unsigned int *v10; // esi
  unsigned int v11; // eax

  v2 = 0;
  if ( byte_B333B8 )
    return 5;
  if ( *(_DWORD *)(a1 + 0x58) )
  {
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x58) + 0x2C0))(*(_DWORD *)(a1 + 0x58)) & 0x400) != 0
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x58) + 0x2C0))(*(_DWORD *)(a1 + 0x58)) & 0x800) == 0 )
    {
      BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, a2, 0, a1, 0x1F);
      if ( Calc_MasteryFromSkill(BaseCalcAVi) >= 2 )
        return 0;
    }
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x24 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
    if ( v6 )
      return Double_To_SInt32(*(float *)(v6 + 0x110));
  }
  else
  {
    ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44));
    if ( ContainerChanges )
    {
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 5, 0);
      v10 = EquippedInstance;
      if ( EquippedInstance )
      {
        v11 = EquippedInstance[2];
        if ( v11 )
          v2 = Double_To_SInt32(*(float *)(v11 + 0x58));
        ContainerEntryExtraData_DestroyDataTable(v10, v9);
        FormHeapFree((unsigned int)v10);
      }
    }
  }
  return v2;
}
