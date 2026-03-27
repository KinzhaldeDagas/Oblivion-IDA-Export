void __userpurge sub_4CB980(TESObjectCELL *a1@<ecx>, double a2@<st0>, int a3)
{
  ObjectListEntry *p_objectList; // edi
  float v5; // esi

  if ( a3 )
  {
    sub_496EA0((char *)&stru_B35C80, a1);
    p_objectList = &a1->members.objectList;
    if ( a1 != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        v5 = *(float *)&p_objectList->refr;
        if ( p_objectList->refr )
        {
          if ( *(_BYTE *)((*(int (__thiscall **)(TESObjectREFR *))(*(_DWORD *)LODWORD(v5) + 0x170))(p_objectList->refr)
                        + 4) == 0x29 )
            sub_4F1AC0(a3, a2, v5);
        }
        p_objectList = p_objectList->next;
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, a1);
  }
}
