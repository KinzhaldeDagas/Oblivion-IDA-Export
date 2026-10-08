NiNode *__thiscall sub_89F730(_DWORD *this, NiObjectNET *a2)
{
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int v6; // ebp
  NiObjectNET *v7; // esi
  NiNode *v8; // eax
  NiNode *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  NiMaterialProperty *v13; // eax
  NiMaterialProperty *v14; // eax
  float z; // edx
  int v16; // ecx
  float v17; // edx
  float v18; // edx
  NiPoint3 v20; // [esp+10h] [ebp-18h] BYREF
  int v21; // [esp+24h] [ebp-4h]

  if ( this && (v3 = *(this + 2)) != 0 && (v4 = (int *)(v3 + 0x14)) != 0 && (v5 = *v4) != 0 ) /*0x89f76c*/
    v6 = *(_DWORD *)(v5 + 8); /*0x89f76e*/
  else
    v6 = 0; /*0x89f773*/
  if ( !v6 ) /*0x89f777*/
    return (NiNode *)a2; /*0x89f8c5*/
  v7 = a2; /*0x89f77d*/
  if ( !a2 ) /*0x89f783*/
  {
    v8 = (NiNode *)FormHeapAlloc(0xDCu); /*0x89f78a*/
    v21 = 0; /*0x89f798*/
    if ( v8 ) /*0x89f79c*/
      v9 = NiNode::NiNode(v8, 0); /*0x89f7a1*/
    else
      v9 = 0; /*0x89f7a8*/
    v21 = 0xFFFFFFFF; /*0x89f7aa*/
    v7 = (NiObjectNET *)v9; /*0x89f7b2*/
  }
  if ( !v7->members.m_pcName ) /*0x89f7b4*/
    NiObjectNET_SetName(v7, "bhkWorldObject"); /*0x89f7c1*/
  v20.x = 0.0; /*0x89f7ca*/
  v20.y = 0.0; /*0x89f7ce*/
  v20.z = 0.0; /*0x89f7d2*/
  if ( this && (v10 = *(this + 2)) != 0 && (v11 = v10 + 0x14) != 0 ) /*0x89f7e2*/
    v12 = *(_DWORD *)(v11 + 0x1C); /*0x89f7e4*/
  else
    LOBYTE(v12) = 0; /*0x89f7e9*/
  sub_8A8140(v12, &v20.x); /*0x89f7f1*/
  if ( NiPoint3__NotEqual(&v20, &stru_B25AC4) ) /*0x89f802*/
  {
    v13 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x89f811*/
    v21 = 1; /*0x89f824*/
    if ( v13 ) /*0x89f828*/
      v14 = NiMaterialProperty::NiMaterialProperty(v13); /*0x89f82c*/
    else
      v14 = 0; /*0x89f833*/
    *((_DWORD *)v14 + 7) = LODWORD(stru_B25AC4.x); /*0x89f83b*/
    *((_DWORD *)v14 + 8) = LODWORD(stru_B25AC4.y); /*0x89f844*/
    z = stru_B25AC4.z; /*0x89f847*/
    v16 = ++*((_DWORD *)v14 + 0x15); /*0x89f850*/
    *((float *)v14 + 9) = z; /*0x89f853*/
    *((_DWORD *)v14 + 0xA) = LODWORD(stru_B25AC4.x); /*0x89f85c*/
    *((_DWORD *)v14 + 0xB) = LODWORD(stru_B25AC4.y); /*0x89f865*/
    v17 = stru_B25AC4.z; /*0x89f868*/
    *((_DWORD *)v14 + 0x15) = ++v16; /*0x89f870*/
    *((float *)v14 + 0xC) = v17; /*0x89f873*/
    *((_DWORD *)v14 + 0x10) = LODWORD(v20.x); /*0x89f87a*/
    *((_DWORD *)v14 + 0x11) = LODWORD(v20.y); /*0x89f881*/
    v18 = v20.z; /*0x89f884*/
    *((_DWORD *)v14 + 0x15) = v16 + 1; /*0x89f88a*/
    v21 = 0xFFFFFFFF; /*0x89f890*/
    *((float *)v14 + 0x12) = v18; /*0x89f898*/
    sub_405680((NiNode *)v7, (BSShaderProperty *)v14); /*0x89f89b*/
  }
  (*(void (__thiscall **)(int, NiObjectNET *))(*(_DWORD *)v6 + 0x90))(v6, v7); /*0x89f8ac*/
  return (NiNode *)v7; /*0x89f8b0*/
}
