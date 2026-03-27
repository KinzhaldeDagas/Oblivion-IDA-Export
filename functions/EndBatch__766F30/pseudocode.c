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

  v3 = (int *)a1->member.pad624[0];
  if ( !v3 || a1->member.lostDevice )
  {
    v18 = a1->member.pad624[4];
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v18)(v18, 1);
      a1->member.pad624[4] = 0;
    }
    goto LABEL_39;
  }
  v4 = v3[2];
  v5 = *v3;
  v6 = *(_DWORD **)(*v3 + 0xB8);
  if ( (*(int (__thiscall **)(UInt32, int, _DWORD *, int, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4]
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
    v7 = a1->member.pad624[4];
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1);
      a1->member.pad624[4] = 0;
    }
LABEL_39:
    a1->member.pad624[2] = 0;
    a1->member.pad624[3] = 0;
    return sub_762FD0(a1);
  }
  (*(void (__thiscall **)(UInt32, int, _DWORD *, int, UInt32, UInt32, int, int, int))(*(_DWORD *)a1->member.pad624[4]
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
  if ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)a1->member.pad624[4] + 0x48))(a1->member.pad624[4]) )
  {
    do
    {
      v8 = (_DWORD *)a1->member.pad624[0];
      v20 = v8;
      (*(void (__thiscall **)(UInt32, _DWORD, _DWORD, _DWORD, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4]
                                                                                       + 0x30))(
        a1->member.pad624[4],
        *v8,
        *(_DWORD *)(*v8 + 0xB8),
        v8[2],
        a1->member.pad624[2],
        a1->member.pad624[3],
        *v8 + 0x64,
        *v8 + 0x20);
      while ( 1 )
      {
        v5 = *v8;
        v9 = *(_DWORD **)(*v8 + 0xB8);
        v4 = v8[2];
        v10 = (unsigned __int16 *)v8[1];
        v21 = v9;
        v11 = (NiD3DShader *)a1->member.pad624[4];
        retaddr = v10;
        if ( v11 == a1->member.defaultShader && v10 && v10[0x10] > a1->member.HWBones )
        {
          TESTexture::ClearComponentReferences(v11);
        }
        else
        {
          v11->__vftable->Unk34(
            (NiD3DShaderInterface *)v11,
            v5,
            v21,
            (int)v10,
            v4,
            a1->member.pad624[2],
            a1->member.pad624[3],
            (float *)(v5 + 0x64),
            v5 + 0x20);
          v4 = (*(int (__thiscall **)(UInt32, int, unsigned __int16 *, int, UInt32))(*(_DWORD *)a1->member.pad624[4]
                                                                                   + 0x3C))(
                 a1->member.pad624[4],
                 v5,
                 v10,
                 v4,
                 a1->member.pad624[2]);
          (*(void (__thiscall **)(UInt32, int, _DWORD *, unsigned __int16 *, int, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4] + 0x38))(
            a1->member.pad624[4],
            v5,
            v21,
            v10,
            v4,
            a1->member.pad624[2],
            a1->member.pad624[3],
            v5 + 0x64,
            v5 + 0x20);
          (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)a1->member.renderState->member.ShaderConstantManager
                                                               + 4))(a1->member.renderState->member.ShaderConstantManager);
          if ( *(_DWORD *)(v4 + 0x30) )
          {
            v22 = 0;
            v23 = 0;
            if ( *(_DWORD *)(v4 + 0x44) )
            {
              do
              {
                v12 = *(_DWORD *)(v4 + 0x48);
                if ( v12 )
                  v13 = *(unsigned __int16 *)(v12 + 2 * v23) - 2;
                else
                  v13 = *(_DWORD *)(v4 + 0x3C);
                a1->member.device->lpVtbl->DrawIndexedPrimitive(
                  a1->member.device,
                  *(D3DPRIMITIVETYPE *)(v4 + 0x38),
                  *(_DWORD *)(v4 + 0x34),
                  0,
                  *(_DWORD *)(v4 + 0x14),
                  v22,
                  v13);
                v14 = (unsigned int)(v23 + 1) < *(_DWORD *)(v4 + 0x44);
                v22 += v13 + 2;
                ++v23;
              }
              while ( v14 );
              v10 = retaddr;
            }
          }
          else
          {
            a1->member.device->lpVtbl->DrawPrimitive(
              a1->member.device,
              *(D3DPRIMITIVETYPE *)(v4 + 0x38),
              *(_DWORD *)(v4 + 0x34),
              *(_DWORD *)(v4 + 0x3C));
          }
          (*(void (__thiscall **)(UInt32, int, _DWORD *, unsigned __int16 *, int, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4] + 0x40))(
            a1->member.pad624[4],
            v5,
            v21,
            v10,
            v4,
            a1->member.pad624[2],
            a1->member.pad624[3],
            v5 + 0x64,
            v5 + 0x20);
          v20 = (_DWORD *)v20[3];
        }
        if ( !v20 )
          break;
        v8 = v20;
      }
    }
    while ( (*(int (__thiscall **)(UInt32))(*(_DWORD *)a1->member.pad624[4] + 0x4C))(a1->member.pad624[4]) );
    v6 = v21;
  }
  for ( i = (_DWORD *)a1->member.pad624[0]; i; i = (_DWORD *)i[3] )
    *(_WORD *)(*(_DWORD *)(*i + 0xB4) + 0x2E) &= 0xF000u;
  (*(void (__thiscall **)(UInt32, int, _DWORD *, int, UInt32, UInt32, int, int))(*(_DWORD *)a1->member.pad624[4] + 0x44))(
    a1->member.pad624[4],
    v5,
    v6,
    v4,
    a1->member.pad624[2],
    a1->member.pad624[3],
    v5 + 0x64,
    v5 + 0x20);
  v16 = a1->member.pad624[4];
  if ( v16 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v16)(v16, 1);
    a1->member.pad624[4] = 0;
  }
  a1->member.pad624[2] = 0;
  a1->member.pad624[3] = 0;
  sub_762FD0(a1);
  return ((int (__thiscall *)(NiDX9RenderState *, _DWORD))a1->member.renderState->vtbl->SetVar_0FF5)(
           a1->member.renderState,
           0);
}
