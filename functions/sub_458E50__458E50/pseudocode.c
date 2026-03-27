int __thiscall sub_458E50(_DWORD *this, int a2, unsigned __int16 a3)
{
  _DWORD *v4; // ebp
  FreeEntry *v5; // ebx
  size_t v7; // [esp-8h] [ebp-1Ch]
  size_t v8; // [esp-4h] [ebp-18h]
  int v9; // [esp+0h] [ebp-14h]
  int v10; // [esp+10h] [ebp-4h] BYREF
  int a2a; // [esp+18h] [ebp+4h]

  a2a = *(_DWORD *)(a2 + 0xC);
  if ( NiTMap_GetAt((_DWORD *)*(this + 0x15), a2a, &v10) )
    a2a = 0;
  v4 = (_DWORD *)*(this + 0x15);
  HIDWORD(v7) = 1;
  LODWORD(v7) = a3 + 2;
  v5 = j_MemoryHeap_Alloc(&FormHeap, (char)v4, v7, v9);
  LOWORD(v5->prev) = a3;
  LODWORD(v8) = a3;
  memcpy((char *)&v5->prev + 2, (const void *)*(this + 5), v8);
  *(this + 5) += a3;
  return NiTMap_SetAt(v4, a2a, (int)v5);
}
