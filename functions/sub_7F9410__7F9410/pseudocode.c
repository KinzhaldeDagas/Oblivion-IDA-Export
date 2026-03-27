void __thiscall sub_7F9410(int *this, _DWORD *a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  NiGeometry **v5; // ecx
  NiGeometry *v6; // ebx
  volatile LONG *v7; // edi
  volatile LONG *v8; // ebp
  HRESULT (__stdcall *SetSamplerState)(IDirect3DDevice9 *, DWORD, D3DSAMPLERSTATETYPE, DWORD); // edx
  void **p_vftable; // ebp
  volatile LONG *BuffData; // esi
  NiGeometry **v12; // eax
  void (__thiscall *v13)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v14; // eax
  void (__thiscall *v15)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v16; // eax
  void (__thiscall *v17)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v18; // eax
  void (__thiscall *v19)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v20; // eax
  void (__thiscall *v21)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  volatile LONG *v22; // edi
  int v23; // edx
  _DWORD *v24; // eax
  NiGeometry **v25; // eax
  volatile LONG *v26; // esi
  volatile LONG *v27; // ebp
  _DWORD *v28; // edx
  NiGeometry **v29; // eax
  NiGeometry *v30; // ebx
  NiGeometryData *v31; // edi
  volatile LONG *v32; // eax
  __int16 v33; // cx
  bool v34; // zf
  NiDynamicEffectState *v35; // edx
  NiGeometry **v36; // eax
  volatile LONG *v37; // esi
  void (__thiscall *v38)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiGeometry **v39; // eax
  void (__thiscall *v40)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *); // edx
  NiRTTI *(__thiscall *GetType)(NiObject *); // eax
  unsigned __int16 v42; // ax
  float v43; // edx
  unsigned __int16 vftable; // cx
  NiDX9Renderer *v45; // esi
  IDirect3DDevice9 *device; // [esp+FCh] [ebp-A8h]
  NiGeometry *v47; // [esp+100h] [ebp-A4h]
  NiGeometry *v48; // [esp+100h] [ebp-A4h]
  NiGeometry *v49; // [esp+100h] [ebp-A4h]
  NiGeometry *v50; // [esp+100h] [ebp-A4h]
  NiGeometry *v51; // [esp+100h] [ebp-A4h]
  NiGeometry *v52; // [esp+100h] [ebp-A4h]
  NiGeometry *v53; // [esp+100h] [ebp-A4h]
  NiDynamicEffectState *v54; // [esp+104h] [ebp-A0h]
  float v55; // [esp+108h] [ebp-9Ch]
  _DWORD *v56; // [esp+120h] [ebp-84h]
  _DWORD *v57; // [esp+120h] [ebp-84h]
  volatile LONG *v58; // [esp+124h] [ebp-80h]
  volatile LONG *v59; // [esp+124h] [ebp-80h]
  NiGeometryData *geomData; // [esp+128h] [ebp-7Ch]
  int v62; // [esp+130h] [ebp-74h]
  volatile LONG *v63; // [esp+130h] [ebp-74h]
  volatile LONG *v64; // [esp+130h] [ebp-74h]
  int v65; // [esp+130h] [ebp-74h]
  volatile LONG *v66; // [esp+134h] [ebp-70h] BYREF
  volatile LONG *v67; // [esp+138h] [ebp-6Ch] BYREF
  volatile LONG *v68; // [esp+13Ch] [ebp-68h] BYREF
  NiDX9Renderer *v69; // [esp+140h] [ebp-64h]
  volatile LONG *v70; // [esp+144h] [ebp-60h] BYREF
  int v71; // [esp+148h] [ebp-5Ch]
  volatile LONG *v72; // [esp+14Ch] [ebp-58h] BYREF
  volatile LONG *v73; // [esp+150h] [ebp-54h] BYREF
  float x; // [esp+154h] [ebp-50h] BYREF
  float y; // [esp+158h] [ebp-4Ch]
  float z; // [esp+15Ch] [ebp-48h]
  float Radius; // [esp+160h] [ebp-44h]
  _BYTE v78[52]; // [esp+164h] [ebp-40h] BYREF
  int v79; // [esp+1A0h] [ebp-4h]

  v69 = g_Renderer;
  v3 = a2[1];
  v4 = *(_DWORD **)v3;
  v5 = *(NiGeometry ***)(v3 + 8);
  v6 = *v5;
  v62 = (int)v5;
  v56 = *(_DWORD **)v3;
  geomData = (*v5)->member.geomData;
  v7 = *sub_405760(*v5, &v68);
  v58 = v7;
  if ( v68 )
  {
    v8 = v68;
    if ( !InterlockedDecrement(v68 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
  }
  SetSamplerState = v69->member.device->lpVtbl->SetSamplerState;
  p_vftable = (void **)&v6->member.shader->__vftable;
  v55 = flt_B430A4;
  device = v69->member.device;
  v66 = *((volatile LONG **)v7 + 6);
  SetSamplerState(device, 0, D3DSAMP_MIPMAPLODBIAS, LODWORD(v55));
  if ( *(_WORD *)(*((_DWORD *)v66 + 0x27) + 0xE) )
  {
LABEL_5:
    qmemcpy(v78, &v6->member.super.m_worldTransform, sizeof(v78));
    x = v6->member.super.m_kWorldBound.Center.x;
    y = v6->member.super.m_kWorldBound.Center.y;
    z = v6->member.super.m_kWorldBound.Center.z;
    Radius = v6->member.super.m_kWorldBound.Radius;
    v71 = (unsigned __int16)a3;
    dword_B42E90 = (unsigned __int16)a3;
    dword_B42EB8 = v62;
    sub_7ECB20();
    sub_7F60F0(a3, v62, (int)v66, 0);
    sub_7F6A30(v6);
    BuffData = (volatile LONG *)geomData->member.BuffData;
    v12 = sub_7016D0(v6, (NiDynamicEffectState **)&v67);
    v13 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable
          + 0xA);
    v47 = *v12;
    v79 = 0;
    v13(p_vftable, v6, 0, BuffData, v58, v47, v78, &x);
    v79 = 0xFFFFFFFF;
    if ( v67 )
    {
      v66 = v67;
      if ( !InterlockedDecrement(v67 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1);
    }
    v14 = sub_7016D0(v6, (NiDynamicEffectState **)&v67);
    v15 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable
          + 0xB);
    v48 = *v14;
    v79 = 1;
    v15(p_vftable, v6, 0, BuffData, v58, v48, v78, &x);
    v79 = 0xFFFFFFFF;
    if ( v67 )
    {
      v66 = v67;
      if ( !InterlockedDecrement(v67 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1);
    }
    (*((void (__thiscall **)(void **))*p_vftable + 0x12))(p_vftable);
    v67 = (volatile LONG *)p_vftable[0xF];
    v16 = sub_7016D0(v6, (NiDynamicEffectState **)&v66);
    v17 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable
          + 0xC);
    v49 = *v16;
    v79 = 2;
    v17(p_vftable, v6, 0, BuffData, v58, v49, v78, &x);
    v79 = 0xFFFFFFFF;
    if ( v66 )
    {
      v63 = v66;
      if ( !InterlockedDecrement(v66 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v63)(v63, 1);
    }
    v18 = sub_7016D0(v6, (NiDynamicEffectState **)&v66);
    v19 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable
          + 0xD);
    v50 = *v18;
    v79 = 3;
    v19(p_vftable, v6, 0, 0, BuffData, v58, v50, v78, &x);
    v79 = 0xFFFFFFFF;
    if ( v66 )
    {
      v64 = v66;
      if ( !InterlockedDecrement(v66 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v64)(v64, 1);
    }
    (*((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *))*p_vftable + 0xF))(
      p_vftable,
      v6,
      0,
      BuffData,
      v58);
    v20 = sub_7016D0(v6, (NiDynamicEffectState **)&v66);
    v21 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable
          + 0xE);
    v51 = *v20;
    v79 = 4;
    v21(p_vftable, v6, 0, 0, BuffData, v58, v51, v78, &x);
    v79 = 0xFFFFFFFF;
    if ( v66 )
    {
      v22 = v66;
      if ( !InterlockedDecrement(v66 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v22)(v22, 1);
    }
    v6->__vftable->Unk_22(v6, (NiRenderer *)g_Renderer);
    v23 = 4 * dword_B28CB0;
    v68 = (volatile LONG *)geomData;
    _memset(*this, 0, v23);
    v24 = v56;
    if ( v56 )
    {
      while ( 1 )
      {
        v28 = (_DWORD *)*v24;
        v29 = (NiGeometry **)v24[2];
        v30 = *v29;
        v31 = (*v29)->member.geomData;
        v65 = (int)v29;
        v57 = v28;
        v59 = *sub_405760(*v29, &v70);
        if ( v70 )
        {
          v66 = v70;
          if ( !InterlockedDecrement(v70 + 1) )
          {
            if ( v66 )
              (**(void (__thiscall ***)(volatile LONG *, int))v66)(v66, 1);
          }
        }
        v32 = *((volatile LONG **)v59 + 6);
        v33 = *(_WORD *)(*((_DWORD *)v32 + 0x27) + 0xE);
        v66 = v32;
        if ( v33 )
        {
          v34 = v68 == (volatile LONG *)v31;
          dword_B42E90 = v71;
          dword_B42EB8 = v65;
          if ( v34 )
          {
            sub_8115C0(p_vftable, (int)v32);
            GetType = v31->__vftable[1].super.GetType;
            if ( *(_BYTE *)(*(_DWORD *)(*((_DWORD *)v66 + 0x27) + 4) + 0xC) )
            {
              v42 = (int)GetType((NiObject *)v31);
              v43 = v31[1].member.m_kBound.Center.x;
            }
            else
            {
              v42 = (int)GetType((NiObject *)v31);
              v43 = *(float *)&v31[1].member.m_usVertices;
            }
            vftable = (unsigned __int16)v31[1].__vftable;
            *((float *)BuffData + 0x13) = v43;
            v54 = (NiDynamicEffectState *)v67;
            *((_DWORD *)BuffData + 0x10) = vftable;
            *((_DWORD *)BuffData + 0xF) = v42;
            *((_DWORD *)BuffData + 0x12) = 0;
            *((_DWORD *)BuffData + 0x11) = 1;
            sub_7F6BF0(this, v30, (int)p_vftable, (int)v54, 0);
          }
          else
          {
            sub_7F6A30(v30);
            v35 = (NiDynamicEffectState *)v31->member.BuffData;
            qmemcpy(v78, &v30->member.super.m_worldTransform, sizeof(v78));
            x = v30->member.super.m_kWorldBound.Center.x;
            y = v30->member.super.m_kWorldBound.Center.y;
            v66 = (volatile LONG *)v35;
            z = v30->member.super.m_kWorldBound.Center.z;
            Radius = v30->member.super.m_kWorldBound.Radius;
            v36 = sub_7016D0(v30, (NiDynamicEffectState **)&v72);
            v37 = v66;
            v38 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable
                  + 0xB);
            v52 = *v36;
            v79 = 5;
            v38(p_vftable, v30, 0, v66, v59, v52, v78, &x);
            v79 = 0xFFFFFFFF;
            if ( v72 )
            {
              v68 = v72;
              if ( !InterlockedDecrement(v72 + 1) )
              {
                if ( v68 )
                  (**(void (__thiscall ***)(volatile LONG *, int))v68)(v68, 1);
              }
            }
            (*((void (__thiscall **)(void **))*p_vftable + 0x12))(p_vftable);
            v67 = (volatile LONG *)p_vftable[0xF];
            v39 = sub_7016D0(v30, (NiDynamicEffectState **)&v73);
            v40 = *((void (__thiscall **)(void **, NiGeometry *, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, _BYTE *, float *))*p_vftable
                  + 0xD);
            v53 = *v39;
            v79 = 6;
            v40(p_vftable, v30, 0, 0, v37, v59, v53, v78, &x);
            v79 = 0xFFFFFFFF;
            if ( v73 )
            {
              v68 = v73;
              if ( !InterlockedDecrement(v73 + 1) )
              {
                if ( v68 )
                  (**(void (__thiscall ***)(volatile LONG *, int))v68)(v68, 1);
              }
            }
            (*((void (__thiscall **)(void **, NiGeometry *, _DWORD, volatile LONG *, volatile LONG *))*p_vftable + 0xF))(
              p_vftable,
              v30,
              0,
              v37,
              v59);
            sub_7F6BF0(this, v30, (int)p_vftable, (int)v67, 0);
            BuffData = v66;
          }
          v68 = (volatile LONG *)v31;
        }
        if ( !v57 )
          break;
        v24 = v57;
      }
    }
    sub_7A9C30((int)a2);
    a2[3] = a2[1];
    a2[1] = 0;
    a2[2] = 0;
    a2[4] = 0;
    (*((void (__thiscall **)(void **))*p_vftable + 0x13))(p_vftable);
    v45 = v69;
    ((void (__thiscall *)(NiDX9RenderState *, _DWORD))v69->member.renderState->vtbl->SetVar_0FF5)(
      v69->member.renderState,
      0);
    v45->member.device->lpVtbl->SetSamplerState(v45->member.device, 0, D3DSAMP_MIPMAPLODBIAS, 0);
  }
  else
  {
    while ( v4 )
    {
      v25 = (NiGeometry **)v4[2];
      v6 = *v25;
      v62 = (int)v25;
      v56 = (_DWORD *)*v4;
      geomData = (*v25)->member.geomData;
      v26 = *sub_405760(*v25, &v70);
      v58 = v26;
      if ( v70 )
      {
        v27 = v70;
        if ( !InterlockedDecrement(v70 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v27)(v27, 1);
      }
      p_vftable = (void **)&v6->member.shader->__vftable;
      v66 = *((volatile LONG **)v26 + 6);
      if ( *(_WORD *)(*((_DWORD *)v66 + 0x27) + 0xE) )
        goto LABEL_5;
      v4 = v56;
    }
    sub_7A9C30((int)a2);
    a2[3] = a2[1];
    a2[1] = 0;
    a2[2] = 0;
    a2[4] = 0;
  }
}
