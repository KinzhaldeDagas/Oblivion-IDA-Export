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
  float v11; // edx
  float v12; // eax
  float v13; // ecx
  int v15; // [esp+14h] [ebp-14h]

  BSShader::BSShader((BSShader *)this); /*0x7e8bdd*/
  *(_DWORD *)this = &TallGrassShader::`vftable'; /*0x7e8bfc*/
  ArrayConstructor( /*0x7e8c02*/
    (char *)this + 0x7C,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  v3 = (int *)((char *)this + 0x94); /*0x7e8c15*/
  ArrayConstructor( /*0x7e8c21*/
    (char *)this + 0x94,
    4u,
    0x28,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x7e8c40*/
    (char *)this + 0x134,
    4u,
    9,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v4 = 0.0; /*0x7e8c45*/
  *((float *)this + 0x59) = 0.0; /*0x7e8c47*/
  *((float *)this + 0x5A) = 0.0; /*0x7e8c52*/
  v15 = 0x28; /*0x7e8c58*/
  *((float *)this + 0x5B) = 0.0; /*0x7e8c60*/
  *((float *)this + 0x5C) = 0.0; /*0x7e8c66*/
  *((float *)this + 0x5D) = 0.0; /*0x7e8c6c*/
  *((float *)this + 0x5E) = 0.0; /*0x7e8c72*/
  *((float *)this + 0x5F) = 0.0; /*0x7e8c78*/
  *((float *)this + 0x60) = 0.0; /*0x7e8c7e*/
  *((float *)this + 0x61) = 0.0; /*0x7e8c84*/
  *((float *)this + 0x62) = 0.0; /*0x7e8c8a*/
  *((float *)this + 0x63) = 0.0; /*0x7e8c90*/
  *((float *)this + 0x64) = 0.0; /*0x7e8c96*/
  do /*0x7e8cd1*/
  {
    v5 = *v3; /*0x7e8c9c*/
    if ( *v3 ) /*0x7e8c9c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7e8ca8*/
      {
        if ( v5 ) /*0x7e8cb4*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7e8cbf*/
      }
      v4 = 0.0; /*0x7e8cc1*/
      *v3 = 0; /*0x7e8cc3*/
    }
    ++v3; /*0x7e8cc9*/
    --v15; /*0x7e8ccc*/
  }
  while ( v15 ); /*0x7e8cd1*/
  v6 = (int *)((char *)this + 0x134); /*0x7e8cd3*/
  v7 = 2; /*0x7e8cd5*/
  do /*0x7e8d0e*/
  {
    v8 = *v6; /*0x7e8cda*/
    if ( *v6 ) /*0x7e8cda*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7e8ce7*/
      {
        if ( v8 ) /*0x7e8cf3*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7e8cfd*/
      }
      v4 = 0.0; /*0x7e8cff*/
      *v6 = 0; /*0x7e8d01*/
    }
    ++v6; /*0x7e8d08*/
    --v7; /*0x7e8d0b*/
  }
  while ( v7 ); /*0x7e8d0e*/
  v9 = *((_DWORD *)this + 9); /*0x7e8d10*/
  if ( v9 != a2 ) /*0x7e8d19*/
  {
    if ( v9 ) /*0x7e8d1d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7e8d25*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7e8d3b*/
      v4 = 0.0; /*0x7e8d3d*/
    }
    *((_DWORD *)this + 9) = a2; /*0x7e8d41*/
    if ( a2 ) /*0x7e8d44*/
    {
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7e8d4c*/
      v4 = 0.0; /*0x7e8d52*/
    }
  }
  *((float *)this + 0x22) = v4; /*0x7e8d54*/
  v10 = *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] < 2; /*0x7e8d5a*/
  v11 = *(float *)&dword_B25AD4; /*0x7e8d67*/
  v12 = *(float *)&dword_B25AD8; /*0x7e8d6d*/
  LODWORD(OB_ShaderConstantStorage_010201A0[0xAF]) = dword_B25AD0; /*0x7e8d72*/
  v13 = *(float *)&dword_B25ADC; /*0x7e8d78*/
  OB_ShaderConstantStorage_010201A0[0xB0] = v11; /*0x7e8d7e*/
  OB_ShaderConstantStorage_010201A0[0xB1] = v12; /*0x7e8d84*/
  OB_ShaderConstantStorage_010201A0[0xB2] = v13; /*0x7e8d89*/
  if ( v10 ) /*0x7e8d8f*/
    *((_WORD *)this + 0xB0) = 0x50; /*0x7e8d9c*/
  else
    *((_WORD *)this + 0xB0) = 0xE4; /*0x7e8d91*/
  *((_DWORD *)this + 0x56) = FormHeapAlloc(
                               (unsigned __int64)*((unsigned __int16 *)this + 0xB0) >> 0x1C != 0
                             ? 0xFFFFFFFF
                             : 0x10 * *((unsigned __int16 *)this + 0xB0));
  *((_DWORD *)this + 0x57) = 0; /*0x7e8dcb*/
  return this; /*0x7e8dd7*/
}
