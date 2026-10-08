void __thiscall sub_844370(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  int v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ebx
  int v10; // ebx
  float v11; // eax
  int v12; // ebp
  float *v13; // ebx
  bool v14; // zf
  int v15; // ebp
  volatile LONG *v16; // ebx
  NiRenderedTexture *v17; // ecx
  int v18; // [esp+30h] [ebp+Ch]

  v6 = unk_B45A14; /*0x8443a5*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x8443b3*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  v7 = **(_DWORD **)(v6 + 0x24); /*0x8443bc*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x8443c3*/
  v9 = *(_DWORD *)(v7 + 4); /*0x8443c8*/
  v18 = v8; /*0x8443cd*/
  if ( v9 != v8 ) /*0x8443d1*/
  {
    if ( v9 ) /*0x8443d5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x8443db*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x8443f1*/
      v8 = v18; /*0x8443f3*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x8443f9*/
    if ( v8 ) /*0x8443fc*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x844402*/
  }
  sub_848FA0((_DWORD **)v7, SLODWORD(value)); /*0x844410*/
  v10 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x844418*/
  v11 = unk_B43108[0]; /*0x84441b*/
  v12 = *(_DWORD *)(v10 + 4); /*0x844420*/
  v13 = (float *)(v10 + 4); /*0x844423*/
  v14 = v12 == LODWORD(unk_B43108[0]); /*0x844426*/
  value = unk_B43108[0]; /*0x844428*/
  if ( !v14 ) /*0x84442c*/
  {
    if ( v12 ) /*0x844430*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x844436*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x84444d*/
      v11 = value; /*0x84444f*/
    }
    *v13 = v11; /*0x844455*/
    if ( v11 != 0.0 ) /*0x844457*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v11) + 4)); /*0x84445d*/
  }
  v15 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x844466*/
  v16 = *(volatile LONG **)(v15 + 4); /*0x84446e*/
  v14 = v16 == g_CanopyShadowMap; /*0x844471*/
  v17 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x844473*/
  value = *(float *)&g_CanopyShadowMap; /*0x844475*/
  if ( !v14 ) /*0x844479*/
  {
    if ( v16 ) /*0x84447d*/
    {
      if ( !InterlockedDecrement(v16 + 1) ) /*0x844483*/
        (**(void (__thiscall ***)(void *, int))v16)((void *)v16, 1); /*0x844499*/
      v17 = (NiRenderedTexture *)LODWORD(value); /*0x84449b*/
    }
    *(_DWORD *)(v15 + 4) = v17; /*0x8444a1*/
    if ( v17 ) /*0x8444a4*/
      InterlockedIncrement((volatile LONG *)&v17->member); /*0x8444aa*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8444b5*/
  value = *(float *)&v6; /*0x8444b8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8444d0*/
  v14 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x8444d8*/
  if ( v14 ) /*0x8444df*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x8444e3*/
  ++*((_DWORD *)this + 0xE); /*0x8444e8*/
}
