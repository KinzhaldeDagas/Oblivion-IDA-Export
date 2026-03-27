int __thiscall sub_8048E0(int this, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  int v13; // eax
  NiRenderedTexture *v14; // eax
  int v15; // ecx
  int v16; // eax
  double v17; // st7
  int v18; // eax
  double v19; // st7
  float *v20; // eax
  double v21; // st6
  int v22; // eax
  NiRenderedTexture *v23; // eax
  int v24; // ecx
  int v25; // eax
  double v26; // st7
  int v27; // ecx
  float *v28; // eax
  double v29; // st7
  double v30; // st6
  NiRenderedTexture *InnerTexture; // [esp-4h] [ebp-34h]
  _DWORD *v32; // [esp+14h] [ebp-1Ch] BYREF
  int v33; // [esp+18h] [ebp-18h]
  int v34; // [esp+1Ch] [ebp-14h]
  int v35; // [esp+20h] [ebp-10h]
  int v36; // [esp+2Ch] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x80))(this);
  v34 = 0;
  v36 = 0;
  v32 = 0;
  v9 = *(_DWORD *)(this + 0x70);
  LOBYTE(v36) = 1;
  if ( !v9 )
    JUMPOUT(0x804BD9);
  v10 = v9;
  ++*(_DWORD *)(v9 + 0x60);
  v11 = *(_DWORD *)(this + 0xA4);
  v34 = v10;
  switch ( v11 )
  {
    case 0:
      sub_7AEC20((NiD3DTextureStage **)&v32, **(NiD3DTextureStage ***)(v10 + 0x24));
      InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(this + 0x7C));
      sub_76C910(v32, InnerTexture);
      goto LABEL_4;
    case 1:
      sub_7AEC20((NiD3DTextureStage **)&v32, **(NiD3DTextureStage ***)(v10 + 0x24));
      sub_76C910(v32, (NiRenderedTexture *)dword_B474F0);
LABEL_4:
      sub_76C730((_DWORD *)v10, 0x1B, 0, 0);
      break;
    case 2:
      sub_7AEC20((NiD3DTextureStage **)&v32, **(NiD3DTextureStage ***)(v10 + 0x24));
      sub_76C910(v32, (NiRenderedTexture *)dword_B474EC);
      sub_76C730((_DWORD *)v10, 0x1B, 1, 0);
      sub_76C730((_DWORD *)v10, 0x13, 9, 0);
      sub_76C730((_DWORD *)v10, 0x14, 1, 0);
      break;
    case 3:
      sub_76C730((_DWORD *)v10, 0x1B, 0, 0);
      v13 = (unsigned __int16)word_B474C8 - 1;
      if ( v13 > 6 )
      {
        v33 = 6;
      }
      else if ( v13 >= 0 )
      {
        v33 = (unsigned __int16)word_B474C8 - 1;
      }
      else
      {
        v33 = 0;
      }
      sub_7AEC20((NiD3DTextureStage **)&v32, **(NiD3DTextureStage ***)(v10 + 0x24));
      v14 = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(this + 0x7C));
      sub_76C910(v32, v14);
      v15 = *(_DWORD *)(*(_DWORD *)(this + 0x7C) + 0x20);
      if ( v15 )
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x4C))(v15);
      else
        v16 = 0;
      v35 = v16;
      v17 = (double)v16;
      if ( v16 < 0 )
        v17 = v17 + flt_A2FC78;
      v18 = v33;
      qmemcpy(&unk_B474F8, (char *)&unk_A93780 + 0xF0 * v33, 0xF0u);
      flt_B2E03C = 1.0 / v17;
      flt_B2E040 = 0.0;
      v19 = *(float *)(4 * v18 + 0xA93760);
      v20 = (float *)&unk_B47510;
      do
      {
        v21 = v20[0xFFFFFFFC];
        v20 += 0x14;
        v20[0xFFFFFFE8] = v21 / v19;
        v20[0xFFFFFFEC] = v20[0xFFFFFFEC] / v19;
        v20[0xFFFFFFF0] = v20[0xFFFFFFF0] / v19;
        v20[0xFFFFFFF4] = v20[0xFFFFFFF4] / v19;
        v20[0xFFFFFFF8] = v20[0xFFFFFFF8] / v19;
      }
      while ( (int)v20 < (int)&flt_B47600 );
      break;
    case 4:
      sub_76C730((_DWORD *)v10, 0x1B, 0, 0);
      v22 = (unsigned __int16)word_B474C8 - 1;
      if ( v22 > 6 )
      {
        v33 = 6;
      }
      else if ( v22 >= 0 )
      {
        v33 = (unsigned __int16)word_B474C8 - 1;
      }
      else
      {
        v33 = 0;
      }
      sub_7AEC20((NiD3DTextureStage **)&v32, **(NiD3DTextureStage ***)(v10 + 0x24));
      v23 = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(this + 0x7C));
      sub_76C910(v32, v23);
      flt_B2E03C = 0.0;
      v24 = *(_DWORD *)(*(_DWORD *)(this + 0x7C) + 0x20);
      if ( v24 )
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 0x4C))(v24);
      else
        v25 = 0;
      v35 = v25;
      v26 = (double)v25;
      if ( v25 < 0 )
        v26 = v26 + flt_A2FC78;
      qmemcpy(&unk_B474F8, (char *)&unk_A93780 + 0xF0 * v33, 0xF0u);
      v27 = v33;
      v28 = (float *)&unk_B47510;
      flt_B2E040 = 1.0 / v26;
      v29 = *(float *)(4 * v27 + 0xA93760);
      do
      {
        v30 = v28[0xFFFFFFFC];
        v28 += 0x14;
        v28[0xFFFFFFE8] = v30 / v29;
        v28[0xFFFFFFEC] = v28[0xFFFFFFEC] / v29;
        v28[0xFFFFFFF0] = v28[0xFFFFFFF0] / v29;
        v28[0xFFFFFFF4] = v28[0xFFFFFFF4] / v29;
        v28[0xFFFFFFF8] = v28[0xFFFFFFF8] / v29;
      }
      while ( (int)v28 < (int)&flt_B47600 );
      break;
    default:
      JUMPOUT(0x804BC9);
  }
  return def_80494C(this, (NiD3DPass *)v10, a2, a3, a4, a5, a6, a7, a8);
}
