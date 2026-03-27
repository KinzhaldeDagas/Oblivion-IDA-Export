int __thiscall sub_7F86C0(int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // ebp
  int v7; // eax
  volatile LONG *v8; // esi
  volatile LONG *v9; // edi
  _DWORD **v10; // ebx
  int v11; // edi
  int v12; // edi
  NiGeometry **v13; // eax
  void (__thiscall *v14)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  NiGeometry **v15; // eax
  void (__thiscall *v16)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  NiGeometry **v17; // eax
  void (__thiscall *v18)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  NiGeometry **v19; // eax
  void (__thiscall *v20)(_DWORD **, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  NiGeometry **v21; // eax
  void (__thiscall *v22)(_DWORD **, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *); // edx
  volatile LONG *v23; // esi
  int v24; // edx
  _DWORD *v25; // eax
  NiDynamicEffectState *v26; // edx
  int v27; // eax
  float v28; // ebp
  int v29; // ecx
  volatile LONG *v30; // esi
  volatile LONG *v31; // edi
  int v32; // eax
  int v33; // edi
  int v34; // edx
  int v35; // edi
  NiDX9RenderState *v36; // edi
  void (__thiscall **v37)(NiDX9RenderState *, int); // esi
  int v38; // eax
  int v39; // ecx
  volatile LONG *v40; // esi
  NiDX9Renderer *v41; // esi
  NiDX9RenderState *renderState; // edi
  void (__thiscall **p_SetVertexShader)(NiDX9RenderState *, int); // esi
  int v44; // eax
  NiDX9RenderState *v45; // edi
  void (__thiscall **p_SetPixelShader)(NiDX9RenderState *, int); // esi
  int v47; // eax
  NiGeometry *v49; // [esp+C0h] [ebp-E8h]
  NiGeometry *v50; // [esp+C0h] [ebp-E8h]
  NiGeometry *v51; // [esp+C0h] [ebp-E8h]
  NiGeometry *v52; // [esp+C0h] [ebp-E8h]
  NiGeometry *v53; // [esp+C0h] [ebp-E8h]
  NiGeometry *v54; // [esp+C0h] [ebp-E8h]
  NiGeometry *v55; // [esp+C0h] [ebp-E8h]
  volatile LONG *v56; // [esp+E0h] [ebp-C8h] BYREF
  int v57; // [esp+E4h] [ebp-C4h]
  NiDynamicEffectState *v58; // [esp+E8h] [ebp-C0h]
  volatile LONG *v59; // [esp+ECh] [ebp-BCh] BYREF
  NiDX9Renderer *v60; // [esp+F0h] [ebp-B8h]
  int *v61; // [esp+F4h] [ebp-B4h]
  _DWORD *v62; // [esp+F8h] [ebp-B0h]
  int v63; // [esp+FCh] [ebp-ACh]
  _DWORD *v64; // [esp+100h] [ebp-A8h]
  int v65; // [esp+104h] [ebp-A4h]
  int v66; // [esp+108h] [ebp-A0h] BYREF
  int v67; // [esp+10Ch] [ebp-9Ch]
  int v68; // [esp+110h] [ebp-98h]
  int v69; // [esp+114h] [ebp-94h]
  int v70; // [esp+118h] [ebp-90h]
  volatile LONG *v71; // [esp+11Ch] [ebp-8Ch] BYREF
  volatile LONG *v72; // [esp+120h] [ebp-88h] BYREF
  volatile LONG *v73; // [esp+124h] [ebp-84h] BYREF
  int v74[13]; // [esp+128h] [ebp-80h] BYREF
  NiPoint3 v75[5]; // [esp+15Ch] [ebp-4Ch] BYREF
  int v76; // [esp+1A4h] [ebp-4h]

  v61 = this;
  v60 = g_Renderer;
  v3 = (_DWORD *)a2[1];
  v4 = (_DWORD *)*v3;
  v5 = v3[2];
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 0xB4);
  v58 = (NiDynamicEffectState *)v5;
  qmemcpy(v74, (const void *)(v6 + 0x64), sizeof(v74));
  v66 = *(_DWORD *)(v6 + 0x20);
  v64 = v4;
  v67 = *(_DWORD *)(v6 + 0x24);
  v63 = v7;
  v68 = *(_DWORD *)(v6 + 0x28);
  v69 = *(_DWORD *)(v6 + 0x2C);
  v8 = *sub_405760((NiGeometry *)v6, &v59);
  if ( v59 )
  {
    v9 = v59;
    if ( !InterlockedDecrement(v59 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
  }
  v10 = *(_DWORD ***)(v6 + 0xBC);
  v11 = *((_DWORD *)v8 + 6);
  dword_B42E90 = (unsigned __int16)a3;
  dword_B42EB8 = (int)v58;
  sub_7ECB20();
  sub_7F60F0(a3, (int)v58, v11, 0);
  sub_7F6A30((NiGeometry *)v6);
  v70 = *(_DWORD *)(v63 + 0x38);
  v12 = v70;
  v13 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v14 = (void (__thiscall *)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xA];
  v49 = *v13;
  v76 = 0;
  v14(v10, v6, 0, v12, v8, v49, v74, &v66);
  v76 = 0xFFFFFFFF;
  if ( v56 )
  {
    v57 = (int)v56;
    if ( !InterlockedDecrement(v56 + 1) )
    {
      if ( v57 )
        (**(void (__thiscall ***)(int, int))v57)(v57, 1);
    }
  }
  v15 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v16 = (void (__thiscall *)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xB];
  v50 = *v15;
  v76 = 1;
  v16(v10, v6, 0, v12, v8, v50, v74, &v66);
  v76 = 0xFFFFFFFF;
  if ( v56 )
  {
    v57 = (int)v56;
    if ( !InterlockedDecrement(v56 + 1) )
    {
      if ( v57 )
        (**(void (__thiscall ***)(int, int))v57)(v57, 1);
    }
  }
  ((void (__thiscall *)(_DWORD **))(*v10)[0x12])(v10);
  v62 = v10[0xF];
  v17 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v18 = (void (__thiscall *)(_DWORD **, int, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xC];
  v51 = *v17;
  v76 = 2;
  v18(v10, v6, 0, v12, v8, v51, v74, &v66);
  v76 = 0xFFFFFFFF;
  if ( v56 )
  {
    v57 = (int)v56;
    if ( !InterlockedDecrement(v56 + 1) )
    {
      if ( v57 )
        (**(void (__thiscall ***)(int, int))v57)(v57, 1);
    }
  }
  v19 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v20 = (void (__thiscall *)(_DWORD **, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xD];
  v52 = *v19;
  v76 = 3;
  v20(v10, v6, 0, 0, v12, v8, v52, v74, &v66);
  v76 = 0xFFFFFFFF;
  if ( v56 )
  {
    v57 = (int)v56;
    if ( !InterlockedDecrement(v56 + 1) )
    {
      if ( v57 )
        (**(void (__thiscall ***)(int, int))v57)(v57, 1);
    }
  }
  ((void (__thiscall *)(_DWORD **, int, _DWORD, int, volatile LONG *))(*v10)[0xF])(v10, v6, 0, v12, v8);
  v21 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v22 = (void (__thiscall *)(_DWORD **, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, int *, int *))(*v10)[0xE];
  v53 = *v21;
  v76 = 4;
  v22(v10, v6, 0, 0, v12, v8, v53, v74, &v66);
  v76 = 0xFFFFFFFF;
  if ( v56 )
  {
    v23 = v56;
    if ( !InterlockedDecrement(v56 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1);
  }
  (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v6 + 0x88))(v6, g_Renderer);
  v24 = 4 * dword_B28CB0;
  v59 = (volatile LONG *)v63;
  _memset(*v61, 0, v24);
  v25 = v64;
  if ( v64 )
  {
    while ( 1 )
    {
      v26 = v58;
      v64 = (_DWORD *)*v25;
      v27 = v25[2];
      dword_B42E90 = (unsigned __int16)a3;
      dword_B42EB8 = v27;
      v28 = *(float *)v27;
      v29 = *(_DWORD *)(*(_DWORD *)v27 + 0xB4);
      v56 = (volatile LONG *)v26;
      v63 = v29;
      v58 = (NiDynamicEffectState *)v27;
      v30 = *sub_405760((NiGeometry *)LODWORD(v28), &v71);
      v65 = (int)v30;
      if ( v71 )
      {
        v31 = v71;
        if ( !InterlockedDecrement(v71 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v31)(v31, 1);
      }
      v32 = *((_DWORD *)v30 + 6);
      qmemcpy(v74, (const void *)(LODWORD(v28) + 0x64), sizeof(v74));
      v33 = v63;
      v66 = *(_DWORD *)(LODWORD(v28) + 0x20);
      v67 = *(_DWORD *)(LODWORD(v28) + 0x24);
      v68 = *(_DWORD *)(LODWORD(v28) + 0x28);
      v34 = *(_DWORD *)(LODWORD(v28) + 0x2C);
      v57 = v32;
      v69 = v34;
      if ( v59 == (volatile LONG *)v63 )
      {
        sub_7F60F0(a3, (int)v58, v32, (int)v56);
        v55 = *sub_7016D0((NiGeometry *)LODWORD(v28), (NiDynamicEffectState **)&v73);
        v76 = 6;
        sub_7F0BC0(v10, v28, 0, v70, (_DWORD *)v65, (int)v55, (int)v74, (int)&v66);
        v76 = 0xFFFFFFFF;
        if ( v73 )
        {
          v40 = v73;
          if ( !InterlockedDecrement(v73 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v40)(v40, 1);
        }
        v41 = v60;
        sub_765480(v60, (float *)v74, 0);
        sub_7F5B80((float *)v74, v75);
        sub_7F0100((_DWORD *)v57, (int)v75, *(float *)&v74[0xC]);
        renderState = v41->member.renderState;
        p_SetVertexShader = (void (__thiscall **)(NiDX9RenderState *, int))&renderState->vtbl->SetVertexShader;
        v44 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v62[0x16] + 0x40))(v62[0x16], 0);
        (*p_SetVertexShader)(renderState, v44);
        v39 = v62[0x11];
      }
      else
      {
        sub_7F6A30((NiGeometry *)LODWORD(v28));
        v35 = *(_DWORD *)(v33 + 0x38);
        v70 = v35;
        sub_7F60F0(a3, (int)v58, v57, (int)v56);
        v54 = *sub_7016D0((NiGeometry *)LODWORD(v28), (NiDynamicEffectState **)&v72);
        v76 = 5;
        sub_7F0BC0(v10, v28, 0, v35, (_DWORD *)v65, (int)v54, (int)v74, (int)&v66);
        v76 = 0xFFFFFFFF;
        if ( v72 )
        {
          v59 = v72;
          if ( !InterlockedDecrement(v72 + 1) )
          {
            if ( v59 )
              (**(void (__thiscall ***)(volatile LONG *, int))v59)(v59, 1);
          }
        }
        sub_765480(v60, (float *)v74, 0);
        sub_7F5B80((float *)v74, v75);
        sub_7F0100((_DWORD *)v57, (int)v75, *(float *)&v74[0xC]);
        ((void (__thiscall *)(_DWORD **, float, _DWORD, int, int))(*v10)[0xF])(
          v10,
          COERCE_FLOAT(LODWORD(v28)),
          0,
          v35,
          v65);
        v36 = v60->member.renderState;
        v37 = (void (__thiscall **)(NiDX9RenderState *, int))&v36->vtbl->SetVertexShader;
        v38 = (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v62[0x16] + 0x40))(v62[0x16], 0);
        (*v37)(v36, v38);
        v39 = v62[0x11];
      }
      v45 = v60->member.renderState;
      p_SetPixelShader = (void (__thiscall **)(NiDX9RenderState *, int))&v45->vtbl->SetPixelShader;
      v47 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v39 + 0x38))(v39, 0);
      (*p_SetPixelShader)(v45, v47);
      sub_7F6BF0(v61, (NiGeometry *)LODWORD(v28), (int)v10, (int)v62, 1);
      v59 = (volatile LONG *)v63;
      if ( !v64 )
        break;
      v25 = v64;
    }
  }
  sub_7A9C30((int)a2);
  a2[3] = a2[1];
  a2[1] = 0;
  a2[2] = 0;
  a2[4] = 0;
  ((void (__thiscall *)(_DWORD **))(*v10)[0x13])(v10);
  return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))v60->member.renderState->vtbl->SetVar_0FF5)(
           v60->member.renderState,
           0);
}
