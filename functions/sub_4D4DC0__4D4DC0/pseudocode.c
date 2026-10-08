void __thiscall sub_4D4DC0(TESObjectCELL *this)
{
  bool v2; // zf
  ExtraDataList *p_extraData; // ecx
  BSExtraDataVtbl *v4; // eax
  int v5; // eax
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // ecx

  v2 = (this->members.flags0 & 1) == 0; /*0x4d4dc3*/
  p_extraData = &this->members.extraData; /*0x4d4dc7*/
  if ( v2 ) /*0x4d4dca*/
  {
    v5 = sub_41F950(p_extraData); /*0x4d4de4*/
    if ( v5 ) /*0x4d4deb*/
      sub_532EF0(v5); /*0x4d4def*/
    sub_496EA0((char *)&unk_B35C80, this); /*0x4d4dfb*/
    p_objectList = &this->members.objectList; /*0x4d4e00*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4d4e05*/
    {
      do /*0x4d4e1c*/
      {
        refr = p_objectList->refr; /*0x4d4e07*/
        v2 = p_objectList->refr == 0; /*0x4d4e09*/
        p_objectList = p_objectList->next; /*0x4d4e0b*/
        if ( !v2 ) /*0x4d4e0e*/
          refr->vtbl->Unk_51(refr); /*0x4d4e18*/
      }
      while ( p_objectList ); /*0x4d4e1c*/
    }
    sub_496F50(&unk_B35C80, this); /*0x4d4e24*/
  }
  else
  {
    v4 = sub_424180(p_extraData); /*0x4d4dcc*/
    if ( v4 ) /*0x4d4dd3*/
    {
      BYTE1(v4[3].Destructor) = 0; /*0x4d4dd9*/
      sub_88B680((int *)v4, 0); /*0x4d4ddd*/
    }
  }
}
