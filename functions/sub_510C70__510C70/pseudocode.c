char __cdecl sub_510C70(int a1, int arg4, int a3)
{
  int (__thiscall *v7)(int); // eax
  float *v8; // eax
  void (__thiscall ***v9)(_DWORD, int); // esi
  NiNode *v10; // eax
  NiObjectNET *v11; // eax
  BSShaderProperty *v12; // esi
  BSShaderProperty *v13; // eax
  NiNode *v14; // ecx
  const char *v15; // eax
  int v17; // [esp+10h] [ebp-5Ch]
  PlayerCharacter *a2; // [esp+14h] [ebp-58h]
  PlayerCharacter *v19; // [esp+18h] [ebp-54h]
  _DWORD v20[2]; // [esp+24h] [ebp-48h] BYREF
  char *v21[2]; // [esp+2Ch] [ebp-40h] BYREF
  float v22[11]; // [esp+34h] [ebp-38h] BYREF
  unsigned int v23; // [esp+68h] [ebp-4h]
  char v24; // [esp+78h] [ebp+Ch]

  if ( a3 )
  {
    if ( TESDataHandler_g_PlayerRef )
    {
      sub_67D760(v22);
      a2 = TESDataHandler_g_PlayerRef;
      v7 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x174);
      v23 = 0;
      v17 = v7(a3);
      v8 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
      v24 = sub_67EB60(v22, (int)v8, v17, (int)a2, 0.0);
      sub_68C040(v21);
      v19 = TESDataHandler_g_PlayerRef;
      LOBYTE(v23) = 1;
      sub_67E3D0((char *)v22, (int *)v21, v19);
      if ( dword_B36200 )
      {
        TES->ObjectLODRoot->vtbl->RemoveObject(TES->ObjectLODRoot, (NiAVObject **)v20, (NiAVObject *)dword_B36200);
        v9 = (void (__thiscall ***)(_DWORD, int))v20[0];
        if ( v20[0] )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v20[0] + 4)) )
          {
            if ( v9 )
              (**v9)(v9, 1);
          }
        }
      }
      v10 = sub_68C740(v21);
      dword_B36200 = (int)v10;
      if ( v10 )
      {
        v11 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
        v12 = (BSShaderProperty *)v11;
        v20[1] = v11;
        LOBYTE(v23) = 2;
        if ( v11 )
        {
          NiObjectNET::NiObjectNET(v11);
          v12->vtbl = &NiVertexColorProperty::`vftable';
          v12->member.super.flags = 8;
          v13 = v12;
        }
        else
        {
          v13 = 0;
        }
        v13->member.super.flags = v13->member.super.flags & 0xFFC7 | 0x10;
        v14 = (NiNode *)dword_B36200;
        LOBYTE(v23) = 1;
        sub_405680(v14, v13);
        ((void (__thiscall *)(NiNode *, int, _DWORD))TES->ObjectLODRoot->vtbl->AddObject)(
          TES->ObjectLODRoot,
          dword_B36200,
          0);
        NiAVObject_InitializePropertyState((NiAVObject *)TES->ObjectLODRoot);
        NiAVObject_UpdateNiAVObject((NiAVObject *)TES->ObjectLODRoot, 0.0, 1);
      }
      if ( IsConsoleMode )
      {
        v15 = "SUCCESS";
        if ( !v24 )
          v15 = "FAILURE";
        Interface_ConsolePrint("High Path Build: %s", v15);
      }
      LOBYTE(v23) = 0;
      sub_68C9B0(v21);
      v23 = 0xFFFFFFFF;
      TESTexture::ClearComponentReferences(v22);
    }
  }
  return 1;
}
