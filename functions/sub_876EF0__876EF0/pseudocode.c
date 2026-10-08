void __thiscall sub_876EF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float value)
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

  v6 = unk_B47690; /*0x876f1d*/
  sub_848C40(*(float **)(a4 + 0x10)); /*0x876f24*/
  v7 = *(float **)(a4 + 0xC); /*0x876f29*/
  sub_848E50(v7); /*0x876f2f*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, float *, _DWORD))this->_vtbl + 0x2F))(this, a2, v7, 0); /*0x876f46*/
  v8 = **(_DWORD **)(v6 + 0x24); /*0x876f4f*/
  v28 = v8; /*0x876f5b*/
  v9 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(value) + 0x88))(LODWORD(value), 0); /*0x876f5f*/
  v10 = *(_DWORD *)(v8 + 4); /*0x876f61*/
  v11 = v9; /*0x876f64*/
  if ( v10 != v9 ) /*0x876f68*/
  {
    if ( v10 ) /*0x876f6c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x876f72*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x876f88*/
    }
    *(_DWORD *)(v28 + 4) = v11; /*0x876f90*/
    if ( v11 ) /*0x876f93*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x876f99*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 4); /*0x876fa6*/
  v29 = v12; /*0x876fae*/
  v13 = sub_848FD0((_DWORD *)LODWORD(value), 0); /*0x876fb2*/
  v14 = *(_DWORD *)(v12 + 4); /*0x876fb7*/
  v15 = v13; /*0x876fba*/
  if ( v14 != v13 ) /*0x876fbe*/
  {
    if ( v14 ) /*0x876fc2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x876fc8*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x876fde*/
    }
    *(_DWORD *)(v29 + 4) = v15; /*0x876fe6*/
    if ( v15 ) /*0x876fe9*/
      InterlockedIncrement((volatile LONG *)(v15 + 4)); /*0x876fef*/
  }
  v16 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x14); /*0x876ff8*/
  v17 = flt_B43110[0]; /*0x876ffb*/
  v18 = *(_DWORD *)(v16 + 4); /*0x877000*/
  v19 = (float *)(v16 + 4); /*0x877003*/
  v20 = v18 == LODWORD(flt_B43110[0]); /*0x877006*/
  value = flt_B43110[0]; /*0x877008*/
  if ( !v20 ) /*0x87700c*/
  {
    if ( v18 ) /*0x877010*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x877016*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x87702d*/
      v17 = value; /*0x87702f*/
    }
    *v19 = v17; /*0x877035*/
    if ( v17 != 0.0 ) /*0x877037*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v17) + 4)); /*0x87703d*/
  }
  v21 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x18); /*0x877046*/
  v22 = unk_B43108[0]; /*0x877049*/
  v23 = *(_DWORD *)(v21 + 4); /*0x87704e*/
  v24 = (float *)(v21 + 4); /*0x877051*/
  v20 = v23 == LODWORD(unk_B43108[0]); /*0x877054*/
  value = unk_B43108[0]; /*0x877056*/
  if ( !v20 ) /*0x87705a*/
  {
    if ( v23 ) /*0x87705e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) ) /*0x877064*/
        (**(void (__thiscall ***)(int, int))v23)(v23, 1); /*0x87707b*/
      v22 = value; /*0x87707d*/
    }
    *v24 = v22; /*0x877083*/
    if ( v22 != 0.0 ) /*0x877085*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v22) + 4)); /*0x87708b*/
  }
  v25 = *(_DWORD *)(*(_DWORD *)(v6 + 0x24) + 0x1C); /*0x877094*/
  v26 = *(volatile LONG **)(v25 + 4); /*0x87709c*/
  v20 = v26 == g_CanopyShadowMap; /*0x87709f*/
  v27 = (NiRenderedTexture *)g_CanopyShadowMap; /*0x8770a1*/
  value = *(float *)&g_CanopyShadowMap; /*0x8770a3*/
  if ( !v20 ) /*0x8770a7*/
  {
    if ( v26 ) /*0x8770ab*/
    {
      if ( !InterlockedDecrement(v26 + 1) ) /*0x8770b1*/
        (**(void (__thiscall ***)(void *, int))v26)((void *)v26, 1); /*0x8770c7*/
      v27 = (NiRenderedTexture *)LODWORD(value); /*0x8770c9*/
    }
    *(_DWORD *)(v25 + 4) = v27; /*0x8770cf*/
    if ( v27 ) /*0x8770d2*/
      InterlockedIncrement((volatile LONG *)&v27->member); /*0x8770d8*/
  }
  ++*(_DWORD *)(v6 + 0x60); /*0x8770e3*/
  value = *(float *)&v6; /*0x8770e6*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)&value); /*0x8770fe*/
  v20 = (*(_DWORD *)(v6 + 0x60))-- == 1; /*0x877106*/
  if ( v20 ) /*0x87710d*/
    NiD3DPass_ReleaseToPool((NiD3DPass *)v6); /*0x877111*/
  ++*((_DWORD *)this + 0xE); /*0x877116*/
}
