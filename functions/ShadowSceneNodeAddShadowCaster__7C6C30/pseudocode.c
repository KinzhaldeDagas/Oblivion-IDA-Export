// Retail AddShadowCaster. Seven decoded direct callers are player/mobile-object lifecycle paths; no direct loaded-TESObjectSTAT enumerator was found. Duplicate sources refresh ownership/state; new sources create a backing point light and retain exact caster root at +0x130.
ShadowSceneLight *__thiscall ShadowSceneNodeAddShadowCaster(_DWORD *this, volatile LONG *a2)
{
  _DWORD *v2; // eax
  ShadowSceneLight *v3; // esi
  ShadowSceneLight *v4; // eax
  _DWORD *v5; // eax
  volatile LONG *v6; // edi
  NiLight *v7; // eax
  NiLight *v8; // edi
  int v9; // eax
  volatile LONG *v11; // [esp+8h] [ebp-24h]

  v2 = (_DWORD *)*(this + 0x3E); /*0x7c6c59*/
  if ( v2 ) /*0x7c6c61*/
  {
    while ( 1 ) /*0x7c6c63*/
    {
      v3 = (ShadowSceneLight *)v2[2]; /*0x7c6c63*/
      v2 = (_DWORD *)*v2; /*0x7c6c6b*/
      if ( v3 ) /*0x7c6c6d*/
      {
        if ( *((volatile LONG **)v3 + 0x4C) == a2 ) /*0x7c6c79*/
          break; /*0x7c6c79*/
      }
      if ( !v2 ) /*0x7c6c7d*/
        goto LABEL_5; /*0x7c6c7d*/
    }
    v5 = ShadowSceneLight_GetLightRef(v3, &a2); // Duplicate-source path resolves the existing backing NiLight smart reference. /*0x7c6cae*/
    *(_WORD *)(*v5 + 0x18) &= ~1u;              // Duplicate-source refresh clears the backing source cull bit. /*0x7c6cb5*/
    if ( a2 ) /*0x7c6cc1*/
    {
      v6 = a2; /*0x7c6cc3*/
      if ( !InterlockedDecrement(a2 + 1) ) /*0x7c6cc9*/
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x7c6cdf*/
    }
    ShadowSceneLight_UpdateTransitionState((float *)v3, 1.0, 0.0);// Duplicate-source refresh updates the native transition target to 1.0 with no immediate transition. /*0x7c6ceb*/
  }
  else
  {
LABEL_5:
    v4 = (ShadowSceneLight *)FormHeapAlloc(0x220u); /*0x7c6c7f*/
    if ( v4 ) /*0x7c6c9a*/
      v3 = ShadowSceneLight::ShadowSceneLight(v4);// Constructor callsite for direct player/mobile caster admission; immediate setup writes +0x104, +0x100, +0xF4, +0xF5, +0x130, and list ownership only. /*0x7c6ca3*/
    else
      v3 = 0; /*0x7c6cf5*/
    *((_BYTE *)v3 + 0x104) = 1; /*0x7c6d04*/
    v7 = (NiLight *)FormHeapAlloc(0x114u); /*0x7c6d0b*/
    v8 = v7; /*0x7c6d10*/
    if ( v7 ) /*0x7c6d23*/
    {
      NiLight::NiLight(v7); /*0x7c6d27*/
      *(float *)&v8[1].vtbl = 0.0; /*0x7c6d2e*/
      v8->vtbl = (NiAVObjectVtbl *)&NiPointLight::`vftable'; /*0x7c6d34*/
      v9 = (int)v8; /*0x7c6d3c*/
      *(float *)&v8[1].members.super.super.m_uiRefCount = 1.0; /*0x7c6d3e*/
      *(float *)&v8[1].members.super.m_pcName = 0.0; /*0x7c6d44*/
    }
    else
    {
      v9 = 0; /*0x7c6d4c*/
    }
    *(_WORD *)(v9 + 0x18) &= ~1u;               // New/refresh caster path clears backing source NiAVObject flags+0x18 bit0. /*0x7c6d4e*/
    ShadowSceneLight_SetBackingLight(v3, v9);   // New-source path installs/strong-owns the backing NiPointLight at ShadowSceneLight+0x100. /*0x7c6d5f*/
    ShadowSceneLight_SetPerSourceProjectorMode((int)v3, 1);// ShadowSceneNodeAddShadowCaster enables the actor/per-source ShadowSceneLight path. That direct projected-map path does not consume dword_B2C678; static reference admission is a separate lifecycle concern. /*0x7c6d68*/
    v11 = a2; /*0x7c6d71*/
    *((_BYTE *)v3 + 0xF5) = 0;                  // Native AddShadowCaster explicitly clears +0xF5, preserving the ordinary per-source projected-shadow dispatch for player/mobile caster lights. /*0x7c6d74*/
    ShadowSceneLight_SetCasterRoot(v3, (int)v11); /*0x7c6d7b*/
    a2 = (volatile LONG *)v3; /*0x7c6d84*/
    InterlockedIncrement((volatile LONG *)v3 + 1); /*0x7c6d88*/
    NiTRefPointerList__AddTail(this + 0x3D, (int *)&a2); /*0x7c6da5*/
    if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x7c6db3*/
      (**(void (__thiscall ***)(ShadowSceneLight *, int))v3)(v3, 1); /*0x7c6dc5*/
  }
  return v3; /*0x7c6dc9*/
}
