void __thiscall sub_8795E0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B476D8; /*0x87960d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x879614*/
  v7 = *(float **)(a4 + 0xC); /*0x879619*/
  sub_848E50(v7); /*0x87961f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x879638*/
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  v8 = **(_DWORD **)(v6 + 0x24); /*0x879641*/
  v28 = v8; /*0x87964d*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x879651*/
  v10 = *(_DWORD *)(v8 + 4); /*0x879653*/
  v11 = v9; /*0x879656*/
  if ( v10 != v9 ) /*0x87965a*/
  {
    if ( v10 ) /*0x87965e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x879664*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x87967a*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x879682*/
    if ( v11 ) /*0x879685*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x87968b*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x879698*/
  v29 = v12; /*0x8796a0*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x8796a4*/
  v14 = *(_DWORD *)(v12 + 4); /*0x8796a9*/
  v15 = v13; /*0x8796ac*/
  if ( v14 != v13 ) /*0x8796b0*/
  {
    if ( v14 ) /*0x8796b4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x8796ba*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x8796d0*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x8796d8*/
    if ( v15 ) /*0x8796db*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8796e1*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x8796ea*/
  v17 = flt_B43110[0]; /*0x8796ed*/
  v18 = *(_DWORD *)(v16 + 4); /*0x8796f2*/
  v19 = (float *)(v16 + 4); /*0x8796f5*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x8796f8*/
  value = flt_B43110[0]; /*0x8796fa*/
  if ( !v20 ) /*0x8796fe*/
  {
    if ( v18 ) /*0x879702*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x879708*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87971f*/
      v17 = value; /*0x879721*/
    }
    *v19 = v17; /*0x879727*/
    if ( v17 != 0.0 ) /*0x879729*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87972f*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x879738*/
  v22 = unk_B43108[0]; /*0x87973b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x879740*/
  v24 = (float *)(v21 + 4); /*0x879743*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x879746*/
  value = unk_B43108[0]; /*0x879748*/
  if ( !v20 ) /*0x87974c*/
  {
    if ( v23 ) /*0x879750*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x879756*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87976d*/
      v22 = value; /*0x87976f*/
    }
    *v24 = v22; /*0x879775*/
    if ( v22 != 0.0 ) /*0x879777*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x87977d*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x1C); /*0x879786*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x87978e*/
  v20 = v26 == g_CanopyShadowMap; /*0x879791*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x879793*/
  value = *(float *)&g_CanopyShadowMap; /*0x879795*/
  if ( !v20 ) /*0x879799*/
  {
    if ( v26 ) /*0x87979d*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x8797a3*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x8797b9*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x8797bb*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x8797c1*/
    if ( v27 ) /*0x8797c4*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x8797ca*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8797d5*/
  value = *(float *)&v6; /*0x8797d8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8797f0*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x8797f8*/
  if ( v20 ) /*0x8797ff*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x879803*/
  ++*((_DWORD *)this + 0xE); /*0x879808*/
}
