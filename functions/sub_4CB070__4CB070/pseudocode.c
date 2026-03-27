void *__cdecl sub_4CB070(TESObjectCELL *a2, unsigned __int8 *arg4, TESObjectREFR **a3)
{
  ObjectListEntry *p_objectList; // ebp
  _DWORD *v5; // ebx
  TESObjectCELL *v6; // eax
  _DWORD *v7; // eax
  TESObjectREFR *refr; // esi
  TESForm::FormFlags flags; // eax
  TESForm *v10; // eax
  char *v11; // eax
  char *v12; // edi
  int v13; // eax
  int v14; // esi
  BSSimpleList_VoidPtr *v15; // ecx
  BSSimpleList_VoidPtr::NodeVoid *next; // edx
  void *data; // [esp+8h] [ebp-14h]
  int v19; // [esp+Ch] [ebp-10h]
  int v20; // [esp+10h] [ebp-Ch]
  BSSimpleList_VoidPtr v21; // [esp+14h] [ebp-8h] BYREF
  TESObjectCELL *a2a; // [esp+20h] [ebp+4h]

  data = 0;
  if ( !a2 || !arg4 || !a3 || a2 == (TESObjectCELL *)arg4 )
    return 0;
  v19 = 0;
  v21.firstNode.data = 0;
  v21.firstNode.next = 0;
  p_objectList = 0;
  v5 = 0;
  v6 = (TESObjectCELL *)OblivionDynamicCast(
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  v20 = (int)v6;
  a2a = 0;
  if ( v6 )
  {
    p_objectList = &v6->members.objectList;
LABEL_10:
    a2a = v6;
    goto LABEL_11;
  }
  v7 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESWorldSpace `RTTI Type Descriptor',
         0);
  v5 = v7;
  if ( v7 && sub_4EF1E0(v7) )
  {
    p_objectList = (ObjectListEntry *)(sub_4EF1E0(v5) + 0x48);
    v6 = (TESObjectCELL *)sub_4EF1E0(v5);
    goto LABEL_10;
  }
LABEL_11:
  sub_496EA0((char *)&stru_B35C80, a2a);
  for ( ; p_objectList; p_objectList = p_objectList->next )
  {
    if ( !p_objectList->next && !p_objectList->refr )
      break;
    refr = p_objectList->refr;
    if ( p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr)->member.type == kFormType_Door )
    {
      flags = refr->member.super.flags;
      if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 && (flags & 0x2000) == 0 )
      {
        v10 = refr->vtbl->GetBaseForm(refr);
        v11 = (char *)OblivionDynamicCast(
                        v10,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESObjectDOOR `RTTI Type Descriptor',
                        0);
        v12 = v11;
        if ( v11 )
        {
          if ( sub_4B78E0(v11) )
          {
            if ( sub_4B80A0(v12, arg4) )
            {
              if ( GetTeleportExtraData(refr) )
              {
                if ( !*a3 && (v20 && sub_4CA6F0(v20) || v5 && sub_4EF150(v5)) )
                  *a3 = refr;
              }
              else
              {
                BSSimpleList_PushFront(&v21, (int)refr);
                ++v19;
              }
            }
          }
        }
      }
    }
  }
  sub_496F50(&stru_B35C80, a2a);
  if ( !v19 || BSSimpleList_IsEmpty(&v21) )
    return 0;
  v13 = Rand3(v19);
  v14 = 0;
  v15 = &v21;
  do
  {
    next = v15->firstNode.next;
    if ( !next && !v15->firstNode.data )
      break;
    if ( v14 == v13 )
    {
      data = v15->firstNode.data;
      break;
    }
    v15 = (BSSimpleList_VoidPtr *)v15->firstNode.next;
    ++v14;
  }
  while ( next );
  BSSimpleList_Clear(&v21);
  return data;
}
