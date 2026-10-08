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

  if ( !this->freeList ) /*0x402488*/
  {
    v2 = 0; /*0x402493*/
    if ( !this->field_104 ) /*0x402495*/
      return 0; /*0x402495*/
    for ( i = (_WORD *)this->field_100; *i != 0xFFFF; ++i ) /*0x40249d*/
    {
      if ( ++v2 >= this->field_104 ) /*0x4024b6*/
        return 0; /*0x4024c1*/
    }
    if ( v2 == 0xFFFFFFFF ) /*0x4024c5*/
      return 0; /*0x4024c5*/
    v5 = (char *)this->field_040 + 0x1000 * v2; /*0x4024e3*/
    v6 = 0x1000 / this->unk_098[0x18]; /*0x4024e6*/
    GlobalMemoryStatus((LPMEMORYSTATUS)&Buffer); /*0x4024ed*/
    if ( Buffer.dwAvailPhys < 0x4000 ) /*0x4024fb*/
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B32C00, (int)&aMemoryheapMemo); /*0x402507*/
      if ( dword_B02184 ) /*0x402513*/
        dword_B02184(0, 0x4000, dword_B32B04); /*0x402523*/
      NiLeaveCriticalSection_0(&unk_B32C00); /*0x40252d*/
    }
    if ( !VirtualAlloc(v5, 0x100000001000uLL, 4u, v14) ) /*0x40253f*/
      return 0; /*0x4024d0*/
    v7 = 0; /*0x402553*/
    for ( *(_WORD *)(this->field_100 + 2 * v2) = 0; v7 < v6; this->freeList = v8 ) /*0x40255d*/
    {
      v8 = (FreeEntry *)&v5[v7 * this->unk_098[0x18]]; /*0x402569*/
      v8->prev = 0; /*0x40256b*/
      v8->next = this->freeList; /*0x402574*/
      freeList = this->freeList; /*0x402577*/
      if ( freeList ) /*0x40257c*/
        freeList->prev = v8; /*0x40257e*/
      ++this->field_10C; /*0x402580*/
      ++v7; /*0x402587*/
    }
    v10 = ++this->field_110; /*0x402598*/
    if ( v10 > this->unk_098[0x19] ) /*0x4025a4*/
      this->unk_098[0x19] = v10; /*0x4025a6*/
  }
  v11 = this->freeList; /*0x4025ac*/
  result = 0; /*0x4025af*/
  if ( v11 ) /*0x4025b3*/
  {
    this->freeList = v11->next; /*0x4025b8*/
    result = v11; /*0x4025bf*/
    if ( v11->prev ) /*0x4025bb*/
      v11->prev->next = v11->next; /*0x4025c6*/
    next = v11->next; /*0x4025c9*/
    if ( next ) /*0x4025ce*/
      next->prev = v11->prev; /*0x4025d2*/
    field_100 = this->field_100; /*0x4025d4*/
    --this->field_10C; /*0x4025da*/
    ++*(_WORD *)(field_100 + 2 * ((unsigned int)((char *)v11 - (char *)this->field_040) >> 0xC)); /*0x4025e9*/
  }
  return result; /*0x4024b8*/
}
