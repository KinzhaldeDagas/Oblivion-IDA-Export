_DWORD *__thiscall sub_732480(_DWORD *this, int a2)
{
  void (__thiscall ***v3)(_DWORD, int); // ecx
  int v4; // ecx
  unsigned int v5; // eax
  size_t v7; // [esp-4h] [ebp-Ch]

  if ( this != (_DWORD *)a2 )
  {
    v3 = (void (__thiscall ***)(_DWORD, int))*(this + 6);
    if ( v3 )
    {
      (**v3)(v3, 1);
      *(this + 6) = 0;
    }
    v4 = *(this + 3);
    *((_BYTE *)this + 8) = *(_BYTE *)(a2 + 8);
    *(this + 4) = 1;
    if ( v4 != *(_DWORD *)(a2 + 0xC) )
    {
      FormHeapFree(*(this + 5));
      v5 = *(_DWORD *)(a2 + 0xC);
      *(this + 3) = v5;
      *(this + 5) = FormHeapAlloc((unsigned __int64)v5 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v5);
    }
    LODWORD(v7) = 4 * *(_DWORD *)(a2 + 0xC);
    memcpy((void *)*(this + 5), *(const void **)(a2 + 0x14), v7);
  }
  return this;
}
