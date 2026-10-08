_WORD *__thiscall sub_739710(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<NiScreenPolygon>>::`vftable'; /*0x739744*/
  *(this + 4) = a2; /*0x73974a*/
  *(this + 7) = a3; /*0x73974e*/
  *(this + 5) = 0; /*0x739752*/
  *(this + 6) = 0; /*0x739756*/
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x739790*/
    {
      v6 = v5 + 4; /*0x73979d*/
      *(_DWORD *)v5 = a2; /*0x7397a3*/
      ArrayConstructor( /*0x7397a5*/
        (char *)(v5 + 4),
        4u,
        a2,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
      *((_DWORD *)this + 1) = v6; /*0x7397aa*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x7397b1*/
    }
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x7397b6*/
  }
  return this; /*0x7397bb*/
}
