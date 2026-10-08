_WORD *__thiscall sub_74A820(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<NiGeometry>>::`vftable'; /*0x74a82f*/
  *(this + 4) = a2; /*0x74a835*/
  *(this + 7) = a3; /*0x74a839*/
  *(this + 5) = 0; /*0x74a83d*/
  *(this + 6) = 0; /*0x74a843*/
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x74a879*/
    {
      v6 = v5 + 1; /*0x74a881*/
      *v5 = a2; /*0x74a887*/
      sub_401080(v5 + 1, 4, a2, (void *(__thiscall *)(void *))Concurrency::details::_NonReentrantLock::_Release); /*0x74a889*/
      *((_DWORD *)this + 1) = v6; /*0x74a88f*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x74a89c*/
    }
    return this; /*0x74a893*/
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x74a8a6*/
    return this; /*0x74a8ad*/
  }
}
