__int8 __thiscall sub_8BD720(__m128 **this, int a2)
{
  __int8 result; // al
  __m128 *v4; // esi

  result = sub_89FD10(this, (_DWORD *)a2); /*0x8bd729*/
  if ( this ) /*0x8bd730*/
  {
    v4 = *(this + 2); /*0x8bd732*/
    if ( v4 ) /*0x8bd737*/
    {
      *(float *)(a2 + 0x30) = v4[5].m128_f32[0]; /*0x8bd73f*/
      *(float *)(a2 + 0x34) = v4[5].m128_f32[1]; /*0x8bd749*/
      *(float *)(a2 + 0x38) = v4[5].m128_f32[2]; /*0x8bd74f*/
      sub_47DCD0((float *)(a2 + 0x10), v4 + 3); /*0x8bd752*/
      sub_47DCD0((float *)(a2 + 0x20), v4 + 4); /*0x8bd75e*/
      *(_BYTE *)(a2 + 0x3C) = v4[5].m128_i8[0xC]; /*0x8bd766*/
      result = v4[5].m128_i8[0xD]; /*0x8bd769*/
      *(_BYTE *)(a2 + 0x3D) = result; /*0x8bd76c*/
    }
  }
  return result; /*0x8bd76f*/
}
