void __thiscall sub_4CB9E0(TESObjectCELL *this, _DWORD *a2)
{
  ObjectListEntry *p_objectList; // edi
  int refr; // esi
  int v5; // eax

  if ( a2 )
  {
    sub_496EA0((char *)&stru_B35C80, this);
    p_objectList = &this->members.objectList;
    if ( this != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        refr = (int)p_objectList->refr;
        if ( p_objectList->refr )
        {
          if ( sub_4D74B0(&p_objectList->refr->vtbl) )
          {
            v5 = *(_DWORD *)(refr + 8);
            if ( (v5 & 0x20) == 0 && (v5 & 0x800) == 0 )
              BSSimpleList_PushFront(a2, refr);
          }
        }
        p_objectList = p_objectList->next;
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, this);
  }
}
