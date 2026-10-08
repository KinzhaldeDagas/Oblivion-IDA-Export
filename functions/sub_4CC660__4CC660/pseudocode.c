void __usercall sub_4CC660(TESObjectCELL *a1@<ecx>, signed int a2@<edi>)
{
  TESObjectCELL *v2; // esi
  ObjectListEntry *p_objectList; // ebx
  int *v4; // ebp
  int refr; // edi
  int type; // eax
  ObjectListEntry *next; // eax
  BSSimpleList_VoidPtr *DroppedItemList; // esi
  BSSimpleList_VoidPtr::NodeVoid *v9; // eax

  v2 = a1; /*0x4cc664*/
  sub_496EA0((char *)&unk_B35C80, a1); /*0x4cc670*/
  p_objectList = &v2->members.objectList; /*0x4cc675*/
  v4 = 0; /*0x4cc678*/
  if ( v2 != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cc67c*/
  {
    do /*0x4cc680*/
    {
      if ( !p_objectList->next && !p_objectList->refr ) /*0x4cc689*/
        break; /*0x4cc689*/
      refr = (int)p_objectList->refr; /*0x4cc68b*/
      type = p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr)->member.type; /*0x4cc699*/
      if ( type >= 0x23 ) /*0x4cc6a0*/
      {
        if ( type <= 0x24 ) /*0x4cc6a5*/
        {
          if ( sub_4D7A50((_BYTE *)refr) ) /*0x4cc6ea*/
          {
            (*(void (__thiscall **)(int, _DWORD, signed int))(*(_DWORD *)refr + 0x150))(refr, 0, a2); /*0x4cc6ff*/
            sub_4D7A90((int *)refr, 0); /*0x4cc705*/
            if ( v4 ) /*0x4cc70c*/
            {
              BSSimpleList_Remove(v4, refr); /*0x4cc711*/
              p_objectList = (ObjectListEntry *)v4[1]; /*0x4cc716*/
            }
            else
            {
              next = p_objectList->next; /*0x4cc71b*/
              if ( next ) /*0x4cc720*/
              {
                p_objectList->next = next->next; /*0x4cc725*/
                p_objectList->refr = next->refr; /*0x4cc72b*/
                FormHeapFree((unsigned int)next); /*0x4cc72d*/
              }
              else
              {
                p_objectList->refr = 0; /*0x4cc737*/
              }
            }
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)refr + 0x194))(refr, 0); /*0x4cc749*/
            DroppedItemList = (BSSimpleList_VoidPtr *)ExtraDataList_GetDroppedItemList((ExtraDataList *)(refr + 0x44)); /*0x4cc753*/
            if ( DroppedItemList ) /*0x4cc757*/
            {
              while ( !BSSimpleList_IsEmpty(DroppedItemList) ) /*0x4cc769*/
              {
                ExtraDataList_SetItemDropper((ExtraDataList *)((char *)DroppedItemList->firstNode.data + 0x44), 0); /*0x4cc772*/
                sub_4D6640(DroppedItemList->firstNode.data); /*0x4cc779*/
                v9 = DroppedItemList->firstNode.next; /*0x4cc77e*/
                if ( v9 ) /*0x4cc783*/
                {
                  DroppedItemList->firstNode.next = v9->next; /*0x4cc788*/
                  DroppedItemList->firstNode.data = v9->data; /*0x4cc78e*/
                  FormHeapFree((unsigned int)v9); /*0x4cc790*/
                }
                else
                {
                  DroppedItemList->firstNode.data = 0; /*0x4cc79a*/
                }
              }
            }
            a2 = 1; /*0x4cc7a7*/
            (*(void (__thiscall **)(int))(*(_DWORD *)refr + 0x10))(refr); /*0x4cc7ab*/
            v2 = a1; /*0x4cc7ad*/
            continue; /*0x4cc7b1*/
          }
        }
        else if ( type == 0x25 && sub_4D7A50((_BYTE *)refr) ) /*0x4cc6ae*/
        {
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)refr + 0x150))(refr, 0); /*0x4cc6c3*/
          sub_4D7A90((int *)refr, 0); /*0x4cc6c9*/
        }
      }
      v4 = (int *)p_objectList; /*0x4cc6ce*/
      p_objectList = p_objectList->next; /*0x4cc6d0*/
    }
    while ( p_objectList ); /*0x4cc680*/
  }
  sub_496F50(&unk_B35C80, v2); /*0x4cc6d8*/
}
