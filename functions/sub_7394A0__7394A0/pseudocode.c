// Pass227: Constructs NiTArray<NiPointer<NiScreenTexture>> for NiScreenSpaceCamera +0x134.
_WORD *__thiscall sub_7394A0(_WORD *this, unsigned __int16 a2, __int16 a3)
{
  unsigned int v4; // ecx
  int v5; // eax
  int v6; // ebx

  *(_DWORD *)this = &NiTArray<NiPointer<NiScreenTexture>>::`vftable'; /*0x7394d4*/
  *(this + 4) = a2; /*0x7394da*/
  *(this + 7) = a3; /*0x7394de*/
  *(this + 5) = 0; /*0x7394e2*/
  *(this + 6) = 0; /*0x7394e6*/
  if ( a2 )
  {
    v4 = (unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2;
    v5 = FormHeapAlloc(__CFADD__(v4, 4) ? 0xFFFFFFFF : v4 + 4);
    if ( v5 ) /*0x739520*/
    {
      v6 = v5 + 4; /*0x73952d*/
      *(_DWORD *)v5 = a2; /*0x739533*/
      ArrayConstructor( /*0x739535*/
        (char *)(v5 + 4),
        4u,
        a2,
        (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
      *((_DWORD *)this + 1) = v6; /*0x73953a*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x739541*/
    }
  }
  else
  {
    *((_DWORD *)this + 1) = 0; /*0x739546*/
  }
  return this; /*0x73954b*/
}
