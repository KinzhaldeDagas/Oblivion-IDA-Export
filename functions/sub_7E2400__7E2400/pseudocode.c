// Destroy the members of one RenderPass: clear selector, free the owned light-pointer array, clear byte +0x09 and array pointer. This function does not free the 0x10-byte RenderPass record itself and does not release the raw geometry/light objects.
void __thiscall RenderPass_Destroy(RenderPass_DecodedLayout *this)
{
  void **lightArray_0C; // eax

  lightArray_0C = this->lightArray_0C;          // Load the owned light-array pointer from RenderPass+0x0C for destruction. /*0x7e2404*/
  this->selector_04 = 0; /*0x7e240b*/
  if ( lightArray_0C ) /*0x7e240f*/
    FormHeapFree((unsigned int)lightArray_0C);  // Free the owned light-pointer array. RenderPass_Destroy does not free the 0x10-byte record itself. /*0x7e2412*/
  this->pad_09[0] = 0; /*0x7e241a*/
  this->lightArray_0C = 0; /*0x7e241d*/
}
