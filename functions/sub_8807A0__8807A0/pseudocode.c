void __thiscall sub_8807A0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B47734; /*0x8807cd*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x8807d4*/
  v7 = *(float **)(a4 + 0xC); /*0x8807d9*/
  sub_848E50(v7); /*0x8807df*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x8807f6*/
  v8 = **(_DWORD **)(v6 + 0x24); /*0x8807ff*/
  v28 = v8; /*0x88080b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x88080f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x880811*/
  v11 = v9; /*0x880814*/
  if ( v10 != v9 ) /*0x880818*/
  {
    if ( v10 ) /*0x88081c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x880822*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x880838*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x880840*/
    if ( v11 ) /*0x880843*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x880849*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x880856*/
  v29 = v12; /*0x88085e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x880862*/
  v14 = *(_DWORD *)(v12 + 4); /*0x880867*/
  v15 = v13; /*0x88086a*/
  if ( v14 != v13 ) /*0x88086e*/
  {
    if ( v14 ) /*0x880872*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x880878*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x88088e*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x880896*/
    if ( v15 ) /*0x880899*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x88089f*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x8808a8*/
  v17 = flt_B43110[0]; /*0x8808ab*/
  v18 = *(_DWORD *)(v16 + 4); /*0x8808b0*/
  v19 = (float *)(v16 + 4); /*0x8808b3*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x8808b6*/
  value = flt_B43110[0]; /*0x8808b8*/
  if ( !v20 ) /*0x8808bc*/
  {
    if ( v18 ) /*0x8808c0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x8808c6*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x8808dd*/
      v17 = value; /*0x8808df*/
    }
    *v19 = v17; /*0x8808e5*/
    if ( v17 != 0.0 ) /*0x8808e7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x8808ed*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x8808f6*/
  v22 = unk_B43108[0]; /*0x8808f9*/
  v23 = *(_DWORD *)(v21 + 4); /*0x8808fe*/
  v24 = (float *)(v21 + 4); /*0x880901*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x880904*/
  value = unk_B43108[0]; /*0x880906*/
  if ( !v20 ) /*0x88090a*/
  {
    if ( v23 ) /*0x88090e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x880914*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x88092b*/
      v22 = value; /*0x88092d*/
    }
    *v24 = v22; /*0x880933*/
    if ( v22 != 0.0 ) /*0x880935*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x88093b*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x880944*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x88094c*/
  v20 = v26 == g_CanopyShadowMap; /*0x88094f*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x880951*/
  value = *(float *)&g_CanopyShadowMap; /*0x880953*/
  if ( !v20 ) /*0x880957*/
  {
    if ( v26 ) /*0x88095b*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x880961*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x880977*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x880979*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x88097f*/
    if ( v27 ) /*0x880982*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x880988*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x880993*/
  value = *(float *)&v6; /*0x880996*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8809ae*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x8809b6*/
  if ( v20 ) /*0x8809bd*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x8809c1*/
  ++*((_DWORD *)this + 0xE); /*0x8809c6*/
}
