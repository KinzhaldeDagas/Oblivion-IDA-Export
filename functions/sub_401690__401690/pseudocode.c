// Unlinks a free block from its doubly linked size bin, clears the free flag and links, and updates bin/global free-entry counts.
unsigned int __thiscall MemoryHeap_RemoveFreeEntry(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // edx
  unsigned int result; // eax
  int v7; // esi

  v3 = a3[2]; /*0x401698*/
  v4 = a3[3]; /*0x40169e*/
  if ( v3 ) /*0x4016a0*/
    *(_DWORD *)(v3 + 0xC) = a3[3]; /*0x4016a2*/
  v5 = a3[3]; /*0x4016a5*/
  if ( v5 ) /*0x4016aa*/
    *(_DWORD *)(v5 + 8) = a3[2]; /*0x4016b0*/
  a3[1] &= ~0x40000000u; /*0x4016b8*/
  a3[3] = 0; /*0x4016bf*/
  a3[2] = 0; /*0x4016c6*/
  if ( a3 == (_DWORD *)*a2 ) /*0x4016cf*/
    *a2 = v4; /*0x4016d1*/
  if ( a3 == (_DWORD *)a2[1] ) /*0x4016d6*/
    a2[1] = v3; /*0x4016d8*/
  result = a3[1] & 0xFFFFFFF; /*0x4016de*/
  if ( result > 0x1000 ) /*0x4016e8*/
  {
    --*(this + 0xA); /*0x401711*/
  }
  else
  {
    result = (int)(result - *(this + 1)) / 0x100; /*0x4016f6*/
    if ( result != 0xFFFFFFFF ) /*0x4016fe*/
    {
      v7 = *(this + 0x11); /*0x401700*/
      --*(_DWORD *)(v7 + 8 * result); /*0x401703*/
      result = v7 + 8 * result; /*0x401706*/
    }
    --*(this + 0xA); /*0x401709*/
  }
  return result; /*0x40170c*/
}
