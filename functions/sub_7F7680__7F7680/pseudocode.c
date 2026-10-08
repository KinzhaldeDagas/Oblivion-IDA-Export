int __thiscall sub_7F7680(int *this, _DWORD *a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  NiGeometry **v5; // ecx
  NiGeometry *v6; // ebx
  NiGeometryData *geomData; // edx
  NiObject *shader; // ebp
  void **v9; // edi
  NiDynamicEffectState *v10; // edi
  volatile LONG *BuffData; // edi
  NiGeometry **v12; // eax
  volatile LONG *v13; // esi
  void (__thiscall *Save)(NiObject *, NiStream *); // edx
  NiGeometry **v15; // eax
  bool (__thiscall *Compare)(NiObject *, NiObject *); // edx
  NiGeometry **v17; // eax
  void (__thiscall *DumpAttributes)(NiObject *, void *); // edx
  NiGeometry **v19; // eax
  void (__thiscall *DumpChildAttributes)(NiObject *, void *); // edx
  NiGeometry **v21; // eax
  void (__thiscall *Unk_0E)(NiObject *); // edx
  volatile LONG *v23; // esi
  unsigned int v24; // edx
  _DWORD *v25; // eax
  _DWORD *v26; // ecx
  NiGeometry **v27; // eax
  NiGeometryData *v28; // edx
  void **v29; // esi
  volatile LONG *v30; // edi
  _DWORD *v32; // edx
  NiDynamicEffectState *v33; // eax
  NiGeometry *v34; // ebx
  NiGeometryData *v35; // esi
  _DWORD *v36; // eax
  bool v37; // zf
  NiDynamicEffectState *v38; // ecx
  volatile LONG *v39; // edx
  NiGeometry **v40; // eax
  volatile LONG *v41; // edi
  volatile LONG *v42; // esi
  bool (__thiscall *v43)(NiObject *, NiObject *); // edx
  NiGeometry **v44; // eax
  void (__thiscall *v45)(NiObject *, void *); // edx
  NiDX9RenderState *renderState; // edi
  void (__thiscall **p_SetVertexShader)(NiDX9RenderState *, int); // esi
  int v48; // eax
  NiDX9RenderState *v49; // edi
  void (__thiscall **p_SetPixelShader)(NiDX9RenderState *, int); // esi
  int v51; // eax
  NiRTTI *(__thiscall *GetType)(NiObject *); // edx
  unsigned __int16 v53; // ax
  float x; // edx
  int vftable_low; // ecx
  int v56; // eax
  volatile LONG *InnerTexture; // eax
  volatile LONG *v58; // ecx
  NiGeometry *v59; // [esp+104h] [ebp-E0h]
  NiGeometry *v60; // [esp+104h] [ebp-E0h]
  NiGeometry *v61; // [esp+104h] [ebp-E0h]
  NiGeometry *v62; // [esp+104h] [ebp-E0h]
  NiGeometry *v63; // [esp+104h] [ebp-E0h]
  NiGeometry *v64; // [esp+104h] [ebp-E0h]
  NiGeometry *v65; // [esp+104h] [ebp-E0h]
  volatile LONG *v66; // [esp+124h] [ebp-C0h] BYREF
  volatile LONG *m_uiRefCount; // [esp+128h] [ebp-BCh] BYREF
  NiDynamicEffectState *v68; // [esp+12Ch] [ebp-B8h]
  void *v69; // [esp+130h] [ebp-B4h]
  volatile LONG *v70; // [esp+134h] [ebp-B0h] BYREF
  int *v71; // [esp+138h] [ebp-ACh]
  NiGeometryData *v72; // [esp+13Ch] [ebp-A8h]
  _DWORD *v73; // [esp+140h] [ebp-A4h]
  NiDX9Renderer *v74; // [esp+144h] [ebp-A0h]
  volatile LONG *v75; // [esp+148h] [ebp-9Ch] BYREF
  NiBound m_kWorldBound; // [esp+14Ch] [ebp-98h] BYREF
  volatile LONG *v77; // [esp+15Ch] [ebp-88h] BYREF
  volatile LONG *v78; // [esp+160h] [ebp-84h] BYREF
  float v79[13]; // [esp+164h] [ebp-80h] BYREF
  float v80[16]; // [esp+198h] [ebp-4Ch] BYREF
  int v81; // [esp+1E0h] [ebp-4h]

  v71 = this; /*0x7f76ad*/
  v74 = renderer; /*0x7f76bd*/
  v3 = a2[1]; /*0x7f76c1*/
  v4 = *(_DWORD **)v3; /*0x7f76c4*/
  v5 = *(NiGeometry ***)(v3 + 8); /*0x7f76c9*/
  v6 = *v5; /*0x7f76cb*/
  geomData = (*v5)->member.geomData; /*0x7f76cd*/
  shader = (*v5)->member.shader; /*0x7f76d3*/
  v68 = (NiDynamicEffectState *)v5; /*0x7f76dd*/
  v73 = v4; /*0x7f76e4*/
  v72 = geomData; /*0x7f76e8*/
  v9 = (void **)*NiGeometry_GetPropertyState(v6, &v70); /*0x7f76f1*/
  v66 = (volatile LONG *)v9; /*0x7f76f9*/
  if ( v70 ) /*0x7f76fd*/
  {
    m_uiRefCount = v70; /*0x7f76ff*/
    if ( !InterlockedDecrement(v70 + 1) ) /*0x7f7707*/
      (**(void (__thiscall ***)(volatile LONG *, int))m_uiRefCount)(m_uiRefCount, 1); /*0x7f771f*/
  }
  v69 = v9[6]; /*0x7f7724*/
  if ( *(_WORD *)(*((_DWORD *)v69 + 0x27) + 0xE) ) /*0x7f772e*/
  {
LABEL_5:
    qmemcpy(v79, &v6->member.super.m_worldTransform, sizeof(v79)); /*0x7f7739*/
    v10 = v68; /*0x7f7751*/
    m_kWorldBound = v6->member.super.m_kWorldBound; /*0x7f7755*/
    LODWORD(unk_B42E90) = (unsigned __int16)a3; /*0x7f7771*/
    *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v10; /*0x7f7776*/
    OB_BSShader_ResetLightConstantSlots_010201A0(); /*0x7f777c*/
    OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v10, (int)v69, 0); /*0x7f7790*/
    sub_7F6A30(v6); /*0x7f7798*/
    BuffData = (volatile LONG *)v72->member.BuffData; /*0x7f77a1*/
    v12 = sub_7016D0(v6, (NiDynamicEffectState **)&m_uiRefCount); /*0x7f77ab*/
    v13 = v66; /*0x7f77b2*/
    Save = shader->__vftable->Save; /*0x7f77b9*/
    v59 = *v12; /*0x7f77c6*/
    v81 = 0; /*0x7f77ce*/
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))Save)( /*0x7f77d9*/
      shader,
      v6,
      0,
      BuffData,
      v66,
      v59,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF; /*0x7f77e1*/
    if ( m_uiRefCount ) /*0x7f77ec*/
    {
      v66 = m_uiRefCount; /*0x7f77ee*/
      if ( !InterlockedDecrement(m_uiRefCount + 1) ) /*0x7f77f6*/
        (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1); /*0x7f780e*/
    }
    v15 = sub_7016D0(v6, (NiDynamicEffectState **)&v66); /*0x7f7817*/
    Compare = shader->__vftable->Compare; /*0x7f7821*/
    v60 = *v15; /*0x7f782e*/
    v81 = 1; /*0x7f7836*/
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))Compare)( /*0x7f7841*/
      shader,
      v6,
      0,
      BuffData,
      v13,
      v60,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF; /*0x7f7849*/
    if ( v66 ) /*0x7f7854*/
    {
      m_uiRefCount = v66; /*0x7f7856*/
      if ( !InterlockedDecrement(v66 + 1) ) /*0x7f785e*/
      {
        if ( m_uiRefCount ) /*0x7f786e*/
          (**(void (__thiscall ***)(volatile LONG *, int))m_uiRefCount)(m_uiRefCount, 1); /*0x7f7876*/
      }
    }
    ((void (__thiscall *)(NiObject *))shader->__vftable->Unk_12)(shader); /*0x7f7880*/
    m_uiRefCount = (volatile LONG *)shader[7].members.m_uiRefCount; /*0x7f788c*/
    v17 = sub_7016D0(v6, (NiDynamicEffectState **)&v66); /*0x7f7890*/
    DumpAttributes = shader->__vftable->DumpAttributes; /*0x7f789a*/
    v61 = *v17; /*0x7f78a7*/
    v81 = 2; /*0x7f78af*/
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))DumpAttributes)( /*0x7f78ba*/
      shader,
      v6,
      0,
      BuffData,
      v13,
      v61,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF; /*0x7f78c2*/
    if ( v66 ) /*0x7f78cd*/
    {
      v68 = (NiDynamicEffectState *)v66; /*0x7f78cf*/
      if ( !InterlockedDecrement(v66 + 1) ) /*0x7f78d7*/
      {
        if ( v68 ) /*0x7f78e7*/
          (**(void (__thiscall ***)(NiDynamicEffectState *, int))v68)(v68, 1); /*0x7f78ef*/
      }
    }
    v19 = sub_7016D0(v6, (NiDynamicEffectState **)&v66); /*0x7f78f8*/
    DumpChildAttributes = shader->__vftable->DumpChildAttributes; /*0x7f7902*/
    v62 = *v19; /*0x7f790f*/
    v81 = 3; /*0x7f7919*/
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))DumpChildAttributes)( /*0x7f7924*/
      shader,
      v6,
      0,
      0,
      BuffData,
      v13,
      v62,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF; /*0x7f792c*/
    if ( v66 ) /*0x7f7937*/
    {
      v68 = (NiDynamicEffectState *)v66; /*0x7f7939*/
      if ( !InterlockedDecrement(v66 + 1) ) /*0x7f7941*/
      {
        if ( v68 ) /*0x7f7951*/
          (**(void (__thiscall ***)(NiDynamicEffectState *, int))v68)(v68, 1); /*0x7f7959*/
      }
    }
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *))shader->__vftable->Unk_0F)( /*0x7f7968*/
      shader,
      v6,
      0,
      BuffData,
      v13);
    v21 = sub_7016D0(v6, (NiDynamicEffectState **)&v66); /*0x7f7971*/
    Unk_0E = shader->__vftable->Unk_0E; /*0x7f797b*/
    v63 = *v21; /*0x7f7988*/
    v81 = 4; /*0x7f7992*/
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))Unk_0E)( /*0x7f799d*/
      shader,
      v6,
      0,
      0,
      BuffData,
      v13,
      v63,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF; /*0x7f79a5*/
    if ( v66 ) /*0x7f79b0*/
    {
      v23 = v66; /*0x7f79b2*/
      if ( !InterlockedDecrement(v66 + 1) ) /*0x7f79b8*/
        (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1); /*0x7f79ce*/
    }
    v6->__vftable->Unk_22(v6, (NiRenderer *)renderer); /*0x7f79e1*/
    v24 = 4 * dword_B28CB0; /*0x7f79ed*/
    v70 = (volatile LONG *)v72; /*0x7f79f4*/
    _memset(*v71, 0, v24); /*0x7f7a02*/
    v25 = v73; /*0x7f7a07*/
    if ( v73 ) /*0x7f7a10*/
    {
      while ( 1 ) /*0x7f7ac4*/
      {
        v32 = (_DWORD *)*v25; /*0x7f7ac4*/
        v33 = (NiDynamicEffectState *)v25[2]; /*0x7f7ac9*/
        v34 = *(NiGeometry **)v33; /*0x7f7acb*/
        v35 = *(NiGeometryData **)(*(_DWORD *)v33 + 0xB4); /*0x7f7acd*/
        v68 = v33; /*0x7f7ad3*/
        v73 = v32; /*0x7f7ade*/
        v72 = v35; /*0x7f7ae2*/
        v66 = *NiGeometry_GetPropertyState(v34, &v75); /*0x7f7af3*/
        if ( v75 ) /*0x7f7af7*/
        {
          v69 = (void *)v75; /*0x7f7af9*/
          if ( !InterlockedDecrement(v75 + 1) ) /*0x7f7b01*/
          {
            if ( v69 ) /*0x7f7b11*/
              (**(void (__thiscall ***)(void *, int))v69)(v69, 1); /*0x7f7b19*/
          }
        }
        v36 = *((_DWORD **)v66 + 6); /*0x7f7b1f*/
        v37 = *(_WORD *)(v36[0x27] + 0xE) == 0; /*0x7f7b28*/
        v69 = v36; /*0x7f7b2d*/
        if ( !v37 ) /*0x7f7b31*/
        {
          v37 = v70 == (volatile LONG *)v35; /*0x7f7b37*/
          LODWORD(unk_B42E90) = (unsigned __int16)a3; /*0x7f7b45*/
          v38 = v68; /*0x7f7b4b*/
          *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v68; /*0x7f7b4f*/
          if ( v37 ) /*0x7f7b55*/
          {
            OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v38, (int)v36, 0); /*0x7f7d24*/
            sub_7E6A90((void **)&shader->__vftable, (int)v34, (int)v69); /*0x7f7d31*/
            GetType = v35->__vftable[1].super.GetType; /*0x7f7d49*/
            if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)v69 + 0x27) + 4) + 0x30) ) /*0x7f7d45*/
            {
              v53 = (int)GetType((NiObject *)v35); /*0x7f7d50*/
              x = v35[1].member.m_kBound.Center.x; /*0x7f7d52*/
            }
            else
            {
              v53 = (int)GetType((NiObject *)v35); /*0x7f7d57*/
              x = *(float *)&v35[1].member.m_usVertices; /*0x7f7d59*/
            }
            vftable_low = LOWORD(v35[1].__vftable); /*0x7f7d70*/
            *((_DWORD *)BuffData + 0xF) = v53; /*0x7f7d73*/
            *((_DWORD *)BuffData + 0x10) = vftable_low; /*0x7f7d76*/
            *((float *)BuffData + 0x13) = x; /*0x7f7d79*/
            *((_DWORD *)BuffData + 0x12) = 0; /*0x7f7d7c*/
            *((_DWORD *)BuffData + 0x11) = 1; /*0x7f7d83*/
            if ( (_WORD)a3 == 0x197 ) /*0x7f7d8a*/
            {
              v56 = *((_DWORD *)v68 + 3); /*0x7f7d9e*/
              v72 = *(NiGeometryData **)(*((_DWORD *)m_uiRefCount + 9) + 4); /*0x7f7da1*/
              InnerTexture = (volatile LONG *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(*(_DWORD *)v56 + 0x114)); /*0x7f7dad*/
              v58 = (volatile LONG *)v72->member.super.m_uiRefCount; /*0x7f7db6*/
              v70 = InnerTexture; /*0x7f7dbb*/
              v66 = v58; /*0x7f7dbf*/
              if ( v58 != InnerTexture ) /*0x7f7dc3*/
              {
                if ( v58 ) /*0x7f7dc7*/
                {
                  if ( !InterlockedDecrement(v58 + 1) ) /*0x7f7dcd*/
                  {
                    if ( v66 ) /*0x7f7ddd*/
                      (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1); /*0x7f7de5*/
                  }
                  InnerTexture = v70; /*0x7f7de7*/
                }
                v72->member.super.m_uiRefCount = (UInt32)InnerTexture; /*0x7f7df1*/
                if ( InnerTexture ) /*0x7f7df4*/
                  InterlockedIncrement(InnerTexture + 1); /*0x7f7dfa*/
              }
              sub_7E6310((float *)shader, 0, v79); /*0x7f7e09*/
            }
            else if ( unk_B43344 ) /*0x7f7e10*/
            {
              if ( (unsigned __int16)BSShaderLightingProperty__CountFrustumVisibleEnabledLights(v69) ) /*0x7f7e1d*/
              {
                sub_7F5B80(v79, (NiPoint3 *)v80); /*0x7f7e38*/
                sub_7E61C0((float *)shader, (int)v69, (int)v80, SLODWORD(v79[0xC]), (unsigned __int16)a3); /*0x7f7e60*/
              }
            }
            sub_7F6BF0(v71, v34, (int)shader, (int)m_uiRefCount, 0); /*0x7f7e72*/
          }
          else
          {
            sub_7F6A30(v34); /*0x7f7b60*/
            v39 = (volatile LONG *)v35->member.BuffData; /*0x7f7b65*/
            qmemcpy(v79, &v34->member.super.m_worldTransform, sizeof(v79)); /*0x7f7b74*/
            m_kWorldBound.Center.x = v34->member.super.m_kWorldBound.Center.x; /*0x7f7b79*/
            m_kWorldBound.Center.y = v34->member.super.m_kWorldBound.Center.y; /*0x7f7b80*/
            v70 = v39; /*0x7f7b88*/
            m_kWorldBound.Center.z = v34->member.super.m_kWorldBound.Center.z; /*0x7f7b91*/
            m_kWorldBound.Radius = v34->member.super.m_kWorldBound.Radius; /*0x7f7ba1*/
            OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, (int)v68, (int)v69, 0); /*0x7f7bae*/
            v40 = sub_7016D0(v34, (NiDynamicEffectState **)&v78); /*0x7f7bba*/
            v41 = v66; /*0x7f7bc1*/
            v42 = v70; /*0x7f7bc5*/
            v43 = shader->__vftable->Compare; /*0x7f7bcc*/
            v64 = *v40; /*0x7f7bd9*/
            v81 = 5; /*0x7f7be1*/
            ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))v43)( /*0x7f7bec*/
              shader,
              v34,
              0,
              v70,
              v66,
              v64,
              v79,
              &m_kWorldBound);
            v81 = 0xFFFFFFFF; /*0x7f7bf4*/
            if ( v78 ) /*0x7f7bff*/
            {
              v66 = v78; /*0x7f7c01*/
              if ( !InterlockedDecrement(v78 + 1) ) /*0x7f7c09*/
              {
                if ( v66 ) /*0x7f7c19*/
                  (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1); /*0x7f7c21*/
              }
            }
            ((void (__thiscall *)(NiObject *))shader->__vftable->Unk_12)(shader); /*0x7f7c2b*/
            m_uiRefCount = (volatile LONG *)shader[7].members.m_uiRefCount; /*0x7f7c37*/
            v44 = sub_7016D0(v34, (NiDynamicEffectState **)&v77); /*0x7f7c3b*/
            v45 = shader->__vftable->DumpChildAttributes; /*0x7f7c45*/
            v65 = *v44; /*0x7f7c52*/
            v81 = 6; /*0x7f7c5c*/
            ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))v45)( /*0x7f7c67*/
              shader,
              v34,
              0,
              0,
              v42,
              v41,
              v65,
              v79,
              &m_kWorldBound);
            v81 = 0xFFFFFFFF; /*0x7f7c6f*/
            if ( v77 ) /*0x7f7c7a*/
            {
              v66 = v77; /*0x7f7c7c*/
              if ( !InterlockedDecrement(v77 + 1) ) /*0x7f7c84*/
              {
                if ( v66 ) /*0x7f7c94*/
                  (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1); /*0x7f7c9c*/
              }
            }
            ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *))shader->__vftable->Unk_0F)( /*0x7f7cab*/
              shader,
              v34,
              0,
              v42,
              v41);
            renderState = v74->member.renderState; /*0x7f7cb8*/
            p_SetVertexShader = (void (__thiscall **)(NiDX9RenderState *, int))&renderState->vtbl->SetVertexShader; /*0x7f7cc7*/
            v48 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)m_uiRefCount + 0x16) + 0x40))( /*0x7f7ccd*/
                    *((_DWORD *)m_uiRefCount + 0x16),
                    0);
            (*p_SetVertexShader)(renderState, v48); /*0x7f7cd4*/
            v49 = v74->member.renderState; /*0x7f7ce1*/
            p_SetPixelShader = (void (__thiscall **)(NiDX9RenderState *, int))&v49->vtbl->SetPixelShader; /*0x7f7cf0*/
            v51 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)m_uiRefCount + 0x11) + 0x38))( /*0x7f7cf3*/
                    *((_DWORD *)m_uiRefCount + 0x11),
                    0);
            (*p_SetPixelShader)(v49, v51); /*0x7f7cfa*/
            sub_7F6BF0(v71, v34, (int)shader, (int)m_uiRefCount, 0); /*0x7f7d09*/
            v35 = v72; /*0x7f7d0e*/
            BuffData = v70; /*0x7f7d12*/
          }
          v70 = (volatile LONG *)v35; /*0x7f7e77*/
        }
        if ( !v73 ) /*0x7f7e80*/
          break; /*0x7f7e80*/
        v25 = v73; /*0x7f7ac0*/
      }
    }
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)a2); /*0x7f7e8f*/
    a2[3] = a2[1]; /*0x7f7e99*/
    a2[1] = 0; /*0x7f7e9c*/
    a2[2] = 0; /*0x7f7e9f*/
    a2[4] = 0; /*0x7f7ea2*/
    ((void (__thiscall *)(NiObject *))shader->__vftable[1].super.Destructor)(shader); /*0x7f7ead*/
    return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))v74->member.renderState->vtbl->SetVar_0FF5)( /*0x7f7ec2*/
             v74->member.renderState,
             0);
  }
  else
  {
    while ( v4 ) /*0x7f7a26*/
    {
      v26 = (_DWORD *)*v4; /*0x7f7a28*/
      v27 = (NiGeometry **)v4[2]; /*0x7f7a2d*/
      v6 = *v27; /*0x7f7a2f*/
      v28 = (*v27)->member.geomData; /*0x7f7a31*/
      shader = (*v27)->member.shader; /*0x7f7a37*/
      v68 = (NiDynamicEffectState *)v27; /*0x7f7a3d*/
      v73 = v26; /*0x7f7a45*/
      v72 = v28; /*0x7f7a4c*/
      v29 = (void **)*NiGeometry_GetPropertyState(v6, &v75); /*0x7f7a55*/
      v66 = (volatile LONG *)v29; /*0x7f7a5d*/
      if ( v75 ) /*0x7f7a61*/
      {
        v30 = v75; /*0x7f7a63*/
        if ( !InterlockedDecrement(v75 + 1) ) /*0x7f7a69*/
          (**(void (__thiscall ***)(volatile LONG *, int))v30)(v30, 1); /*0x7f7a7f*/
      }
      v69 = v29[6]; /*0x7f7a84*/
      if ( *(_WORD *)(*((_DWORD *)v69 + 0x27) + 0xE) ) /*0x7f7a8e*/
        goto LABEL_5; /*0x7f7a93*/
      v4 = v73; /*0x7f7a20*/
    }
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)a2); /*0x7f7aa3*/
    a2[3] = a2[1]; /*0x7f7aad*/
    a2[1] = 0; /*0x7f7ab0*/
    a2[2] = 0; /*0x7f7ab3*/
    a2[4] = 0; /*0x7f7ab6*/
    return 0; /*0x7f7aab*/
  }
}
