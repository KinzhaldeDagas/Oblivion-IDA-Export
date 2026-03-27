int __userpurge sub_889600@<eax>(char a1@<bpl>, unsigned __int8 a2, int a3, int a4)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // bl
  int result; // eax
  size_t v7; // [esp-8h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-4h]

  HIDWORD(v7) = 1;
  LODWORD(v7) = a3 + a2;
  v4 = j_MemoryHeap_Alloc(&FormHeap, a1, v7, v8);
  v5 = a2 - ((unsigned __int8)v4 & (a2 - 1));
  result = (int)v4 + v5;
  *(_BYTE *)(result - 1) = v5;
  return result;
}
