void __thiscall sub_874F30(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B47650; /*0x874f5d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x874f64*/
  v7 = *(float **)(a4 + 0xC); /*0x874f69*/
  sub_848E50(v7); /*0x874f6f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x874f86*/
  v8 = **(_DWORD **)(v6 + 0x24); /*0x874f8f*/
  v28 = v8; /*0x874f9b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x874f9f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x874fa1*/
  v11 = v9; /*0x874fa4*/
  if ( v10 != v9 ) /*0x874fa8*/
  {
    if ( v10 ) /*0x874fac*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x874fb2*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x874fc8*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x874fd0*/
    if ( v11 ) /*0x874fd3*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x874fd9*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x874fe6*/
  v29 = v12; /*0x874fee*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x874ff2*/
  v14 = *(_DWORD *)(v12 + 4); /*0x874ff7*/
  v15 = v13; /*0x874ffa*/
  if ( v14 != v13 ) /*0x874ffe*/
  {
    if ( v14 ) /*0x875002*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x875008*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x87501e*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x875026*/
    if ( v15 ) /*0x875029*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x87502f*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x875038*/
  v17 = flt_B43110[0]; /*0x87503b*/
  v18 = *(_DWORD *)(v16 + 4); /*0x875040*/
  v19 = (float *)(v16 + 4); /*0x875043*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x875046*/
  value = flt_B43110[0]; /*0x875048*/
  if ( !v20 ) /*0x87504c*/
  {
    if ( v18 ) /*0x875050*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x875056*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87506d*/
      v17 = value; /*0x87506f*/
    }
    *v19 = v17; /*0x875075*/
    if ( v17 != 0.0 ) /*0x875077*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87507d*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x875086*/
  v22 = unk_B43108[0]; /*0x875089*/
  v23 = *(_DWORD *)(v21 + 4); /*0x87508e*/
  v24 = (float *)(v21 + 4); /*0x875091*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x875094*/
  value = unk_B43108[0]; /*0x875096*/
  if ( !v20 ) /*0x87509a*/
  {
    if ( v23 ) /*0x87509e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x8750a4*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x8750bb*/
      v22 = value; /*0x8750bd*/
    }
    *v24 = v22; /*0x8750c3*/
    if ( v22 != 0.0 ) /*0x8750c5*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x8750cb*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x8750d4*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x8750dc*/
  v20 = v26 == g_CanopyShadowMap; /*0x8750df*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8750e1*/
  value = *(float *)&g_CanopyShadowMap; /*0x8750e3*/
  if ( !v20 ) /*0x8750e7*/
  {
    if ( v26 ) /*0x8750eb*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x8750f1*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x875107*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x875109*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x87510f*/
    if ( v27 ) /*0x875112*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x875118*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x875123*/
  value = *(float *)&v6; /*0x875126*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87513e*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x875146*/
  if ( v20 ) /*0x87514d*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x875151*/
  ++*((_DWORD *)this + 0xE); /*0x875156*/
}
