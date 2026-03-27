FreeEntry *__userpurge sub_51ACF0@<eax>(int this@<ecx>, char a2@<bpl>, int a3)
{
  unsigned int v4; // ebx
  FreeEntry *result; // eax
  FreeEntry *v6; // eax
  FreeEntry *v7; // ebp
  FreeEntry *v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  bool v13; // zf
  size_t v14; // [esp-Ch] [ebp-18h]
  size_t v15; // [esp-8h] [ebp-14h]
  size_t v16; // [esp-8h] [ebp-14h]
  size_t v17; // [esp-8h] [ebp-14h]
  size_t v18; // [esp-8h] [ebp-14h]
  char v19; // [esp+0h] [ebp-Ch]

  v4 = *(_DWORD *)(this + 0x24);
  *(_DWORD *)(this + 0x24) = a3;
  if ( a3 )
  {
    if ( v4 )
    {
      HIDWORD(v14) = 1;
      LODWORD(v14) = 0x10 * v4;
      v6 = j_MemoryHeap_Alloc(&FormHeap, a2, v14, a2);
      LODWORD(v15) = 0x10 * v4;
      v7 = v6;
      memcpy(v6, *(const void **)(this + 0x28), v15);
      LODWORD(v16) = 0x10 * *(_DWORD *)(this + 0x24);
      v8 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, *(void **)(this + 0x28), v16);
      v9 = *(_DWORD *)(this + 0x24);
      *(_DWORD *)(this + 0x28) = v8;
      v10 = v4;
      if ( v4 > v9 )
        v10 = v9;
      LODWORD(v17) = 0x10 * v10;
      memcpy(v8, v7, v17);
      result = (FreeEntry *)MemoryHeap_Free_checked(v7);
      v11 = v4;
      if ( v4 < *(_DWORD *)(this + 0x24) )
      {
        result = (FreeEntry *)(0x10 * v4);
        do
        {
          *(FreeEntry **)((char *)&result[1].next + *(_DWORD *)(this + 0x28)) = 0;
          *(float *)((char *)&result->prev + *(_DWORD *)(this + 0x28)) = 0.0;
          *((_BYTE *)&result->next + *(_DWORD *)(this + 0x28)) = 0xFA;
          *(float *)((char *)&result[1].prev + *(_DWORD *)(this + 0x28)) = 1.0;
          ++v11;
          result += 2;
        }
        while ( v11 < *(_DWORD *)(this + 0x24) );
      }
    }
    else
    {
      HIDWORD(v18) = 1;
      LODWORD(v18) = 0x10 * a3;
      result = j_MemoryHeap_Alloc(&FormHeap, a2, v18, v19);
      v12 = 0;
      v13 = *(_DWORD *)(this + 0x24) == 0;
      *(_DWORD *)(this + 0x28) = result;
      if ( !v13 )
      {
        result = 0;
        do
        {
          *(FreeEntry **)((char *)&result[1].next + *(_DWORD *)(this + 0x28)) = 0;
          *(float *)((char *)&result->prev + *(_DWORD *)(this + 0x28)) = 0.0;
          *((_BYTE *)&result->next + *(_DWORD *)(this + 0x28)) = 0xFA;
          *(float *)((char *)&result[1].prev + *(_DWORD *)(this + 0x28)) = 1.0;
          ++v12;
          result += 2;
        }
        while ( v12 < *(_DWORD *)(this + 0x24) );
      }
    }
  }
  else
  {
    result = (FreeEntry *)MemoryHeap_Free_checked(*(void **)(this + 0x28));
    *(_DWORD *)(this + 0x28) = 0;
  }
  return result;
}
