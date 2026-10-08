void __thiscall sub_4CCDA0(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi

  sub_496EA0((char *)&unk_B35C80, this); /*0x4ccdaa*/
  p_objectList = &this->members.objectList; /*0x4ccdaf*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4ccdb4*/
  {
    do /*0x4ccde3*/
    {
      refr = p_objectList->refr; /*0x4ccdb7*/
      if ( !p_objectList->refr ) /*0x4ccdb7*/
        break; /*0x4ccdbb*/
      if ( refr != (TESObjectREFR *)reference && TESObjectREFR_IsPersistent(p_objectList->refr) ) /*0x4ccdc7*/
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->Set3D)(refr, 0); /*0x4ccddc*/
      p_objectList = p_objectList->next; /*0x4ccdde*/
    }
    while ( p_objectList ); /*0x4ccde3*/
  }
  sub_496F50(&unk_B35C80, this); /*0x4ccdec*/
}
