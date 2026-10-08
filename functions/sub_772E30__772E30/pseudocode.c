//
// DX11 pool audit 2026-10-01: corrected former NiD3DPass parameter type. This releases a render-state GROUP. RendererOwned byte0 selects pooled return: traverse both lists, return nodes, clear heads/counts, then return the group. Non-owned path destroys list contents and frees the group. Free pooled groups therefore have cleared counts/heads; free nodes can retain old fields.
void __cdecl NiD3DRenderStateGroup_ReleaseToPool(OblivionPooledRenderStateGroupPrefix *group)
{
  OblivionPooledRenderStateGroupPrefix *v1; // edi
  OblivionPooledRenderStateGroupPrefix *NoSaveHead08; // eax
  OblivionRenderStateEntry *v3; // esi
  unsigned int *v4; // ecx
  OblivionPooledRenderStateGroupPrefix *SavedHead10; // eax
  OblivionRenderStateEntry *v6; // esi
  unsigned int *v7; // ecx
  unsigned int *v8; // ecx

  v1 = group; /*0x772e32*/
  if ( group ) /*0x772e3a*/
  {
    if ( group->RendererOwned00 ) /*0x772e40*/
    {
      NoSaveHead08 = (OblivionPooledRenderStateGroupPrefix *)group->NoSaveHead08; /*0x772e44*/
      if ( NoSaveHead08 ) /*0x772e4a*/
      {
        do /*0x772e6b*/
        {
          v3 = NoSaveHead08->NoSaveHead08; /*0x772e50*/
          v4 = (unsigned int *)NiD3DRenderStateGroup_EntryPool; /*0x772e53*/
          group = NoSaveHead08; /*0x772e59*/
          sub_73A5E0(v4, (NiD3DPass **)&group); /*0x772e62*/
          NoSaveHead08 = (OblivionPooledRenderStateGroupPrefix *)v3; /*0x772e69*/
        }
        while ( v3 ); /*0x772e6b*/
      }
      SavedHead10 = (OblivionPooledRenderStateGroupPrefix *)v1->SavedHead10; /*0x772e6d*/
      v1->NoSaveHead08 = 0; /*0x772e72*/
      v1->NoSaveCount04 = 0; /*0x772e75*/
      if ( SavedHead10 ) /*0x772e78*/
      {
        do /*0x772e9b*/
        {
          v6 = SavedHead10->NoSaveHead08; /*0x772e80*/
          v7 = (unsigned int *)NiD3DRenderStateGroup_EntryPool; /*0x772e88*/
          group = SavedHead10; /*0x772e8e*/
          sub_73A5E0(v7, (NiD3DPass **)&group); /*0x772e92*/
          SavedHead10 = (OblivionPooledRenderStateGroupPrefix *)v6; /*0x772e99*/
        }
        while ( v6 ); /*0x772e9b*/
      }
      v1->SavedHead10 = 0; /*0x772ea1*/
      v1->SavedCount0C = 0; /*0x772ea4*/
      v8 = (unsigned int *)NiD3DRenderStateGroup_GroupPool; /*0x772ea7*/
      group = v1; /*0x772eae*/
      sub_73A5E0(v8, (NiD3DPass **)&group); /*0x772eb2*/
    }
    else
    {
      sub_772BB0(group); /*0x772ebd*/
      FormHeapFree((unsigned int)v1); /*0x772ec3*/
    }
  }
}
