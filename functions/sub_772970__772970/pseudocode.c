OblivionRenderStatePoolPrefix *sub_772970()
{
  OblivionRenderStatePoolPrefix *v0; // eax
  OblivionRenderStatePoolPrefix *result; // eax

  v0 = (OblivionRenderStatePoolPrefix *)FormHeapAlloc(0x18u); /*0x772973*/
  if ( v0 ) /*0x77297f*/
  {
    v0->FreeObjects00 = 0; /*0x772986*/
    v0->Capacity04 = 0; /*0x772988*/
    v0->FreeCount08 = 0; /*0x77298b*/
    v0->NextBlockCount0C = 8; /*0x77298e*/
    v0->Unknown10 = 8; /*0x772991*/
    v0->Blocks14 = 0; /*0x772994*/
    NiD3DRenderStateGroup_GroupPool = v0; /*0x772997*/
  }
  else
  {
    NiD3DRenderStateGroup_GroupPool = 0; /*0x77299e*/
  }
  result = (OblivionRenderStatePoolPrefix *)FormHeapAlloc(0x18u); /*0x7729a6*/
  if ( result ) /*0x7729b0*/
  {
    result->FreeObjects00 = 0; /*0x7729b7*/
    result->Capacity04 = 0; /*0x7729b9*/
    result->FreeCount08 = 0; /*0x7729bc*/
    result->Blocks14 = 0; /*0x7729bf*/
    result->NextBlockCount0C = 0x10; /*0x7729c2*/
    result->Unknown10 = 0x10; /*0x7729c5*/
    NiD3DRenderStateGroup_EntryPool = result; /*0x7729c8*/
  }
  else
  {
    NiD3DRenderStateGroup_EntryPool = 0; /*0x7729cf*/
  }
  return result; /*0x7729cd*/
}
