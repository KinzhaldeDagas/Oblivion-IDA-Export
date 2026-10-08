void __thiscall sub_87FFC0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B47724; /*0x87ffed*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x87fff4*/
  v7 = *(float **)(a4 + 0xC); /*0x87fff9*/
  sub_848E50(v7); /*0x87ffff*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x880016*/
  v8 = **(_DWORD **)(v6 + 0x24); /*0x88001f*/
  v28 = v8; /*0x88002b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x88002f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x880031*/
  v11 = v9; /*0x880034*/
  if ( v10 != v9 ) /*0x880038*/
  {
    if ( v10 ) /*0x88003c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x880042*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x880058*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x880060*/
    if ( v11 ) /*0x880063*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x880069*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x880076*/
  v29 = v12; /*0x88007e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x880082*/
  v14 = *(_DWORD *)(v12 + 4); /*0x880087*/
  v15 = v13; /*0x88008a*/
  if ( v14 != v13 ) /*0x88008e*/
  {
    if ( v14 ) /*0x880092*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x880098*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x8800ae*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x8800b6*/
    if ( v15 ) /*0x8800b9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8800bf*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x8800c8*/
  v17 = flt_B43110[0]; /*0x8800cb*/
  v18 = *(_DWORD *)(v16 + 4); /*0x8800d0*/
  v19 = (float *)(v16 + 4); /*0x8800d3*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x8800d6*/
  value = flt_B43110[0]; /*0x8800d8*/
  if ( !v20 ) /*0x8800dc*/
  {
    if ( v18 ) /*0x8800e0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x8800e6*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x8800fd*/
      v17 = value; /*0x8800ff*/
    }
    *v19 = v17; /*0x880105*/
    if ( v17 != 0.0 ) /*0x880107*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x88010d*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x880116*/
  v22 = unk_B43108[0]; /*0x880119*/
  v23 = *(_DWORD *)(v21 + 4); /*0x88011e*/
  v24 = (float *)(v21 + 4); /*0x880121*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x880124*/
  value = unk_B43108[0]; /*0x880126*/
  if ( !v20 ) /*0x88012a*/
  {
    if ( v23 ) /*0x88012e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x880134*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x88014b*/
      v22 = value; /*0x88014d*/
    }
    *v24 = v22; /*0x880153*/
    if ( v22 != 0.0 ) /*0x880155*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x88015b*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x880164*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x88016c*/
  v20 = v26 == g_CanopyShadowMap; /*0x88016f*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x880171*/
  value = *(float *)&g_CanopyShadowMap; /*0x880173*/
  if ( !v20 ) /*0x880177*/
  {
    if ( v26 ) /*0x88017b*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x880181*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x880197*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x880199*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x88019f*/
    if ( v27 ) /*0x8801a2*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x8801a8*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8801b3*/
  value = *(float *)&v6; /*0x8801b6*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8801ce*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x8801d6*/
  if ( v20 ) /*0x8801dd*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x8801e1*/
  ++*((_DWORD *)this + 0xE); /*0x8801e6*/
}
