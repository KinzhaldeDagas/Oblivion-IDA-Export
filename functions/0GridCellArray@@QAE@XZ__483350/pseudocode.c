GridCellArray *__thiscall GridCellArray::GridCellArray(GridCellArray *this)
{
  UInt32 v2; // eax
  GridEntry *v3; // eax
  UInt32 unk24; // edi
  UInt32 v6; // [esp-8h] [ebp-30h]

  sub_481DE0(this);
  this->__vftable = (GridArray_vtbl *)&GridCellArray::`vftable';
  this->unk24 = 0;
  v2 = uGridsToLoad;
  if ( (unsigned int)uGridsToLoad >= 5 )
  {
    if ( (v2 & 1) != 0 )
      goto LABEL_6;
    ++v2;
  }
  else
  {
    v2 = 5;
  }
  uGridsToLoad = v2;
LABEL_6:
  this->size = v2;
  v3 = (GridEntry *)FormHeapAlloc((unsigned __int64)(v2 * v2) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v2 * v2);
  v6 = 8 * this->size * this->size;
  this->grid = v3;
  _memset(v3, 0, v6);
  this->posX = 0.0;
  this->posY = 0.0;
  *(float *)&this->unk1C = 0.0;
  byte_B06A28 = 1;
  unk24 = this->unk24;
  if ( unk24 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk24 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk24)(unk24, 1);
    this->unk24 = 0;
  }
  LOBYTE(this->unk20) = 0;
  return this;
}
