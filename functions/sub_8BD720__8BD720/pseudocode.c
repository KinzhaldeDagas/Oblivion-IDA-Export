__int8 __thiscall sub_8BD720(__m128 **this, int a2)
{
  __int8 result; // al
  __m128 *v4; // esi

  result = sub_89FD10(this, (_DWORD *)a2);
  if ( this )
  {
    v4 = *(this + 2);
    if ( v4 )
    {
      *(float *)(a2 + 0x30) = v4[5].m128_f32[0];
      *(float *)(a2 + 0x34) = v4[5].m128_f32[1];
      *(float *)(a2 + 0x38) = v4[5].m128_f32[2];
      sub_47DCD0((float *)(a2 + 0x10), v4 + 3);
      sub_47DCD0((float *)(a2 + 0x20), v4 + 4);
      *(_BYTE *)(a2 + 0x3C) = v4[5].m128_i8[0xC];
      result = v4[5].m128_i8[0xD];
      *(_BYTE *)(a2 + 0x3D) = result;
    }
  }
  return result;
}
