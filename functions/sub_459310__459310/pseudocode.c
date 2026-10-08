// MEF v27 verification: same raw blob consumed-length contract as sub_458E50 for SaveLoad+0x60 map; guarded skips must advance/discard payload.
int __thiscall sub_459310(_DWORD *this, _DWORD *a2, unsigned __int16 a3)
{
  int v3; // ebp
  FreeEntry *v5; // ebx
  size_t v7; // [esp-8h] [ebp-18h]
  size_t v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+0h] [ebp-10h]
  _DWORD *v10; // [esp+14h] [ebp+4h]

  v3 = a2[3]; /*0x459316*/
  HIDWORD(v7) = 1; /*0x459325*/
  v10 = (_DWORD *)*(this + 0x18); /*0x45932a*/
  LODWORD(v7) = a3 + 2; /*0x45932e*/
  v5 = j_MemoryHeap_Alloc(&FormHeap, v3, v7, v9); /*0x459339*/
  LOWORD(v5->prev) = a3; /*0x459340*/
  LODWORD(v8) = a3; /*0x459346*/
  memcpy((char *)&v5->prev + 2, (const void *)*(this + 5), v8);// MEF decode note: raw save-buffer memcpy into SaveLoad map +0x60 using caller UInt16 length. Candidate for future bounded copy/skip once active save-record remaining bytes are tracked. /*0x45934c*/
  *(this + 5) += a3; /*0x459355*/
  return NiTMap_SetAt(v10, v3, (int)v5); /*0x459362*/
}
