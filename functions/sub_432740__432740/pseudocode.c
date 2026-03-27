int __thiscall sub_432740(unsigned int *this)
{
  unsigned int v2; // ebp
  void *v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int result; // eax
  size_t v7; // [esp-8h] [ebp-20h]
  unsigned int v8; // [esp+Ch] [ebp-Ch]
  unsigned int v9; // [esp+10h] [ebp-8h]
  void *v10; // [esp+14h] [ebp-4h]

  v2 = 2 * **(_DWORD **)(*this + 0x14);
  v3 = (void *)FormHeapAlloc((unsigned __int64)v2 >> 0x1E != 0 ? 0xFFFFFFFF : 8 * **(_DWORD **)(*this + 0x14));
  LODWORD(v7) = 4 * v2;
  v10 = v3;
  memcpy(v3, *(const void **)(*this + 0x10), v7);
  v8 = 0;
  v9 = 0;
  while ( *(this + 4) )
  {
    v4 = *(this + 4);
    *(this + 4) = *(_DWORD *)(v4 + 4);
    v5 = 0;
    if ( v2 )
    {
      while ( v4 != *((_DWORD *)v3 + v5) )
      {
        if ( ++v5 >= v2 )
          goto LABEL_5;
      }
      ++v9;
      *(_DWORD *)(v4 + 4) = v8;
      v8 = v4;
    }
    else
    {
LABEL_5:
      *(_DWORD *)(v4 + 4) = 0;
      FormHeapFree(v4);
      v3 = v10;
    }
  }
  FormHeapFree((unsigned int)v3);
  *(this + 4) = v8;
  *(this + 3) = v9;
  return result;
}
