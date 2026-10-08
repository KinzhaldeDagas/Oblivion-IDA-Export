NiTArray<NiPointer<NiD3DPass>> *__thiscall NiTArray<NiPointer<NiD3DPass>>::NiTArray<NiPointer<NiD3DPass>>(
        NiTArray<NiPointer<NiD3DPass>> *this,
        unsigned __int16 a2,
        __int16 a3)
{
  unsigned int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<NiD3DPass>>::`vftable'; /*0x76cc0f*/
  *((_WORD *)this + 4) = a2; /*0x76cc15*/
  *((_WORD *)this + 7) = a3; /*0x76cc19*/
  *((_WORD *)this + 5) = 0; /*0x76cc1d*/
  *((_WORD *)this + 6) = 0; /*0x76cc23*/
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = (_DWORD *)FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x76cc59*/
    {
      v6 = v5 + 1; /*0x76cc61*/
      *v5 = a2; /*0x76cc67*/
      sub_401080(v5 + 1, 4, a2, (void *(__thiscall *)(void *))Concurrency::details::_NonReentrantLock::_Release); /*0x76cc69*/
      *((_DWORD *)this + 1) = v6; /*0x76cc6f*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x76cc7c*/
    }
    return this; /*0x76cc73*/
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x76cc86*/
    return this; /*0x76cc8d*/
  }
}
