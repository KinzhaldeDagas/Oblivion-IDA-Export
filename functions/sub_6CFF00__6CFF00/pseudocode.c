void __thiscall sub_6CFF00(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // edi
  unsigned int v4; // ecx
  int *v5; // eax
  _DWORD *v6; // ebx
  unsigned __int16 v7; // di
  bool v8; // zf
  void (__stdcall *v9)(volatile LONG *); // ebx

  if ( *(_WORD *)(this + 0x44) )
  {
    v2 = *(void (__thiscall ****)(_DWORD, int))(this + 0x3C);
    if ( v2 )
    {
      if ( v2[0xFFFFFFFF] )
        (**v2)(v2, 3);
      else
        FormHeapFree((unsigned int)(v2 + 0xFFFFFFFF));
      v3 = *(unsigned __int16 *)(this + 0x44);
      v4 = (0x30 * (unsigned __int64)*(unsigned __int16 *)(this + 0x44)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * v3;
      v5 = (int *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
      if ( v5 )
      {
        v6 = v5 + 1;
        *v5 = v3;
        ArrayConstructor(
          v5 + 1,
          0x30u,
          v3,
          (int)sub_6CBCB0,
          (void (__thiscall *)(void *))NiBlendBoolInterpolator::~NiBlendBoolInterpolator);
      }
      else
      {
        v6 = 0;
      }
      v7 = 0;
      v8 = *(_WORD *)(this + 0x44) == 0;
      *(_DWORD *)(this + 0x3C) = v6;
      if ( !v8 )
      {
        v9 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
        do
          v9((volatile LONG *)(0x30 * v7++ + *(_DWORD *)(this + 0x3C) + 4));
        while ( v7 < *(_WORD *)(this + 0x44) );
      }
      _memset(*(_DWORD *)(this + 0x40), 0, 4 * *(unsigned __int16 *)(this + 0x44));
    }
  }
}
