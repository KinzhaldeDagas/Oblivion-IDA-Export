NiObject *__thiscall sub_8935D0(__m128 *this, NiObject *m_uiRefCount)
{
  NiObject *result; // eax
  NiNode *v4; // esi
  NiObject *v5; // edi
  _DWORD *v6; // ecx
  NiObject *v7; // eax
  NiNode *v8; // eax
  void (__thiscall *Unk_0E)(NiObject *); // eax
  float *v10; // eax
  double v11; // st7
  NiObjectNET *v12; // eax
  BSShaderProperty *v13; // edi
  BSShaderProperty *v14; // eax
  NiObjectNET *v15; // eax
  BSShaderProperty *v16; // edi
  BSShaderProperty *v17; // eax
  NiObjectNET *v18; // eax
  BSShaderProperty *v19; // edi
  BSShaderProperty *v20; // eax
  _DWORD *v21; // eax
  NiMaterialProperty *v22; // eax
  NiMaterialProperty *v23; // eax
  int v24; // ecx
  int v25; // ecx
  int v26; // edx
  float v27; // edx
  int v28; // eax
  float v29; // [esp+14h] [ebp-3Ch]
  float v30; // [esp+18h] [ebp-38h]
  float v32; // [esp+20h] [ebp-30h] BYREF
  float v33; // [esp+24h] [ebp-2Ch]
  float v34; // [esp+28h] [ebp-28h]
  NiObject *v35; // [esp+2Ch] [ebp-24h]
  float v36; // [esp+30h] [ebp-20h]
  float v37; // [esp+34h] [ebp-1Ch]
  float v38[3]; // [esp+38h] [ebp-18h] BYREF
  int v39; // [esp+4Ch] [ebp-4h]

  result = (NiObject *)sub_891160(this);
  v4 = 0;
  if ( !result )
  {
    v5 = m_uiRefCount;
    if ( *(float *)&m_uiRefCount != 0.0 )
      goto LABEL_9;
    v6 = *((_DWORD **)this + 0xD9);
    if ( v6 )
    {
      result = (NiObject *)sub_89F6B0(v6, 0);
      if ( result )
      {
        result = result->__vftable->Unk_02(result);
        v5 = result;
        if ( result )
        {
          if ( HIWORD(result[0x16].members.m_uiRefCount) )
          {
            v7 = (NiObject *)sub_405790((int)result, 0);
            result = NiRTTI_Cast((BSStringT *)dword_B3FAB0, v7);
            v5 = result;
          }
          if ( v5 )
          {
LABEL_9:
            result = (NiObject *)sub_890BA0((int *)this);
            if ( result )
            {
              *(float *)&v8 = COERCE_FLOAT(FormHeapAlloc(0xDCu));
              m_uiRefCount = (NiObject *)v8;
              v39 = 0;
              if ( *(float *)&v8 != 0.0 )
                v4 = NiNode::NiNode(v8, 0);
              Unk_0E = v5->__vftable[1].Unk_0E;
              v39 = 0xFFFFFFFF;
              ((void (__thiscall *)(NiObject *, NiNode *, _DWORD))Unk_0E)(v5, v4, 0);
              NiObjectNET_SetName((NiObjectNET *)v4, "bhkColDisp");
              *(float *)&m_uiRefCount = 1.0 / *(float *)&v5[0x12].members.m_uiRefCount;
              v10 = sub_43F3E0(v38, this + 0x34);
              v11 = *(float *)&m_uiRefCount;
              *(float *)&m_uiRefCount = *v10 * *(float *)&m_uiRefCount;
              v29 = v10[1] * v11;
              v30 = v11 * v10[2];
              v35 = m_uiRefCount;
              v4->members.super.m_localTransform.pos.x = *(float *)&m_uiRefCount;
              v36 = v29;
              v4->members.super.m_localTransform.pos.y = v29;
              v37 = v30;
              v4->members.super.m_localTransform.pos.z = v30;
              m_uiRefCount = (NiObject *)v5[0x12].members.m_uiRefCount;
              if ( 0.0 != *(float *)&m_uiRefCount )
              {
                *(float *)&m_uiRefCount = 1.0 / *(float *)&v5[0x12].members.m_uiRefCount;
                *(float *)&m_uiRefCount = fabs(*(float *)&m_uiRefCount);
                v4->members.super.m_localTransform.scale = *(float *)&m_uiRefCount;
              }
              *(float *)&v12 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
              v13 = (BSShaderProperty *)v12;
              m_uiRefCount = (NiObject *)v12;
              v39 = 1;
              if ( *(float *)&v12 == 0.0 )
              {
                v14 = 0;
              }
              else
              {
                NiObjectNET::NiObjectNET(v12);
                v13->vtbl = &NiVertexColorProperty::`vftable';
                v13->member.super.flags = 8;
                v14 = v13;
              }
              v14->member.super.flags &= 0xFFC7u;
              v39 = 0xFFFFFFFF;
              sub_405680(v4, v14);
              *(float *)&v15 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
              v16 = (BSShaderProperty *)v15;
              m_uiRefCount = (NiObject *)v15;
              v39 = 2;
              if ( *(float *)&v15 == 0.0 )
              {
                v17 = 0;
              }
              else
              {
                NiObjectNET::NiObjectNET(v15);
                v16->vtbl = &NiZBufferProperty::`vftable';
                v16->member.super.flags = 0xF;
                v17 = v16;
              }
              v17->member.super.flags |= 3u;
              v39 = 0xFFFFFFFF;
              sub_405680(v4, v17);
              *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
              v19 = (BSShaderProperty *)v18;
              m_uiRefCount = (NiObject *)v18;
              v39 = 3;
              if ( *(float *)&v18 == 0.0 )
              {
                v20 = 0;
              }
              else
              {
                NiObjectNET::NiObjectNET(v18);
                v19->vtbl = &NiWireframeProperty::`vftable';
                v19->member.super.flags = 0;
                v20 = v19;
              }
              v20->member.super.flags |= 1u;
              v39 = 0xFFFFFFFF;
              sub_405680(v4, v20);
              v32 = 0.0;
              v33 = 0.0;
              v34 = 0.0;
              v21 = sub_57E270(this, &m_uiRefCount);
              sub_8A8140(*v21, &v32);
              v22 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
              v39 = 4;
              if ( v22 )
                v23 = NiMaterialProperty::NiMaterialProperty(v22);
              else
                v23 = 0;
              *((_DWORD *)v23 + 7) = dword_B25AC4;
              *((_DWORD *)v23 + 8) = dword_B25AC8;
              v24 = dword_B25ACC;
              ++*((_DWORD *)v23 + 0x15);
              *((_DWORD *)v23 + 9) = v24;
              v25 = *((_DWORD *)v23 + 0x15);
              *((_DWORD *)v23 + 0xA) = dword_B25AC4;
              *((_DWORD *)v23 + 0xB) = dword_B25AC8;
              v26 = dword_B25ACC;
              *((_DWORD *)v23 + 0x15) = ++v25;
              *((_DWORD *)v23 + 0xC) = v26;
              *((float *)v23 + 0x10) = v32;
              *((float *)v23 + 0x11) = v33;
              v27 = v34;
              *((_DWORD *)v23 + 0x15) = v25 + 1;
              v39 = 0xFFFFFFFF;
              *((float *)v23 + 0x12) = v27;
              sub_405680(v4, (BSShaderProperty *)v23);
              v28 = sub_890BA0((int *)this);
              (*(void (__thiscall **)(int, NiNode *))(*(_DWORD *)v28 + 0x90))(v28, v4);
              NiAVObject_InitializePropertyState((NiAVObject *)v4);
              result = (NiObject *)dword_BA7A84;
              if ( dword_BA7A84 )
                result = (NiObject *)((int (__cdecl *)(NiNode *))result)(v4);
              *((_DWORD *)this + 0x7D) |= 0x8000u;
            }
          }
        }
      }
    }
  }
  return result;
}
