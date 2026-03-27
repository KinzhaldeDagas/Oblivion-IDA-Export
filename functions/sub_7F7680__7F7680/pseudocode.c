int __thiscall sub_7F7680(int *this, _DWORD *a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  NiGeometry **v5; // ecx
  NiGeometry *v6; // ebx
  NiGeometryData *geomData; // edx
  NiObject *shader; // ebp
  volatile LONG *v9; // edi
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
  int v24; // edx
  _DWORD *v25; // eax
  _DWORD *v26; // ecx
  NiGeometry **v27; // eax
  NiGeometryData *v28; // edx
  volatile LONG *v29; // esi
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
  _DWORD *v69; // [esp+130h] [ebp-B4h]
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

  v71 = this;
  v74 = g_Renderer;
  v3 = a2[1];
  v4 = *(_DWORD **)v3;
  v5 = *(NiGeometry ***)(v3 + 8);
  v6 = *v5;
  geomData = (*v5)->member.geomData;
  shader = (*v5)->member.shader;
  v68 = (NiDynamicEffectState *)v5;
  v73 = v4;
  v72 = geomData;
  v9 = *sub_405760(v6, &v70);
  v66 = v9;
  if ( v70 )
  {
    m_uiRefCount = v70;
    if ( !InterlockedDecrement(v70 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))m_uiRefCount)(m_uiRefCount, 1);
  }
  v69 = *((_DWORD **)v9 + 6);
  if ( *(_WORD *)(v69[0x27] + 0xE) )
  {
LABEL_5:
    qmemcpy(v79, &v6->member.super.m_worldTransform, sizeof(v79));
    v10 = v68;
    m_kWorldBound = v6->member.super.m_kWorldBound;
    dword_B42E90 = (unsigned __int16)a3;
    dword_B42EB8 = (int)v10;
    sub_7ECB20();
    sub_7F60F0(a3, (int)v10, (int)v69, 0);
    sub_7F6A30(v6);
    BuffData = (volatile LONG *)v72->member.BuffData;
    v12 = sub_7016D0(v6, (NiDynamicEffectState **)&m_uiRefCount);
    v13 = v66;
    Save = shader->__vftable->Save;
    v59 = *v12;
    v81 = 0;
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))Save)(
      shader,
      v6,
      0,
      BuffData,
      v66,
      v59,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF;
    if ( m_uiRefCount )
    {
      v66 = m_uiRefCount;
      if ( !InterlockedDecrement(m_uiRefCount + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1);
    }
    v15 = sub_7016D0(v6, (NiDynamicEffectState **)&v66);
    Compare = shader->__vftable->Compare;
    v60 = *v15;
    v81 = 1;
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))Compare)(
      shader,
      v6,
      0,
      BuffData,
      v13,
      v60,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF;
    if ( v66 )
    {
      m_uiRefCount = v66;
      if ( !InterlockedDecrement(v66 + 1) )
      {
        if ( m_uiRefCount )
          (**(void (__thiscall ***)(volatile LONG *, int))m_uiRefCount)(m_uiRefCount, 1);
      }
    }
    ((void (__thiscall *)(NiObject *))shader->__vftable->Unk_12)(shader);
    m_uiRefCount = (volatile LONG *)shader[7].members.m_uiRefCount;
    v17 = sub_7016D0(v6, (NiDynamicEffectState **)&v66);
    DumpAttributes = shader->__vftable->DumpAttributes;
    v61 = *v17;
    v81 = 2;
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))DumpAttributes)(
      shader,
      v6,
      0,
      BuffData,
      v13,
      v61,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF;
    if ( v66 )
    {
      v68 = (NiDynamicEffectState *)v66;
      if ( !InterlockedDecrement(v66 + 1) )
      {
        if ( v68 )
          (**(void (__thiscall ***)(NiDynamicEffectState *, int))v68)(v68, 1);
      }
    }
    v19 = sub_7016D0(v6, (NiDynamicEffectState **)&v66);
    DumpChildAttributes = shader->__vftable->DumpChildAttributes;
    v62 = *v19;
    v81 = 3;
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))DumpChildAttributes)(
      shader,
      v6,
      0,
      0,
      BuffData,
      v13,
      v62,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF;
    if ( v66 )
    {
      v68 = (NiDynamicEffectState *)v66;
      if ( !InterlockedDecrement(v66 + 1) )
      {
        if ( v68 )
          (**(void (__thiscall ***)(NiDynamicEffectState *, int))v68)(v68, 1);
      }
    }
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *))shader->__vftable->Unk_0F)(
      shader,
      v6,
      0,
      BuffData,
      v13);
    v21 = sub_7016D0(v6, (NiDynamicEffectState **)&v66);
    Unk_0E = shader->__vftable->Unk_0E;
    v63 = *v21;
    v81 = 4;
    ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))Unk_0E)(
      shader,
      v6,
      0,
      0,
      BuffData,
      v13,
      v63,
      v79,
      &m_kWorldBound);
    v81 = 0xFFFFFFFF;
    if ( v66 )
    {
      v23 = v66;
      if ( !InterlockedDecrement(v66 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1);
    }
    v6->__vftable->Unk_22(v6, (NiRenderer *)g_Renderer);
    v24 = 4 * dword_B28CB0;
    v70 = (volatile LONG *)v72;
    _memset(*v71, 0, v24);
    v25 = v73;
    if ( v73 )
    {
      while ( 1 )
      {
        v32 = (_DWORD *)*v25;
        v33 = (NiDynamicEffectState *)v25[2];
        v34 = *(NiGeometry **)v33;
        v35 = *(NiGeometryData **)(*(_DWORD *)v33 + 0xB4);
        v68 = v33;
        v73 = v32;
        v72 = v35;
        v66 = *sub_405760(v34, &v75);
        if ( v75 )
        {
          v69 = v75;
          if ( !InterlockedDecrement(v75 + 1) )
          {
            if ( v69 )
              (*(void (__thiscall **)(_DWORD *, int))*v69)(v69, 1);
          }
        }
        v36 = *((_DWORD **)v66 + 6);
        v37 = *(_WORD *)(v36[0x27] + 0xE) == 0;
        v69 = v36;
        if ( !v37 )
        {
          v37 = v70 == (volatile LONG *)v35;
          dword_B42E90 = (unsigned __int16)a3;
          v38 = v68;
          dword_B42EB8 = (int)v68;
          if ( v37 )
          {
            sub_7F60F0(a3, (int)v38, (int)v36, 0);
            sub_7E6A90((void **)&shader->__vftable, (int)v34, (int)v69);
            GetType = v35->__vftable[1].super.GetType;
            if ( *(_BYTE *)(*(_DWORD *)(v69[0x27] + 4) + 0x30) )
            {
              v53 = (int)GetType((NiObject *)v35);
              x = v35[1].member.m_kBound.Center.x;
            }
            else
            {
              v53 = (int)GetType((NiObject *)v35);
              x = *(float *)&v35[1].member.m_usVertices;
            }
            vftable_low = LOWORD(v35[1].__vftable);
            *((_DWORD *)BuffData + 0xF) = v53;
            *((_DWORD *)BuffData + 0x10) = vftable_low;
            *((float *)BuffData + 0x13) = x;
            *((_DWORD *)BuffData + 0x12) = 0;
            *((_DWORD *)BuffData + 0x11) = 1;
            if ( (_WORD)a3 == 0x197 )
            {
              v56 = *((_DWORD *)v68 + 3);
              v72 = *(NiGeometryData **)(*((_DWORD *)m_uiRefCount + 9) + 4);
              InnerTexture = (volatile LONG *)BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(*(_DWORD *)v56 + 0x114));
              v58 = (volatile LONG *)v72->member.super.m_uiRefCount;
              v70 = InnerTexture;
              v66 = v58;
              if ( v58 != InnerTexture )
              {
                if ( v58 )
                {
                  if ( !InterlockedDecrement(v58 + 1) )
                  {
                    if ( v66 )
                      (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1);
                  }
                  InnerTexture = v70;
                }
                v72->member.super.m_uiRefCount = (UInt32)InnerTexture;
                if ( InnerTexture )
                  InterlockedIncrement(InnerTexture + 1);
              }
              sub_7E6310((float *)shader, 0, v79);
            }
            else if ( byte_B43344 )
            {
              if ( (unsigned __int16)sub_7ED600(v69) )
              {
                sub_7F5B80(v79, (NiPoint3 *)v80);
                sub_7E61C0((float *)shader, (int)v69, (int)v80, SLODWORD(v79[0xC]), (unsigned __int16)a3);
              }
            }
            sub_7F6BF0(v71, v34, (int)shader, (int)m_uiRefCount, 0);
          }
          else
          {
            sub_7F6A30(v34);
            v39 = (volatile LONG *)v35->member.BuffData;
            qmemcpy(v79, &v34->member.super.m_worldTransform, sizeof(v79));
            m_kWorldBound.Center.x = v34->member.super.m_kWorldBound.Center.x;
            m_kWorldBound.Center.y = v34->member.super.m_kWorldBound.Center.y;
            v70 = v39;
            m_kWorldBound.Center.z = v34->member.super.m_kWorldBound.Center.z;
            m_kWorldBound.Radius = v34->member.super.m_kWorldBound.Radius;
            sub_7F60F0(a3, (int)v68, (int)v69, 0);
            v40 = sub_7016D0(v34, (NiDynamicEffectState **)&v78);
            v41 = v66;
            v42 = v70;
            v43 = shader->__vftable->Compare;
            v64 = *v40;
            v81 = 5;
            ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))v43)(
              shader,
              v34,
              0,
              v70,
              v66,
              v64,
              v79,
              &m_kWorldBound);
            v81 = 0xFFFFFFFF;
            if ( v78 )
            {
              v66 = v78;
              if ( !InterlockedDecrement(v78 + 1) )
              {
                if ( v66 )
                  (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1);
              }
            }
            ((void (__thiscall *)(NiObject *))shader->__vftable->Unk_12)(shader);
            m_uiRefCount = (volatile LONG *)shader[7].members.m_uiRefCount;
            v44 = sub_7016D0(v34, (NiDynamicEffectState **)&v77);
            v45 = shader->__vftable->DumpChildAttributes;
            v65 = *v44;
            v81 = 6;
            ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, NiBound *))v45)(
              shader,
              v34,
              0,
              0,
              v42,
              v41,
              v65,
              v79,
              &m_kWorldBound);
            v81 = 0xFFFFFFFF;
            if ( v77 )
            {
              v66 = v77;
              if ( !InterlockedDecrement(v77 + 1) )
              {
                if ( v66 )
                  (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1);
              }
            }
            ((void (__thiscall *)(NiObject *, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *))shader->__vftable->Unk_0F)(
              shader,
              v34,
              0,
              v42,
              v41);
            renderState = v74->member.renderState;
            p_SetVertexShader = (void (__thiscall **)(NiDX9RenderState *, int))&renderState->vtbl->SetVertexShader;
            v48 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)m_uiRefCount + 0x16) + 0x40))(
                    *((_DWORD *)m_uiRefCount + 0x16),
                    0);
            (*p_SetVertexShader)(renderState, v48);
            v49 = v74->member.renderState;
            p_SetPixelShader = (void (__thiscall **)(NiDX9RenderState *, int))&v49->vtbl->SetPixelShader;
            v51 = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)m_uiRefCount + 0x11) + 0x38))(
                    *((_DWORD *)m_uiRefCount + 0x11),
                    0);
            (*p_SetPixelShader)(v49, v51);
            sub_7F6BF0(v71, v34, (int)shader, (int)m_uiRefCount, 0);
            v35 = v72;
            BuffData = v70;
          }
          v70 = (volatile LONG *)v35;
        }
        if ( !v73 )
          break;
        v25 = v73;
      }
    }
    sub_7A9C30((int)a2);
    a2[3] = a2[1];
    a2[1] = 0;
    a2[2] = 0;
    a2[4] = 0;
    ((void (__thiscall *)(NiObject *))shader->__vftable[1].super.Destructor)(shader);
    return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))v74->member.renderState->vtbl->SetVar_0FF5)(
             v74->member.renderState,
             0);
  }
  else
  {
    while ( v4 )
    {
      v26 = (_DWORD *)*v4;
      v27 = (NiGeometry **)v4[2];
      v6 = *v27;
      v28 = (*v27)->member.geomData;
      shader = (*v27)->member.shader;
      v68 = (NiDynamicEffectState *)v27;
      v73 = v26;
      v72 = v28;
      v29 = *sub_405760(v6, &v75);
      v66 = v29;
      if ( v75 )
      {
        v30 = v75;
        if ( !InterlockedDecrement(v75 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v30)(v30, 1);
      }
      v69 = *((_DWORD **)v29 + 6);
      if ( *(_WORD *)(v69[0x27] + 0xE) )
        goto LABEL_5;
      v4 = v73;
    }
    sub_7A9C30((int)a2);
    a2[3] = a2[1];
    a2[1] = 0;
    a2[2] = 0;
    a2[4] = 0;
    return 0;
  }
}
