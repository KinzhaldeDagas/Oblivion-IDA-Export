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
  NiD3DPass **p_Unk0D4; // edi
  int v12; // ebp
  int v13; // ebx
  NiTexture *Texture; // ebp
  UInt32 m_uiRefCount; // ebx
  UInt32 Unk08; // ebp
  int v17; // ebx
  NiD3DTextureStage *Stage; // ebx
  NiTexture *InnerTexture; // eax
  NiD3DTextureStage *v20; // ebx
  BSRenderedTexture *Unk0D8; // ecx
  NiD3DTextureStage *v22; // ebx
  NiTexture *v23; // eax
  NiD3DTextureStage *v24; // ebx
  NiTexture *v25; // eax
  NiTexture *v26; // eax
  NiD3DTextureStage *v29[3]; // [esp+8h] [ebp-1Ch] BYREF
  int v30; // [esp+14h] [ebp-10h]

  ((void (__usercall *)(WaterShaderHeightMap *@<ecx>, double@<st0>))a1->__vftable->super.super.RemoveShaderPassesMaybe)( /*0x7e114f*/
    a1,
    a2);
  if ( unk_B42D78 ) /*0x7e1151*/
    ((void (__cdecl *)(_DWORD, int))unk_B42D78)(0, 1); /*0x7e115e*/
  else
    a2 = 0.0; /*0x7e1169*/
  *(float *)&v30 = a2; /*0x7e116b*/
  Unk0D4 = a1->Unk0D4; /*0x7e116f*/
  p_Unk0D4 = (NiD3DPass **)&a1->Unk0D4; /*0x7e1179*/
  *(float *)&a1->Time = *(float *)&v30 / dbl_A492B0 * OB_ShaderConstantStorage_010201A0[0x70]; /*0x7e118b*/
  v12 = **(_DWORD **)(Unk0D4 + 0x24); /*0x7e1194*/
  v13 = *(_DWORD *)(v12 + 4); /*0x7e1196*/
  if ( v13 ) /*0x7e119b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x7e11a1*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7e11b7*/
    *(_DWORD *)(v12 + 4) = 0; /*0x7e11b9*/
  }
  Texture = (*p_Unk0D4)->Stages.data->Texture; /*0x7e11c5*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x7e11c8*/
  if ( m_uiRefCount ) /*0x7e11cd*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x7e11d3*/
      (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x7e11e9*/
    Texture->members.super.super.m_uiRefCount = 0; /*0x7e11eb*/
  }
  Unk08 = (*p_Unk0D4)->Stages.data->Unk08; /*0x7e11f7*/
  v17 = *(_DWORD *)(Unk08 + 4); /*0x7e11fa*/
  if ( v17 ) /*0x7e11ff*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x7e1205*/
      (**(void (__thiscall ***)(int, int))v17)(v17, 1); /*0x7e121b*/
    *(_DWORD *)(Unk08 + 4) = 0; /*0x7e121d*/
  }
  switch ( a1->CurrentPixelIndex ) /*0x7e1233*/
  {
    case 0u: /*0x7e1233*/
      Stage = (NiD3DTextureStage *)(*p_Unk0D4)->Stages.data->Stage; /*0x7e123f*/
      v29[0] = Stage; /*0x7e1243*/
      if ( Stage ) /*0x7e1247*/
        ++Stage[7].Unk08; /*0x7e1249*/
      *(float *)&v30 = 0.0; /*0x7e1250*/
      sub_8011E0((int)Stage, 1); /*0x7e1258*/
      InnerTexture = (NiTexture *)BSRenderedTexture::GetInnerTexture(a1->Unk0DC); /*0x7e1266*/
      NiD3DTextureStage_SetTexture(Stage, InnerTexture); /*0x7e126e*/
      sub_7AEC20(v29, (NiD3DTextureStage *)(*p_Unk0D4)->Stages.data->Texture); /*0x7e1280*/
      v20 = v29[0]; /*0x7e1285*/
      sub_8011E0((int)v29[0], 1); /*0x7e128c*/
      Unk0D8 = a1->Unk0D8; /*0x7e1291*/
      goto LABEL_30; /*0x7e1297*/
    case 1u: /*0x7e1233*/
    case 2u: /*0x7e1233*/
    case 3u: /*0x7e1233*/
    case 4u: /*0x7e1233*/
      v22 = (NiD3DTextureStage *)(*p_Unk0D4)->Stages.data->Stage; /*0x7e12a1*/
      v29[0] = v22; /*0x7e12a5*/
      if ( v22 ) /*0x7e12a9*/
        ++v22[7].Unk08; /*0x7e12ab*/
      v30 = 1; /*0x7e12b2*/
      sub_8011E0((int)v22, 3); /*0x7e12ba*/
      v23 = (NiTexture *)BSRenderedTexture::GetInnerTexture(a1->Unk0E0); /*0x7e12c8*/
      NiD3DTextureStage_SetTexture(v22, v23); /*0x7e12d0*/
      sub_7AEC20(v29, (NiD3DTextureStage *)(*p_Unk0D4)->Stages.data->Texture); /*0x7e12e2*/
      v24 = v29[0]; /*0x7e12e7*/
      sub_8011E0((int)v29[0], 3); /*0x7e12ee*/
      v25 = (NiTexture *)BSRenderedTexture::GetInnerTexture(a1->Unk0E4); /*0x7e12fc*/
      NiD3DTextureStage_SetTexture(v24, v25); /*0x7e1304*/
      sub_7AEC20(v29, (NiD3DTextureStage *)(*p_Unk0D4)->Stages.data->Unk08); /*0x7e1316*/
      v20 = v29[0]; /*0x7e131b*/
      goto LABEL_29; /*0x7e131f*/
    case 5u: /*0x7e1233*/
      v20 = (NiD3DTextureStage *)(*p_Unk0D4)->Stages.data->Stage; /*0x7e1326*/
      v29[0] = v20; /*0x7e132a*/
      if ( v20 ) /*0x7e132e*/
        ++v20[7].Unk08; /*0x7e1330*/
      v30 = 2; /*0x7e1334*/
      goto LABEL_29; /*0x7e133c*/
    case 6u: /*0x7e1233*/
      v20 = (NiD3DTextureStage *)(*p_Unk0D4)->Stages.data->Stage; /*0x7e1343*/
      v29[0] = v20; /*0x7e1347*/
      if ( v20 ) /*0x7e134b*/
        ++v20[7].Unk08; /*0x7e134d*/
      v30 = 3; /*0x7e1351*/
LABEL_29:
      sub_8011E0((int)v20, 1); /*0x7e1359*/
      Unk0D8 = a1->Unk0EC; /*0x7e1361*/
LABEL_30:
      v26 = (NiTexture *)BSRenderedTexture::GetInnerTexture(Unk0D8); /*0x7e1367*/
      NiD3DTextureStage_SetTexture(v20, v26); /*0x7e1372*/
      *(float *)&v30 = NAN; /*0x7e137c*/
      if ( !v20 ) /*0x7e1380*/
        goto LABEL_33; /*0x7e1380*/
      if ( v20[7].Unk08-- != 1 ) /*0x7e1382*/
        goto LABEL_33; /*0x7e1385*/
      sub_772560(v20); /*0x7e1389*/
      return def_7E1233(p_Unk0D4, (int)a1, a3, a4, a5, a6, a7, a8, a9);
    default:
LABEL_33:
      JUMPOUT(0x7E138E); /*0x7e138e*/
  }
}
