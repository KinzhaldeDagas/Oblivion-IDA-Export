bhkRefObject *__usercall sub_8B97A0@<eax>(char a1@<bpl>)
{
  FreeEntry *v1; // ebx
  unsigned __int8 v2; // al
  bhkRefObject *v3; // ebx
  int v5; // [esp+0h] [ebp-18h]

  v1 = j_MemoryHeap_Alloc(&FormHeap, a1, 0x100000050uLL, v5); /*0x8b97d0*/
  v2 = 0x10 - ((unsigned __int8)v1 & 0xF); /*0x8b97d9*/
  v3 = (bhkRefObject *)((char *)v1 + v2); /*0x8b97de*/
  HIBYTE(v3[0xFFFFFFFF].hkObject) = v2; /*0x8b97e0*/
  sub_8A4150(v3); /*0x8b97f1*/
  v3->__vftable = (NiObjectVtbl *)&bhkRigidBodyT::`vftable'; /*0x8b97f6*/
  v3[2].__vftable = 0; /*0x8b97fc*/
  ++unk_BA8014; /*0x8b9803*/
  return v3; /*0x8b980c*/
}
