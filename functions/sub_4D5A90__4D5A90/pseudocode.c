void __usercall sub_4D5A90(TESObjectCELL *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  ObjectListEntry *p_objectList; // ebx
  TESObjectREFR *refr; // edi
  int *v7; // esi
  float *ContainerChanges; // eax
  int v9; // eax
  int v10; // eax

  sub_496EA0((char *)&stru_B35C80, a1);
  p_objectList = &a1->members.objectList;
  if ( a1 != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      refr = p_objectList->refr;
      if ( p_objectList->refr )
      {
        if ( refr != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        {
          v7 = (int *)OblivionDynamicCast(
                        refr,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                        &Actor `RTTI Type Descriptor',
                        0);
          ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&refr->member.baseExtraList);
          if ( ContainerChanges )
            a4 = sub_492E70(ContainerChanges, a2, a4, a3, refr, (TESForm *)TESDataHandler_g_PlayerRef, 0, 0, 1);
          if ( v7 )
          {
            v9 = v7[2];
            if ( (v9 & 0x800) == 0 && (v9 & 0x20) == 0 )
            {
              a4 = flt_A31C80;
              (*(void (__thiscall **)(int *, PlayerCharacter *, float))(*v7 + 0x374))(
                v7,
                TESDataHandler_g_PlayerRef,
                flt_A31C80);
            }
            if ( !Actor::IsEssential((Actor *)v7) )
            {
              v10 = v7[2];
              if ( (v10 & 0x800) == 0
                && (v10 & 0x20) == 0
                && !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*v7 + 0x198))(v7, 0) )
              {
                (*(void (__thiscall **)(int *, PlayerCharacter *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*v7 + 0x32C))(
                  v7,
                  TESDataHandler_g_PlayerRef,
                  0,
                  0,
                  0,
                  0,
                  1);
                a4 = 0.0;
                Actor_Kill(v7, a2, a3, 0.0, 0, COERCE_INT(0.0));
              }
            }
          }
          if ( sub_4D7740(refr) )
            sub_4DBEA0(refr);
          sub_4D5370();
        }
      }
      p_objectList = p_objectList->next;
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, a1);
}
