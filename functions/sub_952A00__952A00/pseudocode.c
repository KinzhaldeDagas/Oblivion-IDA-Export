signed int __thiscall sub_952A00(void *this, __m128 *a2)
{
  signed int result; // eax
  __m128 *v4; // edi
  __m128 *v5; // ebx
  __m128 *v6; // ebx
  int v7; // ebx
  int v8; // edx
  signed int v9; // [esp+Ch] [ebp-2EC4h] BYREF
  __m128 v10; // [esp+10h] [ebp-2EC0h] BYREF
  _DWORD v11[2]; // [esp+20h] [ebp-2EB0h] BYREF
  int v12; // [esp+28h] [ebp-2EA8h]
  char v13[11920]; // [esp+40h] [ebp-2E90h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      v9 = 0;
      if ( sub_952480((_DWORD **)this, a2, &v9) == 1 )
      {
        result = v9;
        if ( v9 != 3 )
          return result;
      }
      else
      {
        sub_951BD0((int)v11, *((_OWORD **)this + 0x18), *((_OWORD **)this + 0x19), *((_OWORD **)this + 0x1A));
        v4 = (__m128 *)sub_9517D0((int)v11);
        v5 = (__m128 *)&v13[0x40 * v12++];
        v5[3].m128_i32[0] = 0;
        sub_951D00((__m128 *)this, v4, v5);
        if ( sub_9518B0((__m128 *)this, (int)v11, (int)v4, v5, &v9) != 1 )
        {
          while ( v12 < 0x37 )
          {
            v6 = (__m128 *)&v13[0x40 * v12];
            v4 = (__m128 *)sub_9517D0((int)v11);
            ++v12;
            v6[3].m128_i32[0] = 0;
            sub_951D00((__m128 *)this, v4, v6);
            if ( sub_9518B0((__m128 *)this, (int)v11, (int)v4, v6, &v9) == 1 )
              goto LABEL_7;
          }
          v7 = 2;
LABEL_13:
          sub_9519C0(this, v11, v4, a2);
          return v7;
        }
LABEL_7:
        v7 = v9;
        if ( v9 != 3 )
          goto LABEL_13;
      }
      v8 = *((_DWORD *)this + 0x17) + 1;
      *((_DWORD *)this + 0x17) = v8;
      if ( v8 != 1 )
        break;
      **((_DWORD **)this + 0x1B) = 1;
    }
    if ( v8 >= 0x14 )
      return 3;
    **((_DWORD **)this + 0x1B) = 0;
    sub_951B40(*((_DWORD *)this + 0x17), -0.000099999997, 0.000099999997, v10.m128_f32);
    v10 = _mm_add_ps(v10, *((__m128 *)this + 3));
    *((__m128 *)this + 3) = v10;
  }
}
