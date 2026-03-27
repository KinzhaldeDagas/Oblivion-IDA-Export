void __usercall sub_6A7560(int a1@<ecx>, double a2@<st2>, double a3@<st1>, NiObject *a4@<ebp>, double a5@<st0>)
{
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // ebx
  int *v11; // eax
  NiObject *v12; // eax
  double v13; // st7
  double v14; // st7
  PlayerCharacter *v15; // ecx
  NiObject *v16; // eax
  NiObject *v17; // esi
  void (__thiscall *Load)(NiObject *, NiStream *); // edx
  float v19; // [esp+18h] [ebp-3Ch]
  float v20; // [esp+1Ch] [ebp-38h] BYREF
  float v21; // [esp+20h] [ebp-34h] BYREF
  float v22; // [esp+24h] [ebp-30h] BYREF
  float v23; // [esp+28h] [ebp-2Ch]
  float v24; // [esp+2Ch] [ebp-28h]
  float v25[3]; // [esp+30h] [ebp-24h] BYREF
  NiPoint3 v26; // [esp+3Ch] [ebp-18h] BYREF
  int v27; // [esp+50h] [ebp-4h]

  v6 = *(_DWORD *)(a1 + 0x48);
  if ( v6
    && *(_DWORD *)(a1 + 0x24)
    && *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6) + 4) != 0x17
    && (v7 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x48) + 0x154))(*(_DWORD *)(a1 + 0x48)),
        (a4 = (NiObject *)v7) != 0)
    && (v8 = sub_480340(v7)) != 0
    && (v9 = *(_DWORD **)(v8 + 0x10)) != 0
    && ((sub_68FA90(*(_DWORD *)(v8 + 0x10)), (*sub_497340(v9, &v21) & 0x3F) == 4)
     || (*(_BYTE *)sub_497340(v9, &v21) & 0x3F) == 5) )
  {
    v10 = (_DWORD *)FormHeapAlloc(0x1Cu);
    v21 = *(float *)&v10;
    v27 = 0;
    if ( v10 )
    {
      v11 = sub_497340(v9, &v20);
      sub_68FAF0(v10, *(_DWORD *)(a1 + 0x48), (int)v9, *v11);
    }
    v27 = 0xFFFFFFFF;
    v12 = NiRTTI_Cast((BSStringT *)dword_B35288, a4);
    if ( v12 )
      sub_4A01B0(v12, 6);
    if ( TESDataHandler_g_PlayerRef->unk574 )
      sub_66A670((TESObjectREFR *)TESDataHandler_g_PlayerRef);
    if ( !sub_45A500(SaveLoad_CurrentSavegame) )
      *(float *)(a1 + 0x40) = flt_A5A04C;
    v13 = *(float *)(a1 + 0x40);
    sub_66D120((int)TESDataHandler_g_PlayerRef, a2, a3, v13, *(TESObjectREFR **)(a1 + 0x48), 3, *(float *)(a1 + 0x40));
    sub_5F11F0((Actor *)TESDataHandler_g_PlayerRef, v13, v25, &v26.x);
    if ( !sub_45A500(SaveLoad_CurrentSavegame) )
    {
      sub_6A7290((__m128 **)TESDataHandler_g_PlayerRef->unk574, &v22);
      v19 = v22 - v25[0];
      v20 = v23 - v25[1];
      v21 = v24 - v25[2];
      v22 = v19;
      v23 = v20;
      v24 = v21;
      v21 = sub_47D9E0(&v26.x, &v22);
      v14 = v21;
      *(float *)(a1 + 0x40) = v21;
      v15 = TESDataHandler_g_PlayerRef;
      v21 = v14;
      *(float *)&v15->unk584 = v21;
      NiPoint3::MutliplyByValue(&v26, *(float *)(a1 + 0x40));
    }
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x78) )
    {
      v16 = (NiObject *)FormHeapAlloc(0x4Cu);
      v21 = *(float *)&v16;
      v27 = 1;
      if ( v16 )
        v17 = MagicShaderHitEffect_constr_args2(
                v16,
                *(TESObjectREFR **)(a1 + 0x48),
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C) + 0x78),
                flt_A30634);
      else
        v17 = 0;
      Load = v17->__vftable[1].Load;
      v27 = 0xFFFFFFFF;
      if ( ((unsigned __int8 (__thiscall *)(NiObject *))Load)(v17) )
        sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v17);
      else
        v17->__vftable->super.Destructor((NiRefObject *)v17, 1);
    }
  }
  else
  {
    ActiveEffect_Base_Remove((ActiveEffect *)a1, (char)a4, a5, 0);
  }
}
