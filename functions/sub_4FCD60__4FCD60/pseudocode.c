_DWORD *__usercall sub_4FCD60@<eax>(_DWORD *this@<ecx>, char a2@<bpl>)
{
  BSStringT *v3; // edi
  FreeEntry *v4; // ebp
  int v6; // [esp+0h] [ebp-24h]

  v3 = (BSStringT *)(this + 3); /*0x4fcd8b*/
  *(this + 3) = 0; /*0x4fcd90*/
  *((_WORD *)this + 8) = 0; /*0x4fcd92*/
  *((_WORD *)this + 9) = 0; /*0x4fcd96*/
  *(this + 0xF) = 0; /*0x4fcd9a*/
  *(this + 0x10) = 0; /*0x4fcd9d*/
  *(this + 0x11) = 0; /*0x4fcda0*/
  *(this + 0x12) = 0; /*0x4fcda3*/
  *(this + 0x14) = 0; /*0x4fcda6*/
  *(this + 0x15) = 0; /*0x4fcda9*/
  *(this + 7) = 0; /*0x4fcdbc*/
  *(this + 1) = 0; /*0x4fcdbf*/
  *(this + 9) = 0; /*0x4fcdc2*/
  v4 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100004000uLL, v6); /*0x4fcdcf*/
  _memset((int)v4, 0, 0x4000u); /*0x4fcdd3*/
  *(this + 8) = v4; /*0x4fcdd8*/
  v4->prev = 0; /*0x4fcddb*/
  *(this + 0xA) = 0; /*0x4fcde0*/
  *(this + 0xB) = 0; /*0x4fcde3*/
  *(this + 0xC) = 0; /*0x4fcde6*/
  *(this + 0xD) = 0; /*0x4fcde9*/
  *(this + 0xE) = 0; /*0x4fcdec*/
  *(_DWORD *)*(this + 8) = 0; /*0x4fcdf5*/
  *(this + 2) = 0; /*0x4fcdff*/
  *((_BYTE *)this + 0x18) = 0; /*0x4fce02*/
  *(this + 0x13) = 0; /*0x4fce05*/
  BSStringT_Set(v3, EmptyString, 0); /*0x4fce08*/
  *(this + 5) = 0; /*0x4fce0d*/
  return this; /*0x4fce12*/
}
