int __thiscall sub_8A9C90(_DWORD *this, int a2)
{
  int v3; // ecx
  int result; // eax
  __m128 *v5; // eax
  __m128 *v6; // esi

  v3 = *(this + 0x19);
  if ( !v3 || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x10))(v3), result != a2) )
  {
    if ( a2 == 1 )
    {
      return sub_8A62C0(this, (int)&off_B2FD60);
    }
    else
    {
      result = a2 - 2;
      if ( a2 == 2 )
      {
        v5 = (__m128 *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x70, 0x28);
        v5->m128_i16[2] = 0x70;
        v6 = sub_8E90A0(v5);
        result = sub_8A62C0(this, (int)v6);
        if ( v6->m128_i16[2] )
        {
          if ( !--v6->m128_i16[3] )
            return (*(int (__thiscall **)(__m128 *, int))v6->m128_i32[0])(v6, 1);
        }
      }
    }
  }
  return result;
}
