int __thiscall sub_8A9C90(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax
  __m128 *v5; // eax
  __m128 *v6; // esi

  v3 = *(this + 0x19); /*0x8a9c98*/
  if ( !v3 || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x10))(v3), result != a2) ) /*0x8a9ca6*/
  {
    if ( a2 == 1 ) /*0x8a9cab*/
    {
      return sub_8A62C0(this, (int)&off_B2FD60); /*0x8a9cfc*/
    }
    else
    {
      result = a2 - 2; /*0x8a9cad*/
      if ( a2 == 2 ) /*0x8a9cae*/
      {
        v5 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x70, 0x28); /*0x8a9cbc*/
        v5->m128_i16[2] = 0x70; /*0x8a9cc1*/
        v6 = sub_8E90A0(v5); /*0x8a9ccc*/
        result = sub_8A62C0(this, (int)v6); /*0x8a9cd1*/
        if ( v6->m128_i16[2] ) /*0x8a9cd6*/
        {
          if ( !--v6->m128_i16[3] ) /*0x8a9ce1*/
            return (*(int (__thiscall **)(__m128 *, int))v6->m128_i32[0])(v6, 1); /*0x8a9cee*/
        }
      }
    }
  }
  return result; /*0x8a9cf0*/
}
