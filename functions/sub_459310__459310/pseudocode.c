int __thiscall sub_459310(_DWORD *this, _DWORD *a2, unsigned __int16 a3)
{
  int v3; // ebp
  FreeEntry *v5; // ebx
  size_t v7; // [esp-8h] [ebp-18h]
  size_t v8; // [esp-4h] [ebp-14h]
  int v9; // [esp+0h] [ebp-10h]
  _DWORD *v10; // [esp+14h] [ebp+4h]

  v3 = a2[3];
  HIDWORD(v7) = 1;
  v10 = (_DWORD *)*(this + 0x18);
  LODWORD(v7) = a3 + 2;
  v5 = j_MemoryHeap_Alloc(&FormHeap, v3, v7, v9);
  LOWORD(v5->prev) = a3;
  LODWORD(v8) = a3;
  memcpy((char *)&v5->prev + 2, (const void *)*(this + 5), v8);
  *(this + 5) += a3;
  return NiTMap_SetAt(v10, v3, (int)v5);
}
