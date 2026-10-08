void sub_772B20()
{
  unsigned int *v0; // edi
  unsigned int *v1; // esi
  unsigned int *v2; // edi
  unsigned int *v3; // esi
  unsigned int *v4; // ecx

  v0 = (unsigned int *)NiD3DRenderStateGroup_GroupPool; /*0x772b29*/
  if ( NiD3DRenderStateGroup_GroupPool ) /*0x772b20*/
  {
    v1 = (unsigned int *)v0[5]; /*0x772b2d*/
    NiD3DRenderStateGroup_GroupPool->FreeCount08 = 0; /*0x772b32*/
    if ( v1 ) /*0x772b39*/
    {
      sub_772ED0(v1); /*0x772b3d*/
      FormHeapFree((unsigned int)v1); /*0x772b43*/
    }
    FormHeapFree(*v0); /*0x772b4e*/
    FormHeapFree((unsigned int)v0); /*0x772b54*/
  }
  v2 = (unsigned int *)NiD3DRenderStateGroup_EntryPool; /*0x772b63*/
  if ( NiD3DRenderStateGroup_EntryPool ) /*0x772b5c*/
  {
    v3 = (unsigned int *)v2[5]; /*0x772b67*/
    NiD3DRenderStateGroup_EntryPool->FreeCount08 = 0; /*0x772b6c*/
    if ( v3 ) /*0x772b73*/
    {
      FormHeapFree(*v3); /*0x772b78*/
      v4 = (unsigned int *)v3[2]; /*0x772b7d*/
      if ( v4 ) /*0x772b85*/
        sub_772820(v4, 1); /*0x772b89*/
      FormHeapFree((unsigned int)v3); /*0x772b8f*/
    }
    FormHeapFree(*v2); /*0x772b9a*/
    FormHeapFree((unsigned int)v2); /*0x772ba0*/
  }
}
