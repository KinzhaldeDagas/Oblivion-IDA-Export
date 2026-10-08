void __usercall sub_6A7560(int a1@<ecx>, double a2@<st2>, double a3@<st1>, NiObject *a4@<ebp>, double a5@<st0>)
{
  int v6; // ecx
  NiObject *v7; // eax
  _DWORD *BhkCollisionObjectRecursive; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // ebx
  int *v11; // eax
  NiObject *v12; // eax
  double v13; // st7
  double v14; // st7
  PlayerCharacter *v15; // ecx
  MagicShaderHitEffect *v16; // eax
  MagicShaderHitEffect *v17; // esi
  void (__thiscall *Destructor)(NiRefObject *, bool); // edx
  float v19; // [esp+18h] [ebp-3Ch]
  float v20; // [esp+1Ch] [ebp-38h] BYREF
  float v21; // [esp+20h] [ebp-34h] BYREF
  float v22; // [esp+24h] [ebp-30h] BYREF
  float v23; // [esp+28h] [ebp-2Ch]
  float v24; // [esp+2Ch] [ebp-28h]
  float v25[3]; // [esp+30h] [ebp-24h] BYREF
  NiPoint3 v26; // [esp+3Ch] [ebp-18h] BYREF
  int v27; // [esp+50h] [ebp-4h]

  v6 = *(_DWORD *)(a1 + 0x48); /*0x6a7589*/
  if ( v6 /*0x6a7617*/
    && *(_DWORD *)(a1 + 0x24)
    && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6) + 4) != 0x17
    && (v7 = (NiObject *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x48) + 0x154))(*(_DWORD *)(a1 + 0x48)),
        (a4 = v7) != 0)
    && (BhkCollisionObjectRecursive = NiAVObject_FindBhkCollisionObjectRecursive((NiAVObject *)v7)) != 0
    && (v9 = (_DWORD *)BhkCollisionObjectRecursive[4]) != 0
    && ((sub_68FA90(BhkCollisionObjectRecursive[4]), (*sub_497340(v9, &v21) & 0x3F) == 4)
     || (*(_BYTE *)sub_497340(v9, &v21) & 0x3F) == 5) )
  {
    v10 = (_DWORD *)FormHeapAlloc(0x1Cu); /*0x6a7624*/
    v21 = *(float *)&v10; /*0x6a7629*/
    v27 = 0; /*0x6a762f*/
    if ( v10 ) /*0x6a7637*/
    {
      v11 = sub_497340(v9, &v20); /*0x6a7640*/
      sub_68FAF0(v10, *(_DWORD *)(a1 + 0x48), (int)v9, *v11); /*0x6a764f*/
    }
    v27 = 0xFFFFFFFF; /*0x6a765d*/
    v12 = NiRTTI_Cast((BSStringT *)&MEMORY[0xB33E90][0x13F8], a4); /*0x6a7661*/
    if ( v12 ) /*0x6a766b*/
      sub_4A01B0(v12, 6); /*0x6a7671*/
    if ( reference->unk574 ) /*0x6a767c*/
      sub_66A670((TESObjectREFR *)reference); /*0x6a7685*/
    if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x6a7690*/
      *(float *)(a1 + 0x40) = flt_A5A04C; /*0x6a769f*/
    v13 = *(float *)(a1 + 0x40); /*0x6a76a2*/
    sub_66D120((int)reference, a2, a3, v13, *(TESObjectREFR **)(a1 + 0x48), 3, *(float *)(a1 + 0x40)); /*0x6a76b5*/
    sub_5F11F0((Actor *)reference, v13, v25, &v26.x); /*0x6a76ca*/
    if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x6a76d5*/
    {
      sub_6A7290((__m128 **)reference->unk574, &v22); /*0x6a76f3*/
      v19 = v22 - v25[0]; /*0x6a7709*/
      v20 = v23 - v25[1]; /*0x6a7715*/
      v21 = v24 - v25[2]; /*0x6a7721*/
      v22 = v19; /*0x6a7729*/
      v23 = v20; /*0x6a7731*/
      v24 = v21; /*0x6a7739*/
      v21 = sub_47D9E0(&v26.x, &v22); /*0x6a7742*/
      v14 = v21; /*0x6a7746*/
      *(float *)(a1 + 0x40) = v21; /*0x6a774a*/
      v15 = reference; /*0x6a774d*/
      v21 = v14; /*0x6a7753*/
      *(float *)&v15->unk584 = v21; /*0x6a775c*/
      NiPoint3::MutliplyByValue(&v26, *(float *)(a1 + 0x40)); /*0x6a776c*/
    }
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x78) ) /*0x6a7777*/
    {
      v16 = (MagicShaderHitEffect *)FormHeapAlloc(0x4Cu); /*0x6a7783*/
      v21 = *(float *)&v16; /*0x6a778b*/
      v27 = 1; /*0x6a7791*/
      if ( v16 ) /*0x6a7799*/
        v17 = MagicShaderHitEffect_constr_args2( /*0x6a77ba*/
                v16,
                *(TESObjectREFR **)(a1 + 0x48),
                *(TESEffectShader **)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x78),
                kTerrainLODQuadRayDirectionZ);
      else
        v17 = 0; /*0x6a77be*/
      Destructor = v17->super.super.vtable[1].super.super.Destructor; /*0x6a77c2*/
      v27 = 0xFFFFFFFF; /*0x6a77c7*/
      if ( ((unsigned __int8 (__thiscall *)(MagicShaderHitEffect *))Destructor)(v17) ) /*0x6a77cb*/
        ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v17->super.super); /*0x6a77d7*/
      else
        v17->super.super.vtable->super.super.Destructor((NiRefObject *)v17, 1); /*0x6a77f8*/
    }
  }
  else
  {
    ActiveEffect_Base_Remove((ActiveEffect *)a1, (char)a4, a5, 0); /*0x6a7812*/
  }
}
