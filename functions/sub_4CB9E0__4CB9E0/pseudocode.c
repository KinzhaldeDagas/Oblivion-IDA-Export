void __thiscall sub_4CB9E0(TESObjectCELL *this, _DWORD *a2)
{
  ObjectListEntry *p_objectList; // edi
  int refr; // esi
  int v5; // eax

  if ( a2 ) /*0x4cb9ea*/
  {
    sub_496EA0((char *)&unk_B35C80, this); /*0x4cb9f3*/
    p_objectList = &this->members.objectList; /*0x4cb9f8*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb9fd*/
    {
      do /*0x4cba32*/
      {
        refr = (int)p_objectList->refr; /*0x4cba00*/
        if ( p_objectList->refr ) /*0x4cba00*/
        {
          if ( sub_4D74B0(&p_objectList->refr->vtbl) ) /*0x4cba08*/
          {
            v5 = *(_DWORD *)(refr + 8); /*0x4cba11*/
            if ( (v5 & 0x20) == 0 && (v5 & 0x800) == 0 ) /*0x4cba23*/
              BSSimpleList_PushFront(a2, refr); /*0x4cba28*/
          }
        }
        p_objectList = p_objectList->next; /*0x4cba2d*/
      }
      while ( p_objectList ); /*0x4cba32*/
    }
    sub_496F50(&unk_B35C80, this); /*0x4cba3b*/
  }
}
