// SpeedTreeBranchShader-only selector-0x17A helper: sole code xref is SpeedTreeBranchShader setup at 0x0080F7FE. It is not a Lighting30 consumer.
void __thiscall sub_85E410(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5, NiD3DPass *a6)
{
  NiD3DPass *v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // ebp
  UInt32 Stage; // ebp
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v13; // edi
  NiRenderedTexture *v14; // ebx
  int v17; // [esp+18h] [ebp-10h]

  v6 = (NiD3DPass *)LODWORD(OB_ShaderConstantStorage_010201A0[0x67A]); /*0x85e445*/
  v7 = **(_DWORD **)(LODWORD(OB_ShaderConstantStorage_010201A0[0x67A]) + 0x24); /*0x85e452*/
  v17 = **(_DWORD **)(*(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] + 0xC); /*0x85e454*/
  v8 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a5 + 0x88))(a5, 0); /*0x85e462*/
  v9 = *(_DWORD *)(v7 + 4); /*0x85e464*/
  v10 = v8; /*0x85e467*/
  if ( v9 != v8 ) /*0x85e46b*/
  {
    if ( v9 ) /*0x85e46f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x85e475*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x85e48b*/
    }
    *(_DWORD *)(v7 + 4) = v10; /*0x85e48f*/
    if ( v10 ) /*0x85e492*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x85e498*/
  }
  sub_848FA0((_DWORD **)v7, a5); /*0x85e4a8*/
  Stage = v6->Stages.data[2].Stage; /*0x85e4ba*/
  InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v17 + 0x114)); /*0x85e4bd*/
  v13 = *(NiRenderedTexture **)(Stage + 4); /*0x85e4c2*/
  v14 = InnerTexture; /*0x85e4c5*/
  if ( v13 != InnerTexture ) /*0x85e4c9*/
  {
    if ( v13 ) /*0x85e4cd*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v13->member) ) /*0x85e4d3*/
        v13->__vftable->super.super.super.Destructor((NiRefObject *)v13, 1); /*0x85e4e9*/
    }
    *(_DWORD *)(Stage + 4) = v14; /*0x85e4ed*/
    if ( v14 ) /*0x85e4f0*/
      InterlockedIncrement((volatile LONG *)&v14->member); /*0x85e4f6*/
  }
  NiD3DTextureStage_ApplyAddressModePreset((_DWORD **)Stage, 0); /*0x85e500*/
  if ( !(_BYTE)a6 ) /*0x85e50a*/
  {
    ++v6->RefCount; /*0x85e511*/
    a6 = v6; /*0x85e514*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), &a6); /*0x85e530*/
    if ( v6->RefCount-- == 1 ) /*0x85e538*/
      NiD3DPass_ReleaseToPool(v6); /*0x85e543*/
    ++*((_DWORD *)this + 0xE); /*0x85e548*/
  }
}
