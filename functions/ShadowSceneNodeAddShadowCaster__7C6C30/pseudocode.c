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

  v2 = (_DWORD *)*(this + 0x3E);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (ShadowSceneLight *)v2[2];
      v2 = (_DWORD *)*v2;
      if ( v3 )
      {
        if ( *((volatile LONG **)v3 + 0x4C) == a2 )
          break;
      }
      if ( !v2 )
        goto LABEL_5;
    }
    v5 = sub_405AD0(v3, &a2);
    *(_WORD *)(*v5 + 0x18) &= ~1u;
    if ( a2 )
    {
      v6 = a2;
      if ( !InterlockedDecrement(a2 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
    }
    sub_7D1ED0((float *)v3, 1.0, 0.0);
  }
  else
  {
LABEL_5:
    v4 = (ShadowSceneLight *)FormHeapAlloc(0x220u);
    if ( v4 )
      v3 = ShadowSceneLight::ShadowSceneLight(v4);
    else
      v3 = 0;
    *((_BYTE *)v3 + 0x104) = 1;
    v7 = (NiLight *)FormHeapAlloc(0x114u);
    v8 = v7;
    if ( v7 )
    {
      NiLight::NiLight(v7);
      *(float *)&v8[1].vtbl = 0.0;
      v8->vtbl = (NiAVObjectVtbl *)&NiPointLight::`vftable';
      v9 = (int)v8;
      *(float *)&v8[1].members.super.super.m_uiRefCount = 1.0;
      *(float *)&v8[1].members.super.m_pcName = 0.0;
    }
    else
    {
      v9 = 0;
    }
    *(_WORD *)(v9 + 0x18) &= ~1u;
    sub_7D3400(v3, v9);
    sub_7D3370((int)v3, 1);
    v11 = a2;
    *((_BYTE *)v3 + 0xF5) = 0;
    sub_7C5A10(v3, (int)v11);
    a2 = (volatile LONG *)v3;
    InterlockedIncrement((volatile LONG *)v3 + 1);
    sub_7C16B0(this + 0x3D, (int *)&a2);
    if ( !InterlockedDecrement((volatile LONG *)v3 + 1) )
      (**(void (__thiscall ***)(ShadowSceneLight *, int))v3)(v3, 1);
  }
  return v3;
}
