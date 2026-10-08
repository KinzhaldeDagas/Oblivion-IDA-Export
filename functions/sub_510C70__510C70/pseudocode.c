char __cdecl sub_510C70(int a1, int arg4, int a3)
{
  int (__thiscall *v3)(int); // eax
  const NiPoint3 *v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi
  NiNode *v6; // eax
  NiObjectNET *v7; // eax
  BSShaderProperty *v8; // esi
  BSShaderProperty *v9; // eax
  NiNode *v10; // ecx
  const char *v11; // eax
  const NiPoint3 *v13; // [esp+10h] [ebp-5Ch]
  TESObjectREFR *a2; // [esp+14h] [ebp-58h]
  PlayerCharacter *v15; // [esp+18h] [ebp-54h]
  _DWORD v16[2]; // [esp+24h] [ebp-48h] BYREF
  char *v17[2]; // [esp+2Ch] [ebp-40h] BYREF
  float segmentQuery[11]; // [esp+34h] [ebp-38h] BYREF
  unsigned int v19; // [esp+68h] [ebp-4h]
  bool CanTraverseSegment; // [esp+78h] [ebp+Ch]

  if ( a3 )
  {
    if ( reference )
    {
      sub_67D760(segmentQuery); /*0x510cb1*/
      a2 = (TESObjectREFR *)reference; /*0x510cbf*/
      v3 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x174); /*0x510cc0*/
      v19 = 0; /*0x510cc8*/
      v13 = (const NiPoint3 *)v3(a3); /*0x510cda*/
      v4 = (const NiPoint3 *)reference->vtbl->super.super.super.GetPos(reference); /*0x510ce1*/
      CanTraverseSegment = ConnectedPointGraph_CanTraverseSegment(segmentQuery, v4, v13, a2, 0.0); /*0x510cf1*/
      sub_68C040(v17); /*0x510cf5*/
      v15 = reference; /*0x510d00*/
      LOBYTE(v19) = 1; /*0x510d0a*/
      sub_67E3D0((char *)segmentQuery, (NiDX92DBufferData **)v17, v15); /*0x510d0f*/
      if ( dword_B361CC[0xD] ) /*0x510d14*/
      {
        MEMORY[0xB333A0]->ObjectLODRoot->vtbl->RemoveObject( /*0x510d34*/
          MEMORY[0xB333A0]->ObjectLODRoot,
          (NiAVObject **)v16,
          (NiAVObject *)dword_B361CC[0xD]);
        v5 = (void (__thiscall ***)(_DWORD, int))v16[0]; /*0x510d36*/
        if ( v16[0] ) /*0x510d3c*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v16[0] + 4)) ) /*0x510d42*/
          {
            if ( v5 ) /*0x510d4e*/
              (**v5)(v5, 1); /*0x510d58*/
          }
        }
      }
      v6 = sub_68C740((NiDX92DBufferData **)v17); /*0x510d5e*/
      dword_B361CC[0xD] = (int)v6; /*0x510d65*/
      if ( v6 ) /*0x510d6a*/
      {
        v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x510d72*/
        v8 = (BSShaderProperty *)v7; /*0x510d77*/
        v16[1] = v7; /*0x510d7c*/
        LOBYTE(v19) = 2; /*0x510d82*/
        if ( v7 ) /*0x510d87*/
        {
          NiObjectNET::NiObjectNET(v7); /*0x510d8b*/
          v8->vtbl = &NiVertexColorProperty::`vftable'; /*0x510d90*/
          v8->member.super.flags = 8; /*0x510d96*/
          v9 = v8; /*0x510d9c*/
        }
        else
        {
          v9 = 0; /*0x510da0*/
        }
        v9->member.super.flags = v9->member.super.flags & 0xFFC7 | 0x10; /*0x510daf*/
        v10 = (NiNode *)dword_B361CC[0xD]; /*0x510db3*/
        LOBYTE(v19) = 1; /*0x510dba*/
        sub_405680(v10, v9); /*0x510dbf*/
        ((void (__thiscall *)(NiNode *, int, _DWORD))MEMORY[0xB333A0]->ObjectLODRoot->vtbl->AddObject)( /*0x510dde*/
          MEMORY[0xB333A0]->ObjectLODRoot,
          dword_B361CC[0xD],
          0);
        NiAVObject_InitializePropertyState((NiAVObject *)MEMORY[0xB333A0]->ObjectLODRoot); /*0x510de9*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)MEMORY[0xB333A0]->ObjectLODRoot, 0.0, 1); /*0x510dff*/
      }
      if ( MEMORY[0xB361AC] )
      {
        v11 = "SUCCESS"; /*0x510e12*/
        if ( !CanTraverseSegment ) /*0x510e17*/
          v11 = "FAILURE"; /*0x510e19*/
        Interface_ConsolePrint("High Path Build: %s", v11);
      }
      LOBYTE(v19) = 0; /*0x510e30*/
      sub_68C9B0((NiDX92DBufferData **)v17); /*0x510e35*/
      v19 = 0xFFFFFFFF; /*0x510e3e*/
      Shared_NoOpVirtual_60D0A0(segmentQuery); /*0x510e46*/
    }
  }
  return 1; /*0x510e4d*/
}
