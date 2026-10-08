// Oblivion SFrondTexture destructor: releases the 28-byte small-string filename when heap-backed (capacity >= 0x10), then resets string length/capacity; scalar fields need no destruction.
void __stdcall OB_SFrondTexture_Destroy_010201A0(OB_SFrondTexture_010201A0 *this)
{
  if ( this->filename.capacity >= 0x10 ) /*0x79ac19*/
    FormHeapFree((unsigned int)this->filename.storage.heapData); /*0x79ac1f*/
  this->filename.capacity = 0xF; /*0x79ac29*/
  this->filename.size = 0; /*0x79ac30*/
  this->filename.storage.inlineData[0] = 0; /*0x79ac33*/
}
