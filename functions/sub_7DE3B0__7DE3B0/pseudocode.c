int __thiscall sub_7DE3B0(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  NiD3DTextureStage *v14; // edi
  BSRenderedTexture *v15; // ecx
  NiD3DTextureStage *v16; // edi
  NiTexture *InnerTexture; // eax
  NiTexture *v18; // eax
  NiD3DTextureStage *v21; // [esp+Ch] [ebp-18h] BYREF
  int v22; // [esp+18h] [ebp-Ch]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x80))(this); /*0x7de3df*/
  v9 = *(int **)(*(_DWORD *)(this + 0xF8) + 0x24); /*0x7de3e7*/
  v10 = *v9; /*0x7de3ea*/
  v11 = *(_DWORD *)(*v9 + 4); /*0x7de3ec*/
  if ( v11 ) /*0x7de3f3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7de3f9*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7de40f*/
    *(_DWORD *)(v10 + 4) = 0; /*0x7de411*/
  }
  v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 0xF8) + 0x24) + 4); /*0x7de41d*/
  v13 = *(_DWORD *)(v12 + 4); /*0x7de420*/
  if ( v13 ) /*0x7de425*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x7de42b*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7de441*/
    *(_DWORD *)(v12 + 4) = 0; /*0x7de443*/
  }
  switch ( *(_DWORD *)(this + 0xF4) ) /*0x7de45b*/
  {
    case 2: /*0x7de45b*/
      v14 = **(NiD3DTextureStage ***)(*(_DWORD *)(this + 0xF8) + 0x24); /*0x7de499*/
      v21 = v14; /*0x7de49d*/
      if ( v14 ) /*0x7de4a1*/
        ++v14[7].Unk08; /*0x7de4a3*/
      v22 = 1; /*0x7de4aa*/
      sub_8011E0((int)v14, 1); /*0x7de4b2*/
      v15 = *(BSRenderedTexture **)(this + 0x100); /*0x7de4b7*/
      goto LABEL_29; /*0x7de4bd*/
    case 3: /*0x7de45b*/
      v14 = **(NiD3DTextureStage ***)(*(_DWORD *)(this + 0xF8) + 0x24); /*0x7de4cb*/
      v21 = v14; /*0x7de4cf*/
      if ( v14 ) /*0x7de4d3*/
        ++v14[7].Unk08; /*0x7de4d5*/
      v22 = 2; /*0x7de4d9*/
      goto LABEL_28; /*0x7de4e1*/
    case 4: /*0x7de45b*/
      v14 = **(NiD3DTextureStage ***)(*(_DWORD *)(this + 0xF8) + 0x24); /*0x7de4ef*/
      v21 = v14; /*0x7de4f3*/
      if ( v14 ) /*0x7de4f7*/
        ++v14[7].Unk08; /*0x7de4f9*/
      v22 = 3; /*0x7de500*/
      sub_8011E0((int)v14, 1); /*0x7de508*/
      v15 = *(BSRenderedTexture **)(this + 0x100); /*0x7de50d*/
      goto LABEL_29; /*0x7de513*/
    case 5: /*0x7de45b*/
      v14 = **(NiD3DTextureStage ***)(*(_DWORD *)(this + 0xF8) + 0x24); /*0x7de521*/
      v21 = v14; /*0x7de525*/
      if ( v14 ) /*0x7de529*/
        ++v14[7].Unk08; /*0x7de52b*/
      v22 = 4; /*0x7de532*/
      sub_8011E0((int)v14, 1); /*0x7de53a*/
      v15 = *(BSRenderedTexture **)(this + 0xFC); /*0x7de53f*/
      goto LABEL_29; /*0x7de545*/
    case 6: /*0x7de45b*/
      v16 = **(NiD3DTextureStage ***)(*(_DWORD *)(this + 0xF8) + 0x24); /*0x7de550*/
      v21 = v16; /*0x7de554*/
      if ( v16 ) /*0x7de558*/
        ++v16[7].Unk08; /*0x7de55a*/
      v22 = 5; /*0x7de561*/
      sub_8011E0((int)v16, 1); /*0x7de569*/
      InnerTexture = (NiTexture *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(this + 0x108)); /*0x7de577*/
      NiD3DTextureStage_SetTexture(v16, InnerTexture); /*0x7de57f*/
      NiD3DTextureStage_ApplyFilterPreset(v16, 1u); /*0x7de588*/
      sub_7AEC20(&v21, *(NiD3DTextureStage **)(*(_DWORD *)(*(_DWORD *)(this + 0xF8) + 0x24) + 4)); /*0x7de59e*/
      v14 = v21; /*0x7de5a3*/
LABEL_28:
      sub_8011E0((int)v14, 1); /*0x7de5a7*/
      v15 = *(BSRenderedTexture **)(this + 0x104); /*0x7de5af*/
      goto LABEL_29; /*0x7de5af*/
    case 7: /*0x7de45b*/
      v14 = **(NiD3DTextureStage ***)(*(_DWORD *)(this + 0xF8) + 0x24); /*0x7de46b*/
      v21 = v14; /*0x7de46f*/
      if ( v14 ) /*0x7de473*/
        ++v14[7].Unk08; /*0x7de475*/
      v22 = 0; /*0x7de47c*/
      sub_8011E0((int)v14, 3); /*0x7de480*/
      v15 = (BSRenderedTexture *)LODWORD(OB_ShaderConstantStorage_010201A0[0x65]); /*0x7de485*/
LABEL_29:
      v18 = (NiTexture *)BSRenderedTexture::GetInnerTexture(v15); /*0x7de5b5*/
      NiD3DTextureStage_SetTexture(v14, v18); /*0x7de5c0*/
      v22 = 0xFFFFFFFF; /*0x7de5c7*/
      if ( !v14 ) /*0x7de5cb*/
        goto LABEL_32; /*0x7de5cb*/
      if ( v14[7].Unk08-- != 1 ) /*0x7de5cd*/
        goto LABEL_32; /*0x7de5d0*/
      sub_772560(v14); /*0x7de5d4*/
      return def_7DE45B(0xFFFFFFFF, 0, this, a2, a3, a4, a5, a6, a7, a8);
    default:
LABEL_32:
      JUMPOUT(0x7DE5D9); /*0x7de5d9*/
  }
}
