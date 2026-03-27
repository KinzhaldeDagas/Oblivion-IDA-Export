int __thiscall sub_7F7EE0(int *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // ebp
  int v7; // eax
  volatile LONG *v8; // esi
  volatile LONG *v9; // edi
  unsigned int *v10; // ebx
  int v11; // edi
  ShaderDefinition *ShaderDefinition; // eax
  int v13; // ecx
  int v14; // edi
  NiGeometry **v15; // eax
  void (__thiscall *v16)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v17; // eax
  void (__thiscall *v18)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v19; // eax
  void (__thiscall *v20)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v21; // eax
  void (__thiscall *v22)(unsigned int *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  NiGeometry **v23; // eax
  void (__thiscall *v24)(unsigned int *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *); // edx
  void (__thiscall ***v25)(_DWORD, int); // esi
  int v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // edx
  int *v29; // eax
  int v30; // ebp
  int v31; // eax
  volatile LONG *v32; // esi
  volatile LONG *v33; // edi
  _DWORD *v34; // edi
  int v35; // esi
  int v36; // edi
  NiGeometry **v37; // eax
  void (__thiscall *v38)(unsigned int *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *); // edx
  NiGeometry *v39; // eax
  void (__thiscall *v40)(_DWORD *, volatile LONG *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *, _DWORD, int); // edx
  NiGeometry *v41; // eax
  void (__thiscall *v42)(_DWORD *, volatile LONG *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *, _DWORD, int); // edx
  volatile LONG *v43; // esi
  int *v44; // esi
  int v45; // edi
  NiGeometry *v47; // [esp+124h] [ebp-F8h]
  NiGeometry *v48; // [esp+124h] [ebp-F8h]
  NiGeometry *v49; // [esp+124h] [ebp-F8h]
  NiGeometry *v50; // [esp+124h] [ebp-F8h]
  NiGeometry *v51; // [esp+124h] [ebp-F8h]
  NiGeometry *v52; // [esp+124h] [ebp-F8h]
  _DWORD *v53; // [esp+128h] [ebp-F4h]
  char v54; // [esp+147h] [ebp-D5h]
  volatile LONG *v55; // [esp+148h] [ebp-D4h] BYREF
  int v56; // [esp+14Ch] [ebp-D0h] BYREF
  int *v57; // [esp+150h] [ebp-CCh]
  _DWORD *v58; // [esp+154h] [ebp-C8h]
  int *v59; // [esp+158h] [ebp-C4h]
  int *v60; // [esp+15Ch] [ebp-C0h]
  int v61; // [esp+160h] [ebp-BCh]
  int v62; // [esp+164h] [ebp-B8h]
  BSShader *shader; // [esp+168h] [ebp-B4h]
  _DWORD *v64; // [esp+16Ch] [ebp-B0h]
  int v65; // [esp+170h] [ebp-ACh] BYREF
  int v66; // [esp+174h] [ebp-A8h]
  int v67; // [esp+178h] [ebp-A4h]
  int v68; // [esp+17Ch] [ebp-A0h]
  NiDX9Renderer *v69; // [esp+180h] [ebp-9Ch]
  int v70; // [esp+184h] [ebp-98h]
  int v71; // [esp+188h] [ebp-94h]
  volatile LONG *v72; // [esp+18Ch] [ebp-90h] BYREF
  volatile LONG *v73; // [esp+190h] [ebp-8Ch] BYREF
  volatile LONG *v74; // [esp+194h] [ebp-88h] BYREF
  volatile LONG *v75; // [esp+198h] [ebp-84h] BYREF
  float v76[13]; // [esp+19Ch] [ebp-80h] BYREF
  NiPoint3 v77[5]; // [esp+1D0h] [ebp-4Ch] BYREF
  int v78; // [esp+218h] [ebp-4h]

  v59 = this;
  v69 = g_Renderer;
  v54 = 0;
  v70 = sub_7F5C40(a3);
  v71 = sub_7F5E80(a3);
  v3 = (_DWORD *)a2[1];
  v4 = (_DWORD *)*v3;
  v5 = v3[2];
  v6 = *(_DWORD *)v5;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 0xB4);
  v60 = (int *)v5;
  qmemcpy(v76, (const void *)(v6 + 0x64), sizeof(v76));
  v65 = *(_DWORD *)(v6 + 0x20);
  v64 = v4;
  v66 = *(_DWORD *)(v6 + 0x24);
  v61 = v7;
  v67 = *(_DWORD *)(v6 + 0x28);
  v68 = *(_DWORD *)(v6 + 0x2C);
  v8 = *sub_405760((NiGeometry *)v6, &v55);
  if ( v55 )
  {
    v9 = v55;
    if ( !InterlockedDecrement(v55 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v9)(v9, 1);
  }
  v10 = *(unsigned int **)(v6 + 0xBC);
  v11 = *((_DWORD *)v8 + 6);
  ShaderDefinition = GetShaderDefinition(1u);
  v13 = (int)v60;
  shader = ShaderDefinition->shader;
  dword_B42E90 = (unsigned __int16)a3;
  dword_B42EB8 = v13;
  sub_7ECB20();
  sub_7F60F0(a3, (int)v60, v11, 0);
  sub_7F6A30((NiGeometry *)v6);
  v14 = *(_DWORD *)(v61 + 0x38);
  v15 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v16 = *(void (__thiscall **)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x28);
  v47 = *v15;
  v78 = 0;
  v16(v10, v6, 0, v14, v8, v47, v76, &v65);
  v78 = 0xFFFFFFFF;
  if ( v56 )
  {
    v57 = (int *)v56;
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) )
    {
      if ( v57 )
        (*(void (__thiscall **)(int *, int))*v57)(v57, 1);
    }
  }
  v17 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v18 = *(void (__thiscall **)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x2C);
  v48 = *v17;
  v78 = 1;
  v18(v10, v6, 0, v14, v8, v48, v76, &v65);
  v78 = 0xFFFFFFFF;
  if ( v56 )
  {
    v57 = (int *)v56;
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) )
    {
      if ( v57 )
        (*(void (__thiscall **)(int *, int))*v57)(v57, 1);
    }
  }
  (*(void (__thiscall **)(unsigned int *))(*v10 + 0x48))(v10);
  v62 = v10[0xF];
  v19 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v20 = *(void (__thiscall **)(unsigned int *, int, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x30);
  v49 = *v19;
  v78 = 2;
  v20(v10, v6, 0, v14, v8, v49, v76, &v65);
  v78 = 0xFFFFFFFF;
  if ( v56 )
  {
    v57 = (int *)v56;
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) )
    {
      if ( v57 )
        (*(void (__thiscall **)(int *, int))*v57)(v57, 1);
    }
  }
  v21 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v22 = *(void (__thiscall **)(unsigned int *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x34);
  v50 = *v21;
  v78 = 3;
  v22(v10, v6, 0, 0, v14, v8, v50, v76, &v65);
  v78 = 0xFFFFFFFF;
  if ( v56 )
  {
    v57 = (int *)v56;
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) )
    {
      if ( v57 )
        (*(void (__thiscall **)(int *, int))*v57)(v57, 1);
    }
  }
  (*(void (__thiscall **)(unsigned int *, int, _DWORD, int, volatile LONG *))(*v10 + 0x3C))(v10, v6, 0, v14, v8);
  v23 = sub_7016D0((NiGeometry *)v6, (NiDynamicEffectState **)&v56);
  v24 = *(void (__thiscall **)(unsigned int *, int, _DWORD, _DWORD, int, volatile LONG *, NiGeometry *, float *, int *))(*v10 + 0x38);
  v51 = *v23;
  v78 = 4;
  v24(v10, v6, 0, 0, v14, v8, v51, v76, &v65);
  v78 = 0xFFFFFFFF;
  if ( v56 )
  {
    v25 = (void (__thiscall ***)(_DWORD, int))v56;
    if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) )
      (**v25)(v25, 1);
  }
  (*(void (__thiscall **)(int, NiDX9Renderer *))(*(_DWORD *)v6 + 0x88))(v6, g_Renderer);
  sub_7D1800(a3);
  v26 = 4 * dword_B28CB0;
  v55 = (volatile LONG *)v61;
  _memset(*v59, 0, v26);
  v27 = v64;
  if ( v64 )
  {
    while ( 1 )
    {
      v28 = (_DWORD *)*v27;
      v57 = v60;
      v29 = (int *)v27[2];
      dword_B42E90 = (unsigned __int16)a3;
      dword_B42EB8 = (int)v29;
      v30 = *v29;
      v60 = v29;
      v31 = *(_DWORD *)(v30 + 0xB4);
      v64 = v28;
      v61 = v31;
      v32 = *sub_405760((NiGeometry *)v30, &v72);
      v56 = (int)v32;
      if ( v72 )
      {
        v33 = v72;
        if ( !InterlockedDecrement(v72 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v33)(v33, 1);
      }
      v58 = *((_DWORD **)v32 + 6);
      qmemcpy(v76, (const void *)(v30 + 0x64), sizeof(v76));
      v65 = *(_DWORD *)(v30 + 0x20);
      v66 = *(_DWORD *)(v30 + 0x24);
      v67 = *(_DWORD *)(v30 + 0x28);
      v68 = *(_DWORD *)(v30 + 0x2C);
      if ( v55 == (volatile LONG *)v61 )
      {
        v44 = v59;
        if ( !v54 )
        {
          sub_7F68C0(a3, 1, v70, v71, (int)shader);
          v54 = 1;
        }
        sub_7F60F0(a3, (int)v60, (int)v58, (int)v57);
        sub_7F63D0(v30, a3, v56, v58, v10);
        if ( !*((_BYTE *)v60 + 7) )
          flt_B4668C = 0.0;
        sub_7C8680(v76);
        sub_765480(v69, v76, 0);
        sub_7F5B80(v76, v77);
        v45 = (int)shader;
        sub_7C9140((int)v77, v76[0xC], (unsigned __int16)a3, *(_DWORD *)(v30 + 0xB8));
        sub_7F6BF0(v44, (NiGeometry *)v30, v45, v62, 0);
      }
      else
      {
        if ( v54 )
        {
          sub_7F68C0(a3, 0, v70, v71, (int)shader);
          v54 = 0;
        }
        sub_7F6A30((NiGeometry *)v30);
        v34 = v58;
        v35 = *(_DWORD *)(v61 + 0x38);
        sub_7F60F0(a3, (int)v60, (int)v58, (int)v57);
        v53 = v34;
        v36 = v56;
        sub_7F63D0(v30, a3, v56, v53, v10);
        if ( !*((_BYTE *)v60 + 7) )
          flt_B4668C = 0.0;
        v37 = sub_7016D0((NiGeometry *)v30, (NiDynamicEffectState **)&v73);
        v38 = *(void (__thiscall **)(unsigned int *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *))(*v10 + 0x34);
        v52 = *v37;
        v78 = 5;
        v38(v10, v30, 0, 0, v35, v36, v52, v76, &v65);
        v78 = 0xFFFFFFFF;
        if ( v73 )
        {
          v55 = v73;
          if ( !InterlockedDecrement(v73 + 1) )
          {
            if ( v55 )
              (**(void (__thiscall ***)(volatile LONG *, int))v55)(v55, 1);
          }
        }
        (*(void (__thiscall **)(unsigned int *, int, _DWORD, int, int))(*v10 + 0x3C))(v10, v30, 0, v35, v36);
        v58 = (_DWORD *)v10[0xB];
        v39 = *sub_7016D0((NiGeometry *)v30, (NiDynamicEffectState **)&v74);
        v40 = *(void (__thiscall **)(_DWORD *, volatile LONG *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *, _DWORD, int))(*v58 + 0x40);
        v55 = *(volatile LONG **)(v62 + 0x44);
        v78 = 6;
        v40(v58, v55, v30, 0, 0, v35, v36, v39, v76, &v65, 0, 1);
        v78 = 0xFFFFFFFF;
        if ( v74 )
        {
          v55 = v74;
          if ( !InterlockedDecrement(v74 + 1) )
          {
            if ( v55 )
              (**(void (__thiscall ***)(volatile LONG *, int))v55)(v55, 1);
          }
        }
        v58 = (_DWORD *)v10[0xC];
        v41 = *sub_7016D0((NiGeometry *)v30, (NiDynamicEffectState **)&v75);
        v42 = *(void (__thiscall **)(_DWORD *, volatile LONG *, int, _DWORD, _DWORD, int, int, NiGeometry *, float *, int *, _DWORD, int))(*v58 + 0x40);
        v55 = *(volatile LONG **)(v62 + 0x58);
        v78 = 7;
        v42(v58, v55, v30, 0, 0, v35, v36, v41, v76, &v65, 0, 1);
        v78 = 0xFFFFFFFF;
        if ( v75 )
        {
          v43 = v75;
          if ( !InterlockedDecrement(v75 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v43)(v43, 1);
        }
        sub_7F6BF0(v59, (NiGeometry *)v30, (int)shader, v62, 0);
      }
      v55 = (volatile LONG *)v61;
      if ( !v64 )
        break;
      v27 = v64;
    }
  }
  sub_7A9C30((int)a2);
  a2[3] = a2[1];
  a2[1] = 0;
  a2[2] = 0;
  a2[4] = 0;
  (*(void (__thiscall **)(unsigned int *))(*v10 + 0x4C))(v10);
  return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))v69->member.renderState->vtbl->SetVar_0FF5)(
           v69->member.renderState,
           0);
}
