_WORD *__thiscall sub_74A820(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<NiGeometry>>::`vftable';
  *(this + 4) = a2;
  *(this + 7) = a3;
  *(this + 5) = 0;
  *(this + 6) = 0;
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 )
    {
      v6 = v5 + 1;
      *v5 = a2;
      sub_401080(v5 + 1, 4, a2, (void *(__thiscall *)(void *))Concurrency::details::_NonReentrantLock::_Release);
      *((_DWORD *)this + 1) = v6;
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    return this;
  }
  else
  {
    *((_DWORD *)this + 1) = 0;
    return this;
  }
}
