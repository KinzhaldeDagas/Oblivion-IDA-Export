int __thiscall sub_4CB670(TESObjectCELL *this, char a2)
{
  ObjectListEntry *p_objectList; // esi
  char *refr; // ecx
  bool v5; // zf

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      refr = (char *)p_objectList->refr;
      v5 = p_objectList->refr == 0;
      p_objectList = p_objectList->next;
      if ( !v5 )
      {
        if ( a2 )
          sub_4D80C0(refr, 0);
        else
          sub_4D8150(refr, 0);
      }
    }
    while ( p_objectList );
  }
  return sub_496F50(&stru_B35C80, this);
}
