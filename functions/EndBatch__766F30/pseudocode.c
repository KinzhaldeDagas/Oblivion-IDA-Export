// DX10 bridge note: EndBatch reaches D3D9 DrawIndexedPrimitive/DrawPrimitive only after shader pass setup, stream/index binding via shader vtable +0x3C, and NiDX9ShaderConstantManager flush. The D3D9 draw hook is therefore the authoritative boundary for loading captured DX10 state; companion SM4 shaders are preferred, with generated fallback DX10 shaders only as a diagnostic path when companions are missing.
UInt32 __usercall EndBatch@<eax>(NiDX9Renderer *a1@<ecx>, int a2@<ebp>)
{
  int *v3; // eax
  int v4; // edi
  int v5; // ebp
  _DWORD *v6; // ebx
  UInt32 v7; // edi
  _DWORD *v8; // ebx
  _DWORD *v9; // ecx
  unsigned __int16 *v10; // ebx
  NiD3DShader *v11; // ecx
  int v12; // eax
  UINT v13; // ebx
  bool v14; // cf
  _DWORD *i; // eax
  UInt32 v16; // edi
  UInt32 v18; // edi
  _DWORD *v20; // [esp+D8h] [ebp-10h]
  _DWORD *v21; // [esp+DCh] [ebp-Ch]
  UINT v22; // [esp+E0h] [ebp-8h]
  int v23; // [esp+E4h] [ebp-4h]
  unsigned __int16 *retaddr; // [esp+E8h] [ebp+0h]

  v3 = (int *)a1->member.pad624[0]; /*0x766f37*/
  if ( !v3 || a1->member.lostDevice ) /*0x766f48*/
  {
    v18 = a1->member.pad624[4]; /*0x7672a9*/
    if ( v18 ) /*0x7672b1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x7672b7*/
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1); /*0x7672cd*/
      a1->member.pad624[4] = 0; /*0x7672cf*/
    }
    goto LABEL_39; /*0x7672cf*/
  }
  v4 = v3[2]; /*0x766f54*/
  v5 = *v3; /*0x766f58*/
  v6 = *(_DWORD **)(*v3 + 0xB8); /*0x766f5a*/
  if ( (*(int (__thiscall **)(UInt32, int, _DWORD *, int, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4] /*0x766f8b*/
                                                                                   + 0x28))(
         a1->member.pad624[4],
         *v3,
         v6,
         v4,
         a1->member.pad624[2],
         a1->member.pad624[3],
         *v3 + 0x64,
         *v3 + 0x20) )
  {
    v7 = a1->member.pad624[4]; /*0x766f91*/
    if ( v7 ) /*0x766f9b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x766fa1*/
        (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1); /*0x766fb7*/
      a1->member.pad624[4] = 0; /*0x766fb9*/
    }
