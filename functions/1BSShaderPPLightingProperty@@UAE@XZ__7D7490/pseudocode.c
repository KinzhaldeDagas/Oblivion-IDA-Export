// Verified (Oblivion): BSShaderPPLightingProperty destructor releases and clears the reference-counted pointer at this+0xE0 (DWORD index 0x38), matching TextureEffectProperty_SetData and the viewer's "spTexEffectData" label. Fallout's CopyToMembers copies a NiPointer<BSShaderPPLightingProperty::TextureEffectData> at +0xE0; equivalent Oblivion clone retention is Probable but its mirror has not yet been located.
void __thiscall BSShaderPPLightingProperty::~BSShaderPPLightingProperty(BSShaderPPLightingProperty *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ebp
  _DWORD *v6; // edi
  int v7; // edi
  int v8; // ebp
  _DWORD *v9; // edi
  int v10; // edi
  int v11; // ebp
  _DWORD *v12; // edi
  char *v13; // eax
  unsigned int v14; // edi
  char *v15; // eax
  unsigned int v16; // edi
  char *v17; // eax
  unsigned int v18; // edi
  int v19; // edi
  LONG (__stdcall *v20)(volatile LONG *); // ebx
  int v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // [esp+14h] [ebp-14h]

  *(_DWORD *)this = &BSShaderPPLightingProperty::`vftable'; /*0x7d74bd*/
  if ( *((_DWORD *)this + 0x2F) ) /*0x7d74c5*/
  {
    v2 = 0; /*0x7d74d9*/
    v24 = 0; /*0x7d74e2*/
    if ( *((_WORD *)this + 0x5C) ) /*0x7d74db*/
    {
      do /*0x7d75a1*/
      {
        v3 = *((_DWORD *)this + 0x2F); /*0x7d74f0*/
        v4 = 4 * v2; /*0x7d74f6*/
        v5 = *(_DWORD *)(v3 + 4 * v2); /*0x7d74fd*/
        v6 = (_DWORD *)(4 * v2 + v3); /*0x7d7500*/
        if ( v5 ) /*0x7d7504*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7d750a*/
            (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7d7521*/
          *v6 = 0; /*0x7d7523*/
        }
        v7 = *((_DWORD *)this + 0x30); /*0x7d7529*/
        v8 = *(_DWORD *)(v7 + v4); /*0x7d752f*/
        v9 = (_DWORD *)(v4 + v7); /*0x7d7532*/
        if ( v8 ) /*0x7d7536*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x7d753c*/
            (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7d7553*/
          *v9 = 0; /*0x7d7555*/
        }
        v10 = *((_DWORD *)this + 0x31); /*0x7d755b*/
        v11 = *(_DWORD *)(v10 + v4); /*0x7d7561*/
        v12 = (_DWORD *)(v4 + v10); /*0x7d7564*/
        if ( v11 ) /*0x7d7568*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7d756e*/
            (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7d7585*/
          *v12 = 0; /*0x7d7587*/
        }
        v2 = ++v24; /*0x7d7598*/
      }
      while ( v24 < *((unsigned __int16 *)this + 0x5C) ); /*0x7d75a1*/
    }
    v13 = *((char **)this + 0x2F); /*0x7d75a9*/
    if ( v13 ) /*0x7d75b1*/
    {
      v14 = (unsigned int)(v13 + 0xFFFFFFFC); /*0x7d75b6*/
      _LN21(v13, 4u, *((_DWORD *)v13 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d75c2*/
      FormHeapFree(v14); /*0x7d75c8*/
    }
    v15 = *((char **)this + 0x30); /*0x7d75d0*/
    if ( v15 ) /*0x7d75d8*/
    {
      v16 = (unsigned int)(v15 + 0xFFFFFFFC); /*0x7d75dd*/
      _LN21(v15, 4u, *((_DWORD *)v15 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d75e9*/
      FormHeapFree(v16); /*0x7d75ef*/
    }
    v17 = *((char **)this + 0x31); /*0x7d75f7*/
    if ( v17 ) /*0x7d75ff*/
    {
      v18 = (unsigned int)(v17 + 0xFFFFFFFC); /*0x7d7604*/
      _LN21(v17, 4u, *((_DWORD *)v17 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7d7610*/
      FormHeapFree(v18); /*0x7d7616*/
    }
    FormHeapFree(*((_DWORD *)this + 0x34)); /*0x7d7625*/
    FormHeapFree(*((_DWORD *)this + 0x32)); /*0x7d7631*/
  }
  v19 = *((_DWORD *)this + 0x38); /*0x7d7639*/
  v20 = InterlockedDecrement; /*0x7d7641*/
  if ( v19 ) /*0x7d7647*/
  {
    if ( !v20((volatile LONG *)(v19 + 4)) ) /*0x7d764d*/
      (**(void (__thiscall ***)(int, int))v19)(v19, 1); /*0x7d765f*/
    *((_DWORD *)this + 0x38) = 0; /*0x7d7661*/
  }
  *((_DWORD *)this + 0x36) = 0; /*0x7d7669*/
  *((float *)this + 0x3A) = 0.0; /*0x7d766f*/
  v21 = *((_DWORD *)this + 0x35); /*0x7d7675*/
  if ( v21 ) /*0x7d767d*/
  {
    if ( !v20((volatile LONG *)(v21 + 4)) ) /*0x7d7683*/
      (**(void (__thiscall ***)(int, int))v21)(v21, 1); /*0x7d7695*/
    *((_DWORD *)this + 0x35) = 0; /*0x7d7697*/
  }
  v22 = *((_DWORD *)this + 0x38); /*0x7d769d*/
  if ( v22 ) /*0x7d76aa*/
  {
    if ( !v20((volatile LONG *)(v22 + 4)) ) /*0x7d76b0*/
      (**(void (__thiscall ***)(int, int))v22)(v22, 1); /*0x7d76c2*/
  }
  v23 = *((_DWORD *)this + 0x35); /*0x7d76c4*/
  if ( v23 ) /*0x7d76d1*/
  {
    if ( !v20((volatile LONG *)(v23 + 4)) ) /*0x7d76d7*/
      (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x7d76e9*/
  }
  BSShaderLightingProperty::~BSShaderLightingProperty((BSShaderLightingPropertyLayout_t *)this); /*0x7d76f5*/
}
