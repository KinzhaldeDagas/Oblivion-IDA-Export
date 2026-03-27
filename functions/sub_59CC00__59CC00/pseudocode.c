NiNode *__thiscall sub_59CC00(char *this, char **arg0, BoltShaderProperty *a2, int a4, float a5)
{
  int v6; // esi
  int v7; // edi
  _WORD *v8; // ebx
  double v9; // st5
  float v10; // ecx
  float v11; // ecx
  float v12; // edx
  float v13; // ecx
  float v14; // eax
  NiNode *v15; // ebp
  NiNode *v16; // eax
  char *m_data; // ecx
  int v18; // eax
  int v19; // eax
  NiObjectNET *v20; // eax
  BSShaderProperty *v21; // eax
  NiAVObject *v22; // eax
  NiObjectNET *v23; // edi
  void (__thiscall *AddObject)(NiNode, NiAVObject *, UInt8); // eax
  char *v25; // ebx
  NiTexturingProperty *v26; // eax
  NiTexturingProperty *v27; // ebx
  NiMaterialProperty *v28; // eax
  NiMaterialProperty *v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  char *v34; // [esp+8h] [ebp-3Ch]
  const char *v35; // [esp+8h] [ebp-3Ch]
  float v36; // [esp+20h] [ebp-24h]
  BSStringT Src; // [esp+24h] [ebp-20h] BYREF
  float v38; // [esp+2Ch] [ebp-18h]
  float v39; // [esp+30h] [ebp-14h]
  float v40; // [esp+34h] [ebp-10h]
  int v41; // [esp+40h] [ebp-4h]
  float a2c; // [esp+4Ch] [ebp+8h]
  BoltShaderProperty *a2a; // [esp+4Ch] [ebp+8h]
  NiSourceTexture *a2b; // [esp+4Ch] [ebp+8h]
  float v45; // [esp+50h] [ebp+Ch]
  int v46; // [esp+50h] [ebp+Ch]

  Src.m_data = this;
  v6 = FormHeapAlloc(0x30u);
  v7 = FormHeapAlloc(0x20u);
  v38 = 0.0;
  v8 = (_WORD *)FormHeapAlloc(0xCu);
  v9 = flt_A34BA0;
  v39 = flt_A34BA0;
  *(float *)v6 = 0.0;
  v10 = v39;
  v38 = 0.0;
  v39 = v9;
  *(float *)(v6 + 4) = v10;
  v11 = v38;
  *(float *)(v6 + 8) = 0.0;
  v12 = v39;
  v45 = (float)-a4;
  *(float *)(v6 + 0xC) = v11;
  *(float *)(v6 + 0x10) = v12;
  *(float *)(v6 + 0x14) = v45;
  v36 = (float)(int)a2;
  *(float *)(v6 + 0x18) = v36;
  v39 = v9;
  *(float *)(v6 + 0x1C) = v39;
  *(float *)(v6 + 0x20) = 0.0;
  *(float *)(v6 + 0x24) = v36;
  v39 = v9;
  *(float *)(v6 + 0x28) = v39;
  v40 = v45;
  *(float *)(v6 + 0x2C) = v45;
  *(float *)v7 = 0.0;
  v39 = 1.0;
  *(float *)(v7 + 4) = 0.0;
  v13 = v39;
  v39 = 0.0;
  *(float *)(v7 + 8) = 0.0;
  *(float *)(v7 + 0xC) = v13;
  *(float *)(v7 + 0x10) = 1.0;
  v14 = v39;
  v38 = 1.0;
  v39 = 1.0;
  *(float *)(v7 + 0x14) = v14;
  *(float *)(v7 + 0x18) = 1.0;
  *(float *)(v7 + 0x1C) = 1.0;
  v15 = 0;
  *v8 = 0;
  v8[1] = 1;
  v8[2] = 2;
  v8[3] = 2;
  v8[4] = 1;
  v8[5] = 3;
  v16 = (NiNode *)FormHeapAlloc(0xDCu);
  v41 = 0;
  if ( v16 )
    v15 = NiNode::NiNode(v16, 0);
  v34 = *arg0;
  v41 = 0xFFFFFFFF;
  NiObjectNET_SetName((NiObjectNET *)v15, v34);
  m_data = Src.m_data;
  v18 = *((_DWORD *)Src.m_data + 0x10);
  v46 = *((_DWORD *)Src.m_data + 0x11);
  if ( v18 == 2 )
  {
    v19 = Double_To_SInt32((double)v46 - v36 * dbl_A2FAA0);
    m_data = Src.m_data;
    v46 = v19;
  }
  else if ( v18 == 4 )
  {
    v46 = *((_DWORD *)Src.m_data + 0x11) - (_DWORD)a2;
  }
  a2c = (float)*((int *)m_data + 0x12);
  v38 = (float)v46;
  v15->members.super.m_localTransform.pos.x = v38;
  v39 = 0.0;
  v40 = a2c;
  v15->members.super.m_localTransform.pos.y = 0.0;
  v15->members.super.m_localTransform.pos.z = v40;
  v20 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  a2a = (BoltShaderProperty *)v20;
  v41 = 1;
  if ( v20 )
  {
    NiObjectNET::NiObjectNET(v20);
    v21 = (BSShaderProperty *)a2a;
    *(_DWORD *)a2a = &NiAlphaProperty::`vftable';
    *((_WORD *)a2a + 0xC) = 0xEC;
    *((_BYTE *)a2a + 0x1A) = 0;
  }
  else
  {
    v21 = 0;
  }
  v21->member.super.flags |= 1u;
  sub_405680(v15, v21);
  v22 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v41 = 2;
  if ( v22 )
    v23 = (NiObjectNET *)sub_7174B0(v22, 4, v6, 0, 0, v7, 1, 0, 2, (int)v8);
  else
    v23 = 0;
  AddObject = v15->vtbl->AddObject;
  v41 = 0xFFFFFFFF;
  ((void (__thiscall *)(NiNode *, NiObjectNET *, int))AddObject)(v15, v23, 1);
  Src.m_data = 0;
  Src.m_dataLen = 0;
  Src.m_bufLen = 0;
  v35 = *arg0;
  v41 = 3;
  BSStringT_Static_Format(&Src, "Textures\\Menus\\Credits\\%s", v35);
  v25 = Src.m_data;
  NiObjectNET_SetName(v23, Src.m_data);
  a2b = NiSourceTexture::LoadTextureByFilename(v25, (PixelLayout *)dword_B256D0, 1);
  v26 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
  LOBYTE(v41) = 4;
  if ( v26 )
    v27 = NiTexturingProperty::NiTexturingProperty(v26);
  else
    v27 = 0;
  LOBYTE(v41) = 3;
  NiTexturingProperty::SetUnk08(v27, (NiRenderedTexture *)a2b);
  v27->unk018 = v27->unk018 & 0xFFF1 | 4;
  sub_405680((NiNode *)v23, (BSShaderProperty *)v27);
  v28 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  LOBYTE(v41) = 5;
  if ( v28 )
    v29 = NiMaterialProperty::NiMaterialProperty(v28);
  else
    v29 = 0;
  *((_DWORD *)v29 + 0x10) = dword_B25AC4;
  *((_DWORD *)v29 + 0x11) = dword_B25AC8;
  v30 = dword_B25ACC;
  v31 = ++*((_DWORD *)v29 + 0x15);
  *((_DWORD *)v29 + 0x12) = v30;
  *((_DWORD *)v29 + 7) = dword_B25AC4;
  *((_DWORD *)v29 + 8) = dword_B25AC8;
  v32 = dword_B25ACC;
  *((_DWORD *)v29 + 0x15) = v31 + 1;
  LOBYTE(v41) = 3;
  *((_DWORD *)v29 + 9) = v32;
  sub_405680((NiNode *)v23, (BSShaderProperty *)v29);
  sub_72A0F0(&v23[7].members.m_controller->member.m_fFrequency, 4, (float *)v6);
  sub_7B8940((NiAVObject *)v15, 1, 0, 1);
  sub_4A2A90((int)v15, a5);
  FormHeapFree((unsigned int)Src.m_data);
  return v15;
}
