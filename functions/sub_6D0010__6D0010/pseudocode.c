void __thiscall sub_6D0010(_WORD *this, unsigned __int16 a2)
{
  unsigned int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // esi
  int v7; // ebx
  int v8; // eax

  *(this + 0x22) = a2; /*0x6d003e*/
  if ( a2 )
  {
    v3 = (0x30 * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * a2;
    v4 = FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
    v5 = 0; /*0x6d0076*/
    if ( v4 ) /*0x6d007e*/
    {
      v5 = v4 + 4; /*0x6d008b*/
      *(_DWORD *)v4 = a2; /*0x6d0091*/
      ArrayConstructor( /*0x6d0093*/
        (char *)(v4 + 4),
        0x30u,
        a2,
        (void (__thiscall *)(char *))sub_6CBCB0,
        (void (__thiscall *)(void *))NiBlendBoolInterpolator::~NiBlendBoolInterpolator);
    }
    *((_DWORD *)this + 0xF) = v5; /*0x6d00a3*/
    v6 = 0; /*0x6d00a8*/
    v7 = a2; /*0x6d00aa*/
    do /*0x6d00c4*/
    {
      InterlockedIncrement((volatile LONG *)(*((_DWORD *)this + 0xF) + v6 + 4)); /*0x6d00b8*/
      v6 += 0x30; /*0x6d00be*/
      --v7; /*0x6d00c1*/
    }
    while ( v7 ); /*0x6d00c4*/
    v8 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
    *((_DWORD *)this + 0x10) = v8; /*0x6d00e9*/
    _memset(v8, 0, 4 * a2); /*0x6d00ec*/
  }
}
