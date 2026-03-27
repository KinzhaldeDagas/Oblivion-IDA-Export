int __thiscall sub_4CB4D0(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // esi
  PlayerCharacter *refr; // ecx
  bool v4; // zf

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      refr = (PlayerCharacter *)p_objectList->refr;
      v4 = p_objectList->refr == 0;
      p_objectList = p_objectList->next;
      if ( !v4 && refr != TESDataHandler_g_PlayerRef )
        ((void (__thiscall *)(PlayerCharacter *, _DWORD))refr->vtbl->super.super.super.Set3D)(refr, 0);
    }
    while ( p_objectList );
  }
  return sub_496F50(&stru_B35C80, this);
}
