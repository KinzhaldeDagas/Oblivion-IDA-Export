char __thiscall sub_6C5AB0(int *this, int a2)
{
  char result; // al
  unsigned int i; // edi
  int v5; // ecx
  int v6; // ecx
  NiDefaultAVObjectPalette *v7; // eax
  NiDefaultAVObjectPalette *v8; // ebx
  volatile LONG *v9; // edi

  result = sub_715F10(this, a2);
  if ( result )
  {
    for ( i = 0; i < *((unsigned __int16 *)this + 0x23); ++i )
    {
      v5 = *(_DWORD *)(*(this + 0x10) + 4 * i);
      if ( v5 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2);
    }
    v6 = *(this + 0x1F);
    if ( v6 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2);
    }
    else
    {
      v7 = (NiDefaultAVObjectPalette *)FormHeapAlloc(0x20u);
      if ( v7 )
        v8 = NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(v7, *(this + 0xC));
      else
        v8 = 0;
      v9 = (volatile LONG *)*(this + 0x1F);
      if ( v9 != (volatile LONG *)v8 )
      {
        if ( v9 )
        {
          if ( !InterlockedDecrement(v9 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
        }
        *(this + 0x1F) = (int)v8;
        if ( v8 )
          InterlockedIncrement((volatile LONG *)v8 + 1);
      }
    }
    return 1;
  }
  return result;
}
