void __usercall sub_4CD090(TESObjectCELL *this@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  TESForm::FormFlags flags; // eax
  signed int v9; // eax

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cd09a*/
  p_objectList = &this->members.objectList; /*0x4cd09f*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cd0a4*/
  {
    do /*0x4cd120*/
    {
      refr = p_objectList->refr; /*0x4cd0a7*/
      if ( p_objectList->refr ) /*0x4cd0a7*/
      {
        if ( !refr->vtbl->GetNiNode(p_objectList->refr) || sub_4D7000(refr) ) /*0x4cd0bf*/
        {
          flags = refr->member.super.flags; /*0x4cd0ec*/
          if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 ) /*0x4cd0fe*/
          {
            v9 = sub_440C80(MEMORY[0xB333A0], this, 0); /*0x4cd109*/
            sub_438060((_DWORD **)MEMORY[0xB33A1C], a2, a3, a4, a5, refr, v9); /*0x4cd116*/
          }
        }
        else if ( (refr->member.super.flags & 0x800) != 0 || (refr->member.super.flags & 0x20) != 0 ) /*0x4cd0da*/
        {
          ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->Set3D)(refr, 0); /*0x4cd0e8*/
        }
      }
      p_objectList = p_objectList->next; /*0x4cd11b*/
    }
    while ( p_objectList ); /*0x4cd120*/
  }
  sub_496F50(&unk_B35C80, this); /*0x4cd129*/
}
