NiObject *__thiscall sub_6CCE40(NiObject *this, char a2, float a3, unsigned __int8 a4)
{
  int v5; // ebx
  double v6; // st7
  unsigned int v7; // ecx
  int v8; // eax

  sub_6EBA00(this); /*0x6cce6a*/
  *((float *)this + 7) = a3; /*0x6cce77*/
  v5 = 0; /*0x6cce80*/
  *((float *)this + 8) = flt_A79F00; /*0x6cce86*/
  *((_BYTE *)this + 0xC) = 0; /*0x6cce8b*/
  *((_BYTE *)this + 0x10) = 0x80; /*0x6cce8e*/
  *((_BYTE *)this + 0x11) = 0x80; /*0x6cce91*/
  this->__vftable = (NiObjectVtbl *)&NiBlendInterpolator::`vftable'; /*0x6cce94*/
  *((_BYTE *)this + 0xD) = a4; /*0x6cce9a*/
  *((_BYTE *)this + 0xE) = 0; /*0x6cce9d*/
  *((_BYTE *)this + 0xF) = 0xFF; /*0x6ccea0*/
  *((_DWORD *)this + 5) = 0; /*0x6ccea4*/
  *((_DWORD *)this + 6) = 0; /*0x6ccea7*/
  *((float *)this + 9) = -flt_A7DEB4; /*0x6cceb7*/
  *((float *)this + 0xA) = -flt_A7DEB4; /*0x6ccec6*/
  v6 = flt_A7DEB4; /*0x6ccec9*/
  *((_BYTE *)this + 0xC) = a2 != 0; /*0x6ccecf*/
  *((float *)this + 0xB) = -v6; /*0x6cced4*/
  if ( a4 )
  {
    v7 = (0x18 * (unsigned __int64)a4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * a4;
    v8 = FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
    if ( v8 ) /*0x6ccf0e*/
    {
      v5 = v8 + 4; /*0x6ccf1b*/
      *(_DWORD *)v8 = a4; /*0x6ccf21*/
      ArrayConstructor( /*0x6ccf23*/
        (char *)(v8 + 4),
        0x18u,
        a4,
        (void (__thiscall *)(char *))sub_6CCDE0,
        (void (__thiscall *)(void *))NiPointerSlot_Release);
    }
    *((_DWORD *)this + 5) = v5; /*0x6ccf28*/
  }
  return this; /*0x6ccf2d*/
}
