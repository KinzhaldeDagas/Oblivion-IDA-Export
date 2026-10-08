void __thiscall sub_6CFF00(int this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // edi
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx
  unsigned __int16 v7; // di
  bool v8; // zf
  void (__stdcall *v9)(volatile LONG *); // ebx

  if ( *(_WORD *)(this + 0x44) )
  {
    v2 = *(void (__thiscall ****)(_DWORD, int))(this + 0x3C); /*0x6cff31*/
    if ( v2 )
    {
      if ( v2[0xFFFFFFFF] ) /*0x6cff3c*/
        (**v2)(v2, 3); /*0x6cff4b*/
      else
        FormHeapFree((unsigned int)(v2 + 0xFFFFFFFF)); /*0x6cff50*/
      v3 = *(unsigned __int16 *)(this + 0x44); /*0x6cff58*/
      v4 = (0x30 * (unsigned __int64)*(unsigned __int16 *)(this + 0x44)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * v3;
      v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
      if ( v5 ) /*0x6cff91*/
      {
        v6 = v5 + 4; /*0x6cff9e*/
        *(_DWORD *)v5 = v3; /*0x6cffa4*/
        ArrayConstructor( /*0x6cffa6*/
          (char *)(v5 + 4),
          0x30u,
          v3,
          (void (__thiscall *)(char *))sub_6CBCB0,
          (void (__thiscall *)(void *))NiBlendBoolInterpolator::~NiBlendBoolInterpolator);
      }
      else
      {
        v6 = 0; /*0x6cffad*/
      }
      v7 = 0; /*0x6cffaf*/
      v8 = *(_WORD *)(this + 0x44) == 0; /*0x6cffb1*/
      *(_DWORD *)(this + 0x3C) = v6; /*0x6cffb5*/
      if ( !v8 ) /*0x6cffb8*/
      {
        v9 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x6cffba*/
        do /*0x6cffda*/
          v9((volatile LONG *)(0x30 * v7++ + *(_DWORD *)(this + 0x3C) + 4)); /*0x6cffd1*/
        while ( v7 < *(_WORD *)(this + 0x44) ); /*0x6cffda*/
      }
      _memset(*(_DWORD *)(this + 0x40), 0, 4 * *(unsigned __int16 *)(this + 0x44)); /*0x6cffeb*/
    }
  }
}
