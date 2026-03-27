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
  int v8; // edi
  int v9; // eax
  double v10; // st3
  _WORD *v11; // ebx
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
  NiRenderedTexture *v24; // ebx
  NiTexturingProperty *v25; // eax
  NiMaterialProperty *v26; // eax
  NiMaterialProperty *v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // edx
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

  v6 = 0x18 * a2;
  if ( *(&dword_B12DD0 + 6 * a2) )
  {
    if ( byte_B12DC8[0x18 * a2] )
      return;
    sub_572EC0(st5_0, st6_0, a4, v6, a2, 1);
  }
  v7 = FormHeapAlloc(0x30u);
  v8 = FormHeapAlloc(0x20u);
  v9 = FormHeapAlloc(0xCu);
  v10 = dbl_A2FAA0;
  v11 = (_WORD *)v9;
  a2c = (double)nWidth * v10;
  v34 = v10 * (double)nHeight;
  v12 = a2c;
  a2d = -a2c;
  *(float *)v7 = a2d;
  v37 = v34;
  *(float *)(v7 + 4) = 0.0;
  *(float *)&Src.m_data = a2d;
  *(float *)(v7 + 8) = v37;
  *(_DWORD *)(v7 + 0xC) = Src.m_data;
  *(float *)(v7 + 0x10) = 0.0;
  a2e = -v34;
  *(float *)(v7 + 0x14) = a2e;
  *(float *)&Src.m_data = v12;
  *(_DWORD *)(v7 + 0x18) = Src.m_data;
  *(float *)(v7 + 0x1C) = 0.0;
  *(float *)(v7 + 0x20) = v34;
  *(float *)&Src.m_data = v12;
  *(_DWORD *)(v7 + 0x24) = Src.m_data;
  *(float *)(v7 + 0x28) = 0.0;
  v37 = a2e;
  *(float *)(v7 + 0x2C) = a2e;
  *(float *)v8 = 0.0;
  *(float *)&Src.m_dataLen = 1.0;
  *(float *)(v8 + 4) = 0.0;
  v13 = *(_DWORD *)&Src.m_dataLen;
  *(float *)(v8 + 8) = 0.0;
  *(_DWORD *)(v8 + 0xC) = v13;
  *(float *)(v8 + 0x10) = 1.0;
  *(float *)(v8 + 0x14) = 0.0;
  *(float *)&Src.m_data = 1.0;
  *(float *)(v8 + 0x18) = 1.0;
  *(float *)&Src.m_dataLen = 1.0;
  *(float *)(v8 + 0x1C) = 1.0;
  *v11 = 0;
  v11[1] = 1;
  v11[2] = 2;
  v11[3] = 2;
  v11[4] = 1;
  v11[5] = 3;
  v14 = (NiNode *)FormHeapAlloc(0xDCu);
  v38 = 0;
  if ( v14 )
    v15 = (NiObjectNET *)NiNode::NiNode(v14, 0);
  else
    v15 = 0;
  v32 = (&off_B12DC4)[v6 / 4];
  *(int *)((char *)&dword_B12DD0 + v6) = (int)v15;
  NiObjectNET_SetName(v15, v32);
  v16 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  a2a = (BoltShaderProperty *)v16;
  v38 = 1;
  if ( v16 )
  {
    NiObjectNET::NiObjectNET(v16);
    v17 = (BSShaderProperty *)a2a;
    *(_DWORD *)a2a = &NiAlphaProperty::`vftable';
    *((_WORD *)a2a + 0xC) = 0xEC;
    *((_BYTE *)a2a + 0x1A) = 0;
  }
  else
  {
    v17 = 0;
  }
  v17->member.super.flags |= 1u;
  sub_405680(*(NiNode **)((char *)&dword_B12DD0 + v6), v17);
  v18 = (NiAVObject *)FormHeapAlloc(0xC0u);
  v38 = 2;
  if ( v18 )
    v19 = (NiObjectNET *)sub_7174B0(v18, 4, v7, 0, 0, v8, 1, 0, 2, (int)v11);
  else
    v19 = 0;
  v20 = *(int *)((char *)&dword_B12DD0 + v6);
  v21 = *(void (__thiscall **)(int, NiObjectNET *, int))(*(_DWORD *)v20 + 0x84);
  v38 = 0xFFFFFFFF;
  v21(v20, v19, 1);
  Src.m_data = 0;
  *(_DWORD *)&Src.m_dataLen = 0;
  v33 = (&off_B12DC4)[v6 / 4];
  v38 = 3;
  BSStringT_Static_Format(&Src, "Data\\Textures\\Menus\\Faders\\%s", v33);
  m_data = Src.m_data;
  NiObjectNET_SetName(v19, Src.m_data);
  TextureByFilename = NiSourceTexture::LoadTextureByFilename(m_data, (PixelLayout *)dword_B256D0, 1);
  v24 = (NiRenderedTexture *)TextureByFilename;
  if ( TextureByFilename )
    InterlockedIncrement((volatile LONG *)&TextureByFilename->members);
  LOBYTE(v38) = 4;
  v25 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
  LOBYTE(v38) = 5;
  if ( v25 )
    a2b = NiTexturingProperty::NiTexturingProperty(v25);
  else
    a2b = 0;
  LOBYTE(v38) = 4;
  NiTexturingProperty::SetUnk08(a2b, v24);
  sub_405680((NiNode *)v19, (BSShaderProperty *)a2b);
  v26 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  LOBYTE(v38) = 6;
  if ( v26 )
    v27 = NiMaterialProperty::NiMaterialProperty(v26);
  else
    v27 = 0;
  *((_DWORD *)v27 + 0x10) = dword_B3FA90;
  *((_DWORD *)v27 + 0x11) = dword_B3FA94;
  v28 = dword_B3FA98;
  ++*((_DWORD *)v27 + 0x15);
  *((_DWORD *)v27 + 0x12) = v28;
  v29 = *((_DWORD *)v27 + 0x15);
  *((_DWORD *)v27 + 7) = dword_B25AC4;
  *((_DWORD *)v27 + 8) = dword_B25AC8;
  v30 = dword_B25ACC;
  *((_DWORD *)v27 + 0x15) = v29 + 1;
  LOBYTE(v38) = 4;
  *((_DWORD *)v27 + 9) = v30;
  sub_405680((NiNode *)v19, (BSShaderProperty *)v27);
  sub_72A0F0(&v19[7].members.m_controller->member.m_fFrequency, 4, (float *)v7);
  sub_4A2A90(*(int *)((char *)&dword_B12DD0 + v6), 0.0);
  v31 = *(this + 1);
  if ( byte_B12DC0[v6] )
    v31 = *this;
  ((void (__thiscall *)(NiNode *, _DWORD, int))v31->vtbl->AddObject)(v31, *(int *)((char *)&dword_B12DD0 + v6), 1);
  NiNode_UpdateDynamicEffectState(v31);
  NiAVObject_InitializePropertyState((NiAVObject *)v31);
  NiAVObject_UpdateNiAVObject((NiAVObject *)v31, 0.0, 0);
  *(float *)(v6 + 0xB12DCC) = a6;
  byte_B12DC8[v6] = 1;
  LOBYTE(v38) = 3;
  if ( v24 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v24->member) )
      v24->__vftable->super.super.super.Destructor((NiRefObject *)v24, 1);
  }
  FormHeapFree((unsigned int)Src.m_data);
}
