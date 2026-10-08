float *__thiscall sub_6C37D0(float *this, char a2, float a3, unsigned __int8 a4)
{
  unsigned __int8 v5; // al
  int v6; // ebp
  void *v7; // eax
  void *v8; // edi

  sub_6CCE40(this, a2, a3, a4); /*0x6c380e*/
  *(_DWORD *)this = &NiBlendAccumTransformInterpolator::`vftable'; /*0x6c3813*/
  *((_DWORD *)this + 0xC) = dword_B24260; /*0x6c381f*/
  *((_DWORD *)this + 0xD) = dword_B24264; /*0x6c3827*/
  *((_DWORD *)this + 0xE) = dword_B24268; /*0x6c3830*/
  *(this + 0xF) = flt_B3CBA4; /*0x6c3839*/
  *(this + 0x10) = flt_B3CBA8; /*0x6c3841*/
  *(this + 0x11) = flt_B3CBAC; /*0x6c384a*/
  *(this + 0x12) = flt_B3CBB0; /*0x6c3853*/
  *(this + 0x13) = flt_A79E10; /*0x6c385c*/
  v5 = *((_BYTE *)this + 0xD); /*0x6c385f*/
  *(this + 0x14) = 0.0; /*0x6c386c*/
  *((_BYTE *)this + 0x54) = 0; /*0x6c3873*/
  if ( v5 )
  {
    v6 = v5; /*0x6c3879*/
    v7 = (void *)FormHeapAlloc((0x68 * (unsigned __int64)v5) >> 0x20 != 0 ? 0xFFFFFFFF : 0x68 * v5);
    v8 = v7; /*0x6c3894*/
    if ( v7 ) /*0x6c38a4*/
      sub_401080(v7, 0x68, v6, (void *(__thiscall *)(void *))sub_6C3730); /*0x6c38af*/
    else
      v8 = 0; /*0x6c38b6*/
    *((_DWORD *)this + 0x14) = v8; /*0x6c38b8*/
  }
  return this; /*0x6c38bd*/
}
