// Verified (Oblivion): BSShaderPPLightingProperty constructor initializes the reference-counted TextureEffectData slot at this+0xE0 (DWORD index 0x38) to null. TextureEffectProperty_SetData replaces that same offset; BSShaderPPLightingProperty destructor releases and clears it before chaining to BSShaderLightingProperty. Fallout's typed property layout calls the member spTexEffectData at the same +0xE0 offset.
BSShaderPPLightingProperty *__thiscall BSShaderPPLightingProperty::BSShaderPPLightingProperty(
        BSShaderPPLightingProperty *this)
{
  int v2; // eax
  int *v3; // ebp
  int v4; // edi
  int v5; // edi
  int v6; // ebp
  _DWORD *v7; // edi
  int v8; // eax
  int *v9; // edi
  int v10; // ebp
  int v11; // edi
  int v12; // ebp
  _DWORD *v13; // edi
  int v14; // eax
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

  BSShaderLightingProperty::BSShaderLightingProperty(this); /*0x7d94dd*/
  *(_DWORD *)this = &BSShaderPPLightingProperty::`vftable'; /*0x7d94e4*/
  *((float *)this + 0x2A) = 0.0; /*0x7d94ea*/
  *((float *)this + 0x2B) = 0.0; /*0x7d94f0*/
  *((float *)this + 0x2C) = 0.0; /*0x7d94f8*/
  *((float *)this + 0x2D) = 0.0; /*0x7d9502*/
  *((_DWORD *)this + 0x35) = 0; /*0x7d9508*/
  *((_DWORD *)this + 0x38) = 0; /*0x7d950e*/
  *((_WORD *)this + 0x5C) = 2; /*0x7d951b*/
  v2 = FormHeapAlloc(0xCu); /*0x7d9524*/
  if ( v2 ) /*0x7d9537*/
  {
    v3 = (int *)(v2 + 4); /*0x7d9545*/
    *(_DWORD *)v2 = 2; /*0x7d954b*/
    ArrayConstructor( /*0x7d9551*/
      (char *)(v2 + 4),
      4u,
      2,
      (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
  }
  else
  {
    v3 = 0; /*0x7d9558*/
  }
  *((_DWORD *)this + 0x2F) = v3; /*0x7d955a*/
  v4 = *v3; /*0x7d9560*/
  if ( *v3 ) /*0x7d9560*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7d9570*/
    {
      if ( v4 ) /*0x7d957c*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7d9586*/
    }
    *v3 = 0; /*0x7d9588*/
  }
  v5 = *((_DWORD *)this + 0x2F); /*0x7d958b*/
  v6 = *(_DWORD *)(v5 + 4); /*0x7d9591*/
  v7 = (_DWORD *)(v5 + 4); /*0x7d9594*/
  if ( v6 ) /*0x7d9599*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x7d959f*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7d95b6*/
    *v7 = 0; /*0x7d95b8*/
  }
  v8 = FormHeapAlloc(0xCu); /*0x7d95bc*/
  if ( v8 ) /*0x7d95cf*/
  {
    v9 = (int *)(v8 + 4); /*0x7d95dd*/
    *(_DWORD *)v8 = 2; /*0x7d95e3*/
    ArrayConstructor( /*0x7d95e9*/
      (char *)(v8 + 4),
      4u,
      2,
      (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
  }
  else
  {
    v9 = 0; /*0x7d95f0*/
  }
  *((_DWORD *)this + 0x30) = v9; /*0x7d95f2*/
  v10 = *v9; /*0x7d95f8*/
  if ( *v9 ) /*0x7d95f8*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7d9607*/
    {
      if ( v10 ) /*0x7d9613*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7d961e*/
    }
    *v9 = 0; /*0x7d9620*/
  }
  v11 = *((_DWORD *)this + 0x30); /*0x7d9622*/
  v12 = *(_DWORD *)(v11 + 4); /*0x7d9628*/
  v13 = (_DWORD *)(v11 + 4); /*0x7d962b*/
  if ( v12 ) /*0x7d9630*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x7d9636*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7d964d*/
    *v13 = 0; /*0x7d964f*/
  }
  v14 = FormHeapAlloc(0xCu); /*0x7d9653*/
  if ( v14 ) /*0x7d9666*/
  {
    v15 = (int *)(v14 + 4); /*0x7d9674*/
    *(_DWORD *)v14 = 2; /*0x7d967a*/
    ArrayConstructor( /*0x7d9680*/
      (char *)(v14 + 4),
      4u,
      2,
      (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
      (void (__thiscall *)(void *))NiPointerSlot_Release);
  }
  else
  {
    v15 = 0; /*0x7d9687*/
  }
  *((_DWORD *)this + 0x31) = v15; /*0x7d9689*/
  v16 = *v15; /*0x7d968f*/
  if ( *v15 ) /*0x7d968f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x7d969e*/
    {
      if ( v16 ) /*0x7d96aa*/
        (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x7d96b5*/
    }
    *v15 = 0; /*0x7d96b7*/
  }
  v17 = *((_DWORD *)this + 0x31); /*0x7d96b9*/
  v18 = *(_DWORD *)(v17 + 4); /*0x7d96bf*/
  v19 = (_DWORD *)(v17 + 4); /*0x7d96c2*/
  if ( v18 ) /*0x7d96c7*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x7d96cd*/
      (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x7d96e4*/
    *v19 = 0; /*0x7d96e6*/
  }
  v20 = (_BYTE *)FormHeapAlloc(2u); /*0x7d96ea*/
  *((_DWORD *)this + 0x34) = v20; /*0x7d96ef*/
  *v20 = 0; /*0x7d96f5*/
  *(_BYTE *)(*((_DWORD *)this + 0x34) + 1) = 0; /*0x7d96ff*/
  v21 = (_BYTE *)FormHeapAlloc(2u); /*0x7d9702*/
  *((_DWORD *)this + 0x32) = v21; /*0x7d9707*/
  *v21 = 0x1E; /*0x7d970d*/
  *(_BYTE *)(*((_DWORD *)this + 0x32) + 1) = 0x1E; /*0x7d9716*/
  v22 = *((_DWORD *)this + 0x35); /*0x7d971a*/
  if ( v22 ) /*0x7d9725*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) ) /*0x7d972b*/
      (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x7d9741*/
    *((_DWORD *)this + 0x35) = 0; /*0x7d9743*/
  }
  v23 = *((_DWORD *)this + 0x38); /*0x7d9749*/
  if ( v23 ) /*0x7d9751*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x7d9757*/
      (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x7d976d*/
    *((_DWORD *)this + 0x38) = 0; /*0x7d976f*/
  }
  *((_DWORD *)this + 0x3B) = 0; /*0x7d9777*/
  *((float *)this + 0x3A) = 0.0; /*0x7d977d*/
  *((_BYTE *)this + 0xE4) = 0; /*0x7d9783*/
  *((_DWORD *)this + 0x37) = 1; /*0x7d978b*/
  *((float *)this + 0x27) = 1.0; /*0x7d9795*/
  *((_DWORD *)this + 0x36) = 0; /*0x7d979b*/
  *((float *)this + 0x29) = 1.0; /*0x7d97a1*/
  result = this; /*0x7d97a7*/
  if ( unk_B45DA4 ) /*0x7d97a9*/
  {
    *((_DWORD *)this + 7) |= 0x2000u; /*0x7d97b1*/
    *((_DWORD *)this + 9) = 0; /*0x7d97b8*/
  }
  return result; /*0x7d97bb*/
}
