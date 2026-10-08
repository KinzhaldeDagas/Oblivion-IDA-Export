char __thiscall sub_6C5AB0(int *this, int a2)
{
  char result; // al
  unsigned int i; // edi
  int v5; // ecx
  int v6; // ecx
  NiDefaultAVObjectPalette *v7; // eax
  NiDefaultAVObjectPalette *v8; // ebx
  volatile LONG *v9; // edi

  result = NiTimeController_RegisterStreamables((NiRenderTargetGroup *)this, a2); /*0x6c5ada*/
  if ( result ) /*0x6c5ae1*/
  {
    for ( i = 0; i < *((unsigned __int16 *)this + 0x23); ++i ) /*0x6c5afa*/
    {
      v5 = *(_DWORD *)(*(this + 0x10) + 4 * i); /*0x6c5b03*/
      if ( v5 ) /*0x6c5b08*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x24))(v5, a2); /*0x6c5b10*/
    }
    v6 = *(this + 0x1F); /*0x6c5b1d*/
    if ( v6 ) /*0x6c5b22*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2); /*0x6c5b2a*/
    }
    else
    {
      v7 = (NiDefaultAVObjectPalette *)FormHeapAlloc(0x20u); /*0x6c5b30*/
      if ( v7 ) /*0x6c5b46*/
        v8 = NiDefaultAVObjectPalette::NiDefaultAVObjectPalette(v7, *(this + 0xC)); /*0x6c5b53*/
      else
        v8 = 0; /*0x6c5b57*/
      v9 = (volatile LONG *)*(this + 0x1F); /*0x6c5b59*/
      if ( v9 != (volatile LONG *)v8 ) /*0x6c5b66*/
      {
        if ( v9 ) /*0x6c5b6a*/
        {
          if ( !InterlockedDecrement(v9 + 1) ) /*0x6c5b70*/
            (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x6c5b86*/
        }
        *(this + 0x1F) = (int)v8; /*0x6c5b8a*/
        if ( v8 ) /*0x6c5b8d*/
          InterlockedIncrement((volatile LONG *)v8 + 1); /*0x6c5b93*/
      }
    }
    return 1; /*0x6c5b99*/
  }
  return result; /*0x6c5ae3*/
}
