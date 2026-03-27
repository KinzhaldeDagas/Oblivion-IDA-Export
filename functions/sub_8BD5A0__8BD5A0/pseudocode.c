int __userpurge sub_8BD5A0@<eax>(_DWORD *this@<ecx>, int a2@<ebx>, char a3@<bpl>, _BYTE *a4)
{
  FreeEntry *v5; // ebx
  unsigned __int8 v6; // al
  _DWORD *v7; // ebx
  bool v8; // zf

  if ( *(this + 3) )
  {
    *a4 = 0;
    return *(this + 3);
  }
  else
  {
    v5 = j_MemoryHeap_Alloc(&FormHeap, a3, 0x100000070uLL, a2);
    v6 = 0x10 - ((unsigned __int8)v5 & 0xF);
    v7 = (FreeEntry **)((char *)&v5->prev + v6);
    *((_BYTE *)v7 + 0xFFFFFFFF) = v6;
    sub_532250(v7);
    v8 = *(this + 2) == 0;
    *(this + 3) = v7;
    if ( !v8 )
      sub_8AEE10(this, (float *)v7);
    *a4 = 1;
    return *(this + 3);
  }
}
