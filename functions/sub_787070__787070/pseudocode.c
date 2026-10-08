// CSpeedTreeRT::SetTreePosition. Oblivion writes STreeInstanceData position for instances, otherwise CTreeEngine::cameraPosition/current tree position storage; exact method name corroborated only after observing this split.
void __thiscall CSpeedTreeRT__SetTreePosition(OB_CSpeedTreeRT_010201A0 *this, float x, float y, float z)
{
  float *instanceData; // eax
  float *v5; // eax

  instanceData = (float *)this->instanceData; /*0x787070*/
  if ( instanceData ) /*0x78707c*/
  {
    instanceData[1] = x; /*0x78707e*/
    instanceData[2] = y; /*0x787085*/
    instanceData[3] = z; /*0x78708c*/
  }
  else
  {
    v5 = (float *)(this->treeEngine + 4); /*0x7870ad*/
    *v5 = x; /*0x7870b0*/
    v5[1] = y; /*0x7870ba*/
    v5[2] = z; /*0x7870bd*/
  }
}
