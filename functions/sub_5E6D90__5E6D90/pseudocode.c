int __usercall sub_5E6D90@<eax>(Actor *a1@<ecx>, double st5_0@<st2>, double a3@<st1>)
{
  ExtraDataList *p_baseExtraList; // edi
  float *ContainerChanges; // ebx
  double v6; // st7
  signed int v7; // eax
  int result; // eax

  p_baseExtraList = &a1->members.super.super.baseExtraList; /*0x5e6d95*/
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&a1->members.super.super.baseExtraList); /*0x5e6d9f*/
  v6 = ((double (__thiscall *)(Actor *))a1->vtbl->Unk_94)(a1); /*0x5e6dad*/
  v7 = Double_To_SInt32(v6); /*0x5e6daf*/
  sub_491700(ContainerChanges, st5_0, a3, v6, (TESObjectREFR *)a1, v7, 0); /*0x5e6db8*/
  sub_675D50((ActorProcessManager *)&qword_B3BB2C[0x75], (PlayerCharacter *)a1, 0); /*0x5e6dc5*/
  ActorProcessManager_RemoveCrimesForCriminal((ActorProcessManager *)&qword_B3BB2C[0x75], a1); /*0x5e6dd0*/
  result = ((int (__thiscall *)(Actor *))a1->vtbl->IsTresspassing)(a1); /*0x5e6ddf*/
  if ( (_BYTE)result ) /*0x5e6de3*/
    sub_4246F0(p_baseExtraList); /*0x5e6dea*/
  return result; /*0x5e6de7*/
}
