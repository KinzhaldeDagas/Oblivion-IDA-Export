void __userpurge sub_4CB590(TESObjectCELL *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  ObjectListEntry *p_objectList; // edi
  char *refr; // esi
  bool v8; // zf

  sub_496EA0((char *)&stru_B35C80, this);
  if ( OSGlobals->sound )
  {
    p_objectList = &this->members.objectList;
    if ( this != (TESObjectCELL *)0xFFFFFFB8 )
    {
      do
      {
        refr = (char *)p_objectList->refr;
        v8 = p_objectList->refr == 0;
        p_objectList = p_objectList->next;
        if ( !v8 )
        {
          if ( (*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) )
          {
            if ( (*(_DWORD *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 8) & 0x800) == 0
              && (*(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0xA
               || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0x1A
               || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0x12
               || *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)refr + 0x170))(refr) + 4) == 0x18
               && (this->members.super.flags & 0x2000) == 0) )
            {
              sub_4D9310(refr, st5_0, a3, a4, a5);
            }
          }
        }
      }
      while ( p_objectList );
    }
    sub_496F50(&stru_B35C80, this);
  }
}
