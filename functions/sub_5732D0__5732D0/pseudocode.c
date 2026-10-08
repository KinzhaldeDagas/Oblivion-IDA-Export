void __userpurge sub_5732D0(
        NiNode **this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        int a2,
        float a6)
{
  unsigned int v6; // ebp
  int v7; // esi
  float *v8; // edi
  int v9; // eax
  double v10; // st3
  UInt16 *v11; // ebx
  double v12; // st4
  int v13; // eax
  NiNode *v14; // eax
  NiObjectNET *v15; // eax
  NiObjectNET *v16; // eax
  BSShaderProperty *v17; // eax
  NiAVObject *v18; // eax
  NiObjectNET *v19; // edi
  int v20; // ecx
  void (__thiscall *v21)(int, NiObjectNET *, int); // edx
  char *m_data; // ebx
  NiSourceTexture *TextureByFilename; // eax
  NiTexture *v24; // ebx
  NiTexturingProperty *v25; // eax
  NiMaterialProperty *v26; // eax
  NiMaterialProperty *v27; // eax
  float z; // ecx
  int v29; // ecx
  float v30; // edx
  NiNode *v31; // esi
  char *v32; // [esp+14h] [ebp-38h]
  const char *v33; // [esp+14h] [ebp-38h]
  float v34; // [esp+2Ch] [ebp-20h]
  BSStringT Src; // [esp+34h] [ebp-18h] BYREF
  float v37; // [esp+3Ch] [ebp-10h]
  int v38; // [esp+48h] [ebp-4h]
  float a2c; // [esp+50h] [ebp+4h]
  float a2d; // [esp+50h] [ebp+4h]
  float a2e; // [esp+50h] [ebp+4h]
  BoltShaderProperty *a2a; // [esp+50h] [ebp+4h]
  NiTexturingProperty *a2b; // [esp+50h] [ebp+4h]

  v6 = 0x18 * a2; /*0x573306*/
  if ( *(&dword_B12DD0 + 6 * a2) ) /*0x573308*/
  {
    if ( byte_B12DC8[0x18 * a2] ) /*0x573311*/
      return; /*0x573318*/
    sub_572EC0(st5_0, st6_0, a4, a2, 1); /*0x573321*/
  }
  v7 = FormHeapAlloc(0x30u); /*0x57332f*/
  v8 = (float *)FormHeapAlloc(0x20u); /*0x573338*/
  v9 = FormHeapAlloc(0xCu); /*0x57333a*/
  v10 = dbl_A2FAA0; /*0x573345*/
  v11 = (UInt16 *)v9; /*0x57334b*/
  a2c = (double)nWidth * v10; /*0x573351*/
  v34 = v10 * (double)nHeight; /*0x57335b*/
  v12 = a2c; /*0x57335f*/
  a2d = -a2c; /*0x573367*/
  *(float *)v7 = a2d; /*0x573379*/
  v37 = v34; /*0x573387*/
  *(float *)(v7 + 4) = 0.0; /*0x57338b*/
  *(float *)&Src.m_data = a2d; /*0x573394*/
  *(float *)(v7 + 8) = v37; /*0x573398*/
  *(_DWORD *)(v7 + 0xC) = Src.m_data; /*0x57339f*/
  *(float *)(v7 + 0x10) = 0.0; /*0x5733ac*/
  a2e = -v34; /*0x5733b1*/
  *(float *)(v7 + 0x14) = a2e; /*0x5733c3*/
  *(float *)&Src.m_data = v12; /*0x5733c6*/
  *(_DWORD *)(v7 + 0x18) = Src.m_data; /*0x5733d0*/
  *(float *)(v7 + 0x1C) = 0.0; /*0x5733dd*/
  *(float *)(v7 + 0x20) = v34; /*0x5733e8*/
  *(float *)&Src.m_data = v12; /*0x5733eb*/
  *(_DWORD *)(v7 + 0x24) = Src.m_data; /*0x5733f3*/
  *(float *)(v7 + 0x28) = 0.0; /*0x573400*/
  v37 = a2e; /*0x573403*/
  *(float *)(v7 + 0x2C) = a2e; /*0x57340b*/
  *v8 = 0.0; /*0x573428*/
  *(float *)&Src.m_dataLen = 1.0; /*0x57342a*/
  v8[1] = 0.0; /*0x57342e*/
  v13 = *(_DWORD *)&Src.m_dataLen; /*0x573431*/
  v8[2] = 0.0; /*0x573435*/
  *((_DWORD *)v8 + 3) = v13; /*0x573438*/
  v8[4] = 1.0; /*0x573443*/
  v8[5] = 0.0; /*0x573450*/
  *(float *)&Src.m_data = 1.0; /*0x573453*/
  v8[6] = 1.0; /*0x57345b*/
  *(float *)&Src.m_dataLen = 1.0; /*0x57345e*/
  v8[7] = 1.0; /*0x573466*/
  *v11 = 0; /*0x573478*/
  v11[1] = 1; /*0x57347d*/
  v11[2] = 2; /*0x573481*/
  v11[3] = 2; /*0x573485*/
  v11[4] = 1; /*0x573489*/
  v11[5] = 3; /*0x57348d*/
  v14 = (NiNode *)FormHeapAlloc(0xDCu); /*0x573493*/
  v38 = 0; /*0x5734a1*/
  if ( v14 ) /*0x5734a9*/
    v15 = (NiObjectNET *)NiNode::NiNode(v14, 0); /*0x5734af*/
  else
    v15 = 0; /*0x5734b6*/
  v32 = (&off_B12DC4)[v6 / 4]; /*0x5734be*/
  *(int *)((char *)&dword_B12DD0 + v6) = (int)v15; /*0x5734c9*/
  NiObjectNET_SetName(v15, v32); /*0x5734cf*/
  v16 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x5734d6*/
  a2a = (BoltShaderProperty *)v16; /*0x5734de*/
  v38 = 1; /*0x5734e4*/
  if ( v16 ) /*0x5734ec*/
  {
    NiObjectNET::NiObjectNET(v16); /*0x5734f0*/
    v17 = (BSShaderProperty *)a2a; /*0x5734f5*/
    *(_DWORD *)a2a = &NiAlphaProperty::`vftable'; /*0x5734f9*/
    *((_WORD *)a2a + 0xC) = 0xEC; /*0x5734ff*/
    *((_BYTE *)a2a + 0x1A) = 0; /*0x573505*/
  }
  else
  {
    v17 = 0; /*0x57350b*/
  }
  v17->member.super.flags |= 1u; /*0x57350d*/
  sub_405680(*(NiNode **)((char *)&dword_B12DD0 + v6), v17); /*0x573521*/
  v18 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x57352b*/
  v38 = 2; /*0x573539*/
  if ( v18 ) /*0x573541*/
    v19 = (NiObjectNET *)NiTriShape_ctorWithGeometryData(v18, 4u, (NiPoint3 *)v7, 0, 0, v8, 1, 0, 2u, v11); /*0x573559*/
  else
    v19 = 0; /*0x57355d*/
  v20 = *(int *)((char *)&dword_B12DD0 + v6); /*0x57355f*/
  v21 = *(void (__thiscall **)(int, NiObjectNET *, int))(*(_DWORD *)v20 + 0x84); /*0x573567*/
  v38 = 0xFFFFFFFF; /*0x573570*/
  v21(v20, v19, 1); /*0x573578*/
  Src.m_data = 0; /*0x57357c*/
  *(_DWORD *)&Src.m_dataLen = 0; /*0x573580*/
  v33 = (&off_B12DC4)[v6 / 4]; /*0x573590*/
  v38 = 3; /*0x57359b*/
  BSStringT_Static_Format(&Src, "Data\\Textures\\Menus\\Faders\\%s", v33); /*0x5735a3*/
  m_data = Src.m_data; /*0x5735a8*/
  NiObjectNET_SetName(v19, Src.m_data); /*0x5735b2*/
  TextureByFilename = NiSourceTexture::LoadTextureByFilename( /*0x5735bf*/
                        m_data,
                        &OB_TES_DefaultSourceTextureFormatPrefs_010201A0.pixelLayout,
                        1);
  v24 = (NiTexture *)TextureByFilename; /*0x5735c4*/
  if ( TextureByFilename ) /*0x5735cf*/
    InterlockedIncrement((volatile LONG *)&TextureByFilename->members); /*0x5735d5*/
  LOBYTE(v38) = 4; /*0x5735dd*/
  v25 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x5735e2*/
  LOBYTE(v38) = 5; /*0x5735f0*/
  if ( v25 ) /*0x5735f5*/
    a2b = NiTexturingProperty::NiTexturingProperty(v25); /*0x5735fe*/
  else
    a2b = 0; /*0x573604*/
  LOBYTE(v38) = 4; /*0x573611*/
  OB_NiTexturingProperty_SetBaseTexture_010201A0(a2b, v24); /*0x573616*/
  sub_405680((NiNode *)v19, (BSShaderProperty *)a2b); /*0x573622*/
  v26 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x573629*/
  LOBYTE(v38) = 6; /*0x573637*/
  if ( v26 ) /*0x57363c*/
    v27 = NiMaterialProperty::NiMaterialProperty(v26); /*0x573640*/
  else
    v27 = 0; /*0x573647*/
  *((_DWORD *)v27 + 0x10) = LODWORD(stru_B3FA90.x); /*0x57364f*/
  *((_DWORD *)v27 + 0x11) = LODWORD(stru_B3FA90.y); /*0x573658*/
  z = stru_B3FA90.z; /*0x57365b*/
  ++*((_DWORD *)v27 + 0x15); /*0x573661*/
  *((float *)v27 + 0x12) = z; /*0x573665*/
  v29 = *((_DWORD *)v27 + 0x15); /*0x57366e*/
  *((_DWORD *)v27 + 7) = LODWORD(stru_B25AC4.x); /*0x573671*/
  *((_DWORD *)v27 + 8) = LODWORD(stru_B25AC4.y); /*0x57367a*/
  v30 = stru_B25AC4.z; /*0x57367d*/
  *((_DWORD *)v27 + 0x15) = v29 + 1; /*0x573686*/
  LOBYTE(v38) = 4; /*0x57368c*/
  *((float *)v27 + 9) = v30; /*0x573691*/
  sub_405680((NiNode *)v19, (BSShaderProperty *)v27); /*0x573694*/
  NiSphere_ComputeFromVertices((NiSphere *)&v19[7].members.m_controller->member.m_fFrequency, 4u, (const NiPoint3 *)v7); /*0x5736a5*/
  sub_4A2A90(*(int *)((char *)&dword_B12DD0 + v6), 0.0); /*0x5736b7*/
  v31 = *(this + 1); /*0x5736c0*/
  if ( byte_B12DC0[v6] ) /*0x5736c6*/
    v31 = *this; /*0x5736cf*/
  ((void (__thiscall *)(NiNode *, _DWORD, int))v31->vtbl->AddObject)(v31, *(int *)((char *)&dword_B12DD0 + v6), 1); /*0x5736e4*/
  NiNode_UpdateDynamicEffectState(v31); /*0x5736e8*/
  NiAVObject_InitializePropertyState((NiAVObject *)v31); /*0x5736ef*/
  NiAVObject_UpdateNiAVObject((NiAVObject *)v31, 0.0, 0); /*0x5736fe*/
  *(float *)(v6 + 0xB12DCC) = a6; /*0x573709*/
  byte_B12DC8[v6] = 1; /*0x57370f*/
  LOBYTE(v38) = 3; /*0x573716*/
  if ( v24 ) /*0x57371b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v24->members) ) /*0x573721*/
      v24->__vftable->super.super.Destructor((NiRefObject *)v24, 1); /*0x573733*/
  }
  FormHeapFree((unsigned int)Src.m_data); /*0x57373a*/
}
