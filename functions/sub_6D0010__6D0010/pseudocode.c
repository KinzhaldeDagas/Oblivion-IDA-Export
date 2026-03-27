void __thiscall sub_6D0010(_WORD *this, unsigned __int16 a2)
{
  unsigned int v3; // ecx
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // esi
  int v7; // ebx
  int v8; // eax

  *(this + 0x22) = a2;
  if ( a2 )
  {
    v3 = (0x30 * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * a2;
    v4 = (_DWORD *)FormHeapAlloc(__CFADD__(v3, 4) ? 0xFFFFFFFF : v3 + 4);
    v5 = 0;
    if ( v4 )
    {
      v5 = v4 + 1;
      *v4 = a2;
      ArrayConstructor(
        v4 + 1,
        0x30u,
        a2,
        (int)sub_6CBCB0,
        (void (__thiscall *)(void *))NiBlendBoolInterpolator::~NiBlendBoolInterpolator);
    }
    *((_DWORD *)this + 0xF) = v5;
    v6 = 0;
    v7 = a2;
    do
    {
      InterlockedIncrement((volatile LONG *)(*((_DWORD *)this + 0xF) + v6 + 4));
      v6 += 0x30;
      --v7;
    }
    while ( v7 );
    v8 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
    *((_DWORD *)this + 0x10) = v8;
    _memset(v8, 0, 4 * a2);
  }
}
