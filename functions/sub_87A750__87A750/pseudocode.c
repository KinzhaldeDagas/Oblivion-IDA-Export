void __thiscall sub_87A750(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
{
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  int v11; // edi
  int v12; // eax
  int v13; // edi
  int v14; // ebp
  int v15; // ebp
  float v16; // eax
  int v17; // edi
  float *v18; // ebp
  bool v19; // zf
  int v20; // ebp
  volatile LONG *v21; // edi
  NiRenderedTexture *v22; // ecx
  int v23; // [esp+38h] [ebp+Ch]
  int v24; // [esp+38h] [ebp+Ch]

  v6 = unk_B47704; /*0x87a785*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x87a793*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  v7 = **(_DWORD **)(v6 + 0x24); /*0x87a79c*/
  v23 = v7; /*0x87a7a3*/
  v8 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x87a7a7*/
  v9 = *(_DWORD *)(v7 + 4); /*0x87a7ac*/
  v10 = v8; /*0x87a7af*/
  if ( v9 != v8 ) /*0x87a7b3*/
  {
    if ( v9 ) /*0x87a7b7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x87a7bd*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x87a7d3*/
    }
    *(_DWORD *)(v23 + 4) = v10; /*0x87a7db*/
    if ( v10 ) /*0x87a7de*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x87a7e4*/
  }
  v11 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x87a7ed*/
  v24 = v11; /*0x87a7fe*/
  v12 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87a802*/
  v13 = *(_DWORD *)(v11 + 4); /*0x87a804*/
  v14 = v12; /*0x87a807*/
  if ( v13 != v12 ) /*0x87a80b*/
  {
    if ( v13 ) /*0x87a80f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x87a815*/
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x87a82b*/
    }
    *(_DWORD *)(v24 + 4) = v14; /*0x87a833*/
    if ( v14 ) /*0x87a836*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x87a83c*/
  }
  v15 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x87a845*/
  v16 = unk_B43108[0]; /*0x87a848*/
  v17 = *(_DWORD *)(v15 + 4); /*0x87a84d*/
  v18 = (float *)(v15 + 4); /*0x87a850*/
  v19 = v17 == LODWORD(unk_B43108[0]); /*0x87a853*/
  value = unk_B43108[0]; /*0x87a855*/
  if ( !v19 ) /*0x87a859*/
  {
    if ( v17 ) /*0x87a85d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x87a863*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x87a879*/
      v16 = value; /*0x87a87b*/
    }
    *v18 = v16; /*0x87a881*/
    if ( v16 != 0.0 ) /*0x87a884*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x87a88a*/
  }
  v20 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x87a893*/
  v21 = *(volatile LONG **)(v20 + 4); /*0x87a89b*/
  v19 = v21 == g_CanopyShadowMap; /*0x87a89e*/
  v22 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x87a8a0*/
  value = *(float *)&g_CanopyShadowMap; /*0x87a8a2*/
  if ( !v19 ) /*0x87a8a6*/
  {
    if ( v21 ) /*0x87a8aa*/
    {
      if ( !InterlockedDecrement(v21 + 1) ) /*0x87a8b0*/
        (**(void (__thiscall ***)(void *, int))v21)((void *)v21, 1); /*0x87a8c6*/
      v22 = (NiRenderedTexture *)LODWORD(value); /*0x87a8c8*/
    }
    *(_DWORD *)(v20 + 4) = v22; /*0x87a8ce*/
    if ( v22 ) /*0x87a8d1*/
      InterlockedIncrement((volatile LONG *)&v22->member); /*0x87a8d7*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x87a8e2*/
  value = *(float *)&v6; /*0x87a8e5*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x87a8fd*/
  v19 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x87a905*/
  if ( v19 ) /*0x87a90c*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x87a910*/
  ++*((_DWORD *)this + 0xE); /*0x87a915*/
}
