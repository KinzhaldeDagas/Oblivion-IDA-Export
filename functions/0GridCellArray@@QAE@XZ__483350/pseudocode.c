GridCellArray *__thiscall GridCellArray::GridCellArray(GridCellArray *this)
{
  UInt32 v2; // eax
  GridEntry *v3; // eax
  UInt32 unk24; // edi
  unsigned int v6; // [esp-8h] [ebp-30h]

  sub_481DE0(this); /*0x48337b*/
  this->__vftable = (GridArray_vtbl *)&GridCellArray::`vftable'; /*0x483382*/
  this->unk24 = 0; /*0x48338c*/
  v2 = uGridsToLoad; /*0x48338f*/
  if ( (unsigned int)uGridsToLoad >= 5 ) /*0x48339c*/
  {
    if ( (v2 & 1) != 0 ) /*0x4833a7*/
      goto LABEL_6; /*0x4833a7*/
    ++v2; /*0x4833a9*/
  }
  else
  {
    v2 = 5; /*0x48339e*/
  }
  uGridsToLoad = v2; /*0x4833ac*/
LABEL_6:
  this->size = v2; /*0x4833b1*/
  v3 = (GridEntry *)FormHeapAlloc((unsigned __int64)(v2 * v2) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v2 * v2);
  v6 = 8 * this->size * this->size; /*0x4833db*/
  this->grid = v3; /*0x4833df*/
  _memset((int)v3, 0, v6); /*0x4833e2*/
  this->posX = 0.0; /*0x483404*/
  this->posY = 0.0; /*0x483407*/
  *(float *)&this->unk1C = 0.0; /*0x48340a*/
  g_bCanopyShadowMapPending = 1; /*0x48340d*/
  unk24 = this->unk24; /*0x483414*/
  if ( unk24 ) /*0x483419*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk24 + 4)) ) /*0x48341f*/
      (**(void (__thiscall ***)(UInt32, int))unk24)(unk24, 1); /*0x483435*/
    this->unk24 = 0; /*0x483437*/
  }
  LOBYTE(this->unk20) = 0; /*0x483440*/
  return this; /*0x483444*/
}
