BSShaderPPLightingProperty *__thiscall BSShaderPPLightingProperty::BSShaderPPLightingProperty(
        BSShaderPPLightingProperty *this)
{
  _DWORD *v2; // eax
  int *v3; // ebp
  int v4; // edi
  int v5; // edi
  int v6; // ebp
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int *v9; // edi
  int v10; // ebp
  int v11; // edi
  int v12; // ebp
  _DWORD *v13; // edi
  _DWORD *v14; // eax
  int *v15; // edi
  int v16; // ebp
  int v17; // edi
  int v18; // ebp
  _DWORD *v19; // edi
  _BYTE *v20; // eax
  _BYTE *v21; // eax
  int v22; // edi
  int v23; // edi
  BSShaderPPLightingProperty *result; // eax

  BSShaderLightingProperty::BSShaderLightingProperty(this);
  *(_DWORD *)this = &BSShaderPPLightingProperty::`vftable';
  *((float *)this + 0x2A) = 0.0;
  *((float *)this + 0x2B) = 0.0;
  *((float *)this + 0x2C) = 0.0;
  *((float *)this + 0x2D) = 0.0;
  *((_DWORD *)this + 0x35) = 0;
  *((_DWORD *)this + 0x38) = 0;
  *((_WORD *)this + 0x5C) = 2;
  v2 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v2 )
  {
    v3 = v2 + 1;
    *v2 = 2;
    ArrayConstructor(
      v2 + 1,
      4u,
      2,
      (int)Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))sub_7016A0);
  }
  else
  {
    v3 = 0;
  }
  *((_DWORD *)this + 0x2F) = v3;
  v4 = *v3;
  if ( *v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
    {
      if ( v4 )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *v3 = 0;
  }
  v5 = *((_DWORD *)this + 0x2F);
  v6 = *(_DWORD *)(v5 + 4);
  v7 = (_DWORD *)(v5 + 4);
  if ( v6 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *v7 = 0;
  }
  v8 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v8 )
  {
    v9 = v8 + 1;
    *v8 = 2;
    ArrayConstructor(
      v8 + 1,
      4u,
      2,
      (int)Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))sub_7016A0);
  }
  else
  {
    v9 = 0;
  }
  *((_DWORD *)this + 0x30) = v9;
  v10 = *v9;
  if ( *v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
    {
      if ( v10 )
        (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    }
    *v9 = 0;
  }
  v11 = *((_DWORD *)this + 0x30);
  v12 = *(_DWORD *)(v11 + 4);
  v13 = (_DWORD *)(v11 + 4);
  if ( v12 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
      (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    *v13 = 0;
  }
  v14 = (_DWORD *)FormHeapAlloc(0xCu);
  if ( v14 )
  {
    v15 = v14 + 1;
    *v14 = 2;
    ArrayConstructor(
      v14 + 1,
      4u,
      2,
      (int)Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))sub_7016A0);
  }
  else
  {
    v15 = 0;
  }
  *((_DWORD *)this + 0x31) = v15;
  v16 = *v15;
  if ( *v15 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
    {
      if ( v16 )
        (**(void (__thiscall ***)(int, int))v16)(v16, 1);
    }
    *v15 = 0;
  }
  v17 = *((_DWORD *)this + 0x31);
  v18 = *(_DWORD *)(v17 + 4);
  v19 = (_DWORD *)(v17 + 4);
  if ( v18 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
      (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    *v19 = 0;
  }
  v20 = (_BYTE *)FormHeapAlloc(2u);
  *((_DWORD *)this + 0x34) = v20;
  *v20 = 0;
  *(_BYTE *)(*((_DWORD *)this + 0x34) + 1) = 0;
  v21 = (_BYTE *)FormHeapAlloc(2u);
  *((_DWORD *)this + 0x32) = v21;
  *v21 = 0x1E;
  *(_BYTE *)(*((_DWORD *)this + 0x32) + 1) = 0x1E;
  v22 = *((_DWORD *)this + 0x35);
  if ( v22 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
      (**(void (__thiscall ***)(int, int))v22)(v22, 1);
    *((_DWORD *)this + 0x35) = 0;
  }
  v23 = *((_DWORD *)this + 0x38);
  if ( v23 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
      (**(void (__thiscall ***)(int, int))v23)(v23, 1);
    *((_DWORD *)this + 0x38) = 0;
  }
  *((_DWORD *)this + 0x3B) = 0;
  *((float *)this + 0x3A) = 0.0;
  *((_BYTE *)this + 0xE4) = 0;
  *((_DWORD *)this + 0x37) = 1;
  *((float *)this + 0x27) = 1.0;
  *((_DWORD *)this + 0x36) = 0;
  *((float *)this + 0x29) = 1.0;
  result = this;
  if ( byte_B45DA4 )
  {
    *((_DWORD *)this + 7) |= 0x2000u;
    *((_DWORD *)this + 9) = 0;
  }
  return result;
}
