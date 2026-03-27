void __thiscall sub_851E70(NiTArray_NiD3DPass *this, NiGeometry *a2, int a3, int a4, NiD3DPass *a5)
{
  NiD3DPass *v5; // ebx
  UInt32 StageCount; // edi
  NiD3DPass *v7; // esi
  _DWORD *Stage; // ebp
  NiRenderedTexture *v9; // eax
  int v10; // eax
  NiTexture *Texture; // ebp
  int v12; // eax
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // edi

  v5 = a5;
  StageCount = a5[2].StageCount;
  v7 = (NiD3DPass *)dword_B45BD4;
  if ( StageCount )
  {
    Stage = (_DWORD *)v7->Stages.data->Stage;
    if ( ((int (__thiscall *)(NiD3DPass *, _DWORD))a5->__vftable[8].sub_75F9E0)(a5, 0) )
    {
      v9 = (NiRenderedTexture *)((int (__thiscall *)(NiD3DPass *, _DWORD))v5->__vftable[8].sub_75F9E0)(v5, 0);
    }
    else
    {
      v9 = (NiRenderedTexture *)dword_B430F0;
      if ( (v5->TexturesPerPass & 0x80) == 0 )
        v9 = (NiRenderedTexture *)dword_B430DC;
    }
    sub_76C910(Stage, v9);
    if ( Stage )
    {
      if ( byte_B42CDD )
      {
        v10 = ((int (__thiscall *)(NiD3DPass *))v5->__vftable[7].sub_75FD90)(v5);
        sub_7715E0((_DWORD **)Stage, v10);
      }
    }
    Texture = v7->Stages.data->Texture;
    if ( *(_DWORD *)(StageCount + 8) )
      sub_76C910(Texture, *(NiRenderedTexture **)(StageCount + 8));
    else
      sub_76C910(Texture, (NiRenderedTexture *)dword_B43120);
    if ( Texture )
    {
      if ( byte_B42CDD )
      {
        v12 = ((int (__thiscall *)(NiD3DPass *))v5->__vftable[7].sub_75FD90)(v5);
        sub_7715E0(Texture, v12);
      }
    }
    v13 = *(_DWORD *)(StageCount + 0x5C);
    if ( !v7->RenderStateGroup )
      v7->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v7->RenderStateGroup, 0x13, v13, 0);
    v14 = *(_DWORD *)(StageCount + 0x60);
    if ( !v7->RenderStateGroup )
      v7->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v7->RenderStateGroup, 0x14, v14, 0);
    v15 = *(_DWORD *)(StageCount + 0x64);
    if ( !v7->RenderStateGroup )
      v7->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v7->RenderStateGroup, 0xAB, v15, 1u);
    v16 = *(_DWORD *)(StageCount + 0x68);
    if ( !v7->RenderStateGroup )
      v7->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v7->RenderStateGroup, 0x17, v16, 0);
    sub_7D1C90(a2, (int)v5);
    ++v7->RefCount;
    a5 = v7;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
    if ( v7->RefCount-- == 1 )
      sub_7604D0(v7);
    ++*((_DWORD *)this + 0xE);
  }
}
