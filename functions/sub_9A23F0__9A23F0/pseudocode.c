void *__userpurge sub_9A23F0@<eax>(int this@<ecx>, size_t Size, void *Src, void *a4, char a5)
{
  void *v6; // eax
  size_t v8; // [esp-Ch] [ebp-14h]
  unsigned int v9; // [esp-4h] [ebp-Ch]

  *(_QWORD *)(this + 0x28) = Size;
  if ( (_BYTE)a4 )
  {
    v9 = *(_DWORD *)(this + 0x30);
    *(_BYTE *)(this + 0x34) = 1;
    FormHeapFree(v9);
    v6 = (void *)FormHeapAlloc(Size);
    LODWORD(v8) = Size;
    *(_DWORD *)(this + 0x30) = v6;
    return memcpy(v6, Src, v8);
  }
  else
  {
    *(_BYTE *)(this + 0x34) = 0;
    *(_DWORD *)(this + 0x30) = Src;
    return Src;
  }
}
