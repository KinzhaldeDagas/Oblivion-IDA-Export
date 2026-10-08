void __thiscall sub_879110(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  int v6; // edi
  float *v7; // ebp
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

  v6 = unk_B476D0; /*0x87913d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x879144*/
  v7 = *(float **)(a4 + 0xC); /*0x879149*/
  sub_848E50(v7); /*0x87914f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x879168*/
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  v8 = **(_DWORD **)(v6 + 0x24); /*0x879171*/
  v28 = v8; /*0x87917d*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x879181*/
  v10 = *(_DWORD *)(v8 + 4); /*0x879183*/
  v11 = v9; /*0x879186*/
  if ( v10 != v9 ) /*0x87918a*/
  {
    if ( v10 ) /*0x87918e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x879194*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8791aa*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x8791b2*/
    if ( v11 ) /*0x8791b5*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8791bb*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x8791c8*/
  v29 = v12; /*0x8791d0*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x8791d4*/
  v14 = *(_DWORD *)(v12 + 4); /*0x8791d9*/
  v15 = v13; /*0x8791dc*/
  if ( v14 != v13 ) /*0x8791e0*/
  {
    if ( v14 ) /*0x8791e4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x8791ea*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x879200*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x879208*/
    if ( v15 ) /*0x87920b*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x879211*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x87921a*/
  v17 = flt_B43110[0]; /*0x87921d*/
  v18 = *(_DWORD *)(v16 + 4); /*0x879222*/
  v19 = (float *)(v16 + 4); /*0x879225*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x879228*/
  value = flt_B43110[0]; /*0x87922a*/
  if ( !v20 ) /*0x87922e*/
  {
    if ( v18 ) /*0x879232*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x879238*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87924f*/
      v17 = value; /*0x879251*/
    }
    *v19 = v17; /*0x879257*/
    if ( v17 != 0.0 ) /*0x879259*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87925f*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x879268*/
  v22 = unk_B43108[0]; /*0x87926b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x879270*/
  v24 = (float *)(v21 + 4); /*0x879273*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x879276*/
  value = unk_B43108[0]; /*0x879278*/
  if ( !v20 ) /*0x87927c*/
  {
    if ( v23 ) /*0x879280*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x879286*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87929d*/
      v22 = value; /*0x87929f*/
    }
    *v24 = v22; /*0x8792a5*/
    if ( v22 != 0.0 ) /*0x8792a7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x8792ad*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x1C); /*0x8792b6*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x8792be*/
  v20 = v26 == g_CanopyShadowMap; /*0x8792c1*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8792c3*/
  value = *(float *)&g_CanopyShadowMap; /*0x8792c5*/
  if ( !v20 ) /*0x8792c9*/
  {
    if ( v26 ) /*0x8792cd*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x8792d3*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x8792e9*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x8792eb*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x8792f1*/
    if ( v27 ) /*0x8792f4*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x8792fa*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x879305*/
  value = *(float *)&v6; /*0x879308*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x879320*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x879328*/
  if ( v20 ) /*0x87932f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x879333*/
  ++*((_DWORD *)this + 0xE); /*0x879338*/
}
