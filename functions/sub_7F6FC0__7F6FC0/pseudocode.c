int __thiscall sub_7F6FC0(int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  volatile LONG *v5; // ecx
  volatile LONG v6; // ebp
  volatile LONG *v7; // eax
  volatile LONG *v8; // edi
  volatile LONG *v9; // esi
  NiTArray_NiD3DPass *v10; // ebx
  int v11; // esi
  int v12; // esi
  NiGeometry **v13; // eax
  void (__thiscall *v14)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v15; // eax
  void (__thiscall *v16)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v17; // eax
  void (__thiscall *v18)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v19; // eax
  void (__thiscall *v20)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v21; // eax
  void (__thiscall *v22)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  volatile LONG *v23; // esi
  NiDX9RenderState *renderState; // ecx
  unsigned __int16 v25; // ax
  bool v26; // zf
  NiRenderStateSetting *v27; // eax
  int v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // edx
  volatile LONG *v31; // edi
  int v32; // ebp
  volatile LONG *v33; // esi
  NiDynamicEffectState *v34; // eax
  _DWORD *v35; // esi
  int *v36; // edi
  volatile LONG *v37; // esi
  NiGeometry **v38; // eax
  void (__thiscall *v39)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, int *); // edx
  int *v40; // esi
  NiGeometry *v42; // [esp+D8h] [ebp-F0h]
  NiGeometry *v43; // [esp+D8h] [ebp-F0h]
  NiGeometry *v44; // [esp+D8h] [ebp-F0h]
  NiGeometry *v45; // [esp+D8h] [ebp-F0h]
  NiGeometry *v46; // [esp+D8h] [ebp-F0h]
  NiGeometry *v47; // [esp+D8h] [ebp-F0h]
  _DWORD *v48; // [esp+DCh] [ebp-ECh]
  char v49; // [esp+FBh] [ebp-CDh]
  volatile LONG *v50; // [esp+FCh] [ebp-CCh] BYREF
  volatile LONG *v51; // [esp+100h] [ebp-C8h]
  int *v52; // [esp+104h] [ebp-C4h]
  volatile LONG *v53; // [esp+108h] [ebp-C0h] BYREF
  volatile LONG *v54; // [esp+10Ch] [ebp-BCh] BYREF
  _DWORD *v55; // [esp+110h] [ebp-B8h]
  volatile LONG *v56; // [esp+114h] [ebp-B4h]
  _DWORD *v57; // [esp+118h] [ebp-B0h]
  volatile LONG *v58; // [esp+11Ch] [ebp-ACh]
  int v59; // [esp+120h] [ebp-A8h] BYREF
  int v60; // [esp+124h] [ebp-A4h]
  int v61; // [esp+128h] [ebp-A0h]
  int v62; // [esp+12Ch] [ebp-9Ch]
  int v63; // [esp+130h] [ebp-98h]
  int v64; // [esp+134h] [ebp-94h]
  NiDX9Renderer *v65; // [esp+138h] [ebp-90h]
  volatile LONG *v66; // [esp+13Ch] [ebp-8Ch] BYREF
  int v67; // [esp+140h] [ebp-88h]
  volatile LONG *v68; // [esp+144h] [ebp-84h] BYREF
  float v69[13]; // [esp+148h] [ebp-80h] BYREF
  NiPoint3 v70[5]; // [esp+17Ch] [ebp-4Ch] BYREF
  int v71; // [esp+1C4h] [ebp-4h]

  v52 = this;
  v65 = g_Renderer;
  v49 = 0;
  v63 = sub_7F5C40(a3);
  v64 = sub_7F5E80(a3);
  v3 = (_DWORD *)a2[1];
  v4 = (_DWORD *)*v3;
  v5 = (volatile LONG *)v3[2];
  v6 = *v5;
  v7 = *(volatile LONG **)(*v5 + 0xB4);
  v56 = v5;
  qmemcpy(v69, (const void *)(v6 + 0x64), sizeof(v69));
  v59 = *(_DWORD *)(v6 + 0x20);
  v57 = v4;
  v60 = *(_DWORD *)(v6 + 0x24);
  v58 = v7;
  v61 = *(_DWORD *)(v6 + 0x28);
  v62 = *(_DWORD *)(v6 + 0x2C);
  v8 = *sub_405760((NiGeometry *)v6, &v54);
  if ( v54 )
  {
    v9 = v54;
    if ( !InterlockedDecrement(v54 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
  }
  v10 = *(NiTArray_NiD3DPass **)(v6 + 0xBC);
  v11 = *((_DWORD *)v8 + 6);
  dword_B42E90 = (unsigned __int16)a3;
  dword_B42EB8 = (int)v56;
  sub_7ECB20();
  sub_7F60F0(a3, (int)v56, v11, 0);
  sub_7F6A30((NiGeometry *)v6);
  v12 = *((_DWORD *)v58 + 0xE);
  v13 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v53);
  v14 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl
        + 0xA);
  v42 = *v13;
  v71 = 0;
  v14(v10, v6, 0, v12, v8, v42, v69, &v59);
  v71 = 0xFFFFFFFF;
  if ( v53 )
  {
    v50 = v53;
    if ( !InterlockedDecrement(v53 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v50)(v50, 1);
  }
  v15 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v53);
  v16 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl
        + 0xB);
  v43 = *v15;
  v71 = 1;
  v16(v10, v6, 0, v12, v8, v43, v69, &v59);
  v71 = 0xFFFFFFFF;
  if ( v53 )
  {
    v50 = v53;
    if ( !InterlockedDecrement(v53 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v50)(v50, 1);
  }
  (*((void (__thiscall **)(NiTArray_NiD3DPass *))v10->_vtbl + 0x12))(v10);
  v53 = *(volatile LONG **)&v10[3].numObjs;
  v17 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v50);
  v18 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl
        + 0xC);
  v44 = *v17;
  v71 = 2;
  v18(v10, v6, 0, v12, v8, v44, v69, &v59);
  v71 = 0xFFFFFFFF;
  if ( v50 )
  {
    v51 = v50;
    if ( !InterlockedDecrement(v50 + 1) )
    {
      if ( v51 )
        (**(void (__thiscall ***)(volatile LONG *, int))v51)(v51, 1);
    }
  }
  v19 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v50);
  v20 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl
        + 0xD);
  v45 = *v19;
  v71 = 3;
  v20(v10, v6, 0, 0, v12, v8, v45, v69, &v59);
  v71 = 0xFFFFFFFF;
  if ( v50 )
  {
    v51 = v50;
    if ( !InterlockedDecrement(v50 + 1) )
    {
      if ( v51 )
        (**(void (__thiscall ***)(volatile LONG *, int))v51)(v51, 1);
    }
  }
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, int, volatile LONG *))v10->_vtbl + 0xF))(
    v10,
    v6,
    0,
    v12,
    v8);
  v21 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v50);
  v22 = *((void (__thiscall **)(NiTArray_NiD3DPass *, volatile LONG, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl
        + 0xE);
  v46 = *v21;
  v71 = 4;
  v22(v10, v6, 0, 0, v12, v8, v46, v69, &v59);
  v71 = 0xFFFFFFFF;
  if ( v50 )
  {
    v23 = v50;
    if ( !InterlockedDecrement(v50 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1);
  }
  renderState = g_Renderer->member.renderState;
  v25 = HIWORD(dword_B427BC);
  if ( HIWORD(dword_B427BC) < 5u )
  {
    v26 = renderState->member.SamplerStateSettings[v25 + 5].CurrentValue == 2;
    v27 = &renderState->member.SamplerStateSettings[v25 + 5];
    if ( !v26 )
    {
      v27->CurrentValue = 2;
      renderState->member.Device->lpVtbl->SetSamplerState(renderState->member.Device, 1, D3DSAMP_MIPFILTER, 2);
    }
  }
  (*(void (__thiscall **)(volatile LONG, NiDX9Renderer *))(*(_DWORD *)v6 + 0x88))(v6, g_Renderer);
  sub_7D1800(a3);
  v28 = 4 * dword_B28CB0;
  v50 = v58;
  _memset(*v52, 0, v28);
  v29 = v57;
  if ( v57 )
  {
    while ( 1 )
    {
      v30 = (_DWORD *)*v29;
      v31 = (volatile LONG *)v29[2];
      v54 = v56;
      dword_B42E90 = (unsigned __int16)a3;
      dword_B42EB8 = (int)v31;
      v32 = *v31;
      v33 = *(volatile LONG **)(*v31 + 0xB4);
      v67 = (unsigned __int16)a3;
      v57 = v30;
      v56 = v31;
      v58 = v33;
      v51 = *sub_405760((NiGeometry *)v32, &v68);
      if ( v68 )
      {
        v55 = v68;
        if ( !InterlockedDecrement(v68 + 1) )
        {
          if ( v55 )
            (*(void (__thiscall **)(_DWORD *, int))*v55)(v55, 1);
        }
      }
      v55 = *((_DWORD **)v51 + 6);
      if ( v50 == v33 )
      {
        v40 = v52;
        if ( !v49 )
        {
          sub_7F68C0(a3, 1, v63, v64, (int)v10);
          v49 = 1;
        }
        sub_7F60F0(a3, (int)v31, (int)v55, (int)v54);
        sub_7F6150(v32, a3, (int)v51, v55, v10);
        sub_7F5B80(v69, v70);
        sub_7C9140((int)v70, v69[0xC], v67, *(_DWORD *)(v32 + 0xB8));
        sub_7F6BF0(v40, (NiGeometry *)v32, (int)v10, (int)v53, 0);
      }
      else
      {
        if ( v49 )
        {
          sub_7F68C0(a3, 0, v63, v64, (int)v10);
          v49 = 0;
        }
        sub_7F6A30((NiGeometry *)v32);
        v34 = *((NiDynamicEffectState **)v33 + 0xE);
        qmemcpy(v69, (const void *)(v32 + 0x64), sizeof(v69));
        v35 = v55;
        v36 = v52;
        v59 = *(_DWORD *)(v32 + 0x20);
        v60 = *(_DWORD *)(v32 + 0x24);
        v50 = (volatile LONG *)v34;
        v61 = *(_DWORD *)(v32 + 0x28);
        v62 = *(_DWORD *)(v32 + 0x2C);
        sub_7F60F0(a3, (int)v56, (int)v55, (int)v54);
        v48 = v35;
        v37 = v51;
        sub_7F6150(v32, a3, (int)v51, v48, v10);
        v38 = sub_7016D0((NiGeometry *)v32, (NiDynamicEffectState **)&v66);
        v39 = *((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD, volatile LONG *, volatile LONG *, NiGeometry *, float *, int *))v10->_vtbl
              + 0xD);
        v47 = *v38;
        v71 = 5;
        v39(v10, v32, 0, 0, v50, v37, v47, v69, &v59);
        v71 = 0xFFFFFFFF;
        if ( v66 )
        {
          v54 = v66;
          if ( !InterlockedDecrement(v66 + 1) )
          {
            if ( v54 )
              (**(void (__thiscall ***)(volatile LONG *, int))v54)(v54, 1);
          }
        }
        (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, volatile LONG *, volatile LONG *))v10->_vtbl + 0xF))(
          v10,
          v32,
          0,
          v50,
          v37);
        sub_7F6BF0(v36, (NiGeometry *)v32, (int)v10, (int)v53, 0);
      }
      v50 = v58;
      if ( !v57 )
        break;
      v29 = v57;
    }
  }
  sub_7A9C30((int)a2);
  a2[3] = a2[1];
  a2[1] = 0;
  a2[2] = 0;
  a2[4] = 0;
  (*((void (__thiscall **)(NiTArray_NiD3DPass *))v10->_vtbl + 0x13))(v10);
  return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))v65->member.renderState->vtbl->SetVar_0FF5)(
           v65->member.renderState,
           0);
}
