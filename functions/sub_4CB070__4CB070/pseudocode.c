// Verified Oblivion behavior: scans the supplied cell/worldspace, filters deleted (0x20), disabled (0x800), and 0x2000 references, requires a door whose randomTeleport list contains destinationSpace, records an existing ExtraTeleport reference when eligible, and randomly chooses a matching door without ExtraTeleport. 0x2000 meaning and the ultimate high-level caller purpose remain Unknown. Fallout divergence (Verified on each binary independently): Fallout LinkRandomTeleportDoors creates paired DoorTeleportData/ExtraTeleport state; Fallout GetNodeConnections enumerates cell/worldspace door lists during search. Oblivion uses this base-form space list plus a runtime destination-door scan; do not infer function equivalence from naming.
TESObjectREFR *__cdecl DoorTeleport_FindRandomDestinationDoor(
        TESForm *ownerSpace,
        TESForm *destinationSpace,
        TESObjectREFR **existingTeleportDoorOut)
{
  TESObjectREFR **p_refr; // ebp
  _DWORD *v5; // ebx
  TESObjectCELL *v6; // eax
  _DWORD *v7; // eax
  TESObjectREFR *v8; // esi
  TESForm::FormFlags flags; // eax
  TESForm *v10; // eax
  TESObjectDOOR *v11; // eax
  TESObjectDOOR *v12; // edi
  int v13; // eax
  int v14; // esi
  BSSimpleList_VoidPtr *v15; // ecx
  BSSimpleList_VoidPtr::NodeVoid *next; // edx
  TESObjectREFR *data; // [esp+8h] [ebp-14h]
  int v19; // [esp+Ch] [ebp-10h]
  int v20; // [esp+10h] [ebp-Ch]
  BSSimpleList_VoidPtr v21; // [esp+14h] [ebp-8h] BYREF
  TESObjectCELL *a2; // [esp+20h] [ebp+4h]

  data = 0; /*0x4cb07d*/
  if ( !ownerSpace || !destinationSpace || !existingTeleportDoorOut || ownerSpace == destinationSpace ) /*0x4cb09f*/
    return 0; /*0x4cb09f*/
  v19 = 0; /*0x4cb0b4*/
  v21.firstNode.data = 0; /*0x4cb0b8*/
  v21.firstNode.next = 0; /*0x4cb0bc*/
  p_refr = 0; /*0x4cb0c0*/
  v5 = 0; /*0x4cb0c2*/
  v6 = (TESObjectCELL *)OblivionDynamicCast( /*0x4cb0c4*/
                          ownerSpace,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  v20 = (int)v6; /*0x4cb0ce*/
  a2 = 0; /*0x4cb0d2*/
  if ( v6 ) /*0x4cb0d6*/
  {
    p_refr = &v6->members.objectList.refr; /*0x4cb0d8*/
LABEL_10:
    a2 = v6; /*0x4cb118*/
    goto LABEL_11; /*0x4cb118*/
  }
  v7 = OblivionDynamicCast( /*0x4cb0ec*/
         ownerSpace,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESWorldSpace `RTTI Type Descriptor',
         0);
  v5 = v7; /*0x4cb0f1*/
  if ( v7 && sub_4EF1E0(v7) ) /*0x4cb0fc*/
  {
    p_refr = (TESObjectREFR **)(sub_4EF1E0(v5) + 0x48); /*0x4cb110*/
    v6 = (TESObjectCELL *)sub_4EF1E0(v5); /*0x4cb113*/
    goto LABEL_10; /*0x4cb113*/
  }
LABEL_11:
  sub_496EA0((char *)&unk_B35C80, a2); /*0x4cb11c*/
  for ( ; p_refr; p_refr = (TESObjectREFR **)p_refr[1] ) /*0x4cb12d*/
  {
    if ( !p_refr[1] && !*p_refr ) /*0x4cb139*/
      break; /*0x4cb13d*/
    v8 = *p_refr; /*0x4cb143*/
    if ( (*p_refr)->vtbl->GetBaseForm(*p_refr)->member.type == kFormType_Door ) /*0x4cb156*/
    {
      flags = v8->member.super.flags; /*0x4cb15c*/
      if ( (flags & 0x20) == 0 && (flags & 0x800) == 0 && (flags & 0x2000) == 0 ) /*0x4cb180*/
      {
        v10 = v8->vtbl->GetBaseForm(v8); /*0x4cb19e*/
        v11 = (TESObjectDOOR *)OblivionDynamicCast( /*0x4cb1a1*/
                                 v10,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                 &TESObjectDOOR `RTTI Type Descriptor',
                                 0);
        v12 = v11; /*0x4cb1a6*/
        if ( v11 ) /*0x4cb1ad*/
        {
          if ( TESObjectDOOR_HasRandomTeleportSpaces(v11) /*0x4cb1c1*/
            && TESObjectDOOR_ContainsRandomTeleportSpace(v12, destinationSpace) )
          {
            if ( TESObjectREFR_GetTeleportData(v8) ) /*0x4cb1cc*/
            {
              if ( !*existingTeleportDoorOut && (v20 && sub_4CA6F0(v20) || v5 && sub_4EF150(v5)) ) /*0x4cb206*/
                *existingTeleportDoorOut = v8; /*0x4cb213*/
            }
            else
            {
              BSSimpleList_PushFront(&v21, (int)v8); /*0x4cb1da*/
              ++v19; /*0x4cb1df*/
            }
          }
        }
      }
    }
  }
  sub_496F50(&unk_B35C80, a2); /*0x4cb22e*/
  if ( !v19 || BSSimpleList_IsEmpty(&v21) ) /*0x4cb241*/
    return 0; /*0x4cb2a4*/
  v13 = Game_RandomIntBelow(v19); /*0x4cb24b*/
  v14 = 0; /*0x4cb253*/
  v15 = &v21; /*0x4cb255*/
  do /*0x4cb260*/
  {
    next = v15->firstNode.next; /*0x4cb260*/
    if ( !next && !v15->firstNode.data ) /*0x4cb267*/
      break; /*0x4cb267*/
    if ( v14 == v13 ) /*0x4cb26d*/
    {
      data = (TESObjectREFR *)v15->firstNode.data; /*0x4cb28d*/
      break; /*0x4cb28d*/
    }
    v15 = (BSSimpleList_VoidPtr *)v15->firstNode.next; /*0x4cb26f*/
    ++v14; /*0x4cb271*/
  }
  while ( next ); /*0x4cb260*/
  BSSimpleList_Clear(&v21); /*0x4cb278*/
  return data; /*0x4cb285*/
}
