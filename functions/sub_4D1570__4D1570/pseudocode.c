// Verified inactive-cell form cleanup. Preserves persistent references and references whose winning override is a non-master file; unloads/destroys other nonpersistent references. Also destroys a PathGrid when it has no override or its winning override is a master, clears eligible LAND data, and clears cell flag 0x10. This is called during both interior and exterior teardown.
char __thiscall TESObjectCELL_ClearInactiveRuntimeForms(TESObjectCELL *this)
{
  ObjectListEntry *p_objectList; // esi
  int *v3; // ebp
  TESForm *refr; // edi
  Data *OverrideFile; // eax
  ObjectListEntry *next; // eax
  TESPathGrid *pathGrid; // ecx
  Data *v8; // eax
  TESPathGrid *v9; // ecx
  TESForm *v10; // eax
  TESObjectLAND *land; // ecx

  sub_496EA0((char *)&unk_B35C80, this); /*0x4d157b*/
  p_objectList = &this->members.objectList; /*0x4d1580*/
  v3 = 0; /*0x4d1583*/
  if ( this != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4d1587*/
  {
    do /*0x4d163a*/
    {
      if ( !p_objectList->next && !p_objectList->refr ) /*0x4d1596*/
        break; /*0x4d1599*/
      refr = (TESForm *)p_objectList->refr; /*0x4d159f*/
      if ( TESObjectREFR_IsPersistent(p_objectList->refr) /*0x4d15c8*/
        || TESForm_GetOverrideFile(refr, 0xFFFFFFFF)
        && (OverrideFile = TESForm_GetOverrideFile(refr, 0xFFFFFFFF), !TESFile_GetIsMaster(OverrideFile)) )
      {
        v3 = (int *)p_objectList; /*0x4d1633*/
        p_objectList = p_objectList->next; /*0x4d1635*/
      }
      else
      {
        if ( v3 ) /*0x4d15d3*/
        {
          BSSimpleList_Remove(v3, (int)refr); /*0x4d15d8*/
          p_objectList = (ObjectListEntry *)v3[1]; /*0x4d15dd*/
        }
        else
        {
          next = p_objectList->next; /*0x4d15e2*/
          if ( next ) /*0x4d15e7*/
          {
            p_objectList->next = next->next; /*0x4d15ec*/
            p_objectList->refr = next->refr; /*0x4d15f2*/
            FormHeapFree((unsigned int)next); /*0x4d15f4*/
          }
          else
          {
            p_objectList->refr = 0; /*0x4d15fe*/
          }
        }
        TESSaveLoadGame_UnloadForm(g_TESSaveLoadGame, refr); /*0x4d160b*/
        ((void (__thiscall *)(TESForm *, _DWORD))refr->vtbl[1].Compare)(refr, 0); /*0x4d161c*/
        if ( refr != (TESForm *)reference ) /*0x4d1624*/
          refr->vtbl->Destroy(refr, 1); /*0x4d162f*/
      }
    }
    while ( p_objectList ); /*0x4d163a*/
  }
  sub_496F50(&unk_B35C80, this); /*0x4d1647*/
  pathGrid = this->members.pathGrid; /*0x4d164c*/
  if ( pathGrid ) /*0x4d1653*/
  {
    v8 = TESForm_GetOverrideFile(&pathGrid->base, 0xFFFFFFFF); /*0x4d1657*/
    if ( !v8 || TESFile_GetIsMaster(v8) ) /*0x4d1662*/
    {
      v9 = this->members.pathGrid; /*0x4d166b*/
      if ( v9 ) /*0x4d1670*/
      {
        v9->base.vtbl->Destroy(&v9->base, 1); /*0x4d1679*/
        this->members.pathGrid = 0; /*0x4d167b*/
      }
    }
  }
  v10 = (TESForm *)sub_4CE3C0(this); /*0x4d1680*/
  if ( v10 ) /*0x4d1687*/
  {
    v10 = (TESForm *)TESForm_GetOverrideFile(v10, 0xFFFFFFFF); /*0x4d168d*/
    if ( !v10 || (LOBYTE(v10) = TESFile_GetIsMaster((Data *)v10), (_BYTE)v10) ) /*0x4d169f*/
    {
      if ( (this->members.flags0 & 1) == 0 ) /*0x4d16a5*/
      {
        land = this->members.land; /*0x4d16a7*/
        if ( land ) /*0x4d16ac*/
        {
          LOBYTE(v10) = (*(int (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)land + 0x10))(land, 1); /*0x4d16b5*/
          this->members.land = 0; /*0x4d16b7*/
        }
      }
    }
  }
  this->members.flags0 &= ~0x10u; /*0x4d16ba*/
  return (char)v10; /*0x4d16be*/
}
