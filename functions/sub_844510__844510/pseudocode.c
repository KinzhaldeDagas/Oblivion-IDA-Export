void __thiscall sub_844510(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B45A1C; /*0x844545*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x844553*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  v7 = **(_DWORD **)(v6 + 0x24); /*0x84455c*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x844563*/
  v9 = *(_DWORD *)(v7 + 4); /*0x844568*/
  v18 = v8; /*0x84456d*/
  if ( v9 != v8 ) /*0x844571*/
  {
    if ( v9 ) /*0x844575*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x84457b*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x844591*/
      v8 = v18; /*0x844593*/
    }
    *(_DWORD *)(v7 + 4) = v8; /*0x844599*/
    if ( v8 ) /*0x84459c*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x8445a2*/
  }
  sub_848FA0((_DWORD **)v7, SLODWORD(value)); /*0x8445b0*/
  v10 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x8445b8*/
  v11 = unk_B43108[0]; /*0x8445bb*/
  v12 = *(_DWORD *)(v10 + 4); /*0x8445c0*/
  v13 = (float *)(v10 + 4); /*0x8445c3*/
  v14 = v12 == LODWORD(unk_B43108[0]); /*0x8445c6*/
  value = unk_B43108[0]; /*0x8445c8*/
  if ( !v14 ) /*0x8445cc*/
  {
    if ( v12 ) /*0x8445d0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x8445d6*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x8445ed*/
      v11 = value; /*0x8445ef*/
    }
    *v13 = v11; /*0x8445f5*/
    if ( v11 != 0.0 ) /*0x8445f7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v11) + 4)); /*0x8445fd*/
  }
  v15 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x844606*/
  v16 = *(volatile LONG **)(v15 + 4); /*0x84460e*/
  v14 = v16 == g_CanopyShadowMap; /*0x844611*/
  v17 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x844613*/
  value = *(float *)&g_CanopyShadowMap; /*0x844615*/
  if ( !v14 ) /*0x844619*/
  {
    if ( v16 ) /*0x84461d*/
    {
      if ( !InterlockedDecrement(v16 + 1) ) /*0x844623*/
        (**(void (__thiscall ***)(void *, int))v16)((void *)v16, 1); /*0x844639*/
      v17 = (NiRenderedTexture *)LODWORD(value); /*0x84463b*/
    }
    *(_DWORD *)(v15 + 4) = v17; /*0x844641*/
    if ( v17 ) /*0x844644*/
      InterlockedIncrement((volatile LONG *)&v17->member); /*0x84464a*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x844655*/
  value = *(float *)&v6; /*0x844658*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x844670*/
  v14 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x844678*/
  if ( v14 ) /*0x84467f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x844683*/
  ++*((_DWORD *)this + 0xE); /*0x844688*/
}
