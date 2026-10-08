// Verified TESObjectDOOR copy routine: RTTI-casts sourceForm to TESObjectDOOR, clears the destination's randomTeleport list, allocates new list nodes while copying each TESForm* entry, then copies doorFlags, animSounds[0..2], and form components. The function is referenced by the TESObjectDOOR vtable entry at 0xA44B08 (slot +0xB4 from the vtable at 0xA44A54), confirming its virtual copy-hook role. Original authoring/loading of list entries remains Unknown.
void __thiscall TESObjectDOOR_CopyFormData(TESObjectDOOR *this, TESForm *sourceForm)
{
  TESObjectDOOR *v2; // esi
  char *v3; // edi
  TESForm **v4; // ebx
  TESObjectDOOR_RandomTeleportSpaceNode *p_randomTeleport; // ebp
  TESForm *v6; // edi
  int p_next; // eax
  TESObjectDOOR_RandomTeleportSpaceNode *v8; // esi
  bool v9; // zf
  struct TESObjectDOOR_RandomTeleportSpaceNode *v10; // eax
  char *v12; // [esp+Ch] [ebp-4h]

  v2 = this; /*0x4b7a75*/
  v3 = (char *)OblivionDynamicCast( /*0x4b7a83*/
                 sourceForm,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESObjectDOOR `RTTI Type Descriptor',
                 0);
  v12 = v3; /*0x4b7a8a*/
  if ( v3 ) /*0x4b7a8e*/
  {
    TESObjectDOOR_ClearRandomTeleportSpaceList(v2); /*0x4b7a98*/
    v4 = (TESForm **)(v3 + 0x68); /*0x4b7a9d*/
    p_randomTeleport = &v2->super.randomTeleport; /*0x4b7aa2*/
    if ( v3 != (char *)0xFFFFFF98 ) /*0x4b7aa5*/
    {
      do /*0x4b7b0e*/
      {
        if ( !v4[1] && !*v4 ) /*0x4b7aad*/
          break; /*0x4b7ab0*/
        v6 = *v4; /*0x4b7ab2*/
        if ( *v4 ) /*0x4b7ab2*/
        {
          p_next = (int)&p_randomTeleport->next; /*0x4b7abc*/
          v8 = p_randomTeleport; /*0x4b7abf*/
          if ( p_randomTeleport->next ) /*0x4b7ab8*/
          {
            do /*0x4b7acc*/
            {
              v8 = *(TESObjectDOOR_RandomTeleportSpaceNode **)p_next; /*0x4b7ac3*/
              v9 = *(_DWORD *)(*(_DWORD *)p_next + 4) == 0; /*0x4b7ac5*/
              p_next = *(_DWORD *)p_next + 4; /*0x4b7ac9*/
            }
            while ( !v9 ); /*0x4b7acc*/
          }
          if ( v8->space ) /*0x4b7ace*/
          {
            v10 = (struct TESObjectDOOR_RandomTeleportSpaceNode *)FormHeapAlloc(8u); /*0x4b7ad5*/
            if ( v10 ) /*0x4b7adf*/
            {
              v10->space = v6; /*0x4b7ae1*/
              v10->next = 0; /*0x4b7ae3*/
              v8->next = v10; /*0x4b7aea*/
            }
            else
            {
              v8->next = 0; /*0x4b7af1*/
            }
          }
          else
          {
            v8->space = v6; /*0x4b7af6*/
          }
          v2 = this; /*0x4b7af8*/
        }
        if ( p_randomTeleport->next ) /*0x4b7afc*/
          p_randomTeleport = p_randomTeleport->next; /*0x4b7b03*/
        v4 = (TESForm **)v4[1]; /*0x4b7b05*/
        v3 = v12; /*0x4b7b0a*/
      }
      while ( v4 ); /*0x4b7b0e*/
    }
    v2->super.doorFlags = v3[0x64]; /*0x4b7b13*/
    v2->super.animSounds[0] = *((TESSound **)v3 + 0x16); /*0x4b7b19*/
    v2->super.animSounds[1] = *((TESSound **)v3 + 0x17); /*0x4b7b23*/
    v2->super.animSounds[2] = *((TESSound **)v3 + 0x18); /*0x4b7b29*/
    TESForm_CopyAllComponentsFrom((TESForm *)v2, sourceForm); /*0x4b7b2f*/
  }
}
