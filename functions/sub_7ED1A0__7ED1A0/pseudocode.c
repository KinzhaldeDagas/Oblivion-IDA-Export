// Begins Oblivion BSShaderLightingProperty non-shadow-light iteration. Skips lights with frustum-cull value 0xFF or a disabled backing NiLight flag and stores the next list cursor in the property.
ShadowSceneLight_DecodedLayout *__thiscall BSShaderLightingProperty__GetFirstActiveNonShadowLight(
        MEF_LightingPropertyIterationView32 *self)
{
  ShadowSceneLight_DecodedLayout *result; // eax
  bool v3; // zf
  int v4; // edi
  bool v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi
  bool v7; // bl
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h] BYREF

  result = (ShadowSceneLight_DecodedLayout *)self->lights.lightListHead_70; /*0x7ed1a6*/
  v9 = 0; /*0x7ed1ab*/
  self->cursor_7C = (MEF_RefListNode32 *)result; /*0x7ed1b3*/
  if ( result )
  {
    while ( 1 ) /*0x7ed1c2*/
    {
      v3 = *(_DWORD *)result->base_000 == 0; /*0x7ed1c2*/
      self->cursor_7C = *(MEF_RefListNode32 **)result->base_000; /*0x7ed1c4*/
      v4 = *(_DWORD *)&result->base_000[8]; /*0x7ed1c7*/
      v5 = 0; /*0x7ed1f4*/
      if ( !v3 ) /*0x7ed1ca*/
      {
        if ( v4 ) /*0x7ed1ce*/
        {
          if ( *(_WORD *)(v4 + 0x118) == 0xFF /*0x7ed1f2*/
            || (v9 |= 1u, (*(_BYTE *)(*ShadowSceneLight_GetLightRef((_DWORD *)v4, &v10) + 0x18) & 1) != 0) )
          {
            v5 = 1; /*0x7ed1ca*/
          }
        }
      }
      if ( (v9 & 1) != 0 ) /*0x7ed1ff*/
      {
        v6 = (void (__thiscall ***)(_DWORD, int))v10; /*0x7ed201*/
        v9 &= ~1u; /*0x7ed205*/
        if ( v10 ) /*0x7ed20c*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7ed212*/
          {
            if ( v6 ) /*0x7ed21e*/
              (**v6)(v6, 1); /*0x7ed228*/
          }
        }
      }
      if ( !v5 ) /*0x7ed22c*/
        break; /*0x7ed22c*/
      result = (ShadowSceneLight_DecodedLayout *)self->cursor_7C; /*0x7ed22e*/
    }
    v7 = 0; /*0x7ed25b*/
    if ( v4 ) /*0x7ed235*/
    {
      if ( *(_WORD *)(v4 + 0x118) == 0xFF /*0x7ed259*/
        || (LOBYTE(v9) = v9 | 2, (*(_BYTE *)(*ShadowSceneLight_GetLightRef((_DWORD *)v4, &v10) + 0x18) & 1) != 0) )
      {
        v7 = 1; /*0x7ed235*/
      }
    }
    if ( (v9 & 2) != 0 ) /*0x7ed266*/
    {
      v8 = (void (__thiscall ***)(_DWORD, int))v10; /*0x7ed268*/
      if ( v10 ) /*0x7ed26e*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7ed274*/
        {
          if ( v8 ) /*0x7ed280*/
            (**v8)(v8, 1); /*0x7ed28a*/
        }
      }
    }
    return !v7 ? (ShadowSceneLight_DecodedLayout *)v4 : 0;
  }
  return result; /*0x7ed1b8*/
}
