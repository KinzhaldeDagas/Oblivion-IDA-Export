NiObjectNET *__thiscall sub_89F730(_DWORD *this, NiNode *a2)
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
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  float v18; // edx
  float v20; // [esp+10h] [ebp-18h] BYREF
  float v21; // [esp+14h] [ebp-14h]
  float v22; // [esp+18h] [ebp-10h]
  int v23; // [esp+24h] [ebp-4h]

  if ( this && (v3 = *(this + 2)) != 0 && (v4 = (int *)(v3 + 0x14)) != 0 && (v5 = *v4) != 0 )
    v6 = *(_DWORD *)(v5 + 8);
  else
    v6 = 0;
  if ( !v6 )
    return (NiObjectNET *)a2;
  v7 = (NiObjectNET *)a2;
  if ( !a2 )
  {
    v8 = (NiNode *)FormHeapAlloc(0xDCu);
    v23 = 0;
    if ( v8 )
      v9 = NiNode::NiNode(v8, 0);
    else
      v9 = 0;
    v23 = 0xFFFFFFFF;
    v7 = (NiObjectNET *)v9;
  }
  if ( !v7->members.m_pcName )
    NiObjectNET_SetName(v7, "bhkWorldObject");
  v20 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  if ( this && (v10 = *(this + 2)) != 0 && (v11 = v10 + 0x14) != 0 )
    v12 = *(_DWORD *)(v11 + 0x1C);
  else
    LOBYTE(v12) = 0;
  sub_8A8140(v12, &v20);
  if ( sub_8AA390(&v20, (float *)&dword_B25AC4) )
  {
    v13 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
    v23 = 1;
    if ( v13 )
      v14 = NiMaterialProperty::NiMaterialProperty(v13);
    else
      v14 = 0;
    *((_DWORD *)v14 + 7) = dword_B25AC4;
    *((_DWORD *)v14 + 8) = dword_B25AC8;
    v15 = dword_B25ACC;
    v16 = ++*((_DWORD *)v14 + 0x15);
    *((_DWORD *)v14 + 9) = v15;
    *((_DWORD *)v14 + 0xA) = dword_B25AC4;
    *((_DWORD *)v14 + 0xB) = dword_B25AC8;
    v17 = dword_B25ACC;
    *((_DWORD *)v14 + 0x15) = ++v16;
    *((_DWORD *)v14 + 0xC) = v17;
    *((float *)v14 + 0x10) = v20;
    *((float *)v14 + 0x11) = v21;
    v18 = v22;
    *((_DWORD *)v14 + 0x15) = v16 + 1;
    v23 = 0xFFFFFFFF;
    *((float *)v14 + 0x12) = v18;
    sub_405680((NiNode *)v7, (BSShaderProperty *)v14);
  }
  (*(void (__thiscall **)(int, NiObjectNET *))(*(_DWORD *)v6 + 0x90))(v6, v7);
  return v7;
}
