// Verified NiTArray<float> append helper used for the three DistantLODCellObjectData arrays: grows on capacity exhaustion, appends one float and returns the previous element count/index.
unsigned int __thiscall NiTArray_float_Append(NiTArray_float *this, float *value)
{
  unsigned int size; // edi

  size = this->size; /*0x4d31d8*/
  if ( size >= this->capacity ) /*0x4d31de*/
    sub_4CA040((unsigned __int16 *)this, size + this->growBy); /*0x4d31e9*/
  sub_4CA210((int)this, size, value); /*0x4d31f6*/
  return size; /*0x4d31fd*/
}
