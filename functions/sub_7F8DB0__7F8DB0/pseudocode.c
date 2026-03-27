HRESULT __thiscall sub_7F8DB0(int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  volatile LONG *v8; // esi
  volatile LONG *v9; // edi
  _DWORD *v10; // ebp
  int v11; // edi
  int v12; // edi
  NiGeometry **v13; // eax
  void (__thiscall *v14)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v15; // eax
  void (__thiscall *v16)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v17; // eax
  void (__thiscall *v18)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v19; // eax
  void (__thiscall *v20)(_DWORD *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v21; // eax
  void (__thiscall *v22)(_DWORD *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  volatile LONG *v23; // esi
  int v24; // eax
  NiDX9Renderer *v25; // edi
  _DWORD *v26; // eax
  _DWORD *v27; // edx
  NiGeometry **v28; // eax
  int v29; // ebx
  volatile LONG *v30; // esi
  volatile LONG *v31; // edi
  volatile LONG *v32; // edi
  NiGeometryBufferData *BuffData; // edi
  NiGeometry **v34; // eax
  void (__thiscall *v35)(_DWORD *, int, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry *v37; // [esp+E0h] [ebp-A4h]
  NiGeometry *v38; // [esp+E0h] [ebp-A4h]
  NiGeometry *v39; // [esp+E0h] [ebp-A4h]
  NiGeometry *v40; // [esp+E0h] [ebp-A4h]
  NiGeometry *v41; // [esp+E0h] [ebp-A4h]
  NiGeometry *v42; // [esp+E0h] [ebp-A4h]
  char v43; // [esp+103h] [ebp-81h]
  int v45; // [esp+108h] [ebp-7Ch]
  NiGeometryData *geomData; // [esp+108h] [ebp-7Ch]
  int v47; // [esp+10Ch] [ebp-78h]
  volatile LONG *v48; // [esp+10Ch] [ebp-78h]
  volatile LONG *v49; // [esp+10Ch] [ebp-78h]
  _DWORD *v50; // [esp+110h] [ebp-74h]
  _DWORD *v51; // [esp+110h] [ebp-74h]
  NiDX9Renderer *v52; // [esp+114h] [ebp-70h]
  signed int v53; // [esp+118h] [ebp-6Ch]
  signed int v54; // [esp+11Ch] [ebp-68h]
  volatile LONG *v55; // [esp+120h] [ebp-64h] BYREF
  volatile LONG *v56; // [esp+124h] [ebp-60h] BYREF
  volatile LONG *v57; // [esp+128h] [ebp-5Ch] BYREF
  volatile LONG *v58; // [esp+12Ch] [ebp-58h] BYREF
  volatile LONG *v59; // [esp+130h] [ebp-54h] BYREF
  int v60; // [esp+134h] [ebp-50h] BYREF
  int v61; // [esp+138h] [ebp-4Ch]
  int v62; // [esp+13Ch] [ebp-48h]
  int v63; // [esp+140h] [ebp-44h]
  float v64[13]; // [esp+144h] [ebp-40h] BYREF
  int v65; // [esp+180h] [ebp-4h]

  v52 = g_Renderer;
  v43 = 0;
  v54 = sub_7F5C40(a3);
  v53 = sub_7F5E80(a3);
  v3 = (_DWORD *)a2[1];
  v4 = (_DWORD *)*v3;
  v5 = v3[2];
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 0xB4);
  v47 = v5;
  qmemcpy(v64, (const void *)(*(_DWORD *)v5 + 0x64), sizeof(v64));
  v60 = *(_DWORD *)(v6 + 0x20);
  v50 = v4;
  v61 = *(_DWORD *)(v6 + 0x24);
  v45 = v7;
  v62 = *(_DWORD *)(v6 + 0x28);
  v63 = *(_DWORD *)(v6 + 0x2C);
  v8 = *sub_405760((NiGeometry *)v6, &v57);
  if ( v57 )
  {
    v9 = v57;
    if ( !InterlockedDecrement(v57 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
  }
  v10 = *(_DWORD **)(v6 + 0xBC);
  v11 = *((_DWORD *)v8 + 6);
  dword_B42E90 = (unsigned __int16)a3;
  dword_B42EB8 = v47;
  sub_7ECB20();
  sub_7F60F0(a3, v47, v11, 0);
  sub_7F6A30((NiGeometry *)v6);
  v12 = *(_DWORD *)(v45 + 0x38);
  v13 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v14 = *(void (__thiscall **)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x28);
  v37 = *v13;
  v65 = 0;
  v14(v10, v6, 0, v12, v8, v37, v64, &v60);
  v65 = 0xFFFFFFFF;
  if ( v56 )
  {
    v55 = v56;
    if ( !InterlockedDecrement(v56 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v55)(v55, 1);
  }
  v15 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v16 = *(void (__thiscall **)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x2C);
  v38 = *v15;
  v65 = 1;
  v16(v10, v6, 0, v12, v8, v38, v64, &v60);
  v65 = 0xFFFFFFFF;
  if ( v56 )
  {
    v55 = v56;
    if ( !InterlockedDecrement(v56 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v55)(v55, 1);
  }
  (*(void (__thiscall **)(_DWORD *))(*v10 + 0x48))(v10);
  v56 = (volatile LONG *)v10[0xF];
  v17 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v55);
  v18 = *(void (__thiscall **)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x30);
  v39 = *v17;
  v65 = 2;
  v18(v10, v6, 0, v12, v8, v39, v64, &v60);
  v65 = 0xFFFFFFFF;
  if ( v55 )
  {
    v48 = v55;
    if ( !InterlockedDecrement(v55 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v48)(v48, 1);
  }
  v19 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v55);
  v20 = *(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x34);
  v40 = *v19;
  v65 = 3;
  v20(v10, v6, 0, 0, v12, v8, v40, v64, &v60);
  v65 = 0xFFFFFFFF;
  if ( v55 )
  {
    v49 = v55;
    if ( !InterlockedDecrement(v55 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v49)(v49, 1);
  }
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, volatile LONG *))(*v10 + 0x3C))(v10, v6, 0, v12, v8);
  v21 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v55);
  v22 = *(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x38);
  v41 = *v21;
  v65 = 4;
  v22(v10, v6, 0, 0, v12, v8, v41, v64, &v60);
  v65 = 0xFFFFFFFF;
  if ( v55 )
  {
    v23 = v55;
    if ( !InterlockedDecrement(v55 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1);
  }
  (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v6 + 0x88))(v6, g_Renderer);
  sub_7D1800(a3);
  v24 = 4 * dword_B28CB0;
  v57 = (volatile LONG *)v45;
  _memset(*this, 0, v24);
  v25 = v52;
  v52->member.device->lpVtbl->SetSamplerState(v52->member.device, 0, D3DSAMP_MIPMAPLODBIAS, LODWORD(flt_B430A8));
  v26 = v50;
  if ( v50 )
  {
    while ( 1 )
    {
      v27 = (_DWORD *)*v26;
      v28 = (NiGeometry **)v26[2];
      dword_B42E90 = (unsigned __int16)a3;
      dword_B42EB8 = (int)v28;
      v29 = (int)*v28;
      v51 = v27;
      geomData = (*v28)->member.geomData;
      v30 = *sub_405760(*v28, &v58);
      if ( v58 )
      {
        v31 = v58;
        if ( !InterlockedDecrement(v58 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v31)(v31, 1);
      }
      v55 = *((volatile LONG **)v30 + 6);
      qmemcpy(v64, (const void *)(v29 + 0x64), sizeof(v64));
      v32 = (volatile LONG *)geomData;
      v60 = *(_DWORD *)(v29 + 0x20);
      v61 = *(_DWORD *)(v29 + 0x24);
      v62 = *(_DWORD *)(v29 + 0x28);
      v63 = *(_DWORD *)(v29 + 0x2C);
      if ( v57 == (volatile LONG *)geomData )
      {
        if ( !v43 )
        {
          sub_7F68C0(a3, 1, v54, v53, (int)v10);
          v43 = 1;
        }
        sub_7C8520(v64);
        sub_7F6AE0(v29, a3, (int)v30, v55, (int)v10);
        sub_765480(v52, v64, 0);
        sub_7F6BF0(this, (NiGeometry *)v29, (int)v10, (int)v56, 1);
      }
      else
      {
        if ( v43 )
        {
          sub_7F68C0(a3, 0, v54, v53, (int)v10);
          v43 = 0;
        }
        sub_7F6A30((NiGeometry *)v29);
        BuffData = geomData->member.BuffData;
        sub_7F6AE0(v29, a3, (int)v30, v55, (int)v10);
        v34 = sub_7016D0((NiGeometry *)v29, (NiDynamicEffectState **)&v59);
        v35 = *(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x34);
        v42 = *v34;
        v65 = 5;
        v35(v10, v29, 0, 0, BuffData, v30, v42, v64, &v60);
        v65 = 0xFFFFFFFF;
        if ( v59 )
        {
          v57 = v59;
          if ( !InterlockedDecrement(v59 + 1) )
          {
            if ( v57 )
              (**(void (__thiscall ***)(volatile LONG *, int))v57)(v57, 1);
          }
        }
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, NiGeometryBufferData *, volatile LONG *))(*v10 + 0x3C))(
          v10,
          v29,
          0,
          BuffData,
          v30);
        sub_765480(v52, v64, 0);
        sub_7F6BF0(this, (NiGeometry *)v29, (int)v10, (int)v56, 1);
        v32 = (volatile LONG *)geomData;
      }
      v57 = v32;
      if ( !v51 )
        break;
      v26 = v51;
    }
    v25 = v52;
  }
  sub_7A9C30((int)a2);
  a2[3] = a2[1];
  a2[1] = 0;
  a2[2] = 0;
  a2[4] = 0;
  (*(void (__thiscall **)(_DWORD *))(*v10 + 0x4C))(v10);
  ((void (__thiscall *)(NiDX9RenderState *, _DWORD))v25->member.renderState->vtbl->SetVar_0FF5)(
    v25->member.renderState,
    0);
  return v25->member.device->lpVtbl->SetSamplerState(v25->member.device, 0, D3DSAMP_MIPMAPLODBIAS, 0);
}
