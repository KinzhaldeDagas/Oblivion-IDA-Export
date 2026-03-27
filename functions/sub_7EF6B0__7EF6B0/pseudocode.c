int __thiscall sub_7EF6B0(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DPass *v9; // edi
  NiD3DTextureStage *v10; // ebx
  bool v11; // zf
  int v12; // esi
  NiD3DTextureStage *Stage; // eax
  int v14; // eax
  NiD3DPass *v16; // [esp+14h] [ebp-14h] BYREF
  NiD3DTextureStage *v17; // [esp+18h] [ebp-10h]
  unsigned int v18; // [esp+24h] [ebp-4h]
  bool v19; // [esp+38h] [ebp+10h]

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 0x80))(this);
  v9 = 0;
  v10 = 0;
  v16 = 0;
  v18 = 0;
  v17 = 0;
  v11 = dword_B42E90 == 0x19B;
  LOBYTE(v18) = 1;
  if ( v11 )
  {
    if ( dword_B46704 )
    {
      v16 = (NiD3DPass *)dword_B46704;
      v9 = v16;
      ++v16->RefCount;
      v12 = *(_DWORD *)(a5 + 0x18);
      Stage = (NiD3DTextureStage *)v9->Stages.data->Stage;
      v19 = *(_DWORD *)(v12 + 0xA8) == 1;
      if ( Stage )
      {
        ++Stage[7].Unk08;
        v10 = Stage;
        v17 = Stage;
      }
      sub_76C910(v10, *(NiRenderedTexture **)(v12 + 0x9C));
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x68))(v12);
      sub_8011E0((int)v10, v14);
      if ( v19 )
      {
        if ( *(_DWORD *)(v12 + 0xA4) == 1 )
          sub_7AECB0(v9, (NiD3DVertexShader *)dword_B466E8);
        else
          sub_7AECB0(v9, (NiD3DVertexShader *)dword_B466EC);
        sub_7AEC60(&v9->__vftable, (NiD3DPixelShader *)dword_B4670C);
      }
      else
      {
        if ( *(_DWORD *)(v12 + 0xA4) == 1 )
          sub_7AECB0(v9, (NiD3DVertexShader *)dword_B466E0[0]);
        else
          sub_7AECB0(v9, (NiD3DVertexShader *)dword_B466E4);
        sub_7AEC60(&v9->__vftable, (NiD3DPixelShader *)dword_B46708[0]);
      }
      *((float *)this + 0x28) = flt_B2DAEC;
      sub_7EF980(v12, (_DWORD *)this + 0x1F, (_DWORD *)this + 0x22, (_DWORD *)this + 0x25, (float *)this + 0x2A);
      sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), &v16);
      ++*((_DWORD *)this + 0xE);
    }
  }
  LOBYTE(v18) = 0;
  if ( v10 )
  {
    v11 = v10[7].Unk08-- == 1;
    if ( v11 )
      sub_772560(v10);
  }
  v18 = 0xFFFFFFFF;
  if ( v9 )
  {
    v11 = v9->RefCount-- == 1;
    if ( v11 )
      sub_7604D0(v9);
  }
  return 0;
}
