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

  BSShader::BSShader((BSShader *)this); /*0x811c4d*/
  *(_DWORD *)this = &DistantLODShader::`vftable'; /*0x811c6c*/
  ArrayConstructor( /*0x811c72*/
    (char *)this + 0x7C,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor( /*0x811c91*/
    (char *)this + 0x8C,
    4u,
    4,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x811cb0*/
    (char *)this + 0x9C,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v3 = 0.0; /*0x811cb5*/
  *((float *)this + 0x2C) = 0.0; /*0x811cb7*/
  *((float *)this + 0x2D) = 0.0; /*0x811cc2*/
  v4 = (int *)((char *)this + 0x8C); /*0x811cc8*/
  *((float *)this + 0x2E) = 0.0; /*0x811cca*/
  v11 = 4; /*0x811cd0*/
  *((float *)this + 0x2F) = 0.0; /*0x811cd8*/
  *((float *)this + 0x30) = 0.0; /*0x811cde*/
  *((float *)this + 0x31) = 0.0; /*0x811ce4*/
  *((float *)this + 0x32) = 0.0; /*0x811cea*/
  *((float *)this + 0x33) = 0.0; /*0x811cf0*/
  *((float *)this + 0x34) = 0.0; /*0x811cf6*/
  *((float *)this + 0x35) = 0.0; /*0x811cfc*/
  *((float *)this + 0x36) = 0.0; /*0x811d02*/
  *((float *)this + 0x37) = 0.0; /*0x811d08*/
  *((float *)this + 0x38) = 0.0; /*0x811d0e*/
  *((float *)this + 0x39) = 0.0; /*0x811d14*/
  *((float *)this + 0x3A) = 0.0; /*0x811d1a*/
  *((float *)this + 0x3B) = 0.0; /*0x811d20*/
  *((float *)this + 0x3C) = 0.0; /*0x811d26*/
  *((float *)this + 0x3D) = 0.0; /*0x811d2c*/
  *((float *)this + 0x3E) = 0.0; /*0x811d32*/
  *((float *)this + 0x3F) = 0.0; /*0x811d38*/
  *((float *)this + 0x40) = 0.0; /*0x811d3e*/
  *((float *)this + 0x41) = 0.0; /*0x811d44*/
  *((float *)this + 0x42) = 0.0; /*0x811d4a*/
  *((float *)this + 0x43) = 0.0; /*0x811d50*/
  do /*0x811d8c*/
  {
    v5 = *v4; /*0x811d56*/
    if ( *v4 ) /*0x811d56*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x811d63*/
      {
        if ( v5 ) /*0x811d6f*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x811d79*/
      }
      v3 = 0.0; /*0x811d7b*/
      *v4 = 0; /*0x811d7d*/
    }
    ++v4; /*0x811d84*/
    --v11; /*0x811d87*/
  }
  while ( v11 ); /*0x811d8c*/
  v6 = (int *)((char *)this + 0x9C); /*0x811d8e*/
  v7 = 2; /*0x811d90*/
  do /*0x811dc9*/
  {
    v8 = *v6; /*0x811d95*/
    if ( *v6 ) /*0x811d95*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x811da2*/
      {
        if ( v8 ) /*0x811dae*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x811db8*/
      }
      v3 = 0.0; /*0x811dba*/
      *v6 = 0; /*0x811dbc*/
    }
    ++v6; /*0x811dc3*/
    --v7; /*0x811dc6*/
  }
  while ( v7 ); /*0x811dc9*/
  v9 = *((_DWORD *)this + 9); /*0x811dcb*/
  if ( v9 != a2 ) /*0x811dd4*/
  {
    if ( v9 ) /*0x811dd8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x811de0*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x811df6*/
      v3 = 0.0; /*0x811df8*/
    }
    *((_DWORD *)this + 9) = a2; /*0x811dfc*/
    if ( a2 ) /*0x811dff*/
    {
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x811e07*/
      v3 = 0.0; /*0x811e0d*/
    }
  }
  *((float *)this + 0x20) = v3; /*0x811e0f*/
  *((_DWORD *)this + 0x2C) = dword_B25AD0; /*0x811e1b*/
  *((_DWORD *)this + 0x2D) = dword_B25AD4; /*0x811e27*/
  *((_DWORD *)this + 0x2E) = dword_B25AD8; /*0x811e32*/
  *((_DWORD *)this + 0x2F) = dword_B25ADC; /*0x811e3e*/
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 2 ) /*0x811e4b*/
    *((_WORD *)this + 0x56) = 0x50; /*0x811e58*/
  else
    *((_WORD *)this + 0x56) = 0xE4; /*0x811e4d*/
  *((_DWORD *)this + 0x29) = FormHeapAlloc(
                               (unsigned __int64)*((unsigned __int16 *)this + 0x56) >> 0x1C != 0
                             ? 0xFFFFFFFF
                             : 0x10 * *((unsigned __int16 *)this + 0x56));
  *((_DWORD *)this + 0x2A) = 0; /*0x811e87*/
  return this; /*0x811e93*/
}
