void __userpurge sub_4FC7A0(TESForm *this@<ecx>, char a2@<bpl>, int a3)
{
  unsigned int v4; // eax

  if ( a3 )
  {
    *((_DWORD *)this + 6) = *(_DWORD *)(a3 + 0x18);
    *((_DWORD *)this + 7) = *(_DWORD *)(a3 + 0x1C);
    *((_DWORD *)this + 8) = *(_DWORD *)(a3 + 0x20);
    *((_DWORD *)this + 9) = *(_DWORD *)(a3 + 0x24);
    *((_DWORD *)this + 0xA) = *(_DWORD *)(a3 + 0x28);
    v4 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 6) = 0;
    sub_4F9DF0((void **)&this->vtbl, a2, a3, v4, *(void **)(a3 + 0x30));
    sub_4FC730((Script *)this);
    sub_4FC040((int *)(a3 + 0x40), (_DWORD *)this + 0x10);
    sub_4FC6C0((BSSimpleList_VoidPtr *)this);
    if ( *(_DWORD *)(a3 + 0x2C) )
    {
      Script_SetText((void **)&this->vtbl, a3, *(char **)(a3 + 0x2C));
    }
    else
    {
      if ( *((_DWORD *)this + 0xB) )
        MemoryHeap_Free_checked(*((void **)this + 0xB));
      *((_DWORD *)this + 0xB) = 0;
    }
    TESForm_SetIsLinked(this, (*(_DWORD *)(a3 + 8) & 8) != 0);
  }
}
