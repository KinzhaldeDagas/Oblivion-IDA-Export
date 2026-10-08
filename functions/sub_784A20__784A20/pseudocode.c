// Oblivion 1.2.0.416: destroys all 0x18-byte elements, frees backing storage, and nulls begin/end/capacity.
void __thiscall OB_stVector24_Destroy_010201A0(OB_stVector24_010201A0 *this)
{
  unsigned __int8 *begin; // esi
  unsigned __int8 *i; // edi

  begin = this->begin; /*0x784a24*/
  if ( begin ) /*0x784a29*/
  {
    for ( i = this->end; begin != i; begin += 0x18 ) /*0x784a31*/
      Shared_NoOpVirtual_60D0A0(begin); /*0x784a35*/
    FormHeapFree((unsigned int)this->begin); /*0x784a45*/
  }
  this->begin = 0; /*0x784a4f*/
  this->end = 0; /*0x784a56*/
  this->capacityEnd = 0; /*0x784a5d*/
}
