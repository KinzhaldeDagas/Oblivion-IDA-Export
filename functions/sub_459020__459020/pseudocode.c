// MEF v27 verification: same raw blob consumed-length contract as sub_458E50 for SaveLoad+0x58 map; guarded skips must advance/discard payload.
int __thiscall sub_459020(_DWORD *this, _DWORD *a2, unsigned __int16 a3)
{
  int v3; // ebp
  FreeEntry *v5; // ebx
  size_t v7; // [esp-8h] [ebp-18h]
  size_t v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+0h] [ebp-10h]
  _DWORD *v10; // [esp+14h] [ebp+4h]

  v3 = a2[3]; /*0x459026*/
  HIDWORD(v7) = 1; /*0x459035*/
  v10 = (_DWORD *)*(this + 0x16); /*0x45903a*/
  LODWORD(v7) = a3 + 2; /*0x45903e*/
  v5 = j_MemoryHeap_Alloc(&FormHeap, v3, v7, v9); /*0x459049*/
  LOWORD(v5->prev) = a3; /*0x459050*/
  LODWORD(v8) = a3; /*0x459056*/
  memcpy((char *)&v5->prev + 2, (const void *)*(this + 5), v8);// MEF decode note: raw save-buffer memcpy into SaveLoad map +0x58 using caller UInt16 length. Also writes allocation result before null check; keep as improvement candidate until record-range boundary is verified. /*0x45905c*/
  *(this + 5) += a3; /*0x459065*/
  return NiTMap_SetAt(v10, v3, (int)v5); /*0x459072*/
}
