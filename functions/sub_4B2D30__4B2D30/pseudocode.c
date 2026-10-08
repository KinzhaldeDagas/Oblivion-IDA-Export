void *__thiscall OB_NiAVObjectPointerArray_ctor_010201A0(void *this, unsigned __int16 capacity, unsigned __int16 grow)
{
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<NiAVObject>>::`vftable'; /*0x4b2d64*/
  *((_WORD *)this + 4) = capacity; /*0x4b2d6a*/
  *((_WORD *)this + 7) = grow; /*0x4b2d6e*/
  *((_WORD *)this + 5) = 0; /*0x4b2d72*/
  *((_WORD *)this + 6) = 0; /*0x4b2d76*/
  if ( capacity )
  {
    v4 = (unsigned __int64)capacity >> 0x1E != 0 ? 0xFFFFFFFF : 4 * capacity;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x4b2db0*/
    {
      v6 = v5 + 4; /*0x4b2dbd*/
      *(_DWORD *)v5 = capacity; /*0x4b2dc3*/
      ArrayConstructor( /*0x4b2dc5*/
        (char *)(v5 + 4),
        4u,
        capacity,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_7016A0);
      *((_DWORD *)this + 1) = v6; /*0x4b2dca*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x4b2dd1*/
    }
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x4b2dd6*/
  }
  return this; /*0x4b2ddb*/
}
