int __userpurge sub_889600@<eax>(char a1@<bpl>, unsigned __int8 a2, int a3, int a4)
{
  FreeEntry *v4; // eax
  unsigned __int8 v5; // bl
  int result; // eax
  size_t v7; // [esp-8h] [ebp-Ch]
  int v8; // [esp+0h] [ebp-4h]

  HIDWORD(v7) = 1; /*0x88960c*/
  LODWORD(v7) = a3 + a2; /*0x88960e*/
  v4 = j_MemoryHeap_Alloc(&FormHeap, a1, v7, v8); /*0x889614*/
  v5 = a2 - ((unsigned __int8)v4 & (a2 - 1)); /*0x889620*/
  result = (int)v4 + v5; /*0x889625*/
  *(_BYTE *)(result - 1) = v5; /*0x889627*/
  return result; /*0x88962a*/
}
