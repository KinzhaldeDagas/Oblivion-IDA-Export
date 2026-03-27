_DWORD *__usercall sub_4FCD60@<eax>(_DWORD *this@<ecx>, char a2@<bpl>)
{
  BSStringT *v3; // edi
  FreeEntry *v4; // ebp
  int v6; // [esp+0h] [ebp-24h]

  v3 = (BSStringT *)(this + 3);
  *(this + 3) = 0;
  *((_WORD *)this + 8) = 0;
  *((_WORD *)this + 9) = 0;
  *(this + 0xF) = 0;
  *(this + 0x10) = 0;
  *(this + 0x11) = 0;
  *(this + 0x12) = 0;
  *(this + 0x14) = 0;
  *(this + 0x15) = 0;
  *(this + 7) = 0;
  *(this + 1) = 0;
  *(this + 9) = 0;
  v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100004000uLL, v6);
  _memset(v4, 0, 0x4000);
  *(this + 8) = v4;
  v4->prev = 0;
  *(this + 0xA) = 0;
  *(this + 0xB) = 0;
  *(this + 0xC) = 0;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  *(_DWORD *)*(this + 8) = 0;
  *(this + 2) = 0;
  *((_BYTE *)this + 0x18) = 0;
  *(this + 0x13) = 0;
  BSStringT_Set(v3, EmptyString, 0);
  *(this + 5) = 0;
  return this;
}
