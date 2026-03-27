void __thiscall sub_846090(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
{
  NiD3DPass *v6; // esi
  volatile LONG *v7; // ebp
  NiD3DPixelShader *PixelShader; // edi
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // edi
  UInt32 v12; // ebp
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v14; // edi
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+34h] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B45B84;
  v16 = *(unsigned __int8 *)(dword_B42EB8 + 9);
  sub_848E50(*(_DWORD *)(a4 + 0xC));
  v7 = *(volatile LONG **)(8 * dword_B430B0 + 0xB45274);
  PixelShader = v6->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v7 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
    }
    v6->PixelShader = (NiD3DPixelShader *)v7;
    if ( v7 )
      InterlockedIncrement(v7 + 1);
  }
  Stage = v6->Stages.data->Stage;
  v17 = **(_DWORD **)(dword_B42EB8 + 0xC);
  v10 = ((int (__thiscall *)(NiRenderedTexture *, int))a5->__vftable[1].super.super.DumpAttributes)(a5, v16);
  v11 = *(_DWORD *)(Stage + 4);
  v18 = v10;
  if ( v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
        (**(void (__thiscall ***)(int, int))v11)(v11, 1);
      v10 = v18;
    }
    *(_DWORD *)(Stage + 4) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)(v10 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)a5);
  v12 = v6->Stages.data[2].Stage;
  InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v17 + 0x114));
  v14 = *(NiRenderedTexture **)(v12 + 4);
  a5 = InnerTexture;
  if ( v14 != InnerTexture )
  {
    if ( v14 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v14->member) )
        v14->__vftable->super.super.super.Destructor((NiRefObject *)v14, 1);
      InnerTexture = a5;
    }
    *(_DWORD *)(v12 + 4) = InnerTexture;
    if ( InnerTexture )
      InterlockedIncrement((volatile LONG *)&InnerTexture->member);
  }
  sub_7715E0((_DWORD **)v12, 0);
  ++v6->RefCount;
  a5 = (NiRenderedTexture *)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
