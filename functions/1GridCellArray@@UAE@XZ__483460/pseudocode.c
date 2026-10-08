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

  this->__vftable = (GridArray_vtbl *)&GridCellArray::`vftable'; /*0x48348d*/
  sub_481E10(this); /*0x48349b*/
  if ( g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x4834a5*/
    sub_4CA390(); /*0x4834af*/
  ClearCanopyShadowMap(this); /*0x4834b6*/
  v2 = 0; /*0x4834bb*/
  for ( i = 0; v2 < this->size; i = v2 ) /*0x4834bd*/
  {
    for ( j = 0; j < this->size; v7->info = 0 ) /*0x4834c8*/
    {
      grid = this->grid; /*0x4834d3*/
      v5 = j + v2 * this->size; /*0x4834d9*/
      info = (unsigned int)grid[v5].info; /*0x4834db*/
      v7 = &grid[v5]; /*0x4834e1*/
      if ( info ) /*0x4834e4*/
      {
        sub_49E500(&grid[v5].info->unk00); /*0x4834e8*/
        FormHeapFree(info); /*0x4834ee*/
        v2 = i; /*0x4834f3*/
      }
      ++j; /*0x4834fa*/
    }
    ++v2; /*0x483509*/
  }
  FormHeapFree((unsigned int)this->grid); /*0x483519*/
  unk24 = this->unk24; /*0x48351e*/
  if ( unk24 ) /*0x48352b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(unk24 + 4)) ) /*0x483531*/
      (**(void (__thiscall ***)(UInt32, int))unk24)(unk24, 1); /*0x483547*/
  }
  sub_481DF0(this); /*0x483553*/
}
