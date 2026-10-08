int __userpurge sub_8BD5A0@<eax>(_DWORD *this@<ecx>, int a2@<ebx>, char a3@<bpl>, _BYTE *a4)
{
  FreeEntry *v5; // ebx
  unsigned __int8 v6; // al
  _DWORD *v7; // ebx
  bool v8; // zf

  if ( *(this + 3) ) /*0x8bd5a3*/
  {
    *a4 = 0; /*0x8bd5f6*/
    return *(this + 3); /*0x8bd5f9*/
  }
  else
  {
    v5 = j_MemoryHeap_Alloc(&FormHeap, a3, 0x100000070uLL, a2); /*0x8bd5b8*/
    v6 = 0x10 - ((unsigned __int8)v5 & 0xF); /*0x8bd5c1*/
    v7 = (FreeEntry **)((char *)&v5->prev + v6); /*0x8bd5c6*/
    *((_BYTE *)v7 + 0xFFFFFFFF) = v6; /*0x8bd5ca*/
    OB_bhkShapePhantomCinfo_InitIdentity_010201A0(v7); /*0x8bd5cd*/
    v8 = *(this + 2) == 0; /*0x8bd5d2*/
    *(this + 3) = v7; /*0x8bd5d6*/
    if ( !v8 ) /*0x8bd5d9*/
      sub_8AEE10(this, (float *)v7); /*0x8bd5de*/
    *a4 = 1; /*0x8bd5e7*/
    return *(this + 3); /*0x8bd5ea*/
  }
}
