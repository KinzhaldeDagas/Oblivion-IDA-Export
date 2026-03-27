void __thiscall sub_848AD0(NiTArray_NiD3DPass *this, NiGeometry *a2, int a3, int a4, NiD3DPass *a5)
{
  UInt32 StageCount; // ebx
  NiD3DPass *v7; // esi
  _DWORD *Stage; // ebp
  NiRenderedTexture *v9; // eax
  NiTexture *Texture; // ebp
  int v11; // ebp
  int v12; // ebp
  int v13; // ebp
  int v14; // ebx

  StageCount = a5[2].StageCount;
  v7 = (NiD3DPass *)dword_B45BDC;
  if ( StageCount )
  {
    Stage = (_DWORD *)v7->Stages.data->Stage;
    v9 = (NiRenderedTexture *)sub_848FD0(a5, 0);
    sub_76C910(Stage, v9);
    sub_848FA0((_DWORD **)Stage, (int)a5);
    Texture = v7->Stages.data->Texture;
    if ( *(_DWORD *)(StageCount + 8) )
      sub_76C910(Texture, *(NiRenderedTexture **)(StageCount + 8));
    else
      sub_76C910(Texture, (NiRenderedTexture *)dword_B43120);
    sub_848FA0(Texture, (int)a5);
    v11 = *(_DWORD *)(StageCount + 0x5C);
    if ( !v7->RenderStateGroup )
      v7->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v7->RenderStateGroup, 0x13, v11, 0);
    v12 = *(_DWORD *)(StageCount + 0x60);
    if ( !v7->RenderStateGroup )
      v7->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v7->RenderStateGroup, 0x14, v12, 0);
    v13 = *(_DWORD *)(StageCount + 0x64);
    if ( !v7->RenderStateGroup )
      v7->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v7->RenderStateGroup, 0xAB, v13, 1u);
    v14 = *(_DWORD *)(StageCount + 0x68);
    if ( !v7->RenderStateGroup )
      v7->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
    sub_772CD0((_DWORD *)v7->RenderStateGroup, 0x17, v14, 0);
    sub_7D1C90(a2, (int)a5);
    ++v7->RefCount;
    a5 = v7;
    sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), &a5);
    if ( v7->RefCount-- == 1 )
      sub_7604D0(v7);
    ++*((_DWORD *)this + 0xE);
  }
}
