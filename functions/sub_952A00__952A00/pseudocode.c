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

  while ( 1 ) /*0x952b05*/
  {
    while ( 1 ) /*0x952a20*/
    {
      v9 = 0; /*0x952a20*/
      if ( sub_952480((_DWORD **)this, a2, &v9) == 1 ) /*0x952a30*/
      {
        result = v9; /*0x952a32*/
        if ( v9 != 3 ) /*0x952a39*/
          return result; /*0x952a39*/
      }
      else
      {
        sub_951BD0((int)v11, *((_OWORD **)this + 0x18), *((_OWORD **)this + 0x19), *((_OWORD **)this + 0x1A)); /*0x952a54*/
        v4 = (__m128 *)sub_9517D0((int)v11); /*0x952a62*/
        v5 = (__m128 *)&v13[0x40 * v12++]; /*0x952a6d*/
        v5[3].m128_i32[0] = 0; /*0x952a7a*/
        sub_951D00((__m128 *)this, v4, v5); /*0x952a81*/
        if ( sub_9518B0((__m128 *)this, (int)v11, (int)v4, v5, &v9) != 1 ) /*0x952a9c*/
        {
          while ( v12 < 0x37 ) /*0x952aa7*/
          {
            v6 = (__m128 *)&v13[0x40 * v12]; /*0x952abd*/
            v4 = (__m128 *)sub_9517D0((int)v11); /*0x952ac2*/
            ++v12; /*0x952ac4*/
            v6[3].m128_i32[0] = 0; /*0x952acc*/
            sub_951D00((__m128 *)this, v4, v6); /*0x952ad3*/
            if ( sub_9518B0((__m128 *)this, (int)v11, (int)v4, v6, &v9) == 1 ) /*0x952aee*/
              goto LABEL_7; /*0x952aee*/
          }
          v7 = 2; /*0x952b54*/
LABEL_13:
          sub_9519C0(this, v11, v4, a2); /*0x952b59*/
          return v7; /*0x952b72*/
        }
LABEL_7:
        v7 = v9; /*0x952af0*/
        if ( v9 != 3 ) /*0x952af7*/
          goto LABEL_13; /*0x952af7*/
      }
      v8 = *((_DWORD *)this + 0x17) + 1; /*0x952afc*/
      *((_DWORD *)this + 0x17) = v8; /*0x952b02*/
      if ( v8 != 1 ) /*0x952b05*/
        break; /*0x952b05*/
      **((_DWORD **)this + 0x1B) = 1; /*0x952b0a*/
    }
    if ( v8 >= 0x14 ) /*0x952b14*/
      return 3; /*0x952b6c*/
    **((_DWORD **)this + 0x1B) = 0; /*0x952b23*/
    sub_951B40(*((_DWORD *)this + 0x17), -0.000099999997, 0.000099999997, v10.m128_f32); /*0x952b32*/
    v10 = _mm_add_ps(v10, *((__m128 *)this + 3)); /*0x952b46*/
    *((__m128 *)this + 3) = v10; /*0x952b4b*/
  }
}
