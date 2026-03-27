int __userpurge sub_7E1120@<eax>(
        WaterShaderHeightMap *a1@<ecx>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  UInt32 Unk0D4; // eax
  UInt32 *p_Unk0D4; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // ebp
  int v15; // ebx
  int v16; // ebp
  int v17; // ebx
  _DWORD *v18; // ebx
  NiRenderedTexture *InnerTexture; // eax
  NiD3DTextureStage *v20; // ebx
  BSRenderedTexture *Unk0D8; // ecx
  _DWORD *v22; // ebx
  NiRenderedTexture *v23; // eax
  _DWORD *v24; // ebx
  NiRenderedTexture *v25; // eax
  NiRenderedTexture *v26; // eax
  _DWORD *v29[3]; // [esp+8h] [ebp-1Ch] BYREF
  int v30; // [esp+14h] [ebp-10h]

  ((void (__usercall *)(WaterShaderHeightMap *@<ecx>, double@<st0>))a1->__vftable->super.super.RemoveShaderPassesMaybe)(
    a1,
    a2);
  if ( dword_B42D78 )
    ((void (__cdecl *)(_DWORD, int))dword_B42D78)(0, 1);
  else
    a2 = 0.0;
  *(float *)&v30 = a2;
  Unk0D4 = a1->Unk0D4;
  p_Unk0D4 = &a1->Unk0D4;
  *(float *)&a1->Time = *(float *)&v30 / dbl_A492B0 * WaterShader_Frequency;
  v12 = **(_DWORD **)(Unk0D4 + 0x24);
  v13 = *(_DWORD *)(v12 + 4);
  if ( v13 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) )
      (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    *(_DWORD *)(v12 + 4) = 0;
  }
  v14 = *(_DWORD *)(*(_DWORD *)(*p_Unk0D4 + 0x24) + 4);
  v15 = *(_DWORD *)(v14 + 4);
  if ( v15 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
      (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    *(_DWORD *)(v14 + 4) = 0;
  }
  v16 = *(_DWORD *)(*(_DWORD *)(*p_Unk0D4 + 0x24) + 8);
  v17 = *(_DWORD *)(v16 + 4);
  if ( v17 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
      (**(void (__thiscall ***)(int, int))v17)(v17, 1);
    *(_DWORD *)(v16 + 4) = 0;
  }
  switch ( a1->CurrentPixelIndex )
  {
    case 0u:
      v18 = **(_DWORD ***)(*p_Unk0D4 + 0x24);
      v29[0] = v18;
      if ( v18 )
        ++v18[0x17];
      *(float *)&v30 = 0.0;
      sub_8011E0((int)v18, 1);
      InnerTexture = BSRenderedTexture::GetInnerTexture(a1->Unk0DC);
      sub_76C910(v18, InnerTexture);
      sub_7AEC20((NiD3DTextureStage **)v29, *(NiD3DTextureStage **)(*(_DWORD *)(*p_Unk0D4 + 0x24) + 4));
      v20 = (NiD3DTextureStage *)v29[0];
      sub_8011E0((int)v29[0], 1);
      Unk0D8 = a1->Unk0D8;
      goto LABEL_30;
    case 1u:
    case 2u:
    case 3u:
    case 4u:
      v22 = **(_DWORD ***)(*p_Unk0D4 + 0x24);
      v29[0] = v22;
      if ( v22 )
        ++v22[0x17];
      v30 = 1;
      sub_8011E0((int)v22, 3);
      v23 = BSRenderedTexture::GetInnerTexture(a1->Unk0E0);
      sub_76C910(v22, v23);
      sub_7AEC20((NiD3DTextureStage **)v29, *(NiD3DTextureStage **)(*(_DWORD *)(*p_Unk0D4 + 0x24) + 4));
      v24 = v29[0];
      sub_8011E0((int)v29[0], 3);
      v25 = BSRenderedTexture::GetInnerTexture(a1->Unk0E4);
      sub_76C910(v24, v25);
      sub_7AEC20((NiD3DTextureStage **)v29, *(NiD3DTextureStage **)(*(_DWORD *)(*p_Unk0D4 + 0x24) + 8));
      v20 = (NiD3DTextureStage *)v29[0];
      goto LABEL_29;
    case 5u:
      v20 = **(NiD3DTextureStage ***)(*p_Unk0D4 + 0x24);
      v29[0] = &v20->Stage;
      if ( v20 )
        ++v20[7].Unk08;
      v30 = 2;
      goto LABEL_29;
    case 6u:
      v20 = **(NiD3DTextureStage ***)(*p_Unk0D4 + 0x24);
      v29[0] = &v20->Stage;
      if ( v20 )
        ++v20[7].Unk08;
      v30 = 3;
LABEL_29:
      sub_8011E0((int)v20, 1);
      Unk0D8 = a1->Unk0EC;
LABEL_30:
      v26 = BSRenderedTexture::GetInnerTexture(Unk0D8);
      sub_76C910(v20, v26);
      *(float *)&v30 = NAN;
      if ( !v20 )
        goto LABEL_33;
      if ( v20[7].Unk08-- != 1 )
        goto LABEL_33;
      sub_772560(v20);
      return def_7E1233(a3, a4, a5, a6, a7, a8, a9);
    default:
LABEL_33:
      JUMPOUT(0x7E138E);
  }
}
