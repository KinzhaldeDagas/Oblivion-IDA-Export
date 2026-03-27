void __usercall sub_4CD090(TESObjectCELL *this@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  ObjectListEntry *p_objectList; // edi
  TESObjectREFR *refr; // esi
  TESForm::FormFlags flags; // eax
  signed int v9; // eax

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      refr = p_objectList->refr;
      if ( p_objectList->refr )
      {
        if ( !refr->vtbl->GetNiNode(p_objectList->refr) || sub_4D7000(refr) )
        {
          flags = refr->member.super.flags;
          if ( (flags & 0x800) == 0 && (flags & 0x20) == 0 )
          {
            v9 = sub_440C80(TES, this, 0);
            sub_438060((_DWORD **)ModelLoaderPtr, a2, a3, a4, a5, refr, v9);
          }
        }
        else if ( (refr->member.super.flags & 0x800) != 0 || (refr->member.super.flags & 0x20) != 0 )
        {
          ((void (__thiscall *)(TESObjectREFR *, _DWORD))refr->vtbl->Set3D)(refr, 0);
        }
      }
      p_objectList = p_objectList->next;
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, this);
}
