int __thiscall sub_7B0D20(char *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DTextureStage *v9; // ebp
  int v10; // eax
  int v11; // eax
  NiD3DTextureStage *v12; // eax
  NiRenderedTexture *InnerTexture; // eax
  NiD3DTextureStage *v14; // edi
  bool v15; // zf
  int v16; // eax
  int v17; // ecx
  NiTexture **v18; // eax
  NiTexture *v19; // ebx
  NiTexture *Texture; // edi
  NiD3DTextureStage *v21; // eax
  NiRenderedTexture *v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  char *v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // eax
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v36; // [esp+14h] [ebp-1Ch]
  _DWORD *p_Stage; // [esp+18h] [ebp-18h] BYREF
  int v38; // [esp+1Ch] [ebp-14h] BYREF
  int i; // [esp+20h] [ebp-10h]
  unsigned int v40; // [esp+2Ch] [ebp-4h]

  v36 = 0;
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this);
  v9 = 0;
  p_Stage = 0;
  v10 = *((_DWORD *)this + 0x24);
  v40 = 0;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v12 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x1C) + 0x24);
        if ( v12 )
        {
          ++v12[7].Unk08;
          v9 = v12;
          p_Stage = &v12->Stage;
        }
        InnerTexture = BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F));
        sub_76C910(v9, InnerTexture);
        sub_771640(v9, 1);
        if ( *((_DWORD *)this + 0x38) )
        {
          sub_7AEC20(
            (NiD3DTextureStage **)&p_Stage,
            *(NiD3DTextureStage **)(*(_DWORD *)(*((_DWORD *)this + 0x1C) + 0x24) + 4));
          v9 = (NiD3DTextureStage *)p_Stage;
          sub_76C910(p_Stage, *((NiRenderedTexture **)this + 0x38));
          sub_771640(v9, 0);
        }
      }
    }
    else
    {
      for ( i = 0; i < 0x10; i += 4 )
      {
        v14 = *(NiD3DTextureStage **)(i + *(_DWORD *)(*((_DWORD *)this + 0x1C) + 0x24));
        if ( v9 != v14 )
        {
          if ( v9 )
          {
            v15 = v9[7].Unk08-- == 1;
            if ( v15 )
              sub_772560(v9);
          }
          v9 = v14;
          p_Stage = &v14->Stage;
          if ( v14 )
            ++v14[7].Unk08;
        }
        v16 = *((_DWORD *)this + 0x1F);
        if ( v16 )
        {
          v17 = v38;
          v18 = (NiTexture **)(v16 + 0x20);
        }
        else
        {
          v17 = 0;
          v36 |= 1u;
          v38 = 0;
          v18 = (NiTexture **)&v38;
        }
        v19 = *v18;
        if ( (v36 & 1) != 0 )
        {
          v36 &= ~1u;
          if ( v17 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
              (**(void (__thiscall ***)(int, int))v38)(v38, 1);
          }
        }
        Texture = v9->Texture;
        if ( Texture != v19 )
        {
          if ( Texture )
          {
            if ( !InterlockedDecrement((volatile LONG *)&Texture->members) )
              Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1);
          }
          v9->Texture = v19;
          if ( v19 )
            InterlockedIncrement((volatile LONG *)&v19->members);
        }
        sub_771640(v9, 0);
      }
    }
  }
  else
  {
    v21 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x1C) + 0x24);
    if ( v21 )
    {
      ++v21[7].Unk08;
      v9 = v21;
      p_Stage = &v21->Stage;
    }
    v22 = BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F));
    sub_76C910(v9, v22);
    sub_771640(v9, 1);
  }
  v23 = *((_DWORD *)this + 0x1C);
  v24 = *((_DWORD *)this + *((_DWORD *)this + 0x24) + 0x25);
  v25 = *(_DWORD *)(v23 + 0x58);
  v26 = this + 0x70;
  i = v24;
  v38 = v23;
  if ( v25 != v24 )
  {
    if ( v25 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) )
        (**(void (__thiscall ***)(int, int))v25)(v25, 1);
      v24 = i;
    }
    *(_DWORD *)(v38 + 0x58) = v24;
    if ( v24 )
      InterlockedIncrement((volatile LONG *)(v24 + 4));
  }
  v27 = *(_DWORD *)v26;
  v28 = *((_DWORD *)this + *((_DWORD *)this + 0x24) + 0x28);
  v29 = *(_DWORD *)(*(_DWORD *)v26 + 0x44);
  i = v28;
  v38 = v27;
  if ( v29 != v28 )
  {
    if ( v29 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) )
        (**(void (__thiscall ***)(int, int))v29)(v29, 1);
      v28 = i;
    }
    *(_DWORD *)(v38 + 0x44) = v28;
    if ( v28 )
      InterlockedIncrement((volatile LONG *)(v28 + 4));
  }
  v30 = *((_DWORD *)this + 0x2B);
  if ( v30 == 5 || v30 == 2 || v30 == 4 )
  {
    v32 = *(_DWORD *)v26;
    if ( !*(_DWORD *)(*(_DWORD *)v26 + 0x30) )
      *(_DWORD *)(v32 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v32 + 0x30), 0x1B, 1, 0);
    v33 = *(_DWORD *)v26;
    if ( !*(_DWORD *)(*(_DWORD *)v26 + 0x30) )
      *(_DWORD *)(v33 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v33 + 0x30), 0x13, 2, 0);
    v34 = *(_DWORD *)v26;
    if ( !*(_DWORD *)(*(_DWORD *)v26 + 0x30) )
      *(_DWORD *)(v34 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v34 + 0x30), 0x14, 2, 0);
  }
  else
  {
    v31 = *(_DWORD *)v26;
    if ( !*(_DWORD *)(*(_DWORD *)v26 + 0x30) )
      *(_DWORD *)(v31 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v31 + 0x30), 0x1B, 0, 0);
  }
  sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)this + 0x1C);
  ++*((_DWORD *)this + 0xE);
  v40 = 0xFFFFFFFF;
  if ( v9 )
  {
    v15 = v9[7].Unk08-- == 1;
    if ( v15 )
      sub_772560(v9);
  }
  return 0;
}
