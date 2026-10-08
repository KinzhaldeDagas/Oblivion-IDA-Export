// Verified caller path: ensures the actor's barter ContainerChanges exists, merges the actor and merchant-container changes, then calls TESObjectCELL_AddOwnedReferencesToBarterContainer for the actor's current cell. This anchors the ownership predicate's false faction-ownership argument to barter inventory construction.
void __userpurge sub_448F40(_DWORD *this@<ecx>, double a2@<st1>, double a3@<st0>, TESChildCELL *a4)
{
  unsigned int ***v5; // ecx
  ExtraContainerChanges_Data *v6; // eax
  int ***ContainerChanges; // eax
  BSExtraDataVtbl *MerchantContainer; // eax
  TESObjectREFR *v9; // esi
  int **v10; // eax
  int ***v11; // ebx
  TESObjectCELL *DwordAtOffset40; // eax

  v5 = (unsigned int ***)*(this + 0x337); /*0x448f67*/
  if ( v5 ) /*0x448f6f*/
  {
    sub_48F180(v5); /*0x448fb6*/
  }
  else
  {
    v6 = (ExtraContainerChanges_Data *)FormHeapAlloc(0x10u); /*0x448f73*/
    if ( v6 ) /*0x448f89*/
      *(this + 0x337) = ContainerExtraData_constr(v6, 0); /*0x448f9c*/
    else
      *(this + 0x337) = 0; /*0x448fae*/
  }
  ContainerChanges = (int ***)ExtraDataList_GetContainerChanges((ExtraDataList *)&a4[0x11]); /*0x448fc4*/
  sub_48E9A0(ContainerChanges, (ExtraContainerChanges_Data *)*(this + 0x337), (BSExtraDataVtbl *)a4, 0); /*0x448fd5*/
  MerchantContainer = ExtraDataList_GetMerchantContainer((ExtraDataList *)&a4[0x11]); /*0x448fdc*/
  v9 = (TESObjectREFR *)MerchantContainer; /*0x448fe1*/
  if ( MerchantContainer ) /*0x448fe5*/
  {
    v10 = (int **)ExtraDataList_GetContainerChanges((ExtraDataList *)&MerchantContainer[8].CompareTo); /*0x448fea*/
    v11 = (int ***)v10; /*0x448fef*/
    if ( v10 ) /*0x448ff3*/
    {
      sub_48E740(v10, a2, a3, v9); /*0x448ff8*/
      sub_48E9A0(v11, (ExtraContainerChanges_Data *)*(this + 0x337), (BSExtraDataVtbl *)v9, 0); /*0x449009*/
    }
  }
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x449010*/
  if ( DwordAtOffset40 ) /*0x449017*/
    TESObjectCELL_AddOwnedReferencesToBarterContainer( /*0x449023*/
      DwordAtOffset40,
      (TESObjectREFR *)a4,
      (ExtraContainerChanges_Data *)*(this + 0x337));
}
