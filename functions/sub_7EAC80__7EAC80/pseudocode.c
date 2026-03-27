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

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this);
  v23 = 0;
  v9 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x1C) + 0x24);
  v10 = this + 0x70;
  if ( v9 )
  {
    ++v9[7].Unk08;
    v23 = v9;
  }
  InnerTexture = BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F));
  Texture = (NiRenderedTexture *)v23->Texture;
  v13 = (NiTexture *)InnerTexture;
  if ( Texture != InnerTexture )
  {
    if ( Texture )
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->member) )
        Texture->__vftable->super.super.super.Destructor((NiRefObject *)Texture, 1);
    }
    v23->Texture = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)&v13->members);
  }
  v14 = *((_DWORD *)this + *((_DWORD *)this + 0x24) + 0x25);
  v15 = *(_DWORD *)(*(_DWORD *)v10 + 0x58);
  v24 = *(_DWORD *)v10;
  if ( v15 != v14 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    *(_DWORD *)(v24 + 0x58) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v16 = *((_DWORD *)this + *((_DWORD *)this + 0x24) + 0x2A);
  v17 = *(_DWORD *)(*(_DWORD *)v10 + 0x44);
  v25 = *(_DWORD *)v10;
  if ( v17 != v16 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    }
    *(_DWORD *)(v25 + 0x44) = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)(v16 + 4));
  }
  v18 = *(_DWORD *)v10;
  if ( *((_DWORD *)this + 0x2F) == 3 )
  {
    if ( !*(_DWORD *)(v18 + 0x30) )
      *(_DWORD *)(v18 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v18 + 0x30), 0x1B, 1, 0);
    v19 = *(_DWORD *)v10;
    if ( !*(_DWORD *)(*(_DWORD *)v10 + 0x30) )
      *(_DWORD *)(v19 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v19 + 0x30), 0x13, 2, 0);
    v20 = *(_DWORD *)v10;
    if ( !*(_DWORD *)(*(_DWORD *)v10 + 0x30) )
      *(_DWORD *)(v20 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v20 + 0x30), 0x14, 2, 0);
  }
  else
  {
    if ( !*(_DWORD *)(v18 + 0x30) )
      *(_DWORD *)(v18 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v18 + 0x30), 0x1B, 0, 0);
  }
  sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)this + 0x1C);
  ++*((_DWORD *)this + 0xE);
  if ( v23 )
  {
    if ( v23[7].Unk08-- == 1 )
      sub_772560(v23);
  }
  return 0;
}
