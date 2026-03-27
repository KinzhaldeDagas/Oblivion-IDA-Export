void __thiscall sub_6D10F0(unsigned __int16 *this, float a2)
{
  int *v3; // eax
  _DWORD *v4; // ebx
  unsigned int v5; // edi
  unsigned __int16 v6; // si
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // esi

  v3 = *((int **)this + 0x15);
  v4 = 0;
  if ( v3 )
  {
    v5 = (unsigned int)(v3 + 0xFFFFFFFF);
    _LN21(v3, 4u, v3[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v5);
  }
  v6 = LOWORD(a2);
  if ( LOWORD(a2) )
  {
    v7 = (unsigned __int64)LOWORD(a2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * LOWORD(a2);
    v8 = (_DWORD *)FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
    a2 = *(float *)&v8;
    if ( v8 )
    {
      v4 = v8 + 1;
      *v8 = v6;
      ArrayConstructor(
        v8 + 1,
        4u,
        v6,
        (int)Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
    }
  }
  *((_DWORD *)this + 0x15) = v4;
  v9 = v6;
  sub_4CA040(this + 0x20, v6);
  v10 = 0;
  if ( v9 )
  {
    a2 = 0.0;
    do
      sub_4CA210((int)(this + 0x20), v10++, &a2);
    while ( v10 < v9 );
  }
}
