// Verified TESObjectDOOR DoPostFixup vtable override (TESFormVtbl::DoPostFixup slot +0x6C at 0xA44AC0). If not already linked, links script data, walks raw randomTeleport FormIDs, rebases each through TESForm_GetOverrideFile/TESForm_ResolveFormID, replaces valid IDs with TESForm pointers, and removes invalid entries after logging 'Could not find RandomTeleport ... for Door ...'; then marks the form linked.
void __thiscall TESObjectDOOR_DoPostFixup(TESObjectDOOR *this)
{
  TESObjectDOOR_RandomTeleportSpaceNode *p_randomTeleport; // esi
  int *v3; // ebx
  Data *OverrideFile; // eax
  TESForm *v5; // eax
  const char *v6; // eax
  struct TESObjectDOOR_RandomTeleportSpaceNode *next; // eax
  int v8; // [esp-Ch] [ebp-14h]
  char ArgList[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (this->super.super.super.flags & 8) == 0 ) /*0x4b6dbc*/
  {
    TESScriptableForm_Link((int)&this->super.scriptable, (TESForm *)this); /*0x4b6dc8*/
    p_randomTeleport = &this->super.randomTeleport; /*0x4b6dcd*/
    v3 = 0; /*0x4b6dd0*/
    if ( this != (TESObjectDOOR *)0xFFFFFF98 ) /*0x4b6dd4*/
    {
      do /*0x4b6e7f*/
      {
        if ( !p_randomTeleport->next && !p_randomTeleport->space ) /*0x4b6de6*/
          break; /*0x4b6de9*/
        *(_DWORD *)ArgList = p_randomTeleport->space; /*0x4b6df1*/
        OverrideFile = TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF); /*0x4b6df9*/
        TESForm_ResolveFormID((UInt32 *)ArgList, OverrideFile);// Verified post-load TNAM fixup: resolves the stored 32-bit form ID in the door's override-file context, looks up the TESForm, and writes the resolved pointer into the randomTeleport node. The failure branch removes that list node. /*0x4b6e04*/
        v5 = TESForm_LookupByFormID(*(UInt32 *)ArgList); /*0x4b6e0e*/
        if ( v5 ) /*0x4b6e18*/
        {
          p_randomTeleport->space = v5; /*0x4b6e1a*/
          v3 = (int *)p_randomTeleport; /*0x4b6e1c*/
          p_randomTeleport = p_randomTeleport->next; /*0x4b6e1e*/
        }
        else
        {
          v6 = (const char *)((int (__thiscall *)(TESObjectDOOR *, UInt32))this->__vftable->super.super.super.GetEditorName)( /*0x4b6e31*/
                               this,
                               this->super.super.super.refID);
          PrintError("Could not find RandomTeleport (%08X) for Door '%s' (%08X).", *(_DWORD *)ArgList, v6, v8); /*0x4b6e3e*/
          if ( v3 ) /*0x4b6e48*/
          {
            BSSimpleList_Remove(v3, *(int *)ArgList); /*0x4b6e51*/
            p_randomTeleport = (TESObjectDOOR_RandomTeleportSpaceNode *)v3[1]; /*0x4b6e56*/
          }
          else
          {
            next = p_randomTeleport->next; /*0x4b6e5b*/
            if ( next ) /*0x4b6e60*/
            {
              p_randomTeleport->next = next->next; /*0x4b6e65*/
              p_randomTeleport->space = next->space; /*0x4b6e6b*/
              FormHeapFree((unsigned int)next); /*0x4b6e6d*/
            }
            else
            {
              p_randomTeleport->space = 0; /*0x4b6e77*/
            }
          }
        }
      }
      while ( p_randomTeleport ); /*0x4b6e7f*/
    }
    TESForm_SetIsLinked((TESForm *)this, 1); /*0x4b6e89*/
  }
}
