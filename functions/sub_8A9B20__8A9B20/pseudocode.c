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

  v3 = (int *)*(this + 2);
  if ( v3 )
  {
    if ( v3[0x22] )
    {
      v11.m128_i8[0] = 5;
      *(unsigned __int64 *)((char *)v11.m128_u64 + 4) = __PAIR64__(a2, (unsigned int)this);
      sub_898820(v3, (int)&v11);
      return 0;
    }
    ++v3[0x22];
    sub_8CCA80(*(this + 2), (int)this);
  }
  v5 = *(this + 5);
  v6 = v5 != 0;
  if ( v5 )
  {
    if ( *(_WORD *)(v5 + 4) )
    {
      if ( !--*(_WORD *)(v5 + 6) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
  }
  *(this + 5) = a2;
  if ( *(_WORD *)(a2 + 4) )
    ++*(_WORD *)(a2 + 6);
  sub_8A9970((int)this, &v11);
  if ( v6 && *(this + 0xD) != 0x7F7FFFFF )
    *(this + 0xD) = 0xBF800000;
  if ( *((float *)this + 0xD) <= (double)*(float *)&SrcStr )
    sub_8A9A60(v11.m128_f32, (int)(this + 5));
  v7 = *(this + 2);
  if ( v7 )
    sub_8DC4A0(v7, v7, (int)this);
  sub_8DBF20((int)this);
  v8 = *(this + 2);
  if ( v8 )
  {
    sub_8CC800(v8, (int)this);
    v9 = *(this + 2);
    v10 = *(_DWORD *)(v9 + 0x88) - 1;
    *(_DWORD *)(v9 + 0x88) = v10;
    if ( !v10 )
    {
      if ( *(_DWORD *)(v9 + 0x84) )
      {
        if ( !*(_BYTE *)(v9 + 0x90) )
          sub_899210(v9);
      }
    }
  }
  return 1;
}
