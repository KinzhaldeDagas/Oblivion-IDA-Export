TallGrassShader *__thiscall TallGrassShader::TallGrassShader(TallGrassShader *this, int a2)
{
  int *v3; // edi
  double v4; // st7
  int v5; // ebp
  int *v6; // ebp
  int v7; // ebx
  int v8; // edi
  int v9; // edi
  bool v10; // cc
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v15; // [esp+14h] [ebp-14h]

  BSShader::BSShader((BSShader *)this);
  *(_DWORD *)this = &TallGrassShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x7C,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  v3 = (int *)((char *)this + 0x94);
  ArrayConstructor(
    (char *)this + 0x94,
    4u,
    0x28,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0x134,
    4u,
    9,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  v4 = 0.0;
  *((float *)this + 0x59) = 0.0;
  *((float *)this + 0x5A) = 0.0;
  v15 = 0x28;
  *((float *)this + 0x5B) = 0.0;
  *((float *)this + 0x5C) = 0.0;
  *((float *)this + 0x5D) = 0.0;
  *((float *)this + 0x5E) = 0.0;
  *((float *)this + 0x5F) = 0.0;
  *((float *)this + 0x60) = 0.0;
  *((float *)this + 0x61) = 0.0;
  *((float *)this + 0x62) = 0.0;
  *((float *)this + 0x63) = 0.0;
  *((float *)this + 0x64) = 0.0;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      v4 = 0.0;
      *v3 = 0;
    }
    ++v3;
    --v15;
  }
  while ( v15 );
  v6 = (int *)((char *)this + 0x134);
  v7 = 2;
  do
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      {
        if ( v8 )
          (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
      v4 = 0.0;
      *v6 = 0;
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  v9 = *((_DWORD *)this + 9);
  if ( v9 != a2 )
  {
    if ( v9 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      v4 = 0.0;
    }
    *((_DWORD *)this + 9) = a2;
    if ( a2 )
    {
      InterlockedIncrement((volatile LONG *)(a2 + 4));
      v4 = 0.0;
    }
  }
  *((float *)this + 0x22) = v4;
  v10 = ShaderPackage < 2;
  v11 = dword_B25AD4;
  v12 = dword_B25AD8;
  dword_B460D0 = dword_B25AD0;
  v13 = dword_B25ADC;
  dword_B460D4 = v11;
  dword_B460D8 = v12;
  dword_B460DC = v13;
  if ( v10 )
    *((_WORD *)this + 0xB0) = 0x50;
  else
    *((_WORD *)this + 0xB0) = 0xE4;
  *((_DWORD *)this + 0x56) = FormHeapAlloc(
                               (unsigned __int64)*((unsigned __int16 *)this + 0xB0) >> 0x1C != 0
                             ? 0xFFFFFFFF
                             : 0x10 * *((unsigned __int16 *)this + 0xB0));
  *((_DWORD *)this + 0x57) = 0;
  return this;
}
