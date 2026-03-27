void __thiscall GridCellArray::~GridCellArray(GridCellArray *this)
{
  UInt32 v2; // ecx
  UInt32 j; // ebp
  GridEntry *grid; // edx
  UInt32 v5; // eax
  unsigned int info; // ebx
  GridEntry *v7; // edi
  UInt32 unk24; // edi
  UInt32 i; // [esp+14h] [ebp-14h]

  this->__vftable = (GridArray_vtbl *)&GridCellArray::`vftable';
  sub_481E10(this);
  if ( *(_BYTE *)(TESDataHandler + 0xCD4) )
    sub_4CA390();
  sub_482670(this);
  v2 = 0;
  for ( i = 0; v2 < this->size; i = v2 )
  {
    for ( j = 0; j < this->size; v7->info = 0 )
    {
      grid = this->grid;
      v5 = j + v2 * this->size;
      info = (unsigned int)grid[v5].info;
      v7 = &grid[v5];
      if ( info )
      {
        sub_49E500(&grid[v5].info->unk00);
        FormHeapFree(info);
        v2 = i;
      }
      ++j;
    }
    ++v2;
  }
  FormHeapFree((unsigned int)this->grid);
  unk24 = this->unk24;
  if ( unk24 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk24 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk24)(unk24, 1);
  }
  sub_481DF0(this);
}
