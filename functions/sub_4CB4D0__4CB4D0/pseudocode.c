int __thiscall sub_4CB4D0(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // esi
  PlayerCharacter *refr; // ecx
  bool v4; // zf

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cb4da*/
  p_objectList = &this->members.objectList; /*0x4cb4df*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb4e4*/
  {
    do /*0x4cb505*/
    {
      refr = (PlayerCharacter *)p_objectList->refr; /*0x4cb4e6*/
      v4 = p_objectList->refr == 0; /*0x4cb4e8*/
      p_objectList = p_objectList->next; /*0x4cb4ea*/
      if ( !v4 && refr != reference ) /*0x4cb4f5*/
        ((void (__thiscall *)(PlayerCharacter *, _DWORD))refr->vtbl->super.super.super.Set3D)(refr, 0); /*0x4cb501*/
    }
    while ( p_objectList ); /*0x4cb505*/
  }
  return sub_496F50(&unk_B35C80, this); /*0x4cb512*/
}
