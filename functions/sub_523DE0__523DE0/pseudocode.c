_WORD *__thiscall sub_523DE0(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<NiTexture>>::`vftable'; /*0x523e14*/
  *(this + 4) = a2; /*0x523e1a*/
  *(this + 7) = a3; /*0x523e1e*/
  *(this + 5) = 0; /*0x523e22*/
  *(this + 6) = 0; /*0x523e26*/
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x523e60*/
    {
      v6 = v5 + 4; /*0x523e6d*/
      *(_DWORD *)v5 = a2; /*0x523e73*/
      ArrayConstructor( /*0x523e75*/
        (char *)(v5 + 4),
        4u,
        a2,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
      *((_DWORD *)this + 1) = v6; /*0x523e7a*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x523e81*/
    }
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x523e86*/
  }
  return this; /*0x523e8b*/
}
