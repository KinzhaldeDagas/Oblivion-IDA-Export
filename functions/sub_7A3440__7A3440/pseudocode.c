// Destroys one compact SIdvLeafTexture by releasing its filename only when the 28-byte small string is heap-backed.
void __stdcall OB_SIdvLeafTexture_Destroy_010201A0(OB_SIdvLeafTexture_010201A0 *value)
{
  if ( value->filename.capacity >= 0x10 ) /*0x7a3449*/
    FormHeapFree((unsigned int)value->filename.storage.heapData); /*0x7a344f*/
  value->filename.capacity = 0xF; /*0x7a3459*/
  value->filename.size = 0; /*0x7a3460*/
  value->filename.storage.inlineData[0] = 0; /*0x7a3463*/
}
