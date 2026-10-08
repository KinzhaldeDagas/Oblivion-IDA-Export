_WORD *__thiscall sub_435B50(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<QueuedFile>>::`vftable'; /*0x435b84*/
  *(this + 4) = a2; /*0x435b8a*/
  *(this + 7) = a3; /*0x435b8e*/
  *(this + 5) = 0; /*0x435b92*/
  *(this + 6) = 0; /*0x435b96*/
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x435bd0*/
    {
      v6 = v5 + 4; /*0x435bdd*/
      *(_DWORD *)v5 = a2; /*0x435be3*/
      ArrayConstructor( /*0x435be5*/
        (char *)(v5 + 4),
        4u,
        a2,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))sub_4BDDC0);
      *((_DWORD *)this + 1) = v6; /*0x435bea*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x435bf1*/
    }
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x435bf6*/
  }
  return this; /*0x435bfb*/
}
