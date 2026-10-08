void __thiscall sub_8753F0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B47658; /*0x87541d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x875424*/
  v7 = *(float **)(a4 + 0xC); /*0x875429*/
  sub_848E50(v7); /*0x87542f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x875446*/
  v8 = **(_DWORD **)(v6 + 0x24); /*0x87544f*/
  v28 = v8; /*0x87545b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x87545f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x875461*/
  v11 = v9; /*0x875464*/
  if ( v10 != v9 ) /*0x875468*/
  {
    if ( v10 ) /*0x87546c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x875472*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x875488*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x875490*/
    if ( v11 ) /*0x875493*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x875499*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x8754a6*/
  v29 = v12; /*0x8754ae*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x8754b2*/
  v14 = *(_DWORD *)(v12 + 4); /*0x8754b7*/
  v15 = v13; /*0x8754ba*/
  if ( v14 != v13 ) /*0x8754be*/
  {
    if ( v14 ) /*0x8754c2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x8754c8*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x8754de*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x8754e6*/
    if ( v15 ) /*0x8754e9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x8754ef*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x10); /*0x8754f8*/
  v17 = flt_B43110[0]; /*0x8754fb*/
  v18 = *(_DWORD *)(v16 + 4); /*0x875500*/
  v19 = (float *)(v16 + 4); /*0x875503*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x875506*/
  value = flt_B43110[0]; /*0x875508*/
  if ( !v20 ) /*0x87550c*/
  {
    if ( v18 ) /*0x875510*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x875516*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87552d*/
      v17 = value; /*0x87552f*/
    }
    *v19 = v17; /*0x875535*/
    if ( v17 != 0.0 ) /*0x875537*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87553d*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x875546*/
  v22 = unk_B43108[0]; /*0x875549*/
  v23 = *(_DWORD *)(v21 + 4); /*0x87554e*/
  v24 = (float *)(v21 + 4); /*0x875551*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x875554*/
  value = unk_B43108[0]; /*0x875556*/
  if ( !v20 ) /*0x87555a*/
  {
    if ( v23 ) /*0x87555e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x875564*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87557b*/
      v22 = value; /*0x87557d*/
    }
    *v24 = v22; /*0x875583*/
    if ( v22 != 0.0 ) /*0x875585*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x87558b*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x875594*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x87559c*/
  v20 = v26 == g_CanopyShadowMap; /*0x87559f*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8755a1*/
  value = *(float *)&g_CanopyShadowMap; /*0x8755a3*/
  if ( !v20 ) /*0x8755a7*/
  {
    if ( v26 ) /*0x8755ab*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x8755b1*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x8755c7*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x8755c9*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x8755cf*/
    if ( v27 ) /*0x8755d2*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x8755d8*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8755e3*/
  value = *(float *)&v6; /*0x8755e6*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8755fe*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x875606*/
  if ( v20 ) /*0x87560d*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x875611*/
  ++*((_DWORD *)this + 0xE); /*0x875616*/
}