LABEL_39:
    a1->member.pad624[2] = 0; /*0x7672d5*/
    a1->member.pad624[3] = 0; /*0x7672dc*/
    return sub_762FD0(a1); /*0x7672e9*/
  }
  (*(void (__thiscall **)(UInt32, int, _DWORD *, int, UInt32, UInt32, int, int, int))(*(_DWORD *)a1->member.pad624[4] /*0x766ffd*/
                                                                                    + 0x2C))(
    a1->member.pad624[4],
    v5,
    v6,
    v4,
    a1->member.pad624[2],
    a1->member.pad624[3],
    v5 + 0x64,
    v5 + 0x20,
    a2);
  if ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)a1->member.pad624[4] + 0x48))(a1->member.pad624[4]) ) /*0x76700a*/
  {
    do /*0x7671f7*/
    {
      v8 = (_DWORD *)a1->member.pad624[0]; /*0x767014*/
      v20 = v8; /*0x767049*/
      (*(void (__thiscall **)(UInt32, _DWORD, _DWORD, _DWORD, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4] /*0x76704d*/
                                                                                       + 0x30))(
        a1->member.pad624[4],
        *v8,
        *(_DWORD *)(*v8 + 0xB8),
        v8[2],
        a1->member.pad624[2],
        a1->member.pad624[3],
        *v8 + 0x64,
        *v8 + 0x20);
      while ( 1 ) /*0x76707a*/
      {
        v5 = *v8; /*0x767055*/
        v9 = *(_DWORD **)(*v8 + 0xB8); /*0x767057*/
        v4 = v8[2]; /*0x76705d*/
        v10 = (unsigned __int16 *)v8[1]; /*0x767060*/
        v21 = v9; /*0x767063*/
        v11 = (NiD3DShader *)a1->member.pad624[4]; /*0x767067*/
        retaddr = v10; /*0x767073*/
        if ( v11 == a1->member.defaultShader && v10 && v10[0x10] > a1->member.HWBones ) /*0x76708a*/
        {
          Shared_NoOpVirtual_60D0A0(v11); /*0x767092*/
        }
        else
        {
          v11->__vftable->Unk34( /*0x7670bf*/
            (NiD3DShaderInterface *)v11,
            v5,
            v21,
            (int)v10,
            v4,
            a1->member.pad624[2],
            a1->member.pad624[3],
            (float *)(v5 + 0x64),
            v5 + 0x20);
          v4 = (*(int (__thiscall **)(UInt32, int, unsigned __int16 *, int, UInt32))(*(_DWORD *)a1->member.pad624[4] /*0x7670e3*/
                                                                                   + 0x3C))(
                 a1->member.pad624[4],
                 v5,
                 v10,
                 v4,
                 a1->member.pad624[2]);
          (*(void (__thiscall **)(UInt32, int, _DWORD *, unsigned __int16 *, int, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4] + 0x38))( /*0x767103*/
            a1->member.pad624[4],
            v5,
            v21,
            v10,
            v4,
            a1->member.pad624[2],
            a1->member.pad624[3],
            v5 + 0x64,
            v5 + 0x20);
          (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)a1->member.renderState->member.ShaderConstantManager /*0x767116*/
                                                               + 4))(a1->member.renderState->member.ShaderConstantManager);
          if ( *(_DWORD *)(v4 + 0x30) ) /*0x76711a*/
          {
            v22 = 0; /*0x767122*/
            v23 = 0; /*0x767126*/
            if ( *(_DWORD *)(v4 + 0x44) ) /*0x76711f*/
            {
              do /*0x767186*/
              {
                v12 = *(_DWORD *)(v4 + 0x48); /*0x767130*/
                if ( v12 ) /*0x767135*/
                  v13 = *(unsigned __int16 *)(v12 + 2 * v23) - 2; /*0x76713f*/
                else
                  v13 = *(_DWORD *)(v4 + 0x3C); /*0x767144*/
                a1->member.device->lpVtbl->DrawIndexedPrimitive( /*0x76716a*/
                  a1->member.device,
                  *(D3DPRIMITIVETYPE *)(v4 + 0x38),
                  *(_DWORD *)(v4 + 0x34),
                  0,
                  *(_DWORD *)(v4 + 0x14),
                  v22,
                  v13);
                v14 = (unsigned int)(v23 + 1) < *(_DWORD *)(v4 + 0x44); /*0x76717b*/
                v22 += v13 + 2; /*0x76717e*/
                ++v23; /*0x767182*/
              }
              while ( v14 ); /*0x767186*/
              v10 = retaddr; /*0x767188*/
            }
          }
          else
          {
            a1->member.device->lpVtbl->DrawPrimitive( /*0x7671a9*/
              a1->member.device,
              *(D3DPRIMITIVETYPE *)(v4 + 0x38),
              *(_DWORD *)(v4 + 0x34),
              *(_DWORD *)(v4 + 0x3C));
          }
          (*(void (__thiscall **)(UInt32, int, _DWORD *, unsigned __int16 *, int, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4] + 0x40))( /*0x7671d4*/
            a1->member.pad624[4],
            v5,
            v21,
            v10,
            v4,
            a1->member.pad624[2],
            a1->member.pad624[3],
            v5 + 0x64,
            v5 + 0x20);
          v20 = (_DWORD *)v20[3]; /*0x7671dd*/
        }
        if ( !v20 ) /*0x7671e6*/
          break; /*0x7671e6*/
        v8 = v20; /*0x767051*/
      }
    }
    while ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)a1->member.pad624[4] + 0x4C))(a1->member.pad624[4]) ); /*0x7671f7*/
    v6 = v21; /*0x767201*/
  }
  for ( i = (_DWORD *)a1->member.pad624[0]; i; i = (_DWORD *)i[3] ) /*0x76720d*/
    *(_WORD *)(*(_DWORD *)(*i + 0xB4) + 0x2E) &= 0xF000u; /*0x76721c*/
  (*(void (__thiscall **)(UInt32, int, _DWORD *, int, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4] + 0x44))( /*0x76724b*/
    a1->member.pad624[4],
    v5,
    v6,
    v4,
    a1->member.pad624[2],
    a1->member.pad624[3],
    v5 + 0x64,
    v5 + 0x20);
  v16 = a1->member.pad624[4]; /*0x76724d*/
  if ( v16 ) /*0x767257*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x76725d*/
      (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1); /*0x767273*/
    a1->member.pad624[4] = 0; /*0x767275*/
  }
  a1->member.pad624[2] = 0; /*0x76727d*/
  a1->member.pad624[3] = 0; /*0x767283*/
  sub_762FD0(a1); /*0x767289*/
  return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))a1->member.renderState->vtbl->SetVar_0FF5)( /*0x766fc0*/
           a1->member.renderState,
           0);
}
