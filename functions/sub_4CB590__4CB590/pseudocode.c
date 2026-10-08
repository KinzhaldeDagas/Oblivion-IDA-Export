void __thiscall sub_4CB590(TESObjectCELL *this, char a2)
{
  ObjectListEntry *p_objectList; // edi
  char *refr; // esi
  bool v8; // zf

  sub_496EA0((char *)&unk_B35C80, this); /*0x4cb599*/
  if ( MEMORY[0xB33398]->sound ) /*0x4cb5a3*/
  {
    p_objectList = &this->members.objectList; /*0x4cb5ae*/
    if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cb5b3*/
    {
      do /*0x4cb651*/
      {
        refr = (char *)p_objectList->refr; /*0x4cb5c0*/
        v8 = p_objectList->refr == 0; /*0x4cb5c2*/
        p_objectList = p_objectList->next; /*0x4cb5c4*/
        if ( !v8 ) /*0x4cb5c7*/
        {
          if ( (*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) ) /*0x4cb5d7*/
          {
            if ( (*(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 8) & 0x800) == 0 /*0x4cb645*/
              && (*(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0xA
               || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0x1A
               || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0x12
               || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0x18
               && (this->members.super.flags & 0x2000) == 0) )
            {
              sub_4D9310(refr, a2); /*0x4cb64a*/
            }
          }
        }
      }
      while ( p_objectList ); /*0x4cb651*/
    }
    sub_496F50(&unk_B35C80, this); /*0x4cb65f*/
  }
}
