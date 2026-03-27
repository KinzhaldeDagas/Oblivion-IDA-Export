int __usercall sub_889770@<eax>(char a1@<bpl>, int a2, unsigned __int8 a3)
{
  FreeEntry *v3; // eax
  unsigned __int8 v4; // bl
  int result; // eax
  size_t v6; // [esp-8h] [ebp-Ch]
  int v7; // [esp+0h] [ebp-4h]

  HIDWORD(v6) = 1;
  LODWORD(v6) = a2 + a3;
  v3 = j_MemoryHeap_Alloc(&FormHeap, a1, v6, v7);
  v4 = a3 - ((unsigned __int8)v3 & (a3 - 1));
  result = (int)v3 + v4;
  *(_BYTE *)(result - 1) = v4;
  return result;
}
