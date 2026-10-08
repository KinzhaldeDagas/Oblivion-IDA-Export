int __thiscall sub_7EAC80(char *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DTextureStage *v9; // eax
  char *v10; // ebp
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *Texture; // edi
  NiTexture *v13; // ebx
  int v14; // ebx
  int v15; // edi
  int v16; // ebx
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  NiD3DTextureStage *v23; // [esp+14h] [ebp-14h]
  int v24; // [esp+18h] [ebp-10h]
  int v25; // [esp+18h] [ebp-10h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this); /*0x7eacb1*/
  v23 = 0; /*0x7eacb5*/
  v9 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x1C) + 0x24); /*0x7eacbf*/
  v10 = this + 0x70; /*0x7eacc3*/
  if ( v9 ) /*0x7eacca*/
  {
    ++v9[7].Unk08; /*0x7eaccc*/
    v23 = v9; /*0x7eacd0*/
  }
  InnerTexture = BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F)); /*0x7eacd7*/
  Texture = (NiRenderedTexture *)v23->Texture; /*0x7eace0*/
  v13 = (NiTexture *)InnerTexture; /*0x7eace3*/
  if ( Texture != InnerTexture ) /*0x7eace7*/
  {
    if ( Texture ) /*0x7eaceb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->member) ) /*0x7eacf1*/
        Texture->__vftable->super.super.super.Destructor((NiRefObject *)Texture, 1); /*0x7ead07*/
    }
    v23->Texture = v13; /*0x7ead0f*/
    if ( v13 ) /*0x7ead12*/
      InterlockedIncrement((volatile LONG *)&v13->members); /*0x7ead18*/
  }
  v14 = *((_DWORD *)this + *((_DWORD *)this + 0x24) + 0x25); /*0x7ead27*/
  v15 = *(_DWORD *)(*(_DWORD *)v10 + 0x58); /*0x7ead2e*/
  v24 = *(_DWORD *)v10; /*0x7ead33*/
  if ( v15 != v14 ) /*0x7ead37*/
  {
    if ( v15 ) /*0x7ead3b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x7ead41*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x7ead57*/
    }
    *(_DWORD *)(v24 + 0x58) = v14; /*0x7ead5f*/
    if ( v14 ) /*0x7ead62*/
      InterlockedIncrement((volatile LONG *)(v14 + 4)); /*0x7ead68*/
  }
  v16 = *((_DWORD *)this + *((_DWORD *)this + 0x24) + 0x2A); /*0x7ead77*/
  v17 = *(_DWORD *)(*(_DWORD *)v10 + 0x44); /*0x7ead7e*/
  v25 = *(_DWORD *)v10; /*0x7ead83*/
  if ( v17 != v16 ) /*0x7ead87*/
  {
    if ( v17 ) /*0x7ead8b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x7ead91*/
        (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x7eada7*/
    }
    *(_DWORD *)(v25 + 0x44) = v16; /*0x7eadaf*/
    if ( v16 ) /*0x7eadb2*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x7eadb8*/
  }
  v18 = *(_DWORD *)v10; /*0x7eadc5*/
  if ( *((_DWORD *)this + 0x2F) == 3 ) /*0x7eadc8*/
  {
    if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7eadca*/
      *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eadd5*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0x1Bu, 1u, 0); /*0x7eade1*/
    v19 = *(_DWORD *)v10; /*0x7eade6*/
    if ( !*(_DWORD *)(*(_DWORD *)v10 + 0x30) ) /*0x7eade9*/
      *(_DWORD *)(v19 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eadf4*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v19 + 0x30), 0x13u, 2u, 0); /*0x7eae00*/
    v20 = *(_DWORD *)v10; /*0x7eae05*/
    if ( !*(_DWORD *)(*(_DWORD *)v10 + 0x30) ) /*0x7eae08*/
      *(_DWORD *)(v20 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eae13*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v20 + 0x30), 0x14u, 2u, 0); /*0x7eae1c*/
  }
  else
  {
    if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7eae1e*/
      *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7eae29*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v18 + 0x30), 0x1Bu, 0, 0); /*0x7eae35*/
  }
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)this + 0x1C); /*0x7eae42*/
  ++*((_DWORD *)this + 0xE); /*0x7eae4b*/
  if ( v23 ) /*0x7eae58*/
  {
    if ( v23[7].Unk08-- == 1 ) /*0x7eae5a*/
      sub_772560(v23); /*0x7eae5f*/
  }
  return 0; /*0x7eae66*/
}
