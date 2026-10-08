// CSpeedTreeRT::GetLodLevel. Returns instanceData+0x10 for instances or treeEngine+0x14 for base trees.
float __thiscall CSpeedTreeRT__GetLodLevel(const OB_CSpeedTreeRT_010201A0 *this)
{
  int instanceData; // eax

  instanceData = this->instanceData; /*0x7871a1*/
  if ( instanceData ) /*0x7871a6*/
    return *(float *)(instanceData + 0x10); /*0x7871ab*/
  else
    return *(float *)(this->treeEngine + 0x14); /*0x7871b8*/
}
