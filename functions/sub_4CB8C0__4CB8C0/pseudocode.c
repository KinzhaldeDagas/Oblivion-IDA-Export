char __userpurge sub_4CB8C0@<al>(
        TESObjectCELL *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        char a5,
        char a6)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  bool v9; // zf
  char v11; // [esp+Bh] [ebp-5h]
  UInt32 DwordAtOffset40; // [esp+Ch] [ebp-4h]

  v11 = 0; /*0x4cb8cd*/
  sub_496EA0((char *)&unk_B35C80, this); /*0x4cb8d2*/
  p_objectList = &this->members.objectList; /*0x4cb8e2*/
  DwordAtOffset40 = Shared_GetDwordAtOffset40(reference); /*0x4cb8e7*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb8eb*/
  {
    while ( 1 ) /*0x4cb8f3*/
    {
      refr = p_objectList->refr; /*0x4cb8f3*/
      v9 = p_objectList->refr == 0; /*0x4cb8f5*/
      p_objectList = p_objectList->next; /*0x4cb8f7*/
      if ( !v9 /*0x4cb94f*/
        && (a5 || refr->vtbl->GetNiNode(refr) || (refr->member.super.flags & 0x800) != 0)
        && (!refr->vtbl->IsActor(refr) || !a6)
        && (RunScripts(refr, st5_0, st6_0, a4) && !a5 || DwordAtOffset40 != Shared_GetDwordAtOffset40(reference)) )
      {
        break; /*0x4cb94f*/
      }
      if ( !p_objectList ) /*0x4cb953*/
        goto LABEL_14; /*0x4cb953*/
    }
    v11 = 1; /*0x4cb957*/
  }
LABEL_14:
  sub_496F50(&unk_B35C80, this); /*0x4cb95e*/
  return v11; /*0x4cb96d*/
}
