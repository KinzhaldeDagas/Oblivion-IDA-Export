__m128 *__thiscall sub_910410(__m128 *this, int a2, int a3)
{
  __m128 *result; // eax
  __m128 *v5; // eax

  if ( *(_DWORD *)(a2 + 4) != 1 || *(_DWORD *)(a3 + 4) )
    return 0;
  v5 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x26);
  v5->m128_i16[2] = 0x40;
  result = sub_8BE730(v5, **(_WORD ***)a2, this + 2, *((float *)this + 0xC), *((float *)this + 0xD));
  result[3].m128_i8[8] = *((_BYTE *)this + 0x38);
  result[1].m128_i32[0] = *((_DWORD *)this + 4);
  return result;
}
