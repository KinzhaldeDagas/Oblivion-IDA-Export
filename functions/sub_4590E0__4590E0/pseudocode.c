// MEF v27 verification: same raw blob consumed-length contract as sub_458E50 for SaveLoad+0x5C map; guarded skips must advance/discard payload.
int __thiscall sub_4590E0(_DWORD *this, _DWORD *a2, unsigned __int16 a3)
{
  int v3; // ebp
  FreeEntry *v5; // ebx
  size_t v7; // [esp-8h] [ebp-18h]
  size_t v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+0h] [ebp-10h]
  _DWORD *v10; // [esp+14h] [ebp+4h]

  v3 = a2[3]; /*0x4590e6*/
  HIDWORD(v7) = 1; /*0x4590f5*/
  v10 = (_DWORD *)*(this + 0x17); /*0x4590fa*/
  LODWORD(v7) = a3 + 2; /*0x4590fe*/
  v5 = j_MemoryHeap_Alloc(&FormHeap, v3, v7, v9); /*0x459109*/
  LOWORD(v5->prev) = a3; /*0x459110*/
  LODWORD(v8) = a3; /*0x459116*/
  memcpy((char *)&v5->prev + 2, (const void *)*(this + 5), v8);// MEF decode note: raw save-buffer memcpy into SaveLoad map +0x5C using caller UInt16 length. Candidate for future bounded copy/skip once active save-record remaining bytes are tracked. /*0x45911c*/
  *(this + 5) += a3; /*0x459125*/
  return NiTMap_SetAt(v10, v3, (int)v5); /*0x459132*/
}
