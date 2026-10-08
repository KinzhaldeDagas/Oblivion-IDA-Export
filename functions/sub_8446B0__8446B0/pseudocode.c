void __thiscall sub_8446B0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B45A20; /*0x8446e5*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x8446f3*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  v7 = **(_DWORD **)(v6 + 0x24); /*0x8446fc*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x844703*/
  v9 = *(_DWORD *)(v7 + 4); /*0x844708*/
  v18 = v8; /*0x84470d*/
  if ( v9 != v8 ) /*0x844711*/
  {
    if ( v9 ) /*0x844715*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x84471b*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x844731*/
      v8 = v18; /*0x844733*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x844739*/
    if ( v8 ) /*0x84473c*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x844742*/
  }
  sub_848FA0((_DWORD **)v7, SLODWORD(value)); /*0x844750*/
  v10 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x844758*/
  v11 = unk_B43108[0]; /*0x84475b*/
  v12 = *(_DWORD *)(v10 + 4); /*0x844760*/
  v13 = (float *)(v10 + 4); /*0x844763*/
  v14 = v12 == LODWORD(unk_B43108[0]); /*0x844766*/
  value = unk_B43108[0]; /*0x844768*/
  if ( !v14 ) /*0x84476c*/
  {
    if ( v12 ) /*0x844770*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x844776*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x84478d*/
      v11 = value; /*0x84478f*/
    }
    *v13 = v11; /*0x844795*/
    if ( v11 != 0.0 ) /*0x844797*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v11) + 4)); /*0x84479d*/
  }
  v15 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x8447a6*/
  v16 = *(volatile LONG **)(v15 + 4); /*0x8447ae*/
  v14 = v16 == g_CanopyShadowMap; /*0x8447b1*/
  v17 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8447b3*/
  value = *(float *)&g_CanopyShadowMap; /*0x8447b5*/
  if ( !v14 ) /*0x8447b9*/
  {
    if ( v16 ) /*0x8447bd*/
    {
      if ( !InterlockedDecrement(v16 + 1) ) /*0x8447c3*/
        (**(void (__thiscall ***)(void *, int))v16)((void *)v16, 1); /*0x8447d9*/
      v17 = (NiRenderedTexture *)LODWORD(value); /*0x8447db*/
    }
    *(_DWORD *)(v15 + 4) = v17; /*0x8447e1*/
    if ( v17 ) /*0x8447e4*/
      InterlockedIncrement((volatile LONG *)&v17->member); /*0x8447ea*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8447f5*/
  value = *(float *)&v6; /*0x8447f8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x844810*/
  v14 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x844818*/
  if ( v14 ) /*0x84481f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x844823*/
  ++*((_DWORD *)this + 0xE); /*0x844828*/
}
