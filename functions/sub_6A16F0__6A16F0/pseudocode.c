bool __thiscall sub_6A16F0(int this)
{
  int v4; // eax
  PlayerCharacter *v5; // ecx
  bool v6; // zf
  char v7; // cl
  int v8; // eax
  _DWORD *sound; // ebx
  int v10; // eax
  int *v11; // esi
  float *v12; // eax
  float v13; // ecx
  float v14; // edx
  int v15; // ecx
  bool v16; // bl
  NiObjectNET **v17; // ebx
  NiNode *v18; // eax
  NiNode *v19; // eax
  float **v20; // esi
  int v21; // edi
  const char *v22; // eax
  int *v23; // eax
  float *v24; // eax
  float *v25; // eax
  double v26; // st7
  int v27; // ecx
  void *v28; // eax
  void *v29; // eax
  float *v30; // ecx
  volatile LONG *v31; // eax
  _DWORD **v32; // ebx
  int v33; // ebx
  const char *v34; // eax
  int *v35; // eax
  BSShaderPPLightingProperty::TextureEffectData *v36; // eax
  char v38; // [esp+21h] [ebp-13Bh]
  char v39; // [esp+22h] [ebp-13Ah] BYREF
  char v40; // [esp+23h] [ebp-139h] BYREF
  int v41; // [esp+24h] [ebp-138h] BYREF
  int v42; // [esp+28h] [ebp-134h] BYREF
  NiNode *v43; // [esp+2Ch] [ebp-130h] BYREF
  float v44; // [esp+30h] [ebp-12Ch] BYREF
  int v45; // [esp+34h] [ebp-128h] BYREF
  int v46[3]; // [esp+38h] [ebp-124h] BYREF
  float v47; // [esp+44h] [ebp-118h]
  char ArgList[260]; // [esp+48h] [ebp-114h] BYREF
  int v49; // [esp+158h] [ebp-4h]

  v4 = *(_DWORD *)(this + 0x18);
  if ( v4 )
  {
    v44 = *(float *)(v4 + 4);
    *(float *)(this + 0x20) = v44;
    *(_BYTE *)(this + 0x24) = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 0xC) + 0x1C) + 0x58) & 0x400) == 0;
    if ( (*(_DWORD *)(v4 + 0x14) & 0x10) != 0 )
      *(float *)(this + 0x38) = flt_A2FE7C;
  }
  v5 = TESDataHandler_g_PlayerRef;
  v6 = *(_DWORD *)(this + 0x1C) == (_DWORD)TESDataHandler_g_PlayerRef;
  v44 = 0.0;
  v39 = 0;
  v40 = 0;
  v38 = 0;
  if ( v6 )
  {
    if ( PlayerCharacter_GetPlayerNode(v5, 0) )
    {
      v7 = (PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)->members.super.m_flags & 1) == 0;
      if ( *(float *)(this + 0x20) <= 0.0 || (v38 = 1, v7 == *(_BYTE *)(this + 0x44)) )
        v38 = 0;
      *(_BYTE *)(this + 0x44) = v7;
    }
  }
  v43 = 0;
  v42 = 0;
  sub_6A0D90(this, &v40, &v39, &v44, (float **)&v43, (float **)&v42);
  if ( !v43 )
    return 0;
  if ( !v42 )
    return 0;
  v8 = *(_DWORD *)(this + 0x34);
  if ( !v8 )
    return 0;
  sound = OSGlobals->sound;
  if ( sound )
  {
    v10 = *(_DWORD *)(v8 + 0xC);
    if ( v10 == 0x852FE || v10 == 0x84A51 )
    {
      v11 = PlaySound___(sound, "AMBFireMediumLP", 0x12, 1);
      if ( v11 )
      {
        v12 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x174))(*(_DWORD *)(this + 0x1C));
        v13 = *v12;
        v14 = v12[1];
        v47 = v12[2];
        *(float *)&v46[2] = v14;
        *(float *)&v46[1] = v13;
        sub_6B7360(v11, v13, v14, v47);
        sub_6B7280(v11, 1.0);
        sub_6B7190(v11, 1);
        sub_6AC3E0((_DWORD **)sound, *v11, *(_DWORD *)(this + 0x1C));
        sub_6B73E0(v11);
        FormHeapFree((unsigned int)v11);
      }
    }
  }
  if ( *(_BYTE *)(this + 0x28)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 0x1C) + 0x190))(*(_DWORD *)(this + 0x1C))
    && (v15 = *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58)) != 0
    && ((v16 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 0x138))(v15) == 0,
         !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 0x1C) + 0x58) + 0x304))(*(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x58)))
     && TESDataHandler_g_PlayerRef->unk5E0 != this
     || !v16)
    || sub_4AC730(*(_BYTE **)(this + 0x34), 8u) )
  {
    v20 = (float **)(this + 0x3C);
    if ( *(_DWORD *)(this + 0x3C) )
    {
      v31 = *(volatile LONG **)(this + 0x40);
      v32 = (_DWORD **)(this + 0x40);
      if ( v31 )
      {
        sub_4AC740(v31, *(_DWORD *)(this + 0x3C));
        NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x3C), 0);
        if ( *v32 )
          sub_7074B0(*v32, 0);
        NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x40), 0);
      }
    }
  }
  else
  {
    v17 = (NiObjectNET **)(this + 0x40);
    if ( !*(_DWORD *)(this + 0x40) )
    {
      v18 = (NiNode *)FormHeapAlloc(0xDCu);
      v46[0] = (int)v18;
      v49 = 0;
      if ( v18 )
        v19 = NiNode::NiNode(v18, 0);
      else
        v19 = 0;
      v49 = 0xFFFFFFFF;
      NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x40), (Ni2DBuffer *)v19);
      NiObjectNET_SetName(*v17, "ParticleShader Geometry");
      qmemcpy(&(*v17)[2], &stru_B26AF0[0xA].unk2C, 0x24u);
    }
    v20 = (float **)(this + 0x3C);
    if ( !*(_DWORD *)(this + 0x3C) )
    {
      v41 = 0;
      v21 = *(_DWORD *)(this + 0x34) + 0x104;
      v49 = 1;
      if ( sub_449190(v21) )
      {
        v22 = *(const char **)(v21 + 4);
        if ( !v22 )
          v22 = EmptyString;
        _sprintf(ArgList, "%s\\%s", "Textures", v22);
        v23 = (int *)sub_442890((UInt32 *)&v45, ArgList, 0, 0);
        LOBYTE(v49) = 2;
        sub_55E2A0(&v41, v23);
        LOBYTE(v49) = 1;
        sub_7016A0((NiD3DVertexShader *)&v45);
        v24 = sub_4AD990(*(float **)(this + 0x34), (int)*v17, v42, v41, *(float *)(this + 0x38));
        NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x3C), (Ni2DBuffer *)v24);
      }
      v49 = 0xFFFFFFFF;
      sub_7016A0((NiD3DVertexShader *)&v41);
    }
    v25 = *v20;
    if ( *v20 )
    {
      if ( v39 )
      {
        v26 = v44;
        *((_DWORD *)v25 + 0x1C) = 2;
        v25[0x1D] = v26;
      }
      if ( *(_BYTE *)(this + 0x28) )
        *((_BYTE *)*v20 + 0x78) = 0;
      v27 = *(_DWORD *)(this + 0x1C);
      if ( v27 )
      {
        v28 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v27 + 0x170))(v27);
        v29 = OblivionDynamicCast(
                v28,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESObjectACTI `RTTI Type Descriptor',
                0);
        if ( v40 || v29 )
          *((_DWORD *)*v20 + 0x1C) = *(PlayerCharacter **)(this + 0x1C) != TESDataHandler_g_PlayerRef
                                  || *(_BYTE *)(this + 0x44);
      }
      sub_7E5C30(*v20, v42);
      if ( v38 )
      {
        sub_7E4800(*v20, 0.0);
        v30 = *v20;
        *(float *)&v45 = *(float *)(this + 0x38) - dbl_A76540;
        sub_7E51F0(v30, *(float *)&v45, 0, 1);
        sub_7E51F0(*v20, *(float *)(this + 0x38), 0, 1);
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 0x70))(this);
  }
  if ( !sub_4AC730(*(_BYTE **)(this + 0x34), 1u) )
  {
    if ( !*(_DWORD *)(this + 0x48) )
    {
      v41 = 0;
      v33 = *(_DWORD *)(this + 0x34) + 0xF8;
      v49 = 3;
      if ( sub_449190(v33) )
      {
        v34 = *(const char **)(v33 + 4);
        if ( !v34 )
          v34 = EmptyString;
        _sprintf(ArgList, "%s\\%s", "Textures", v34);
        v35 = (int *)sub_442890((UInt32 *)v46, ArgList, 0, 0);
        LOBYTE(v49) = 4;
        sub_55E2A0(&v41, v35);
        LOBYTE(v49) = 3;
        sub_7016A0((NiD3DVertexShader *)v46);
      }
      v36 = sub_4ACB20(*(float **)(this + 0x34), (int)v43, v41);
      NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x48), (Ni2DBuffer *)v36);
      v49 = 0xFFFFFFFF;
      sub_7016A0((NiD3DVertexShader *)&v41);
    }
    sub_4AD9E0(*(_BYTE **)(this + 0x34), v43, *(_DWORD *)(this + 0x48));
  }
  return *v20 || *(_DWORD *)(this + 0x48);
}
