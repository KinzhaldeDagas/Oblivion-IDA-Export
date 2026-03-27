void __thiscall sub_845CF0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiRenderedTexture *a5)
{
  NiD3DPass *v6; // esi
  int v7; // eax
  volatile LONG *v8; // ebx
  NiD3DPixelShader *PixelShader; // edi
  UInt32 Stage; // edi
  int v11; // eax
  int v12; // ebx
  UInt32 v13; // ebx
  NiRenderedTexture *InnerTexture; // eax
  NiRenderedTexture *v15; // edi
  int v17; // [esp+14h] [ebp-10h]
  int v18; // [esp+30h] [ebp+Ch]

  v6 = (NiD3DPass *)dword_B45B7C;
  v17 = **(_DWORD **)(dword_B42EB8 + 0xC);
  sub_848E50(*(_DWORD *)(a4 + 0xC));
  v7 = *(_DWORD *)(a4 + 8);
  if ( (*(_BYTE *)(v7 + 0x18) & 1) != 0 || (*(_WORD *)(v7 + 0x18) & 0x200) != 0 )
  {
    v8 = *(volatile LONG **)(8 * dword_B430B0 + 0xB45278);
    PixelShader = v6->PixelShader;
    if ( PixelShader != (NiD3DPixelShader *)v8 )
    {
      if ( PixelShader )
      {
        if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
      }
      v6->PixelShader = (NiD3DPixelShader *)v8;
      if ( v8 )
        InterlockedIncrement(v8 + 1);
    }
  }
  else
  {
    sub_7AEC60(&v6->__vftable, *(NiD3DPixelShader **)(8 * dword_B430B0 + 0xB45274));
  }
  Stage = v6->Stages.data->Stage;
  v11 = ((int (__thiscall *)(NiRenderedTexture *, _DWORD))a5->__vftable[1].super.super.DumpAttributes)(a5, 0);
  v12 = *(_DWORD *)(Stage + 4);
  v18 = v11;
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
      v11 = v18;
    }
    *(_DWORD *)(Stage + 4) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  sub_848FA0((_DWORD **)Stage, (int)a5);
  v13 = v6->Stages.data[2].Stage;
  InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(v17 + 0x114));
  v15 = *(NiRenderedTexture **)(v13 + 4);
  a5 = InnerTexture;
  if ( v15 != InnerTexture )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v15->member) )
        v15->__vftable->super.super.super.Destructor((NiRefObject *)v15, 1);
      InnerTexture = a5;
    }
    *(_DWORD *)(v13 + 4) = InnerTexture;
    if ( InnerTexture )
      InterlockedIncrement((volatile LONG *)&InnerTexture->member);
  }
  sub_7715E0((_DWORD **)v13, 0);
  ++v6->RefCount;
  a5 = (NiRenderedTexture *)v6;
  sub_76CE40(this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)&a5);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*((_DWORD *)this + 0xE);
}
