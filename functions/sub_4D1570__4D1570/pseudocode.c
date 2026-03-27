char __thiscall sub_4D1570(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // esi
  ObjectListEntry *v3; // ebp
  TESForm *refr; // edi
  Data *OverrideFile; // eax
  ObjectListEntry *next; // eax
  TESForm *pathGrid; // ecx
  Data *v8; // eax
  TESPathGrid *v9; // ecx
  TESForm *v10; // eax
  TESObjectLAND *land; // ecx

  sub_496EA0((char *)&stru_B35C80, this);
  p_objectList = &this->members.objectList;
  v3 = 0;
  if ( this != (TESObjectCELL *)0xFFFFFFB8 )
  {
    do
    {
      if ( !p_objectList->next && !p_objectList->refr )
        break;
      refr = (TESForm *)p_objectList->refr;
      if ( TESObjectREFR_IsPersistent_(p_objectList->refr)
        || TESForm_GetOverrideFile(refr, 0xFFFFFFFF)
        && (OverrideFile = TESForm_GetOverrideFile(refr, 0xFFFFFFFF), !TESFile_GetIsMaster(OverrideFile)) )
      {
        v3 = p_objectList;
        p_objectList = p_objectList->next;
      }
      else
      {
        if ( v3 )
        {
          BSSimpleList_Remove(v3, (int)refr);
          p_objectList = v3->next;
        }
        else
        {
          next = p_objectList->next;
          if ( next )
          {
            p_objectList->next = next->next;
            p_objectList->refr = next->refr;
            FormHeapFree((unsigned int)next);
          }
          else
          {
            p_objectList->refr = 0;
          }
        }
        sub_463A90(SaveLoad_CurrentSavegame, refr);
        ((void (__thiscall *)(TESForm *, _DWORD))refr->vtbl[1].Compare)(refr, 0);
        if ( refr != (TESForm *)TESDataHandler_g_PlayerRef )
          refr->vtbl->Destroy(refr, 1);
      }
    }
    while ( p_objectList );
  }
  sub_496F50(&stru_B35C80, this);
  pathGrid = (TESForm *)this->members.pathGrid;
  if ( pathGrid )
  {
    v8 = TESForm_GetOverrideFile(pathGrid, 0xFFFFFFFF);
    if ( !v8 || TESFile_GetIsMaster(v8) )
    {
      v9 = this->members.pathGrid;
      if ( v9 )
      {
        (*(void (__thiscall **)(TESPathGrid *, int))(*(_DWORD *)v9 + 0x10))(v9, 1);
        this->members.pathGrid = 0;
      }
    }
  }
  v10 = (TESForm *)sub_4CE3C0(this);
  if ( v10 )
  {
    v10 = (TESForm *)TESForm_GetOverrideFile(v10, 0xFFFFFFFF);
    if ( !v10 || (LOBYTE(v10) = TESFile_GetIsMaster((Data *)v10), (_BYTE)v10) )
    {
      if ( (this->members.flags0 & 1) == 0 )
      {
        land = this->members.land;
        if ( land )
        {
          LOBYTE(v10) = (*(int (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)land + 0x10))(land, 1);
          this->members.land = 0;
        }
      }
    }
  }
  this->members.flags0 &= ~0x10u;
  return (char)v10;
}
