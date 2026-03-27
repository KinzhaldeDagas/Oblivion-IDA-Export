// positive sp value has been detected, the output may be wrong!
int __usercall def_813686@<eax>(
        unsigned __int16 a1@<ax>,
        void (__stdcall *a2)(volatile LONG *lpAddend)@<ebx>,
        int a3@<ebp>,
        int a4@<edi>)
{
  BSShaderAccumulator *inited; // eax
  BSShaderAccumulator *v5; // esi
  volatile LONG *v6; // ebx
  NiAccumulator *accumulator; // edi
  NiAccumulator *v8; // edi
  int v10; // eax
  int v11; // ebx
  int v12; // esi
  int v13; // [esp-C4h] [ebp-CCh]
  volatile LONG **v14; // [esp-C0h] [ebp-C8h]
  _DWORD v15[3]; // [esp-B8h] [ebp-C0h] BYREF
  unsigned __int16 v16; // [esp-ACh] [ebp-B4h]
  int v17; // [esp-88h] [ebp-90h] BYREF
  _BYTE v18[140]; // [esp-84h] [ebp-8Ch] BYREF

  if ( (v16 & a1) == 0 )
  {
    NiAVObject_UpdateNiAVObject((NiAVObject *)a3, 0.0, 1);
    if ( LOWORD(dword_B42EAC) == 5 )
    {
      v10 = *(_DWORD *)(a3 + 0x144);
      if ( v10 )
      {
        sub_7EE390(0, v10, 1.0);
        v11 = *(_DWORD *)(*(_DWORD *)(a3 + 0x144) + 0x114);
        v12 = *(_DWORD *)(a3 + 0x140);
        if ( v12 != v11 )
        {
          if ( v12 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
              (**(void (__thiscall ***)(int, int))v12)(v12, 1);
          }
          *(_DWORD *)(a3 + 0x140) = v11;
          if ( v11 )
            InterlockedIncrement((volatile LONG *)(v11 + 4));
        }
        sub_813300((NiNode *)a3, *(int ****)(a3 + 0x144));
      }
    }
    else if ( *(_DWORD *)(a3 + 0x148) )
    {
      inited = InitBSShaderAccumulator();
      v5 = inited;
      *(_DWORD *)v18 = inited;
      if ( inited )
        a2((volatile LONG *)inited + 1);
      if ( *((_DWORD *)v5 + 1) == 1 )
        a2((volatile LONG *)v5 + 1);
      *(_DWORD *)&v18[4] = g_Renderer->member.super.accumulator;
      v6 = *(volatile LONG **)&v18[4];
      if ( *(_DWORD *)&v18[4] )
        InterlockedIncrement((volatile LONG *)(*(_DWORD *)&v18[4] + 4));
      accumulator = g_Renderer->member.super.accumulator;
      v15[1] = &g_Renderer->member.super.accumulator;
      if ( accumulator != v5 )
      {
        if ( accumulator )
        {
          if ( !InterlockedDecrement((volatile LONG *)accumulator + 1) )
            (**(void (__thiscall ***)(NiAccumulator *, int))accumulator)(accumulator, 1);
        }
        *(_DWORD *)v15[0] = v5;
        InterlockedIncrement((volatile LONG *)v5 + 1);
      }
      (*(void (__thiscall **)(BSShaderAccumulator *, int))(*(_DWORD *)v5 + 0x4C))(v5, a3);
      *((_BYTE *)v5 + 0x21E0) = 1;
      NiCullingProcess_NiCullingProcess((NiCullingProcess *)v18, 0);
      *(_DWORD *)&v18[0xC] = a3;
      NiCullingProcess::SetFrustum((NiCullingProcess *)v18, (NiFrustum *)(a3 + 0xEC));
      sub_70C0B0((NiCamera *)a3, *(SceneGraph **)(a3 + 0x148), (NiCullingProcess *)v18, 0);
      *((_BYTE *)v5 + 0x21E1) = 1;
      (*(void (__thiscall **)(BSShaderAccumulator *))(*(_DWORD *)v5 + 0x50))(v5);
      v8 = g_Renderer->member.super.accumulator;
      if ( v8 != (NiAccumulator *)v6 )
      {
        if ( v8 )
        {
          if ( !InterlockedDecrement((volatile LONG *)v8 + 1) )
            (**(void (__thiscall ***)(NiAccumulator *, int))v8)(v8, 1);
        }
        *v14 = v6;
        if ( v6 )
          InterlockedIncrement(v6 + 1);
      }
      BSCullingProcess::~BSCullingProcess((BSCullingProcess *)&v17);
      if ( v6 )
      {
        if ( !InterlockedDecrement(v6 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
      }
      if ( !InterlockedDecrement((volatile LONG *)v5 + 1) )
        (**(void (__thiscall ***)(BSShaderAccumulator *, int))v5)(v5, 1);
      a4 = v13;
    }
  }
  NiRenderer_EndScene();
  if ( a4 + 1 < 6 )
    JUMPOUT(0x8135CA);
  return ((int (__cdecl *)(_DWORD *))dword_B43104->__vftable->super.SetClearColor4)(v15);
}
