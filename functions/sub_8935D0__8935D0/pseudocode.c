NiObject *__thiscall sub_8935D0(__m128 *this, float m_uiRefCount)
{
  NiObject *result; // eax
  NiNode *v4; // esi
  NiObject *v5; // edi
  int **v6; // ecx
  NiAVObject *ChildAtIndex; // eax
  NiObject *v8; // eax
  void (__thiscall *Unk_0E)(NiObject *); // eax
  float *v10; // eax
  double v11; // st7
  NiObject *v12; // eax
  BSShaderProperty *v13; // edi
  BSShaderProperty *v14; // eax
  NiObject *v15; // eax
  BSShaderProperty *v16; // edi
  BSShaderProperty *v17; // eax
  NiObject *v18; // eax
  BSShaderProperty *v19; // edi
  BSShaderProperty *v20; // eax
  _DWORD *CollisionFilterInfo; // eax
  NiMaterialProperty *v22; // eax
  NiMaterialProperty *v23; // eax
  float z; // ecx
  int v25; // ecx
  float v26; // edx
  float v27; // edx
  int v28; // eax
  float v29; // [esp+14h] [ebp-3Ch]
  float v30; // [esp+18h] [ebp-38h]
  float v32; // [esp+20h] [ebp-30h] BYREF
  float v33; // [esp+24h] [ebp-2Ch]
  float v34; // [esp+28h] [ebp-28h]
  float v35; // [esp+2Ch] [ebp-24h]
  float v36; // [esp+30h] [ebp-20h]
  float v37; // [esp+34h] [ebp-1Ch]
  float v38[3]; // [esp+38h] [ebp-18h] BYREF
  int v39; // [esp+4Ch] [ebp-4h]

  result = (NiObject *)sub_891160((int ***)this); /*0x8935fd*/
  v4 = 0; /*0x893602*/
  if ( !result ) /*0x893606*/
  {
    v5 = (NiObject *)LODWORD(m_uiRefCount); /*0x89360c*/
    if ( m_uiRefCount != 0.0 ) /*0x893612*/
      goto LABEL_9; /*0x893612*/
    v6 = *((int ***)this + 0xD9); /*0x893614*/
    if ( v6 ) /*0x89361c*/
    {
      result = sub_89F6B0(v6, 0); /*0x893623*/
      if ( result ) /*0x89362a*/
      {
        result = result->__vftable->Unk_02(result); /*0x893637*/
        v5 = result; /*0x893639*/
        if ( result ) /*0x89363d*/
        {
          if ( HIWORD(result[0x16].members.m_uiRefCount) ) /*0x893643*/
          {
            ChildAtIndex = NiNode_GetChildAtIndex((NiNode *)result, 0); /*0x89364f*/
            result = NiRTTI_Cast((BSStringT *)&parent, (NiObject *)ChildAtIndex); /*0x89365a*/
            v5 = result; /*0x893662*/
          }
          if ( v5 ) /*0x893666*/
          {
LABEL_9:
            result = (NiObject *)sub_890BA0((int *)this); /*0x89366e*/
            if ( result ) /*0x893675*/
            {
              *(float *)&v8 = COERCE_FLOAT(FormHeapAlloc(0xDCu)); /*0x893680*/
              m_uiRefCount = *(float *)&v8; /*0x893688*/
              v39 = 0; /*0x89368e*/
              if ( *(float *)&v8 != 0.0 ) /*0x893692*/
                v4 = NiNode::NiNode((NiNode *)v8, 0); /*0x89369c*/
              Unk_0E = v5->__vftable[1].Unk_0E; /*0x8936a0*/
              v39 = 0xFFFFFFFF; /*0x8936ae*/
              ((void (__thiscall *)(NiObject *, NiNode *, _DWORD))Unk_0E)(v5, v4, 0); /*0x8936b2*/
              NiObjectNET_SetName((NiObjectNET *)v4, "bhkColDisp"); /*0x8936bb*/
              m_uiRefCount = 1.0 / *(float *)&v5[0x12].members.m_uiRefCount; /*0x8936de*/
              v10 = HavokVector_ToWorldVector(v38, this + 0x34); /*0x8936e2*/
              v11 = m_uiRefCount; /*0x8936f4*/
              m_uiRefCount = *v10 * m_uiRefCount; /*0x8936f6*/
              v29 = v10[1] * v11; /*0x8936ff*/
              v30 = v11 * v10[2]; /*0x893706*/
              v35 = m_uiRefCount; /*0x89370e*/
              v4->members.super.m_localTransform.pos.x = m_uiRefCount; /*0x89371a*/
              v36 = v29; /*0x89371d*/
              v4->members.super.m_localTransform.pos.y = v29; /*0x893729*/
              v37 = v30; /*0x89372c*/
              v4->members.super.m_localTransform.pos.z = v30; /*0x893734*/
              m_uiRefCount = *(float *)&v5[0x12].members.m_uiRefCount; /*0x89373d*/
              if ( 0.0 != m_uiRefCount ) /*0x89374c*/
              {
                m_uiRefCount = 1.0 / *(float *)&v5[0x12].members.m_uiRefCount; /*0x893760*/
                m_uiRefCount = fabs(m_uiRefCount); /*0x89376a*/
                v4->members.super.m_localTransform.scale = m_uiRefCount; /*0x893772*/
              }
              *(float *)&v12 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x893777*/
              v13 = (BSShaderProperty *)v12; /*0x89377c*/
              m_uiRefCount = *(float *)&v12; /*0x893781*/
              v39 = 1; /*0x893787*/
              if ( *(float *)&v12 == 0.0 ) /*0x89378f*/
              {
                v14 = 0; /*0x8937a8*/
              }
              else
              {
                NiObjectNET::NiObjectNET((NiObjectNET *)v12); /*0x893793*/
                v13->vtbl = &NiVertexColorProperty::`vftable'; /*0x893798*/
                v13->member.super.flags = 8; /*0x89379e*/
                v14 = v13; /*0x8937a4*/
              }
              v14->member.super.flags &= 0xFFC7u; /*0x8937aa*/
              v39 = 0xFFFFFFFF; /*0x8937b3*/
              sub_405680(v4, v14); /*0x8937b7*/
              *(float *)&v15 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x8937be*/
              v16 = (BSShaderProperty *)v15; /*0x8937c3*/
              m_uiRefCount = *(float *)&v15; /*0x8937c8*/
              v39 = 2; /*0x8937ce*/
              if ( *(float *)&v15 == 0.0 ) /*0x8937d6*/
              {
                v17 = 0; /*0x8937ef*/
              }
              else
              {
                NiObjectNET::NiObjectNET((NiObjectNET *)v15); /*0x8937da*/
                v16->vtbl = &NiZBufferProperty::`vftable'; /*0x8937df*/
                v16->member.super.flags = 0xF; /*0x8937e5*/
                v17 = v16; /*0x8937eb*/
              }
              v17->member.super.flags |= 3u; /*0x8937f6*/
              v39 = 0xFFFFFFFF; /*0x8937fd*/
              sub_405680(v4, v17); /*0x893801*/
              *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x893808*/
              v19 = (BSShaderProperty *)v18; /*0x89380d*/
              m_uiRefCount = *(float *)&v18; /*0x893812*/
              v39 = 3; /*0x893818*/
              if ( *(float *)&v18 == 0.0 ) /*0x89381c*/
              {
                v20 = 0; /*0x893835*/
              }
              else
              {
                NiObjectNET::NiObjectNET((NiObjectNET *)v18); /*0x893820*/
                v19->vtbl = &NiWireframeProperty::`vftable'; /*0x893825*/
                v19->member.super.flags = 0; /*0x89382b*/
                v20 = v19; /*0x893831*/
              }
              v20->member.super.flags |= 1u; /*0x89383c*/
              v39 = 0xFFFFFFFF; /*0x893843*/
              sub_405680(v4, v20); /*0x893847*/
              v32 = 0.0; /*0x893852*/
              v33 = 0.0; /*0x89385a*/
              v34 = 0.0; /*0x89385f*/
              CollisionFilterInfo = bhkCharacterProxy_GetCollisionFilterInfo(this, &m_uiRefCount); /*0x893865*/
              sub_8A8140(*CollisionFilterInfo, &v32); /*0x893872*/
              v22 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x893879*/
              v39 = 4; /*0x893887*/
              if ( v22 ) /*0x89388f*/
                v23 = NiMaterialProperty::NiMaterialProperty(v22); /*0x893893*/
              else
                v23 = 0; /*0x89389a*/
              *((_DWORD *)v23 + 7) = LODWORD(stru_B25AC4.x); /*0x8938a2*/
              *((_DWORD *)v23 + 8) = LODWORD(stru_B25AC4.y); /*0x8938ab*/
              z = stru_B25AC4.z; /*0x8938ae*/
              ++*((_DWORD *)v23 + 0x15); /*0x8938b4*/
              *((float *)v23 + 9) = z; /*0x8938b7*/
              v25 = *((_DWORD *)v23 + 0x15); /*0x8938c0*/
              *((_DWORD *)v23 + 0xA) = LODWORD(stru_B25AC4.x); /*0x8938c3*/
              *((_DWORD *)v23 + 0xB) = LODWORD(stru_B25AC4.y); /*0x8938cc*/
              v26 = stru_B25AC4.z; /*0x8938cf*/
              *((_DWORD *)v23 + 0x15) = ++v25; /*0x8938d8*/
              *((float *)v23 + 0xC) = v26; /*0x8938db*/
              *((float *)v23 + 0x10) = v32; /*0x8938e2*/
              *((float *)v23 + 0x11) = v33; /*0x8938e9*/
              v27 = v34; /*0x8938ec*/
              *((_DWORD *)v23 + 0x15) = v25 + 1; /*0x8938f3*/
              v39 = 0xFFFFFFFF; /*0x8938f9*/
              *((float *)v23 + 0x12) = v27; /*0x8938fd*/
              sub_405680(v4, (BSShaderProperty *)v23); /*0x893900*/
              v28 = sub_890BA0((int *)this); /*0x893907*/
              (*(void (__thiscall **)(int, NiNode *))(*(_DWORD *)v28 + 0x90))(v28, v4); /*0x893917*/
              NiAVObject_InitializePropertyState((NiAVObject *)v4); /*0x89391b*/
              result = (NiObject *)unk_BA7A84; /*0x893920*/
              if ( unk_BA7A84 ) /*0x893920*/
                result = (NiObject *)((int (__cdecl *)(NiNode *))result)(v4); /*0x89392a*/
              *((_DWORD *)this + 0x7D) |= 0x8000u; /*0x89392f*/
            }
          }
        }
      }
    }
  }
  return result; /*0x893939*/
}
