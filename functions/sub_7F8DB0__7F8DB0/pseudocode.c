// Pass205: Object-batch render path calls shader virtual +0x2C with NiPropertyState returned by sub_405760(geometry).
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
  unsigned int v24; // eax
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

  v52 = renderer; /*0x7f8ded*/
  v43 = 0; /*0x7f8df1*/
  v54 = sub_7F5C40(a3); /*0x7f8dfe*/
  v53 = sub_7F5E80(a3); /*0x7f8e0e*/
  v3 = (_DWORD *)a2[1]; /*0x7f8e12*/
  v4 = (_DWORD *)*v3; /*0x7f8e15*/
  v5 = v3[2]; /*0x7f8e1a*/
  v6 = *(_DWORD *)v5; /*0x7f8e1c*/
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 0xB4); /*0x7f8e1e*/
  v47 = v5; /*0x7f8e24*/
  qmemcpy(v64, (const void *)(*(_DWORD *)v5 + 0x64), sizeof(v64)); /*0x7f8e34*/
  v60 = *(_DWORD *)(v6 + 0x20); /*0x7f8e39*/
  v50 = v4; /*0x7f8e3d*/
  v61 = *(_DWORD *)(v6 + 0x24); /*0x7f8e44*/
  v45 = v7; /*0x7f8e48*/
  v62 = *(_DWORD *)(v6 + 0x28); /*0x7f8e4f*/
  v63 = *(_DWORD *)(v6 + 0x2C); /*0x7f8e5a*/
  v8 = *NiGeometry_GetPropertyState((NiGeometry *)v6, &v57); /*0x7f8e66*/
  if ( v57 ) /*0x7f8e6e*/
  {
    v9 = v57; /*0x7f8e70*/
    if ( !InterlockedDecrement(v57 + 1) ) /*0x7f8e76*/
      (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1); /*0x7f8e8c*/
  }
  v10 = *(_DWORD **)(v6 + 0xBC); /*0x7f8e96*/
  v11 = *((_DWORD *)v8 + 6); /*0x7f8e9c*/
  LODWORD(unk_B42E90) = (unsigned __int16)a3; /*0x7f8e9f*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v47; /*0x7f8ea8*/
  OB_BSShader_ResetLightConstantSlots_010201A0(); /*0x7f8ead*/
  OB_BSShader_RebuildRenderEntryLightConstants_010201A0(a3, v47, v11, 0); /*0x7f8ec8*/
  sub_7F6A30((NiGeometry *)v6); /*0x7f8ed0*/
  v12 = *(_DWORD *)(v45 + 0x38); /*0x7f8ed9*/
  v13 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f8ee3*/
  v14 = *(void (__thiscall **)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x28); /*0x7f8eed*/
  v37 = *v13; /*0x7f8efa*/
  v65 = 0; /*0x7f8f02*/
  v14(v10, v6, 0, v12, v8, v37, v64, &v60); /*0x7f8f0d*/
  v65 = 0xFFFFFFFF; /*0x7f8f15*/
  if ( v56 ) /*0x7f8f20*/
  {
    v55 = v56; /*0x7f8f22*/
    if ( !InterlockedDecrement(v56 + 1) ) /*0x7f8f2a*/
      (**(void (__thiscall ***)(volatile LONG *, int))v55)(v55, 1); /*0x7f8f42*/
  }
  v15 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56); /*0x7f8f4b*/
  v16 = *(void (__thiscall **)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x2C); /*0x7f8f55*/
  v38 = *v15; /*0x7f8f62*/
  v65 = 1; /*0x7f8f6a*/
  v16(v10, v6, 0, v12, v8, v38, v64, &v60); /*0x7f8f75*/
  v65 = 0xFFFFFFFF; /*0x7f8f7d*/
  if ( v56 ) /*0x7f8f88*/
  {
    v55 = v56; /*0x7f8f8a*/
    if ( !InterlockedDecrement(v56 + 1) ) /*0x7f8f92*/
      (**(void (__thiscall ***)(volatile LONG *, int))v55)(v55, 1); /*0x7f8faa*/
  }
  (*(void (__thiscall **)(_DWORD *))(*v10 + 0x48))(v10); /*0x7f8fb4*/
  v56 = (volatile LONG *)v10[0xF]; /*0x7f8fc0*/
  v17 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v55); /*0x7f8fc4*/
  v18 = *(void (__thiscall **)(_DWORD *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x30); /*0x7f8fce*/
  v39 = *v17; /*0x7f8fdb*/
  v65 = 2; /*0x7f8fe3*/
  v18(v10, v6, 0, v12, v8, v39, v64, &v60); /*0x7f8fee*/
  v65 = 0xFFFFFFFF; /*0x7f8ff6*/
  if ( v55 ) /*0x7f9001*/
  {
    v48 = v55; /*0x7f9003*/
    if ( !InterlockedDecrement(v55 + 1) ) /*0x7f900b*/
      (**(void (__thiscall ***)(volatile LONG *, int))v48)(v48, 1); /*0x7f9023*/
  }
  v19 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v55); /*0x7f902c*/
  v20 = *(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x34); /*0x7f9036*/
  v40 = *v19; /*0x7f9043*/
  v65 = 3; /*0x7f904d*/
  v20(v10, v6, 0, 0, v12, v8, v40, v64, &v60); /*0x7f9058*/
  v65 = 0xFFFFFFFF; /*0x7f9060*/
  if ( v55 ) /*0x7f906b*/
  {
    v49 = v55; /*0x7f906d*/
    if ( !InterlockedDecrement(v55 + 1) ) /*0x7f9075*/
      (**(void (__thiscall ***)(volatile LONG *, int))v49)(v49, 1); /*0x7f908d*/
  }
  (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, volatile LONG *))(*v10 + 0x3C))(v10, v6, 0, v12, v8); /*0x7f909c*/
  v21 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v55); /*0x7f90a5*/
  v22 = *(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x38); /*0x7f90af*/
  v41 = *v21; /*0x7f90bc*/
  v65 = 4; /*0x7f90c6*/
  v22(v10, v6, 0, 0, v12, v8, v41, v64, &v60); /*0x7f90d1*/
  v65 = 0xFFFFFFFF; /*0x7f90d9*/
  if ( v55 ) /*0x7f90e4*/
  {
    v23 = v55; /*0x7f90e6*/
    if ( !InterlockedDecrement(v55 + 1) ) /*0x7f90ec*/
      (**(void (__thiscall ***)(volatile LONG *, int))v23)(v23, 1); /*0x7f9102*/
  }
  (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v6 + 0x88))(v6, renderer); /*0x7f9115*/
  sub_7D1800(a3); /*0x7f911f*/
  v24 = 4 * dword_B28CB0; /*0x7f912e*/
  v57 = (volatile LONG *)v45; /*0x7f9135*/
  _memset(*this, 0, v24); /*0x7f9143*/
  v25 = v52; /*0x7f914e*/
  v52->member.device->lpVtbl->SetSamplerState( /*0x7f9169*/
    v52->member.device,
    0,
    D3DSAMP_MIPMAPLODBIAS,
    *(_DWORD *)&OB_RendererGlobalState_010201A0[0x20F]);// Direct device write: sampler 0 D3DSAMP_MIPMAPLODBIAS = fLocalTreeMipMapLODBias:SpeedTree (runtime copy at 0xB430A8; default -0.25). This bypasses the NiDX9 sampler cache.
  v26 = v50; /*0x7f916b*/
  if ( v50 ) /*0x7f9171*/
  {
    while ( 1 ) /*0x7f9184*/
    {
      v27 = (_DWORD *)*v26; /*0x7f9184*/
      v28 = (NiGeometry **)v26[2]; /*0x7f9189*/
      LODWORD(unk_B42E90) = (unsigned __int16)a3; /*0x7f9193*/
      *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = v28; /*0x7f9199*/
      v29 = (int)*v28; /*0x7f919e*/
      v51 = v27; /*0x7f91ad*/
      geomData = (*v28)->member.geomData; /*0x7f91b1*/
      v30 = *NiGeometry_GetPropertyState(*v28, &v58); /*0x7f91ba*/
      if ( v58 ) /*0x7f91c6*/
      {
        v31 = v58; /*0x7f91c8*/
        if ( !InterlockedDecrement(v58 + 1) ) /*0x7f91ce*/
          (**(void (__thiscall ***)(volatile LONG *, int))v31)(v31, 1); /*0x7f91e4*/
      }
      v55 = *((volatile LONG **)v30 + 6); /*0x7f91e9*/
      qmemcpy(v64, (const void *)(v29 + 0x64), sizeof(v64)); /*0x7f91f9*/
      v32 = (volatile LONG *)geomData; /*0x7f91fe*/
      v60 = *(_DWORD *)(v29 + 0x20); /*0x7f920a*/
      v61 = *(_DWORD *)(v29 + 0x24); /*0x7f9211*/
      v62 = *(_DWORD *)(v29 + 0x28); /*0x7f9218*/
      v63 = *(_DWORD *)(v29 + 0x2C); /*0x7f921f*/
      if ( v57 == (volatile LONG *)geomData ) /*0x7f9223*/
      {
        if ( !v43 ) /*0x7f9323*/
        {
          sub_7F68C0(a3, 1, v54, v53, (int)v10); /*0x7f933c*/
          v43 = 1; /*0x7f9341*/
        }
        sub_7C8520(v64); /*0x7f934d*/
        sub_7F6AE0(v29, a3, (int)v30, v55, (int)v10); /*0x7f9368*/
        NiDX9Renderer_SetModelTransform(v52, v64, 0); /*0x7f9378*/
        sub_7F6BF0(this, (NiGeometry *)v29, (int)v10, (int)v56, 1); /*0x7f9388*/
      }
      else
      {
        if ( v43 ) /*0x7f922e*/
        {
          sub_7F68C0(a3, 0, v54, v53, (int)v10); /*0x7f9247*/
          v43 = 0; /*0x7f924c*/
        }
        sub_7F6A30((NiGeometry *)v29); /*0x7f9254*/
        BuffData = geomData->member.BuffData; /*0x7f9268*/
        sub_7F6AE0(v29, a3, (int)v30, v55, (int)v10); /*0x7f9272*/
        v34 = sub_7016D0((NiGeometry *)v29, (NiDynamicEffectState **)&v59); /*0x7f927e*/
        v35 = *(void (__thiscall **)(_DWORD *, int, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x34); /*0x7f9288*/
        v42 = *v34; /*0x7f9295*/
        v65 = 5; /*0x7f92a3*/
        v35(v10, v29, 0, 0, BuffData, v30, v42, v64, &v60); /*0x7f92ae*/
        v65 = 0xFFFFFFFF; /*0x7f92b6*/
        if ( v59 ) /*0x7f92c1*/
        {
          v57 = v59; /*0x7f92c3*/
          if ( !InterlockedDecrement(v59 + 1) ) /*0x7f92cb*/
          {
            if ( v57 ) /*0x7f92db*/
              (**(void (__thiscall ***)(volatile LONG *, int))v57)(v57, 1); /*0x7f92e3*/
          }
        }
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, NiGeometryBufferData *, volatile LONG *))(*v10 + 0x3C))( /*0x7f92f6*/
          v10,
          v29,
          0,
          BuffData,
          v30);
        NiDX9Renderer_SetModelTransform(v52, v64, 0); /*0x7f9303*/
        sub_7F6BF0(this, (NiGeometry *)v29, (int)v10, (int)v56, 1); /*0x7f9313*/
        v32 = (volatile LONG *)geomData; /*0x7f9318*/
      }
      v57 = v32; /*0x7f9392*/
      if ( !v51 ) /*0x7f9396*/
        break; /*0x7f9396*/
      v26 = v51; /*0x7f9180*/
    }
    v25 = v52; /*0x7f939c*/
  }
  BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)a2); /*0x7f93a9*/
  a2[3] = a2[1]; /*0x7f93b3*/
  a2[1] = 0; /*0x7f93b6*/
  a2[2] = 0; /*0x7f93b9*/
  a2[4] = 0; /*0x7f93bc*/
  (*(void (__thiscall **)(_DWORD *))(*v10 + 0x4C))(v10); /*0x7f93c7*/
  ((void (__thiscall *)(NiDX9RenderState *, _DWORD))v25->member.renderState->vtbl->SetVar_0FF5)( /*0x7f93d8*/
    v25->member.renderState,
    0);
  return v25->member.device->lpVtbl->SetSamplerState(v25->member.device, 0, D3DSAMP_MIPMAPLODBIAS, 0);// Balanced normal completion reset for the local-tree bias path: direct sampler 0 MIPMAPLODBIAS=0. /*0x7f93ef*/
}
