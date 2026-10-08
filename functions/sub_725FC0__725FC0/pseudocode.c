void __thiscall OB_NiAGDDataBlock_Free(OB_NiAGDDataBlock *this, void *explicitBuffer)
{
  void *data; // eax

  data = explicitBuffer; /*0x725fc0*/
  if ( !explicitBuffer ) /*0x725fc6*/
  {
    if ( this->ownsData ) /*0x725fc8*/
      data = this->data; /*0x725fcd*/
  }
  FormHeapFree((unsigned int)data); /*0x725fd1*/
}
