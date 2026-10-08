// Adds item/count and optional ExtraDataList to this reference's container data, normalizing ownership/reference-pointer state and emitting the inventory event.
void __thiscall TESObjectREFR_AddItem(TESObjectREFR *this, TESForm *item, ExtraDataList *extraList, int count)
{
  double v4; // st5
  double v5; // st6
  TESForm *Owner; // esi
  TESObjectREFR *ReferencePointer; // eax
  TESObjectREFR **v10; // esi
  Actor *v11; // edi
  int v12; // eax
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  ExtraDataList *extraLista; // [esp+14h] [ebp+8h]

  if ( extraList ) /*0x4ddcfb*/
  {
    if ( ExtraDataList_GetOwner(extraList) ) /*0x4ddd03*/
    {
      Owner = TESObjectREFR_GetOwner(this); /*0x4ddd15*/
      if ( ExtraDataList_GetOwner(extraList) == Owner ) /*0x4ddd1e*/
        ExtraDataList_RemoveOwner(extraList); /*0x4ddd22*/
    }
    ReferencePointer = ExtraDataList_GetReferencePointer(extraList); /*0x4ddd29*/
    if ( ReferencePointer ) /*0x4ddd30*/
    {
      v10 = sub_674E40((ActorProcessManager *)&qword_B3BB2C[0x75], ReferencePointer->member.super.refID, this); /*0x4ddd41*/
      extraLista = (ExtraDataList *)v10; /*0x4ddd45*/
      if ( v10 ) /*0x4ddd49*/
      {
        do /*0x4ddd72*/
        {
          v11 = (Actor *)*v10; /*0x4ddd50*/
          if ( !*v10 ) /*0x4ddd50*/
            break; /*0x4ddd54*/
          sub_5E2E00((Actor *)*v10); /*0x4ddd58*/
          if ( v12 ) /*0x4ddd61*/
            sub_5E03C0(v11, (int)this); /*0x4ddd64*/
          else
            sub_5E03C0(v11, 0); /*0x4ddd68*/
          v10 = (TESObjectREFR **)v10[1]; /*0x4ddd6d*/
        }
        while ( v10 ); /*0x4ddd72*/
        BSSimpleList_Clear(extraLista); /*0x4ddd78*/
        FormHeapFree((unsigned int)extraLista); /*0x4ddd82*/
      }
    }
  }
  if ( TESObjectREFR_GetContainer(this) ) /*0x4ddd8d*/
  {
    Script_AddEventToExtraScript(this, extraList, 1); /*0x4ddd9c*/
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(this); /*0x4ddda3*/
    ContainerExtraData_AddItem(ContainerExtraDataForRef, item, extraList, count); /*0x4dddb8*/
  }
  if ( this == (TESObjectREFR *)reference ) /*0x4dddc6*/
    sub_57A3B0(v4, v5, 0); /*0x4dddca*/
}
