void __thiscall sub_4D4DC0(TESObjectCELL *this)
{
  bool v2; // zf
  ExtraDataList *p_extraData; // ecx
  BSExtraDataVtbl *v4; // eax
  int v5; // eax
  ObjectListEntry *p_objectList; // esi
  TESObjectREFR *refr; // ecx

  v2 = (this->members.flags0 & 1) == 0;
  p_extraData = &this->members.extraData;
  if ( v2 )
  {
    v5 = sub_41F950(p_extraData);
    if ( v5 )
      sub_532EF0(v5);
    sub_496EA0((char *)&stru_B35C80, this);
    p_objectList = &this->members.objectList;
    if ( this != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        refr = p_objectList->refr;
        v2 = p_objectList->refr == 0;
        p_objectList = p_objectList->next;
        if ( !v2 )
          refr->vtbl->Unk_51(refr);
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, this);
  }
  else
  {
    v4 = sub_424180(p_extraData);
    if ( v4 )
    {
      BYTE1(v4[3].Destructor) = 0;
      sub_88B680((int *)v4, 0);
    }
  }
}
