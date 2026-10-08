void __thiscall sub_876340(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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
  int v16; // ebp
  float v17; // eax
  int v18; // ebx
  float *v19; // ebp
  bool v20; // zf
  int v21; // ebp
  volatile LONG *v22; // ebx
  NiRenderedTexture *v23; // ecx
  int v24; // [esp+38h] [ebp+Ch]
  int v25; // [esp+38h] [ebp+Ch]

  v6 = unk_B47678; /*0x87636d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x876374*/
  v7 = *(float **)(a4 + 0xC); /*0x876379*/
  sub_848E50(v7); /*0x87637f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x876396*/
  v8 = **(_DWORD **)(v6 + 0x24); /*0x87639f*/
  v24 = v8; /*0x8763ab*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x8763af*/
  v10 = *(_DWORD *)(v8 + 4); /*0x8763b1*/
  v11 = v9; /*0x8763b4*/
  if ( v10 != v9 ) /*0x8763b8*/
  {
    if ( v10 ) /*0x8763bc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8763c2*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8763d8*/
    }
    *(_DWORD *)(v24 + 4) = v11; /*0x8763e0*/
    if ( v11 ) /*0x8763e3*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8763e9*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x8763f6*/
  v25 = v12; /*0x8763fe*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x876402*/
  v14 = *(_DWORD *)(v12 + 4); /*0x876407*/
  v15 = v13; /*0x87640a*/
  if ( v14 != v13 ) /*0x87640e*/
  {
    if ( v14 ) /*0x876412*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x876418*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x87642e*/
    }
    *(_DWORD *)(v25 + 4) = v15; /*0x876436*/
    if ( v15 ) /*0x876439*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x87643f*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x876448*/
  v17 = unk_B43108[0]; /*0x87644b*/
  v18 = *(_DWORD *)(v16 + 4); /*0x876450*/
  v19 = (float *)(v16 + 4); /*0x876453*/
  v20 = v18 == LODWORD(unk_B43108[0]); /*0x876456*/
  value = unk_B43108[0]; /*0x876458*/
  if ( !v20 ) /*0x87645c*/
  {
    if ( v18 ) /*0x876460*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x876466*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87647c*/
      v17 = value; /*0x87647e*/
    }
    *v19 = v17; /*0x876484*/
    if ( v17 != 0.0 ) /*0x876487*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87648d*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x1C); /*0x876496*/
  v22 = *(volatile LONG **)(v21 + 4); /*0x87649e*/
  v20 = v22 == g_CanopyShadowMap; /*0x8764a1*/
  v23 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8764a3*/
  value = *(float *)&g_CanopyShadowMap; /*0x8764a5*/
  if ( !v20 ) /*0x8764a9*/
  {
    if ( v22 ) /*0x8764ad*/
    {
      if ( !InterlockedDecrement(v22 + 1) ) /*0x8764b3*/
        (**(void (__thiscall ***)(void *, int))v22)((void *)v22, 1); /*0x8764c9*/
      v23 = (NiRenderedTexture *)LODWORD(value); /*0x8764cb*/
    }
    *(_DWORD *)(v21 + 4) = v23; /*0x8764d1*/
    if ( v23 ) /*0x8764d4*/
      InterlockedIncrement((volatile LONG *)&v23->member); /*0x8764da*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8764e5*/
  value = *(float *)&v6; /*0x8764e8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x876500*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x876508*/
  if ( v20 ) /*0x87650f*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x876513*/
  ++*((_DWORD *)this + 0xE); /*0x876518*/
}
