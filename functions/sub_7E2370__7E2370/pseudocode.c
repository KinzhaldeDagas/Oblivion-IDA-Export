// Construct a 0x10-byte RenderPass. Stores the geometry/object pointer raw at +0x00, selector at +0x04, bytes at +0x06/+0x07, lightCount at +0x08, and allocates an owned 4*lightCount light-pointer array at +0x0C. Geometry and light objects are not reference-counted; only the pointer array is owned.
RenderPass_DecodedLayout *RenderPass_Construct(
        RenderPass_DecodedLayout *outPass,
        void *geometry,
        unsigned __int16 selector,
        unsigned __int8 byte6,
        unsigned __int8 lightCount,
        ...)
{
  int v5; // eax
  va_list va; // [esp+20h] [ebp+18h]

  va_start(va, lightCount);                     // Store the geometry/object pointer raw at RenderPass+0x00; RenderPass construction performs no reference-count increment.
  outPass->vtable_00 = geometry; /*0x7e2385*/
  outPass->selector_04 = selector; /*0x7e238d*/
  outPass->lightCount_08 = lightCount; /*0x7e2391*/
  outPass->byte_06 = byte6; /*0x7e2394*/
  outPass->pad_07 = 0; /*0x7e2397*/
  outPass->lightArray_0C = 0; /*0x7e239a*/
  if ( lightCount )
  {
    outPass->lightArray_0C = (void **)FormHeapAlloc((unsigned __int64)lightCount >> 0x1E != 0 ? 0xFFFFFFFF : 4 * lightCount);// Allocate the RenderPass-owned light-pointer array as 4*lightCount bytes from FormHeap.
    v5 = 0; /*0x7e23c1*/
    do /*0x7e23df*/
    {
      outPass->lightArray_0C[v5] = *((void **)va + v5);// Copy raw light pointers into the owned array; the pointed-to lights are not reference-counted by RenderPass. /*0x7e23d7*/
      ++v5; /*0x7e23da*/
    }
    while ( v5 < lightCount ); /*0x7e23df*/
    outPass->pad_09[0] = 0; /*0x7e23e2*/
    return outPass; /*0x7e23e5*/
  }
  else
  {
    outPass->pad_09[0] = 0; /*0x7e23ea*/
    return outPass; /*0x7e23ed*/
  }
}
