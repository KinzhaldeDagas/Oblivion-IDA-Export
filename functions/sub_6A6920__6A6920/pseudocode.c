int *__thiscall sub_6A6920(unsigned int *this, char a2)
{
  int *result; // eax
  TESEffectShader *v4; // ebp
  _DWORD *v5; // edi
  MagicShaderHitEffect *v6; // edi
  TESObjectREFR *v7; // eax
  MagicShaderHitEffect *v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  float elapsedSeconds; // [esp+0h] [ebp-24h]

  result = *(int **)(*(this + 3) + 0x1C); /*0x6a6949*/
  v4 = (TESEffectShader *)result[0x1E]; /*0x6a694c*/
  if ( v4 && *(this + 8) && *(this + 0xA) == 4 ) /*0x6a6966*/
  {
    if ( a2 ) /*0x6a6970*/
    {
      v5 = (_DWORD *)*(this + 0xD); /*0x6a6976*/
      if ( v5 ) /*0x6a697b*/
      {
        result = (int *)BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)*(this + 0xD)); /*0x6a697f*/
        if ( !(_BYTE)result ) /*0x6a6986*/
          return result; /*0x6a6986*/
        BSSimpleList_Clear(v5); /*0x6a6992*/
        FormHeapFree(*(this + 0xD)); /*0x6a699b*/
        *(this + 0xD) = 0; /*0x6a69a3*/
      }
      v6 = (MagicShaderHitEffect *)FormHeapAlloc(0x4Cu); /*0x6a69ad*/
      if ( v6 ) /*0x6a69bc*/
      {
        elapsedSeconds = kTerrainLODQuadRayDirectionZ; /*0x6a69cd*/
        v7 = (TESObjectREFR *)(*(int (**)(void))(*(_DWORD *)*(this + 8) + 4))(); /*0x6a69d1*/
        v8 = MagicShaderHitEffect_constr_args2(v6, v7, v4, elapsedSeconds); /*0x6a69db*/
      }
      else
      {
        v8 = 0; /*0x6a69df*/
      }
      if ( ((unsigned __int8 (__thiscall *)(MagicShaderHitEffect *))v8->super.super.vtable[1].super.super.Destructor)(v8) ) /*0x6a69f0*/
      {
        ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v8->super.super); /*0x6a69fc*/
        result = (int *)FormHeapAlloc(8u); /*0x6a6a03*/
        if ( result ) /*0x6a6a0d*/
        {
          *result = (int)v8; /*0x6a6a0f*/
          result[1] = 0; /*0x6a6a11*/
          *(this + 0xD) = (unsigned int)result; /*0x6a6a14*/
        }
        else
        {
          result = 0; /*0x6a6a1c*/
          *(this + 0xD) = 0; /*0x6a6a1e*/
        }
        v8->super.ownerActiveEffect = (ActiveEffect *)this; /*0x6a6a17*/
      }
      else
      {
        return ((int *(__thiscall *)(MagicShaderHitEffect *, int))v8->super.super.vtable->super.super.Destructor)(v8, 1); /*0x6a6a2e*/
      }
    }
    else
    {
      result = (int *)*(this + 0xD); /*0x6a6a32*/
      if ( result ) /*0x6a6a37*/
      {
        do /*0x6a6a56*/
        {
          if ( !result[1] && !*result ) /*0x6a6a45*/
            break; /*0x6a6a47*/
          v9 = *result; /*0x6a6a49*/
          *(_BYTE *)(v9 + 0x24) = 1; /*0x6a6a4b*/
          *(_DWORD *)(v9 + 0x18) = 0; /*0x6a6a4e*/
          result = (int *)result[1]; /*0x6a6a51*/
        }
        while ( result ); /*0x6a6a56*/
        BSSimpleList_Clear((_DWORD *)*(this + 0xD)); /*0x6a6a5b*/
        FormHeapFree(*(this + 0xD)); /*0x6a6a64*/
        v10 = *(this + 8); /*0x6a6a69*/
        *(this + 0xD) = 0; /*0x6a6a6c*/
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10); /*0x6a6a78*/
        return (int *)sub_678E70((int *)&qword_B3BB2C[0x75], v11, (LONG)v4); /*0x6a6a80*/
      }
    }
  }
  return result; /*0x6a6a85*/
}
