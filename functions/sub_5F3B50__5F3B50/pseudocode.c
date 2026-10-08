// Oblivion boot-noise input. Returns a default of 5 in complex-scene mode; suppresses boot weight for qualifying sneaking mastery/process state; otherwise reads weight from the relevant base form or the equipped footwear instance. Fallout corroborates the GetBootWeight label only.
int __usercall Actor_GetBootWeight@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v2; // edi
  int BaseCalcAVi; // eax
  int v6; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  int v9; // edx
  unsigned int *v10; // esi
  unsigned int v11; // eax

  v2 = 0; /*0x5f3b52*/
  if ( unk_B333B8 ) /*0x5f3b54*/
    return 5; /*0x5f3b66*/
  if ( *(_DWORD *)(a1 + 0x58) ) /*0x5f3b67*/
  {
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x58) + 0x2C0))(*(_DWORD *)(a1 + 0x58)) & 0x400) != 0 /*0x5f3b90*/
      && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x58) + 0x2C0))(*(_DWORD *)(a1 + 0x58)) & 0x800) == 0 )
    {
      BaseCalcAVi = Actor_GetBaseCalcAVi((int *)a1, a2, 0, a1, 0x1F); /*0x5f3b96*/
      if ( Calc_MasteryFromSkill(BaseCalcAVi) >= 2 ) /*0x5f3ba7*/
        return 0; /*0x5f3bad*/
    }
  }
  if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x24 ) /*0x5f3bbe*/
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x5f3bca*/
    if ( v6 ) /*0x5f3bce*/
      return Double_To_SInt32(*(float *)(v6 + 0x110)); /*0x5f3bdf*/
  }
  else
  {
    ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44)); /*0x5f3be3*/
    if ( ContainerChanges ) /*0x5f3bea*/
    {
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 5, 0); /*0x5f3bf2*/
      v10 = EquippedInstance; /*0x5f3bf7*/
      if ( EquippedInstance ) /*0x5f3bfb*/
      {
        v11 = EquippedInstance[2]; /*0x5f3bfd*/
        if ( v11 ) /*0x5f3c02*/
          v2 = Double_To_SInt32(*(float *)(v11 + 0x58)); /*0x5f3c0c*/
        ContainerEntryExtraData_DestroyDataTable(v10, v9); /*0x5f3c10*/
        FormHeapFree((unsigned int)v10); /*0x5f3c16*/
      }
    }
  }
  return v2; /*0x5f3b5f*/
}
