// Seeds the embedded light-list cursor from property +0x70 and returns the first usable ShadowSceneLight. Oblivion rejects frustumCull == 0xFF, backing-light AppCulled, and light byte +0xF4 == 1. Fallout was consulted afterward only for the conventional GetFirstActiveLight label; its later implementation lacks Oblivion's +0xF4 rejection.
ShadowSceneLight *__thiscall BSShaderLightingProperty__GetFirstActiveLight(BSShaderLightingProperty *this)
{
  ShadowSceneLight *result; // eax
  bool v3; // zf
  int v4; // edi
  bool v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi
  bool v7; // bl
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  result = *((ShadowSceneLight **)this + 0x1C); /*0x7ed2a6*/
  v9 = 0; /*0x7ed2ab*/
  *((_DWORD *)this + 0x1F) = result; /*0x7ed2b3*/
  if ( result )
  {
    while ( 1 ) /*0x7ed2c2*/
    {
      v3 = *(_DWORD *)result == 0; /*0x7ed2c2*/
      *((_DWORD *)this + 0x1F) = *(_DWORD *)result; /*0x7ed2c4*/
      v4 = *((_DWORD *)result + 2); /*0x7ed2c7*/
      v5 = 0; /*0x7ed2fd*/
      if ( !v3 ) /*0x7ed2ca*/
      {
        if ( v4 ) /*0x7ed2ce*/
        {
          if ( *(_WORD *)(v4 + 0x118) == 0xFF /*0x7ed2fb*/
            || (v9 |= 1u, (*(_BYTE *)(*ShadowSceneLight_GetLightRef((_DWORD *)v4, &v10) + 0x18) & 1) != 0)
            || *(_BYTE *)(v4 + 0xF4) == 1 )
          {
            v5 = 1; /*0x7ed2ca*/
          }
        }
      }
      if ( (v9 & 1) != 0 ) /*0x7ed308*/
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v10; /*0x7ed30a*/
        v9 &= ~1u; /*0x7ed30e*/
        if ( v10 ) /*0x7ed315*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7ed31b*/
          {
            if ( v6 ) /*0x7ed327*/
              (**v6)(v6, 1); /*0x7ed331*/
          }
        }
      }
      if ( !v5 ) /*0x7ed335*/
        break; /*0x7ed335*/
      result = *((ShadowSceneLight **)this + 0x1F); /*0x7ed337*/
    }
    v7 = 0; /*0x7ed36d*/
    if ( v4 ) /*0x7ed33e*/
    {
      if ( *(_WORD *)(v4 + 0x118) == 0xFF /*0x7ed36b*/
        || (LOBYTE(v9) = v9 | 2, (*(_BYTE *)(*ShadowSceneLight_GetLightRef((_DWORD *)v4, &v10) + 0x18) & 1) != 0)
        || *(_BYTE *)(v4 + 0xF4) == 1 )
      {
        v7 = 1; /*0x7ed33e*/
      }
    }
    if ( (v9 & 2) != 0 ) /*0x7ed378*/
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v10; /*0x7ed37a*/
      if ( v10 ) /*0x7ed380*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7ed386*/
        {
          if ( v8 ) /*0x7ed392*/
            (**v8)(v8, 1); /*0x7ed39c*/
        }
      }
    }
    return !v7 ? (ShadowSceneLight *)v4 : 0;
  }
  return result; /*0x7ed2b8*/
}
