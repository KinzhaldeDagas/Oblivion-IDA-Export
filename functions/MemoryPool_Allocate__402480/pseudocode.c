FreeEntry *__thiscall MemoryPool_Allocate(MemoryPool *this)
{
  int v2; // edi
  _WORD *i; // eax
  FreeEntry *result; // eax
  char *v5; // ebx
  UInt32 v6; // ebp
  UInt32 v7; // ecx
  FreeEntry *v8; // eax
  FreeEntry *freeList; // edx
  UInt32 v10; // eax
  FreeEntry *v11; // ecx
  FreeEntry *next; // edx
  UInt32 field_100; // edx
  DWORD v14; // [esp+0h] [ebp-30h]
  struct _MEMORYSTATUS Buffer; // [esp+10h] [ebp-20h] BYREF

  if ( !this->freeList )
  {
    v2 = 0;
    if ( !this->field_104 )
      return 0;
    for ( i = (_WORD *)this->field_100; *i != 0xFFFF; ++i )
    {
      if ( ++v2 >= this->field_104 )
        return 0;
    }
    if ( v2 == 0xFFFFFFFF )
      return 0;
    v5 = (char *)this->field_040 + 0x1000 * v2;
    v6 = 0x1000 / this->unk_098[0x18];
    GlobalMemoryStatus((LPMEMORYSTATUS)&Buffer);
    if ( Buffer.dwAvailPhys < 0x4000 )
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B32C00, (int)&aMemoryheapMemo);
      if ( dword_B02184 )
        dword_B02184(0, 0x4000, dword_B32B04);
      NiLeaveCriticalSection_0(&stru_B32C00);
    }
    if ( !VirtualAlloc(v5, 0x100000001000uLL, 4u, v14) )
      return 0;
    v7 = 0;
    for ( *(_WORD *)(this->field_100 + 2 * v2) = 0; v7 < v6; this->freeList = v8 )
    {
      v8 = (FreeEntry *)&v5[v7 * this->unk_098[0x18]];
      v8->prev = 0;
      v8->next = this->freeList;
      freeList = this->freeList;
      if ( freeList )
        freeList->prev = v8;
      ++this->field_10C;
      ++v7;
    }
    v10 = ++this->field_110;
    if ( v10 > this->unk_098[0x19] )
      this->unk_098[0x19] = v10;
  }
  v11 = this->freeList;
  result = 0;
  if ( v11 )
  {
    this->freeList = v11->next;
    result = v11;
    if ( v11->prev )
      v11->prev->next = v11->next;
    next = v11->next;
    if ( next )
      next->prev = v11->prev;
    field_100 = this->field_100;
    --this->field_10C;
    ++*(_WORD *)(field_100 + 2 * ((unsigned int)((char *)v11 - (char *)this->field_040) >> 0xC));
  }
  return result;
}
