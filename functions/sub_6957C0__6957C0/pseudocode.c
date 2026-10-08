void __thiscall sub_6957C0(MobileObject *this)
{
  NiNode *v2; // esi
  NiObjectNET *v3; // esi
  NiObjectNET *v4; // eax
  BSShaderProperty *v5; // edi
  NiObjectNET *v6; // eax
  BSShaderProperty *v7; // edi
  BSShaderProperty *v8; // eax
  NiObjectNET *v9; // eax
  BSShaderProperty *v10; // edi
  BSShaderProperty *v11; // eax
  TESObjectREFR *CollisionFilterInfo; // eax
  NiMaterialProperty *v13; // eax
  NiMaterialProperty *v14; // eax
  float z; // ecx
  int v16; // ecx
  float v17; // edx
  float v18; // edx
  float scale; // [esp+2Ch] [ebp-24h]
  float v20; // [esp+2Ch] [ebp-24h]
  NiAVObject *v21; // [esp+30h] [ebp-20h]
  float v22; // [esp+34h] [ebp-1Ch] BYREF
  float v23; // [esp+38h] [ebp-18h] BYREF
  float v24; // [esp+3Ch] [ebp-14h]
  float v25; // [esp+40h] [ebp-10h]
  int v26; // [esp+4Ch] [ebp-4h]

  v2 = this->vtbl->super.GetNiNode(this); /*0x6957f3*/
  if ( v2 ) /*0x6957f7*/
  {
    if ( !v2->vtbl->super.GetObjectByName((NiAVObject *)v2, "MagicAreaDisplay") ) /*0x695809*/
    {
      v21 = (NiAVObject *)v2->vtbl->super.super.Unk_02((NiObject *)v2); /*0x69581e*/
      if ( v21 ) /*0x695822*/
      {
        scale = v2->members.super.m_localTransform.scale; /*0x69582e*/
        v20 = (double)EffectItem_GetArea(*((_DWORD **)this + 0x1C)) * MEMORY[0xB37DB8][0] / scale; /*0x695850*/
        v3 = sub_6FC010(v20, 0xAu, 0xA, 0); /*0x695863*/
        NiObjectNET_SetName(v3, "MagicAreaDisplay"); /*0x69586c*/
        v3[3].members.m_controller = (NiInterpController *)LODWORD(g_zeroNiPoint3.x); /*0x695876*/
        v3[3].members.m_extraDataList = (NiExtraData **)LODWORD(g_zeroNiPoint3.y); /*0x69587f*/
        *(float *)&v3[3].members.m_extraDataListLen = g_zeroNiPoint3.z; /*0x69588a*/
        v4 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x69588d*/
        v5 = (BSShaderProperty *)v4; /*0x695892*/
        v26 = 0; /*0x69589d*/
        if ( v4 ) /*0x6958a5*/
        {
          NiObjectNET::NiObjectNET(v4); /*0x6958a9*/
          v5->vtbl = &NiVertexColorProperty::`vftable'; /*0x6958ae*/
          v5->member.super.flags = 8; /*0x6958b4*/
        }
        else
        {
          v5 = 0; /*0x6958bc*/
        }
        v5->member.super.flags &= 0xFFC7u; /*0x6958be*/
        sub_405680((NiNode *)v3, v5); /*0x6958ce*/
        v6 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x6958d5*/
        v7 = (BSShaderProperty *)v6; /*0x6958da*/
        v26 = 1; /*0x6958e5*/
        if ( v6 ) /*0x6958ed*/
        {
          NiObjectNET::NiObjectNET(v6); /*0x6958f1*/
          v7->vtbl = &NiZBufferProperty::`vftable'; /*0x6958f6*/
          v7->member.super.flags = 0xF; /*0x6958fc*/
          v8 = v7; /*0x695902*/
        }
        else
        {
          v8 = 0; /*0x695906*/
        }
        v8->member.super.flags |= 3u; /*0x695908*/
        sub_405680((NiNode *)v3, v8); /*0x695914*/
        v9 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x69591b*/
        v10 = (BSShaderProperty *)v9; /*0x695920*/
        v26 = 2; /*0x69592b*/
        if ( v9 ) /*0x695933*/
        {
          NiObjectNET::NiObjectNET(v9); /*0x695937*/
          v10->vtbl = &NiWireframeProperty::`vftable'; /*0x69593c*/
          v10->member.super.flags = 0; /*0x695942*/
          v11 = v10; /*0x695948*/
        }
        else
        {
          v11 = 0; /*0x69594c*/
        }
        v11->member.super.flags |= 1u; /*0x695953*/
        v26 = 0xFFFFFFFF; /*0x69595a*/
        sub_405680((NiNode *)v3, v11); /*0x69595e*/
        v23 = 0.0; /*0x695965*/
        v24 = 0.0; /*0x69596d*/
        v25 = 0.0; /*0x695974*/
        CollisionFilterInfo = MobileObject_GetCollisionFilterInfo(this, (TESObjectREFR *)&v22); /*0x695978*/
        sub_8A8140((char)CollisionFilterInfo->vtbl, &v23); /*0x695985*/
        v13 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x69598c*/
        v26 = 3; /*0x69599a*/
        if ( v13 ) /*0x6959a2*/
          v14 = NiMaterialProperty::NiMaterialProperty(v13); /*0x6959a6*/
        else
          v14 = 0; /*0x6959ad*/
        *((_DWORD *)v14 + 7) = LODWORD(stru_B25AC4.x); /*0x6959b5*/
        *((_DWORD *)v14 + 8) = LODWORD(stru_B25AC4.y); /*0x6959be*/
        z = stru_B25AC4.z; /*0x6959c1*/
        ++*((_DWORD *)v14 + 0x15); /*0x6959c7*/
        *((float *)v14 + 9) = z; /*0x6959ca*/
        v16 = *((_DWORD *)v14 + 0x15); /*0x6959d3*/
        *((_DWORD *)v14 + 0xA) = LODWORD(stru_B25AC4.x); /*0x6959d6*/
        *((_DWORD *)v14 + 0xB) = LODWORD(stru_B25AC4.y); /*0x6959df*/
        v17 = stru_B25AC4.z; /*0x6959e2*/
        *((_DWORD *)v14 + 0x15) = ++v16; /*0x6959eb*/
        *((float *)v14 + 0xC) = v17; /*0x6959ee*/
        *((float *)v14 + 0x10) = v23; /*0x6959f5*/
        *((float *)v14 + 0x11) = v24; /*0x6959fc*/
        v18 = v25; /*0x6959ff*/
        *((_DWORD *)v14 + 0x15) = v16 + 1; /*0x695a06*/
        v26 = 0xFFFFFFFF; /*0x695a0c*/
        *((float *)v14 + 0x12) = v18; /*0x695a10*/
        sub_405680((NiNode *)v3, (BSShaderProperty *)v14); /*0x695a13*/
        ((void (__thiscall *)(NiAVObject *, NiObjectNET *, _DWORD))v21->vtbl[1].super.super.Destructor)(v21, v3, 0); /*0x695a29*/
        NiAVObject_InitializePropertyState(v21); /*0x695a2d*/
      }
    }
  }
}
