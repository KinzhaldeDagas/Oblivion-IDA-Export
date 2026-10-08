void __thiscall sub_8784C0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B476B8; /*0x8784ed*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x8784f4*/
  v7 = *(float **)(a4 + 0xC); /*0x8784f9*/
  sub_848E50(v7); /*0x8784ff*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))( /*0x878518*/
    this,
    a2,
    v7,
    *(_DWORD *)(a4 + 0x10));
  v8 = **(_DWORD **)(v6 + 0x24); /*0x878521*/
  v28 = v8; /*0x87852d*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x878531*/
  v10 = *(_DWORD *)(v8 + 4); /*0x878533*/
  v11 = v9; /*0x878536*/
  if ( v10 != v9 ) /*0x87853a*/
  {
    if ( v10 ) /*0x87853e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x878544*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x87855a*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x878562*/
    if ( v11 ) /*0x878565*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x87856b*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x878578*/
  v29 = v12; /*0x878580*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x878584*/
  v14 = *(_DWORD *)(v12 + 4); /*0x878589*/
  v15 = v13; /*0x87858c*/
  if ( v14 != v13 ) /*0x878590*/
  {
    if ( v14 ) /*0x878594*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x87859a*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x8785b0*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x8785b8*/
    if ( v15 ) /*0x8785bb*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8785c1*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x8785ca*/
  v17 = flt_B43110[0]; /*0x8785cd*/
  v18 = *(_DWORD *)(v16 + 4); /*0x8785d2*/
  v19 = (float *)(v16 + 4); /*0x8785d5*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x8785d8*/
  value = flt_B43110[0]; /*0x8785da*/
  if ( !v20 ) /*0x8785de*/
  {
    if ( v18 ) /*0x8785e2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x8785e8*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x8785ff*/
      v17 = value; /*0x878601*/
    }
    *v19 = v17; /*0x878607*/
    if ( v17 != 0.0 ) /*0x878609*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87860f*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x878618*/
  v22 = unk_B43108[0]; /*0x87861b*/
  v23 = *(_DWORD *)(v21 + 4); /*0x878620*/
  v24 = (float *)(v21 + 4); /*0x878623*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x878626*/
  value = unk_B43108[0]; /*0x878628*/
  if ( !v20 ) /*0x87862c*/
  {
    if ( v23 ) /*0x878630*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x878636*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87864d*/
      v22 = value; /*0x87864f*/
    }
    *v24 = v22; /*0x878655*/
    if ( v22 != 0.0 ) /*0x878657*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x87865d*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x1C); /*0x878666*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x87866e*/
  v20 = v26 == g_CanopyShadowMap; /*0x878671*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x878673*/
  value = *(float *)&g_CanopyShadowMap; /*0x878675*/
  if ( !v20 ) /*0x878679*/
  {
    if ( v26 ) /*0x87867d*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x878683*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x878699*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x87869b*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x8786a1*/
    if ( v27 ) /*0x8786a4*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x8786aa*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8786b5*/
  value = *(float *)&v6; /*0x8786b8*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8786d0*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x8786d8*/
  if ( v20 ) /*0x8786df*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x8786e3*/
  ++*((_DWORD *)this + 0xE); /*0x8786e8*/
}
