int __thiscall sub_4CB730(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // esi
  int v3; // ebp
  TESObjectREFR *refr; // ecx
  bool v5; // zf

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cb73b*/
  p_objectList = &this->members.objectList; /*0x4cb740*/
  v3 = 0; /*0x4cb743*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb747*/
  {
    do /*0x4cb76e*/
    {
      refr = p_objectList->refr; /*0x4cb750*/
      v5 = p_objectList->refr == 0; /*0x4cb752*/
      p_objectList = p_objectList->next; /*0x4cb754*/
      if ( !v5 && refr->vtbl->GetBaseForm(refr)->member.type == kFormType_Light ) /*0x4cb767*/
        ++v3; /*0x4cb769*/
    }
    while ( p_objectList ); /*0x4cb76e*/
  }
  sub_496F50(&unk_B35C80, this); /*0x4cb776*/
  return v3; /*0x4cb77b*/
}
