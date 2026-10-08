ShadowLightShader *__thiscall ShadowLightShader::ShadowLightShader(
        ShadowLightShader *this,
        int a2,
        int a3,
        int a4,
        int a5)
{
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  LONG (__stdcall *v12)(volatile LONG *); // ebx
  int v13; // edi
  int v14; // edi
  int v15; // edi

  BSShader::BSShader((BSShader *)this); /*0x7c88db*/
  *(_DWORD *)this = &ShadowLightShader::`vftable'; /*0x7c88e2*/
  *((_DWORD *)this + 0x1F) = 0; /*0x7c88ec*/
  *((_DWORD *)this + 0x20) = 0; /*0x7c88ef*/
  *((_DWORD *)this + 0x21) = 0; /*0x7c88f5*/
  *((_DWORD *)this + 0x22) = 0; /*0x7c88fb*/
  *((_DWORD *)this + 0x23) = 0; /*0x7c8901*/
  *((_DWORD *)this + 0x24) = 0; /*0x7c8907*/
  *((_DWORD *)this + 0x25) = 0; /*0x7c890d*/
  *((_DWORD *)this + 0x26) = 0; /*0x7c8913*/
  v6 = *((_DWORD *)this + 9); /*0x7c8919*/
  if ( v6 != a2 ) /*0x7c8927*/
  {
    if ( v6 ) /*0x7c892b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7c8931*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7c8947*/
    }
    *((_DWORD *)this + 9) = a2; /*0x7c894b*/
    if ( a2 ) /*0x7c894e*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7c8954*/
  }
  v7 = *((_DWORD *)this + 0x1F); /*0x7c895a*/
  if ( v7 != a2 ) /*0x7c895f*/
  {
    if ( v7 ) /*0x7c8963*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7c8969*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7c897f*/
    }
    *((_DWORD *)this + 0x1F) = a2; /*0x7c8983*/
    if ( a2 ) /*0x7c8986*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x7c898c*/
  }
  v8 = *((_DWORD *)this + 0x20); /*0x7c8992*/
  if ( v8 != a3 ) /*0x7c899e*/
  {
    if ( v8 ) /*0x7c89a2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7c89a8*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7c89be*/
    }
    *((_DWORD *)this + 0x20) = a3; /*0x7c89c2*/
    if ( a3 ) /*0x7c89c8*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x7c89ce*/
  }
  v9 = *((_DWORD *)this + 0x21); /*0x7c89d4*/
  if ( v9 != a4 ) /*0x7c89e0*/
  {
    if ( v9 ) /*0x7c89e4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7c89ea*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7c8a00*/
    }
    *((_DWORD *)this + 0x21) = a4; /*0x7c8a04*/
    if ( a4 ) /*0x7c8a0a*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x7c8a10*/
  }
  v10 = *((_DWORD *)this + 0x22); /*0x7c8a16*/
  if ( v10 != a5 ) /*0x7c8a22*/
  {
    if ( v10 ) /*0x7c8a26*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7c8a2c*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7c8a42*/
    }
    *((_DWORD *)this + 0x22) = a5; /*0x7c8a46*/
    if ( a5 ) /*0x7c8a4c*/
      InterlockedIncrement((volatile LONG *)(a5 + 4)); /*0x7c8a52*/
  }
  v11 = *((_DWORD *)this + 0x24); /*0x7c8a58*/
  v12 = InterlockedDecrement; /*0x7c8a60*/
  if ( v11 ) /*0x7c8a66*/
  {
    if ( !v12((volatile LONG *)(v11 + 4)) ) /*0x7c8a6c*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7c8a7e*/
    *((_DWORD *)this + 0x24) = 0; /*0x7c8a80*/
  }
  v13 = *((_DWORD *)this + 0x23); /*0x7c8a86*/
  if ( v13 ) /*0x7c8a8e*/
  {
    if ( !v12((volatile LONG *)(v13 + 4)) ) /*0x7c8a94*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7c8aa6*/
    *((_DWORD *)this + 0x23) = 0; /*0x7c8aa8*/
  }
  v14 = *((_DWORD *)this + 0x26); /*0x7c8aae*/
  if ( v14 ) /*0x7c8ab6*/
  {
    if ( !v12((volatile LONG *)(v14 + 4)) ) /*0x7c8abc*/
      (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x7c8ace*/
    *((_DWORD *)this + 0x26) = 0; /*0x7c8ad0*/
  }
  v15 = *((_DWORD *)this + 0x25); /*0x7c8ad6*/
  if ( v15 ) /*0x7c8ade*/
  {
    if ( !v12((volatile LONG *)(v15 + 4)) ) /*0x7c8ae4*/
      (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7c8af6*/
    *((_DWORD *)this + 0x25) = 0; /*0x7c8af8*/
  }
  *((_DWORD *)this + 0x1D) = 0xFFFFFFFF; /*0x7c8b00*/
  return this; /*0x7c8b07*/
}
