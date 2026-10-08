NiNode *__thiscall sub_59CC00(char *this, char **arg0, BoltShaderProperty *a2, int a4, float a5)
{
  int v5; // esi
  float *v6; // edi
  UInt16 *v7; // ebx
  double v8; // st6
  float v9; // ecx
  float v10; // ecx
  float v11; // edx
  float v12; // ecx
  float v13; // eax
  NiNode *v14; // ebp
  NiNode *v15; // eax
  char *m_data; // ecx
  int v17; // eax
  int v18; // eax
  NiObjectNET *v19; // eax
  BSShaderProperty *v20; // eax
  NiAVObject *v21; // eax
  NiObjectNET *v22; // edi
  void (__thiscall *AddObject)(NiNode, NiAVObject *, UInt8); // eax
  char *v24; // ebx
  NiTexturingProperty *v25; // eax
  NiTexturingProperty *v26; // ebx
  NiMaterialProperty *v27; // eax
  NiMaterialProperty *v28; // eax
  float z; // edx
  int v30; // ecx
  float v31; // edx
  char *v33; // [esp+8h] [ebp-3Ch]
  const char *v34; // [esp+8h] [ebp-3Ch]
  float v35; // [esp+20h] [ebp-24h]
  BSStringT Src; // [esp+24h] [ebp-20h] BYREF
  float v37; // [esp+2Ch] [ebp-18h]
  float v38; // [esp+30h] [ebp-14h]
  float v39; // [esp+34h] [ebp-10h]
  int v40; // [esp+40h] [ebp-4h]
  float a2c; // [esp+4Ch] [ebp+8h]
  BoltShaderProperty *a2a; // [esp+4Ch] [ebp+8h]
  NiSourceTexture *a2b; // [esp+4Ch] [ebp+8h]
  float v44; // [esp+50h] [ebp+Ch]
  int v45; // [esp+50h] [ebp+Ch]

  Src.m_data = this; /*0x59cc27*/
  v5 = FormHeapAlloc(0x30u); /*0x59cc34*/
  v6 = (float *)FormHeapAlloc(0x20u); /*0x59cc3d*/
  v37 = 0.0; /*0x59cc46*/
  v7 = (UInt16 *)FormHeapAlloc(0xCu); /*0x59cc4a*/
  v8 = flt_A34BA0; /*0x59cc50*/
  v38 = flt_A34BA0; /*0x59cc56*/
  *(float *)v5 = 0.0; /*0x59cc5a*/
  v9 = v38; /*0x59cc5c*/
  v37 = 0.0; /*0x59cc6e*/
  v38 = v8; /*0x59cc76*/
  *(float *)(v5 + 4) = v9; /*0x59cc82*/
  v10 = v37; /*0x59cc85*/
  *(float *)(v5 + 8) = 0.0; /*0x59cc89*/
  v11 = v38; /*0x59cc8c*/
  v44 = (float)-a4; /*0x59cc90*/
  *(float *)(v5 + 0xC) = v10; /*0x59cc94*/
  *(float *)(v5 + 0x10) = v11; /*0x59cc9b*/
  *(float *)(v5 + 0x14) = v44; /*0x59ccaa*/
  v35 = (float)(int)a2; /*0x59ccad*/
  *(float *)(v5 + 0x18) = v35; /*0x59ccbf*/
  v38 = v8; /*0x59ccc2*/
  *(float *)(v5 + 0x1C) = v38; /*0x59cccc*/
  *(float *)(v5 + 0x20) = 0.0; /*0x59ccd9*/
  *(float *)(v5 + 0x24) = v35; /*0x59cce6*/
  v38 = v8; /*0x59cce9*/
  *(float *)(v5 + 0x28) = v38; /*0x59ccf3*/
  v39 = v44; /*0x59ccf6*/
  *(float *)(v5 + 0x2C) = v44; /*0x59ccfe*/
  *v6 = 0.0; /*0x59cd1b*/
  v38 = 1.0; /*0x59cd1d*/
  v6[1] = 0.0; /*0x59cd21*/
  v12 = v38; /*0x59cd24*/
  v38 = 0.0; /*0x59cd32*/
  v6[2] = 0.0; /*0x59cd36*/
  v6[3] = v12; /*0x59cd39*/
  v6[4] = 1.0; /*0x59cd3c*/
  v13 = v38; /*0x59cd3f*/
  v37 = 1.0; /*0x59cd43*/
  v38 = 1.0; /*0x59cd4b*/
  v6[5] = v13; /*0x59cd53*/
  v6[6] = 1.0; /*0x59cd56*/
  v6[7] = 1.0; /*0x59cd59*/
  v14 = 0; /*0x59cd66*/
  *v7 = 0; /*0x59cd6d*/
  v7[1] = 1; /*0x59cd70*/
  v7[2] = 2; /*0x59cd74*/
  v7[3] = 2; /*0x59cd78*/
  v7[4] = 1; /*0x59cd7c*/
  v7[5] = 3; /*0x59cd80*/
  v15 = (NiNode *)FormHeapAlloc(0xDCu); /*0x59cd86*/
  v40 = 0; /*0x59cd94*/
  if ( v15 ) /*0x59cd98*/
    v14 = NiNode::NiNode(v15, 0); /*0x59cda2*/
  v33 = *arg0; /*0x59cdaa*/
  v40 = 0xFFFFFFFF; /*0x59cdad*/
  NiObjectNET_SetName((NiObjectNET *)v14, v33); /*0x59cdb5*/
  m_data = Src.m_data; /*0x59cdba*/
  v17 = *((_DWORD *)Src.m_data + 0x10); /*0x59cdbe*/
  v45 = *((_DWORD *)Src.m_data + 0x11); /*0x59cdc7*/
  if ( v17 == 2 ) /*0x59cdcb*/
  {
    v18 = Double_To_SInt32((double)v45 - v35 * dbl_A2FAA0); /*0x59cddd*/
    m_data = Src.m_data; /*0x59cde2*/
    v45 = v18; /*0x59cde6*/
  }
  else if ( v17 == 4 ) /*0x59cdef*/
  {
    v45 = *((_DWORD *)Src.m_data + 0x11) - (_DWORD)a2; /*0x59cdf5*/
  }
  a2c = (float)*((int *)m_data + 0x12); /*0x59cdfe*/
  v37 = (float)v45; /*0x59ce06*/
  v14->members.super.m_localTransform.pos.x = v37; /*0x59ce10*/
  v38 = 0.0; /*0x59ce13*/
  v39 = a2c; /*0x59ce1f*/
  v14->members.super.m_localTransform.pos.y = 0.0; /*0x59ce23*/
  v14->members.super.m_localTransform.pos.z = v39; /*0x59ce2a*/
  v19 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x59ce2d*/
  a2a = (BoltShaderProperty *)v19; /*0x59ce35*/
  v40 = 1; /*0x59ce3b*/
  if ( v19 ) /*0x59ce43*/
  {
    NiObjectNET::NiObjectNET(v19); /*0x59ce47*/
    v20 = (BSShaderProperty *)a2a; /*0x59ce4c*/
    *(_DWORD *)a2a = &NiAlphaProperty::`vftable'; /*0x59ce50*/
    *((_WORD *)a2a + 0xC) = 0xEC; /*0x59ce56*/
    *((_BYTE *)a2a + 0x1A) = 0; /*0x59ce5c*/
  }
  else
  {
    v20 = 0; /*0x59ce62*/
  }
  v20->member.super.flags |= 1u; /*0x59ce64*/
  sub_405680(v14, v20); /*0x59ce74*/
  v21 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x59ce7e*/
  v40 = 2; /*0x59ce8c*/
  if ( v21 ) /*0x59ce94*/
    v22 = (NiObjectNET *)NiTriShape_ctorWithGeometryData(v21, 4u, (NiPoint3 *)v5, 0, 0, v6, 1, 0, 2u, v7); /*0x59ceac*/
  else
    v22 = 0; /*0x59ceb0*/
  AddObject = v14->vtbl->AddObject; /*0x59ceb5*/
  v40 = 0xFFFFFFFF; /*0x59cec0*/
  ((void (__thiscall *)(NiNode *, NiObjectNET *, int))AddObject)(v14, v22, 1); /*0x59cec8*/
  Src.m_data = 0; /*0x59cecc*/
  Src.m_dataLen = 0; /*0x59ced0*/
  Src.m_bufLen = 0; /*0x59ced5*/
  v34 = *arg0; /*0x59cee0*/
  v40 = 3; /*0x59ceeb*/
  BSStringT_Static_Format(&Src, "Textures\\Menus\\Credits\\%s", v34); /*0x59cef3*/
  v24 = Src.m_data; /*0x59cef8*/
  NiObjectNET_SetName(v22, Src.m_data); /*0x59cf02*/
  a2b = NiSourceTexture::LoadTextureByFilename(v24, &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout, 1); /*0x59cf16*/
  v25 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x59cf1a*/
  LOBYTE(v40) = 4; /*0x59cf28*/
  if ( v25 ) /*0x59cf2d*/
    v26 = NiTexturingProperty::NiTexturingProperty(v25); /*0x59cf36*/
  else
    v26 = 0; /*0x59cf3a*/
  LOBYTE(v40) = 3; /*0x59cf43*/
  OB_NiTexturingProperty_SetBaseTexture_010201A0(v26, (NiTexture *)a2b); /*0x59cf48*/
  v26->unk018 = v26->unk018 & 0xFFF1 | 4; /*0x59cf5a*/
  sub_405680((NiNode *)v22, (BSShaderProperty *)v26); /*0x59cf61*/
  v27 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x59cf68*/
  LOBYTE(v40) = 5; /*0x59cf76*/
  if ( v27 ) /*0x59cf7b*/
    v28 = NiMaterialProperty::NiMaterialProperty(v27); /*0x59cf7f*/
  else
    v28 = 0; /*0x59cf86*/
  *((_DWORD *)v28 + 0x10) = LODWORD(stru_B25AC4.x); /*0x59cf8e*/
  *((_DWORD *)v28 + 0x11) = LODWORD(stru_B25AC4.y); /*0x59cf97*/
  z = stru_B25AC4.z; /*0x59cf9a*/
  v30 = ++*((_DWORD *)v28 + 0x15); /*0x59cfa4*/
  *((float *)v28 + 0x12) = z; /*0x59cfa7*/
  *((_DWORD *)v28 + 7) = LODWORD(stru_B25AC4.x); /*0x59cfb0*/
  *((_DWORD *)v28 + 8) = LODWORD(stru_B25AC4.y); /*0x59cfb9*/
  v31 = stru_B25AC4.z; /*0x59cfbc*/
  *((_DWORD *)v28 + 0x15) = v30 + 1; /*0x59cfc5*/
  LOBYTE(v40) = 3; /*0x59cfcb*/
  *((float *)v28 + 9) = v31; /*0x59cfd0*/
  sub_405680((NiNode *)v22, (BSShaderProperty *)v28); /*0x59cfd3*/
  NiSphere_ComputeFromVertices((NiSphere *)&v22[7].members.m_controller->member.m_fFrequency, 4u, (const NiPoint3 *)v5); /*0x59cfe4*/
  BSShaderManager_AssignShadersRecursive((NiAVObject *)v14, 1u, 0, 1); /*0x59cff0*/
  sub_4A2A90((int)v14, a5); /*0x59d000*/
  FormHeapFree((unsigned int)Src.m_data); /*0x59d00a*/
  return v14; /*0x59d014*/
}
