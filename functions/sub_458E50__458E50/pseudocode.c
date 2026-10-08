// MEF v27 verification: raw blob helper consumes UInt16 payload from SaveLoad+0x14. Guarded null-key/null-map replacements must discard the payload before skipping map insertion to preserve stream alignment.
int __thiscall sub_458E50(_DWORD *this, int a2, unsigned __int16 a3)
{
  _DWORD *v4; // ebp
  FreeEntry *v5; // ebx
  size_t v7; // [esp-8h] [ebp-1Ch]
  size_t v8; // [esp-4h] [ebp-18h]
  int v9; // [esp+0h] [ebp-14h]
  int v10; // [esp+10h] [ebp-4h] BYREF
  int a2a; // [esp+18h] [ebp+4h]

  a2a = *(_DWORD *)(a2 + 0xC); /*0x458e67*/
  if ( NiTMap_GetAt((_DWORD *)*(this + 0x15), a2a, &v10) ) /*0x458e6b*/
    a2a = 0; /*0x458e74*/
  v4 = (_DWORD *)*(this + 0x15); /*0x458e81*/
  HIDWORD(v7) = 1; /*0x458e84*/
  LODWORD(v7) = a3 + 2; /*0x458e89*/
  v5 = j_MemoryHeap_Alloc(&FormHeap, (char)v4, v7, v9); /*0x458e94*/
  LOWORD(v5->prev) = a3; /*0x458e9b*/
  LODWORD(v8) = a3; /*0x458ea1*/
  memcpy((char *)&v5->prev + 2, (const void *)*(this + 5), v8);// MEF decode note: raw save-buffer memcpy using UInt16 length from sub_470780 and SaveLoad+0x14 cursor. Bypasses SaveLoad_LoadData; needs active record-range tracking or bounded helper replacement before patching. /*0x458ea7*/
  *(this + 5) += a3; /*0x458eb0*/
  return NiTMap_SetAt(v4, a2a, (int)v5); /*0x458ebf*/
}
