void __usercall sub_4CC660(TESObjectCELL *a1@<ecx>, signed int a2@<edi>)
{
  TESObjectCELL *v2; // esi
  ObjectListEntry *p_objectList; // ebx
  ObjectListEntry *v4; // ebp
  int refr; // edi
  int type; // eax
  ObjectListEntry *next; // eax
  BSSimpleList_VoidPtr *v8; // esi
  BSSimpleList_VoidPtr::NodeVoid *v9; // eax

  v2 = a1;
  sub_496EA0((char *)&stru_B35C80, a1);
  p_objectList = &v2->members.objectList;
  v4 = 0;
  if ( v2 != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      if ( !p_objectList->next && !p_objectList->refr )
        break;
      refr = (int)p_objectList->refr;
      type = p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr)->member.type;
      if ( type >= 0x23 )
      {
        if ( type <= 0x24 )
        {
          if ( sub_4D7A50((_BYTE *)refr) )
          {
            (*(void (__thiscall **)(int, _DWORD, signed int))(*(_DWORD *)refr + 0x150))(refr, 0, a2);
            sub_4D7A90((int *)refr, 0);
            if ( v4 )
            {
              BSSimpleList_Remove(v4, refr);
              p_objectList = v4->next;
            }
            else
            {
              next = p_objectList->next;
              if ( next )
              {
                p_objectList->next = next->next;
                p_objectList->refr = next->refr;
                FormHeapFree((unsigned int)next);
              }
              else
              {
                p_objectList->refr = 0;
              }
            }
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)refr + 0x194))(refr, 0);
            v8 = (BSSimpleList_VoidPtr *)sub_420480((ExtraDataList *)(refr + 0x44));
            if ( v8 )
            {
              while ( !BSSimpleList_IsEmpty(v8) )
              {
                sub_4203E0((ExtraDataList *)((char *)v8->firstNode.data + 0x44), 0);
                sub_4D6640(v8->firstNode.data);
                v9 = v8->firstNode.next;
                if ( v9 )
                {
                  v8->firstNode.next = v9->next;
                  v8->firstNode.data = v9->data;
                  FormHeapFree((unsigned int)v9);
                }
                else
                {
                  v8->firstNode.data = 0;
                }
              }
            }
            a2 = 1;
            (*(void (__thiscall **)(int))(*(_DWORD *)refr + 0x10))(refr);
            v2 = a1;
            continue;
          }
        }
        else if ( type == 0x25 )
        {
          if ( sub_4D7A50((_BYTE *)refr) )
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)refr + 0x150))(refr, 0);
            sub_4D7A90((int *)refr, 0);
          }
        }
      }
      v4 = p_objectList;
      p_objectList = p_objectList->next;
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, v2);
}
