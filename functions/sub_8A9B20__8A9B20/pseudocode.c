signed int __thiscall sub_8A9B20(int *this, unsigned int a2)
{
  int *v3; // ecx
  int v5; // ecx
  bool v6; // bl
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __m128 v11; // [esp+10h] [ebp-10h] BYREF

  v3 = (int *)*(this + 2); /*0x8a9b2d*/
  if ( v3 ) /*0x8a9b33*/
  {
    if ( v3[0x22] ) /*0x8a9b35*/
    {
      v11.m128_i8[0] = 5; /*0x8a9b47*/
      *(unsigned __int64 *)((char *)v11.m128_u64 + 4) = __PAIR64__(a2, (unsigned int)this); /*0x8a9b4c*/
      sub_898820(v3, (int)&v11); /*0x8a9b54*/
      return 0; /*0x8a9b61*/
    }
    ++v3[0x22]; /*0x8a9b68*/
    sub_8CCA80(*(this + 2), (int)this); /*0x8a9b73*/
  }
  v5 = *(this + 5); /*0x8a9b7b*/
  v6 = v5 != 0; /*0x8a9b83*/
  if ( v5 ) /*0x8a9b88*/
  {
    if ( *(_WORD *)(v5 + 4) ) /*0x8a9b8a*/
    {
      if ( !--*(_WORD *)(v5 + 6) ) /*0x8a9b95*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8a9ba0*/
    }
  }
  *(this + 5) = a2; /*0x8a9ba5*/
  if ( *(_WORD *)(a2 + 4) ) /*0x8a9ba7*/
    ++*(_WORD *)(a2 + 6); /*0x8a9bae*/
  sub_8A9970((int)this, &v11); /*0x8a9bb8*/
  if ( v6 && *(this + 0xD) != 0x7F7FFFFF ) /*0x8a9bcb*/
    *(this + 0xD) = 0xBF800000; /*0x8a9bcd*/
  if ( *((float *)this + 0xD) <= (double)*(float *)&SrcStr ) /*0x8a9be2*/
    sub_8A9A60(v11.m128_f32, (int)(this + 5)); /*0x8a9bea*/
  v7 = *(this + 2); /*0x8a9bef*/
  if ( v7 ) /*0x8a9bf4*/
    sub_8DC4A0(v7, v7, (int)this); /*0x8a9bf8*/
  sub_8DBF20((int)this); /*0x8a9c01*/
  v8 = *(this + 2); /*0x8a9c06*/
  if ( v8 ) /*0x8a9c0e*/
  {
    sub_8CC800(v8, (int)this); /*0x8a9c12*/
    v9 = *(this + 2); /*0x8a9c17*/
    v10 = *(_DWORD *)(v9 + 0x88) - 1; /*0x8a9c23*/
    *(_DWORD *)(v9 + 0x88) = v10; /*0x8a9c24*/
    if ( !v10 ) /*0x8a9c2a*/
    {
      if ( *(_DWORD *)(v9 + 0x84) ) /*0x8a9c2c*/
      {
        if ( !*(_BYTE *)(v9 + 0x90) ) /*0x8a9c36*/
          sub_899210(v9); /*0x8a9c40*/
      }
    }
  }
  return 1; /*0x8a9b5b*/
}
