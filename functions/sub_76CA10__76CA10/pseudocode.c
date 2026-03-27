int __thiscall sub_76CA10(_DWORD *this, unsigned int *a3, int arg4)
{
  _DWORD *v4; // ecx
  unsigned int v5; // ebp
  int v6; // ebx
  _DWORD **v7; // esi
  _DWORD *v8; // ecx
  int v9; // ebp
  _DWORD *v10; // ecx
  float *v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  NiD3DTextureStage *v14; // eax

  v4 = (_DWORD *)*(this + 0xF);
  if ( !v4 )
    return 0;
  v5 = (unsigned int)a3;
  if ( !sub_75FA00(v4, 1, a3 != 0) )
    return 0;
  sub_772630(&a3);
  v6 = (int)a3;
  v7 = (_DWORD **)(a3 + 3);
  sub_772FF0((_DWORD *)a3[3], 0x1C, 1, 0);
  if ( v5 && *(_DWORD *)(v5 + 8) )
  {
    sub_76C910((_DWORD *)v6, *(NiRenderedTexture **)(v5 + 8));
    sub_772FF0(*v7, 0xB, arg4, 0);
    sub_772FF0(*v7, 1, 2, 0);
    sub_772FF0(*v7, 2, 2, 0);
    sub_772FF0(*v7, 3, 1, 0);
    sub_772FF0(*v7, 4, 3, 0);
    sub_772FF0(*v7, 5, 2, 0);
    v8 = *v7;
    if ( *((_BYTE *)this + 0x51) )
    {
      sub_772FF0(v8, 6, 0, 0);
      *((_BYTE *)this + 0x51) = 0;
    }
    else
    {
      sub_772FF0(v8, 6, 1, 0);
    }
    sub_771640((_DWORD **)v6, *(_BYTE *)(v5 + 5) & 0xF);
    sub_7715E0((_DWORD **)v6, (*(unsigned __int16 *)(v5 + 4) >> 0xC) & 3);
    v9 = *(_DWORD *)(v5 + 0xC);
    if ( v9 )
    {
      v11 = (float *)sub_76C710(v9);
      sub_76C820(v11, v6);
    }
    else
    {
      v10 = *v7;
      *(_BYTE *)(v6 + 0x5A) = 0;
      sub_772FF0(v10, 0x18, 0, 0);
    }
    --*(this + 0x17);
  }
  else
  {
    sub_772FF0(*v7, 1, 2, 0);
    sub_772FF0(*v7, 2, 0, 0);
    sub_772FF0(*v7, 3, 1, 0);
    v12 = *v7;
    if ( *((_BYTE *)this + 0x51) )
    {
      sub_772FF0(v12, 4, 2, 0);
      *((_BYTE *)this + 0x51) = 0;
    }
    else
    {
      sub_772FF0(v12, 4, 3, 0);
    }
    sub_772FF0(*v7, 5, 0, 0);
    sub_772FF0(*v7, 6, 1, 0);
    v13 = *(this + 0x17);
    if ( v13 )
      *(this + 0x17) = v13 - 1;
  }
  --*(this + 0x16);
  sub_760010((NiD3DPass *)*(this + 0xF), *(_DWORD *)(*(this + 0xF) + 0x14), (unsigned int *)v6);
  v14 = (NiD3DTextureStage *)a3;
  if ( a3 )
  {
    --a3[0x17];
    if ( !v14[7].Unk08 )
      sub_772560(v14);
  }
  return v6;
}
