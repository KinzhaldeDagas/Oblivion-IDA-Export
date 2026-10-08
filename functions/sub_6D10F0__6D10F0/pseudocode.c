void __thiscall sub_6D10F0(unsigned __int16 *this, float a2)
{
  char *v3; // eax
  int v4; // ebx
  unsigned int v5; // edi
  unsigned __int16 v6; // si
  unsigned int v7; // ecx
  float v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // esi

  v3 = *((char **)this + 0x15); /*0x6d1116*/
  v4 = 0; /*0x6d1119*/
  if ( v3 ) /*0x6d111d*/
  {
    v5 = (unsigned int)(v3 + 0xFFFFFFFC); /*0x6d1122*/
    _LN21(v3, 4u, *((_DWORD *)v3 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6d112e*/
    FormHeapFree(v5); /*0x6d1134*/
  }
  v6 = LOWORD(a2); /*0x6d113c*/
  if ( LOWORD(a2) )
  {
    v7 = (unsigned __int64)LOWORD(a2) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * LOWORD(a2);
    v8 = COERCE_FLOAT(FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4));
    a2 = v8; /*0x6d1170*/
    if ( v8 != 0.0 ) /*0x6d117a*/
    {
      v4 = LODWORD(v8) + 4; /*0x6d1187*/
      *(_DWORD *)LODWORD(v8) = v6; /*0x6d118d*/
      ArrayConstructor( /*0x6d118f*/
        (char *)(LODWORD(v8) + 4),
        4u,
        v6,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
  }
  *((_DWORD *)this + 0x15) = v4; /*0x6d119c*/
  v9 = v6; /*0x6d119f*/
  sub_4CA040(this + 0x20, v6); /*0x6d11a8*/
  v10 = 0; /*0x6d11ad*/
  if ( v9 ) /*0x6d11b1*/
  {
    a2 = 0.0; /*0x6d11b5*/
    do /*0x6d11d2*/
      sub_4CA210((int)(this + 0x20), v10++, &a2); /*0x6d11c8*/
    while ( v10 < v9 ); /*0x6d11d2*/
  }
}
