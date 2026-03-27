int __thiscall sub_7DE3B0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int *v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  NiD3DTextureStage *v14; // edi
  BSRenderedTexture *v15; // ecx
  NiD3DTextureStage *v16; // edi
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v18; // eax
  NiD3DTextureStage *v21; // [esp+Ch] [ebp-18h] BYREF
  int v22; // [esp+18h] [ebp-Ch]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this);
  v9 = *(int **)(*((_DWORD *)this + 0x3E) + 0x24);
  v10 = *v9;
  v11 = *(_DWORD *)(*v9 + 4);
  if ( v11 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
    *(_DWORD *)(v10 + 4) = 0;
  }
  v12 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0x3E) + 0x24) + 4);
  v13 = *(_DWORD *)(v12 + 4);
  if ( v13 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    *(_DWORD *)(v12 + 4) = 0;
  }
  switch ( *((_DWORD *)this + 0x3D) )
  {
    case 2:
      v14 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x3E) + 0x24);
      v21 = v14;
      if ( v14 )
        ++v14[7].Unk08;
      v22 = 1;
      sub_8011E0((int)v14, 1);
      v15 = *((BSRenderedTexture **)this + 0x40);
      goto LABEL_29;
    case 3:
      v14 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x3E) + 0x24);
      v21 = v14;
      if ( v14 )
        ++v14[7].Unk08;
      v22 = 2;
      goto LABEL_28;
    case 4:
      v14 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x3E) + 0x24);
      v21 = v14;
      if ( v14 )
        ++v14[7].Unk08;
      v22 = 3;
      sub_8011E0((int)v14, 1);
      v15 = *((BSRenderedTexture **)this + 0x40);
      goto LABEL_29;
    case 5:
      v14 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x3E) + 0x24);
      v21 = v14;
      if ( v14 )
        ++v14[7].Unk08;
      v22 = 4;
      sub_8011E0((int)v14, 1);
      v15 = *((BSRenderedTexture **)this + 0x3F);
      goto LABEL_29;
    case 6:
      v16 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x3E) + 0x24);
      v21 = v16;
      if ( v16 )
        ++v16[7].Unk08;
      v22 = 5;
      sub_8011E0((int)v16, 1);
      InnerTexture = BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x42));
      sub_76C910(v16, InnerTexture);
      sub_771640(v16, 1);
      sub_7AEC20(&v21, *(NiD3DTextureStage **)(*(_DWORD *)(*((_DWORD *)this + 0x3E) + 0x24) + 4));
      v14 = v21;
LABEL_28:
      sub_8011E0((int)v14, 1);
      v15 = *((BSRenderedTexture **)this + 0x41);
      goto LABEL_29;
    case 7:
      v14 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x3E) + 0x24);
      v21 = v14;
      if ( v14 )
        ++v14[7].Unk08;
      v22 = 0;
      sub_8011E0((int)v14, 3);
      v15 = (BSRenderedTexture *)dword_B45FA8;
LABEL_29:
      v18 = BSRenderedTexture::GetInnerTexture(v15);
      sub_76C910(v14, v18);
      v22 = 0xFFFFFFFF;
      if ( !v14 )
        goto LABEL_32;
      if ( v14[7].Unk08-- != 1 )
        goto LABEL_32;
      sub_772560(v14);
      return def_7DE45B(a2, a3, a4, a5, a6, a7, a8);
    default:
LABEL_32:
      JUMPOUT(0x7DE5D9);
  }
}
