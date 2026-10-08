// Resizes TESAnimGroup's parsed text-key event array at +0x24/+0x28. Each record is 0x10 bytes; preserved records are copied, new records initialize time=0, byte/enum=0xFA, float scale=1.0, and sound pointer=null; a zero count frees the array.
FreeEntry *__userpurge TESAnimGroup_ResizeTextKeyEvents@<eax>(int this@<ecx>, char a2@<bpl>, int a3)
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

  v4 = *(_DWORD *)(this + 0x24); /*0x51acf8*/
  *(_DWORD *)(this + 0x24) = a3; /*0x51ad00*/
  if ( a3 ) /*0x51ad08*/
  {
    if ( v4 ) /*0x51ad1e*/
    {
      HIDWORD(v14) = 1; /*0x51ad27*/
      LODWORD(v14) = 0x10 * v4; /*0x51ad2c*/
      v6 = j_MemoryHeap_Alloc(&FormHeap, a2, v14, a2); /*0x51ad2d*/
      LODWORD(v15) = 0x10 * v4; /*0x51ad35*/
      v7 = v6; /*0x51ad36*/
      memcpy(v6, *(const void **)(this + 0x28), v15); /*0x51ad3a*/
      LODWORD(v16) = 0x10 * *(_DWORD *)(this + 0x24); /*0x51ad4b*/
      v8 = MemoryHeap_Reallocate((void (__thiscall ***)(void *, int))&FormHeap, *(void **)(this + 0x28), v16); /*0x51ad52*/
      v9 = *(_DWORD *)(this + 0x24); /*0x51ad57*/
      *(_DWORD *)(this + 0x28) = v8; /*0x51ad5c*/
      v10 = v4; /*0x51ad5f*/
      if ( v4 > v9 ) /*0x51ad61*/
        v10 = v9; /*0x51ad63*/
      LODWORD(v17) = 0x10 * v10; /*0x51ad68*/
      memcpy(v8, v7, v17); /*0x51ad6b*/
      result = (FreeEntry *)MemoryHeap_Free_checked(v7); /*0x51ad79*/
      v11 = v4; /*0x51ad81*/
      if ( v4 < *(_DWORD *)(this + 0x24) ) /*0x51ad84*/
      {
        result = (FreeEntry *)(0x10 * v4); /*0x51ad8c*/
        do /*0x51adbe*/
        {
          *(FreeEntry **)((char *)&result[1].next + *(_DWORD *)(this + 0x28)) = 0; /*0x51ad97*/
          *(float *)((char *)&result->prev + *(_DWORD *)(this + 0x28)) = 0.0; /*0x51ada2*/
          *((_BYTE *)&result->next + *(_DWORD *)(this + 0x28)) = 0xFA; /*0x51ada8*/
          *(float *)((char *)&result[1].prev + *(_DWORD *)(this + 0x28)) = 1.0; /*0x51adb1*/
          ++v11; /*0x51adb5*/
          result += 2; /*0x51adb8*/
        }
        while ( v11 < *(_DWORD *)(this + 0x24) ); /*0x51adbe*/
      }
    }
    else
    {
      HIDWORD(v18) = 1; /*0x51adcd*/
      LODWORD(v18) = 0x10 * a3; /*0x51adcf*/
      result = j_MemoryHeap_Alloc(&FormHeap, a2, v18, v19); /*0x51add0*/
      v12 = 0; /*0x51add5*/
      v13 = *(_DWORD *)(this + 0x24) == 0; /*0x51add7*/
      *(_DWORD *)(this + 0x28) = result; /*0x51adda*/
      if ( !v13 ) /*0x51addd*/
      {
        result = 0; /*0x51ade1*/
        do /*0x51ae0f*/
        {
          *(FreeEntry **)((char *)&result[1].next + *(_DWORD *)(this + 0x28)) = 0; /*0x51adec*/
          *(float *)((char *)&result->prev + *(_DWORD *)(this + 0x28)) = 0.0; /*0x51adf3*/
          *((_BYTE *)&result->next + *(_DWORD *)(this + 0x28)) = 0xFA; /*0x51adf9*/
          *(float *)((char *)&result[1].prev + *(_DWORD *)(this + 0x28)) = 1.0; /*0x51ae02*/
          ++v12; /*0x51ae06*/
          result += 2; /*0x51ae09*/
        }
        while ( v12 < *(_DWORD *)(this + 0x24) ); /*0x51ae0f*/
      }
    }
  }
  else
  {
    result = (FreeEntry *)MemoryHeap_Free_checked(*(void **)(this + 0x28)); /*0x51ad0e*/
    *(_DWORD *)(this + 0x28) = 0; /*0x51ad13*/
  }
  return result; /*0x51ad16*/
}
