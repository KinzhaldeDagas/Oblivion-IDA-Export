// Continues Oblivion BSShaderLightingProperty non-shadow-light iteration using the stored cursor and the same cull/backing-light eligibility filter. Fallout later adds an explicit cast-shadow exclusion absent here.
ShadowSceneLight_DecodedLayout *__thiscall BSShaderLightingProperty__GetNextActiveNonShadowLight(
        MEF_LightingPropertyIterationView32 *self)
{
  _DWORD *payload; // edi
  MEF_RefListNode32 *cursor_7C; // eax
  MEF_RefListNode32 *next; // ecx
  bool v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi
  char v7; // bl
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h] BYREF

  payload = 0; /*0x7ed3b7*/
  v10 = 0; /*0x7ed3be*/
  if ( !self->cursor_7C ) /*0x7ed3bb*/
    goto LABEL_18; /*0x7ed3bb*/
  do /*0x7ed437*/
  {
    cursor_7C = self->cursor_7C; /*0x7ed3c8*/
    next = cursor_7C->next; /*0x7ed3cb*/
    self->cursor_7C = cursor_7C->next; /*0x7ed3cd*/
    payload = cursor_7C->payload; /*0x7ed3d0*/
    v5 = 0; /*0x7ed3ff*/
    if ( payload ) /*0x7ed3d5*/
    {
      if ( next ) /*0x7ed3d9*/
      {
        if ( *((_WORD *)payload + 0x8C) == 0xFF /*0x7ed3fd*/
          || (v10 |= 1u, (*(_BYTE *)(*ShadowSceneLight_GetLightRef(payload, &v11) + 0x18) & 1) != 0) )
        {
          v5 = 1; /*0x7ed3d5*/
        }
      }
    }
    if ( (v10 & 1) != 0 ) /*0x7ed40a*/
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v11; /*0x7ed40c*/
      v10 &= ~1u; /*0x7ed410*/
      if ( v11 ) /*0x7ed417*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7ed41d*/
        {
          if ( v6 ) /*0x7ed429*/
            (**v6)(v6, 1); /*0x7ed433*/
        }
      }
    }
  }
  while ( v5 ); /*0x7ed437*/
  if ( payload /*0x7ed45f*/
    && (*((_WORD *)payload + 0x8C) == 0xFF
     || (LOBYTE(v10) = v10 | 2, (*(_BYTE *)(*ShadowSceneLight_GetLightRef(payload, &v11) + 0x18) & 1) != 0)) )
  {
    v7 = 1; /*0x7ed461*/
  }
  else
  {
LABEL_18:
    v7 = 0; /*0x7ed465*/
  }
  if ( (v10 & 2) != 0 ) /*0x7ed46c*/
  {
    v8 = (void (__thiscall ***)(_DWORD, int))v11; /*0x7ed46e*/
    if ( v11 ) /*0x7ed474*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7ed47a*/
      {
        if ( v8 ) /*0x7ed486*/
          (**v8)(v8, 1); /*0x7ed490*/
      }
    }
  }
  return v7 == 0 ? (ShadowSceneLight_DecodedLayout *)payload : 0;
}
