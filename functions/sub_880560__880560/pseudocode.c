void __thiscall sub_880560(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B47730; /*0x88058d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x880594*/
  v7 = *(float **)(a4 + 0xC); /*0x880599*/
  sub_848E50(v7); /*0x88059f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x8805b6*/
  v8 = **(_DWORD **)(v6 + 0x24); /*0x8805bf*/
  v28 = v8; /*0x8805cb*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x8805cf*/
  v10 = *(_DWORD *)(v8 + 4); /*0x8805d1*/
  v11 = v9; /*0x8805d4*/
  if ( v10 != v9 ) /*0x8805d8*/
  {
    if ( v10 ) /*0x8805dc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8805e2*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8805f8*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x880600*/
    if ( v11 ) /*0x880603*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x880609*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x880616*/
  v29 = v12; /*0x88061e*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x880622*/
  v14 = *(_DWORD *)(v12 + 4); /*0x880627*/
  v15 = v13; /*0x88062a*/
  if ( v14 != v13 ) /*0x88062e*/
  {
    if ( v14 ) /*0x880632*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x880638*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x88064e*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x880656*/
    if ( v15 ) /*0x880659*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x88065f*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x880668*/
  v17 = flt_B43110[0]; /*0x88066b*/
  v18 = *(_DWORD *)(v16 + 4); /*0x880670*/
  v19 = (float *)(v16 + 4); /*0x880673*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x880676*/
  value = flt_B43110[0]; /*0x880678*/
  if ( !v20 ) /*0x88067c*/
  {
    if ( v18 ) /*0x880680*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x880686*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x88069d*/
      v17 = value; /*0x88069f*/
    }
    *v19 = v17; /*0x8806a5*/
    if ( v17 != 0.0 ) /*0x8806a7*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x8806ad*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x8806b6*/
  v22 = unk_B43108[0]; /*0x8806b9*/
  v23 = *(_DWORD *)(v21 + 4); /*0x8806be*/
  v24 = (float *)(v21 + 4); /*0x8806c1*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x8806c4*/
  value = unk_B43108[0]; /*0x8806c6*/
  if ( !v20 ) /*0x8806ca*/
  {
    if ( v23 ) /*0x8806ce*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x8806d4*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x8806eb*/
      v22 = value; /*0x8806ed*/
    }
    *v24 = v22; /*0x8806f3*/
    if ( v22 != 0.0 ) /*0x8806f5*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x8806fb*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x880704*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x88070c*/
  v20 = v26 == g_CanopyShadowMap; /*0x88070f*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x880711*/
  value = *(float *)&g_CanopyShadowMap; /*0x880713*/
  if ( !v20 ) /*0x880717*/
  {
    if ( v26 ) /*0x88071b*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x880721*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x880737*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x880739*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x88073f*/
    if ( v27 ) /*0x880742*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x880748*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x880753*/
  value = *(float *)&v6; /*0x880756*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x88076e*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x880776*/
  if ( v20 ) /*0x88077d*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x880781*/
  ++*((_DWORD *)this + 0xE); /*0x880786*/
}
