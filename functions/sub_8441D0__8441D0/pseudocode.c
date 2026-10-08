void __thiscall sub_8441D0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B45A10; /*0x844205*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x844213*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  v7 = **(_DWORD **)(v6 + 0x24); /*0x84421c*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x844223*/
  v9 = *(_DWORD *)(v7 + 4); /*0x844228*/
  v18 = v8; /*0x84422d*/
  if ( v9 != v8 ) /*0x844231*/
  {
    if ( v9 ) /*0x844235*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x84423b*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x844251*/
      v8 = v18; /*0x844253*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x844259*/
    if ( v8 ) /*0x84425c*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x844262*/
  }
  sub_848FA0((_DWORD **)v7, SLODWORD(value)); /*0x844270*/
  v10 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x844278*/
  v11 = unk_B43108[0]; /*0x84427b*/
  v12 = *(_DWORD *)(v10 + 4); /*0x844280*/
  v13 = (float *)(v10 + 4); /*0x844283*/
  v14 = v12 == LODWORD(unk_B43108[0]); /*0x844286*/
  value = unk_B43108[0]; /*0x844288*/
  if ( !v14 ) /*0x84428c*/
  {
    if ( v12 ) /*0x844290*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x844296*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x8442ad*/
      v11 = value; /*0x8442af*/
    }
    *v13 = v11; /*0x8442b5*/
    if ( v11 != 0.0 ) /*0x8442b7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v11) + 4)); /*0x8442bd*/
  }
  v15 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x8442c6*/
  v16 = *(volatile LONG **)(v15 + 4); /*0x8442ce*/
  v14 = v16 == g_CanopyShadowMap; /*0x8442d1*/
  v17 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8442d3*/
  value = *(float *)&g_CanopyShadowMap; /*0x8442d5*/
  if ( !v14 ) /*0x8442d9*/
  {
    if ( v16 ) /*0x8442dd*/
    {
      if ( !InterlockedDecrement(v16 + 1) ) /*0x8442e3*/
        (**(void (__thiscall ***)(void *, int))v16)((void *)v16, 1); /*0x8442f9*/
      v17 = (NiRenderedTexture *)LODWORD(value); /*0x8442fb*/
    }
    *(_DWORD *)(v15 + 4) = v17; /*0x844301*/
    if ( v17 ) /*0x844304*/
      InterlockedIncrement((volatile LONG *)&v17->member); /*0x84430a*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x844315*/
  value = *(float *)&v6; /*0x844318*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x844330*/
  v14 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x844338*/
  if ( v14 ) /*0x84433f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x844343*/
  ++*((_DWORD *)this + 0xE); /*0x844348*/
}
