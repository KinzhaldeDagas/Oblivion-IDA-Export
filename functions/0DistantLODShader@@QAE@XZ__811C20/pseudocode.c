DistantLODShader *__thiscall DistantLODShader::DistantLODShader(DistantLODShader *this, int a2)
{
  double v3; // st7
  int *v4; // ebp
  int v5; // edi
  int *v6; // ebp
  int v7; // ebx
  int v8; // edi
  int v9; // edi
  int v11; // [esp+14h] [ebp-14h]

  BSShader::BSShader((BSShader *)this);
  *(_DWORD *)this = &DistantLODShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x7C,
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor(
    (char *)this + 0x8C,
    4u,
    4,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0x9C,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  v3 = 0.0;
  *((float *)this + 0x2C) = 0.0;
  *((float *)this + 0x2D) = 0.0;
  v4 = (int *)((char *)this + 0x8C);
  *((float *)this + 0x2E) = 0.0;
  v11 = 4;
  *((float *)this + 0x2F) = 0.0;
  *((float *)this + 0x30) = 0.0;
  *((float *)this + 0x31) = 0.0;
  *((float *)this + 0x32) = 0.0;
  *((float *)this + 0x33) = 0.0;
  *((float *)this + 0x34) = 0.0;
  *((float *)this + 0x35) = 0.0;
  *((float *)this + 0x36) = 0.0;
  *((float *)this + 0x37) = 0.0;
  *((float *)this + 0x38) = 0.0;
  *((float *)this + 0x39) = 0.0;
  *((float *)this + 0x3A) = 0.0;
  *((float *)this + 0x3B) = 0.0;
  *((float *)this + 0x3C) = 0.0;
  *((float *)this + 0x3D) = 0.0;
  *((float *)this + 0x3E) = 0.0;
  *((float *)this + 0x3F) = 0.0;
  *((float *)this + 0x40) = 0.0;
  *((float *)this + 0x41) = 0.0;
  *((float *)this + 0x42) = 0.0;
  *((float *)this + 0x43) = 0.0;
  do
  {
    v5 = *v4;
    if ( *v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      v3 = 0.0;
      *v4 = 0;
    }
    ++v4;
    --v11;
  }
  while ( v11 );
  v6 = (int *)((char *)this + 0x9C);
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
      v3 = 0.0;
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
      v3 = 0.0;
    }
    *((_DWORD *)this + 9) = a2;
    if ( a2 )
    {
      InterlockedIncrement((volatile LONG *)(a2 + 4));
      v3 = 0.0;
    }
  }
  *((float *)this + 0x20) = v3;
  *((_DWORD *)this + 0x2C) = dword_B25AD0;
  *((_DWORD *)this + 0x2D) = dword_B25AD4;
  *((_DWORD *)this + 0x2E) = dword_B25AD8;
  *((_DWORD *)this + 0x2F) = dword_B25ADC;
  if ( ShaderPackage < 2 )
    *((_WORD *)this + 0x56) = 0x50;
  else
    *((_WORD *)this + 0x56) = 0xE4;
  *((_DWORD *)this + 0x29) = FormHeapAlloc(
                               (unsigned __int64)*((unsigned __int16 *)this + 0x56) >> 0x1C != 0
                             ? 0xFFFFFFFF
                             : 0x10 * *((unsigned __int16 *)this + 0x56));
  *((_DWORD *)this + 0x2A) = 0;
  return this;
}
