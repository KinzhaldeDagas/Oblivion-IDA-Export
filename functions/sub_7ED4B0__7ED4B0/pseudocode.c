// Advances the embedded cursor at property +0x7C and returns the next usable ShadowSceneLight under Oblivion's three gates: frustumCull != 0xFF, backing NiLight not AppCulled, and byte +0xF4 != 1. Fallout corroborates the method label but not the extra Oblivion gate.
ShadowSceneLight *__thiscall BSShaderLightingProperty__GetNextActiveLight(BSShaderLightingProperty *this)
{
  int v1; // edi
  int *v3; // eax
  int v4; // ecx
  bool v5; // bl
  void (__thiscall ***v6)(_DWORD, int); // esi
  char v7; // bl
  void (__thiscall ***v8)(_DWORD, int); // esi
  int v10; // [esp+10h] [ebp-8h]
  int v11; // [esp+14h] [ebp-4h] BYREF

  v1 = 0; /*0x7ed4b7*/
  v10 = 0; /*0x7ed4be*/
  if ( !*((_DWORD *)this + 0x1F) ) /*0x7ed4bb*/
    goto LABEL_20; /*0x7ed4bb*/
  do /*0x7ed540*/
  {
    v3 = *((int **)this + 0x1F); /*0x7ed4c8*/
    v4 = *v3; /*0x7ed4cb*/
    *((_DWORD *)this + 0x1F) = *v3; /*0x7ed4cd*/
    v1 = v3[2]; /*0x7ed4d0*/
    v5 = 0; /*0x7ed508*/
    if ( v1 ) /*0x7ed4d5*/
    {
      if ( v4 ) /*0x7ed4d9*/
      {
        if ( *(_WORD *)(v1 + 0x118) == 0xFF /*0x7ed506*/
          || (v10 |= 1u, (*(_BYTE *)(*ShadowSceneLight_GetLightRef((_DWORD *)v1, &v11) + 0x18) & 1) != 0)
          || *(_BYTE *)(v1 + 0xF4) == 1 )
        {
          v5 = 1; /*0x7ed4d5*/
        }
      }
    }
    if ( (v10 & 1) != 0 ) /*0x7ed513*/
    {
      v6 = (void (__thiscall ***)(_DWORD, int))v11; /*0x7ed515*/
      v10 &= ~1u; /*0x7ed519*/
      if ( v11 ) /*0x7ed520*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7ed526*/
        {
          if ( v6 ) /*0x7ed532*/
            (**v6)(v6, 1); /*0x7ed53c*/
        }
      }
    }
  }
  while ( v5 ); /*0x7ed540*/
  if ( v1 /*0x7ed571*/
    && (*(_WORD *)(v1 + 0x118) == 0xFF
     || (LOBYTE(v10) = v10 | 2, (*(_BYTE *)(*ShadowSceneLight_GetLightRef((_DWORD *)v1, &v11) + 0x18) & 1) != 0)
     || *(_BYTE *)(v1 + 0xF4) == 1) )
  {
    v7 = 1; /*0x7ed573*/
  }
  else
  {
LABEL_20:
    v7 = 0; /*0x7ed577*/
  }
  if ( (v10 & 2) != 0 ) /*0x7ed57e*/
  {
    v8 = (void (__thiscall ***)(_DWORD, int))v11; /*0x7ed580*/
    if ( v11 ) /*0x7ed586*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7ed58c*/
      {
        if ( v8 ) /*0x7ed598*/
          (**v8)(v8, 1); /*0x7ed5a2*/
      }
    }
  }
  return v7 == 0 ? (ShadowSceneLight *)v1 : 0;
}
