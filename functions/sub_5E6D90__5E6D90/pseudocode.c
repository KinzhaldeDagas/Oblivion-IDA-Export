int __usercall sub_5E6D90@<eax>(Actor *a1@<ecx>, double st5_0@<st2>, double a3@<st1>)
{
  ExtraDataList *p_baseExtraList; // edi
  float *ContainerChanges; // ebx
  double v6; // st7
  signed int v7; // eax
  int result; // eax

  p_baseExtraList = &a1->members.super.super.baseExtraList;
  ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&a1->members.super.super.baseExtraList);
  v6 = ((double (__thiscall *)(Actor *))a1->vtbl->Unk_94)(a1);
  v7 = Double_To_SInt32(v6);
  sub_491700(ContainerChanges, st5_0, a3, v6, (TESObjectREFR *)a1, v7, 0);
  sub_675D50((TESObjectREFR *)a1, 0);
  sub_675E90(&ActorProcessManager_ptr, (int)a1);
  result = ((int (__thiscall *)(Actor *))a1->vtbl->IsTresspassing)(a1);
  if ( (_BYTE)result )
    sub_4246F0(p_baseExtraList);
  return result;
}
