_WORD *__thiscall sub_6C7D90(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<NiInterpController>>::`vftable'; /*0x6c7dc4*/
  *(this + 4) = a2; /*0x6c7dca*/
  *(this + 7) = a3; /*0x6c7dce*/
  *(this + 5) = 0; /*0x6c7dd2*/
  *(this + 6) = 0; /*0x6c7dd6*/
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x6c7e10*/
    {
      v6 = v5 + 4; /*0x6c7e1d*/
      *(_DWORD *)v5 = a2; /*0x6c7e23*/
      ArrayConstructor( /*0x6c7e25*/
        (char *)(v5 + 4),
        4u,
        a2,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
      *((_DWORD *)this + 1) = v6; /*0x6c7e2a*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x6c7e31*/
    }
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x6c7e36*/
  }
  return this; /*0x6c7e3b*/
}
