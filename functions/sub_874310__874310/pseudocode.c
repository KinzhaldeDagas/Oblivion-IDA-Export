void __thiscall sub_874310(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  int v6; // edi
  float *v7; // ebx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // ebp
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  int v15; // ebp
  int v16; // ebx
  float v17; // eax
  int v18; // ebp
  float *v19; // ebx
  bool v20; // zf
  int v21; // ebx
  float v22; // eax
  int v23; // ebp
  float *v24; // ebx
  int v25; // ebp
  volatile LONG *v26; // ebx
  NiRenderedTexture *v27; // ecx
  int v28; // [esp+3Ch] [ebp+Ch]
  int v29; // [esp+3Ch] [ebp+Ch]

  v6 = unk_B47638; /*0x87433d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x874344*/
  v7 = *(float **)(a4 + 0xC); /*0x874349*/
  sub_848E50(v7); /*0x87434f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x874366*/
  v8 = **(_DWORD **)(v6 + 0x24); /*0x87436f*/
  v28 = v8; /*0x87437b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87437f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x874381*/
  v11 = v9; /*0x874384*/
  if ( v10 != v9 ) /*0x874388*/
  {
    if ( v10 ) /*0x87438c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x874392*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8743a8*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x8743b0*/
    if ( v11 ) /*0x8743b3*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8743b9*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x8743c6*/
  v29 = v12; /*0x8743ce*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x8743d2*/
  v14 = *(_DWORD *)(v12 + 4); /*0x8743d7*/
  v15 = v13; /*0x8743da*/
  if ( v14 != v13 ) /*0x8743de*/
  {
    if ( v14 ) /*0x8743e2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x8743e8*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x8743fe*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x874406*/
    if ( v15 ) /*0x874409*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x87440f*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x874418*/
  v17 = flt_B43110[0]; /*0x87441b*/
  v18 = *(_DWORD *)(v16 + 4); /*0x874420*/
  v19 = (float *)(v16 + 4); /*0x874423*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x874426*/
  value = flt_B43110[0]; /*0x874428*/
  if ( !v20 ) /*0x87442c*/
  {
    if ( v18 ) /*0x874430*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x874436*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87444d*/
      v17 = value; /*0x87444f*/
    }
    *v19 = v17; /*0x874455*/
    if ( v17 != 0.0 ) /*0x874457*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87445d*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x874466*/
  v22 = unk_B43108[0]; /*0x874469*/
  v23 = *(_DWORD *)(v21 + 4); /*0x87446e*/
  v24 = (float *)(v21 + 4); /*0x874471*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x874474*/
  value = unk_B43108[0]; /*0x874476*/
  if ( !v20 ) /*0x87447a*/
  {
    if ( v23 ) /*0x87447e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x874484*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87449b*/
      v22 = value; /*0x87449d*/
    }
    *v24 = v22; /*0x8744a3*/
    if ( v22 != 0.0 ) /*0x8744a5*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x8744ab*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x8744b4*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x8744bc*/
  v20 = v26 == g_CanopyShadowMap; /*0x8744bf*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8744c1*/
  value = *(float *)&g_CanopyShadowMap; /*0x8744c3*/
  if ( !v20 ) /*0x8744c7*/
  {
    if ( v26 ) /*0x8744cb*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x8744d1*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x8744e7*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x8744e9*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x8744ef*/
    if ( v27 ) /*0x8744f2*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x8744f8*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x874503*/
  value = *(float *)&v6; /*0x874506*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87451e*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x874526*/
  if ( v20 ) /*0x87452d*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x874531*/
  ++*((_DWORD *)this + 0xE); /*0x874536*/
}
