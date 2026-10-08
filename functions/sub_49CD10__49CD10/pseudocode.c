double __thiscall sub_49CD10(float *this)
{
  double result; // st7
  int v3; // edi
  bool v4; // zf
  int v5; // edi
  NiNode *v6; // eax
  NiNode *v7; // edi
  NiObjectNET *v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // ebp
  double v10; // st6
  int v11; // [esp+14h] [ebp-24h]
  float v12; // [esp+1Ch] [ebp-1Ch]
  float v13; // [esp+1Ch] [ebp-1Ch]
  float v14; // [esp+20h] [ebp-18h]
  float v15; // [esp+20h] [ebp-18h]
  float v16; // [esp+24h] [ebp-14h]
  float v17; // [esp+24h] [ebp-14h]

  *this = 0.0; /*0x49cd3f*/
  *(this + 1) = 0.0; /*0x49cd45*/
  *(this + 2) = 0.0; /*0x49cd48*/
  *(this + 3) = 0.0; /*0x49cd4b*/
  *(this + 4) = 0.0; /*0x49cd4e*/
  *(this + 5) = 0.0; /*0x49cd51*/
  *(this + 0xF) = 0.0; /*0x49cd54*/
  *(this + 0xD) = 0.0; /*0x49cd57*/
  *(this + 0xE) = 0.0; /*0x49cd5a*/
  *((_DWORD *)this + 0xC) = &NiTPointerList<WadingWaterData *>::`vftable'; /*0x49cd5d*/
  *(this + 0x12) = 0.0; /*0x49cd64*/
  result = 0.0; /*0x49cd67*/
  v3 = *(_DWORD *)this; /*0x49cd69*/
  *(this + 6) = 0.0; /*0x49cd6b*/
  if ( v3 ) /*0x49cd75*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x49cd7d*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x49cd93*/
    result = 0.0; /*0x49cd95*/
    *this = 0.0; /*0x49cd97*/
  }
  *(this + 0x10) = 0.0; /*0x49cd99*/
  v4 = useWaterDepth == 0; /*0x49cda1*/
  unk_B45DB9 = useWaterDepth; /*0x49cda3*/
  if ( !v4 ) /*0x49cda8*/
    unk_B45DBC = 0x20 * dword_B070E0; /*0x49cdb3*/
  v5 = *((_DWORD *)this + 0x12); /*0x49cdb9*/
  if ( v5 ) /*0x49cdbe*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x49cdc6*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x49cddc*/
    result = 0.0; /*0x49cdde*/
    *(this + 0x12) = 0.0; /*0x49cde0*/
  }
  v4 = *(_DWORD *)&MEMORY[0xB33E90][0x13A0] == 0; /*0x49cde3*/
  MEMORY[0xB33E90][0x138D] = 1; /*0x49cde9*/
  if ( v4 ) /*0x49cdf0*/
  {
    v6 = (NiNode *)FormHeapAlloc(0xDCu); /*0x49cdfd*/
    if ( v6 ) /*0x49ce10*/
      v7 = NiNode::NiNode(v6, 0); /*0x49ce1a*/
    else
      v7 = 0; /*0x49ce1e*/
    v8 = *(NiObjectNET **)&MEMORY[0xB33E90][0x13A0]; /*0x49ce20*/
    if ( *(NiNode **)&MEMORY[0xB33E90][0x13A0] != v7 ) /*0x49ce2d*/
    {
      if ( v8 ) /*0x49ce31*/
      {
        v9 = *(void (__thiscall ****)(_DWORD, int))&MEMORY[0xB33E90][0x13A0]; /*0x49ce33*/
        if ( !InterlockedDecrement((volatile LONG *)&v8->members) ) /*0x49ce39*/
          (**v9)(v9, 1); /*0x49ce50*/
      }
      v8 = (NiObjectNET *)v7; /*0x49ce54*/
      *(_DWORD *)&MEMORY[0xB33E90][0x13A0] = v7; /*0x49ce56*/
      if ( v7 ) /*0x49ce5c*/
      {
        InterlockedIncrement((volatile LONG *)&v7->members); /*0x49ce62*/
        v8 = *(NiObjectNET **)&MEMORY[0xB33E90][0x13A0]; /*0x49ce68*/
      }
    }
    NiObjectNET_SetName(v8, "WaterRoot"); /*0x49ce73*/
    ((void (__thiscall *)(NiNode *, _DWORD, _DWORD))MEMORY[0xB333A0]->ObjectLODRoot->vtbl->AddObject)( /*0x49ce8f*/
      MEMORY[0xB333A0]->ObjectLODRoot,
      *(_DWORD *)&MEMORY[0xB33E90][0x13A0],
      0);
    result = 0.0; /*0x49ce91*/
  }
  v12 = result; /*0x49ce93*/
  v10 = kHeadBodyNormalMatchRadius; /*0x49ce9b*/
  OB_ShaderConstantStorage_010201A0[0] = v12; /*0x49cea1*/
  v14 = v10; /*0x49cea6*/
  v16 = v10; /*0x49ceae*/
  OB_ShaderConstantStorage_010201A0[1] = v14; /*0x49ceb8*/
  OB_ShaderConstantStorage_010201A0[2] = v16; /*0x49cec2*/
  v13 = result; /*0x49cece*/
  OB_ShaderConstantStorage_010201A0[3] = 1.0; /*0x49ced2*/
  v15 = result; /*0x49cedb*/
  v17 = kFaceEarNormalMatchRadius; /*0x49cee9*/
  OB_ShaderConstantStorage_010201A0[4] = v13; /*0x49ceed*/
  OB_ShaderConstantStorage_010201A0[5] = v15; /*0x49cefd*/
  OB_ShaderConstantStorage_010201A0[6] = v17; /*0x49cf17*/
  OB_ShaderConstantStorage_010201A0[7] = 1.0; /*0x49cf2a*/
  OB_ShaderConstantStorage_010201A0[8] = 1.0; /*0x49cf40*/
  OB_ShaderConstantStorage_010201A0[9] = 1.0; /*0x49cf4a*/
  OB_ShaderConstantStorage_010201A0[0xA] = 1.0; /*0x49cf4f*/
  OB_ShaderConstantStorage_010201A0[0xB] = 1.0; /*0x49cf57*/
  v11 = Double_To_SInt32(result); /*0x49cf62*/
  LOBYTE(OB_ShaderConstantStorage_010201A0[0x6F]) = bUseWaterHiRes; /*0x49cf6f*/
  OB_ShaderConstantStorage_010201A0[0x24] = (float)v11; /*0x49cf74*/
  *(_DWORD *)&MEMORY[0xB33E90][0x1390] = 0; /*0x49cf7a*/
  *(this + 8) = 0.0; /*0x49cf80*/
  *(this + 0xB) = result; /*0x49cf83*/
  *(this + 9) = 0.0; /*0x49cf86*/
  *(this + 0x11) = result; /*0x49cf89*/
  *((_BYTE *)this + 0x28) = 0; /*0x49cf8c*/
  *((_BYTE *)this + 0x29) = 1; /*0x49cf8f*/
  return result; /*0x49cf95*/
}
