void __thiscall sub_6970A0(float *this, int a2, int a3, const char *a4, int a5, float a6, char a7)
{
  int v8; // ebp
  bhkCharacterProxy *CharProxy; // eax
  int v10; // edi
  _DWORD *v11; // ecx
  int v12; // eax
  int v13; // eax
  int (__thiscall *v14)(float *); // eax
  int v15; // eax
  NiTransform *v16; // eax
  int v17; // eax
  Ni2DBuffer *v18; // eax
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  float v22; // eax
  double v23; // st5
  double v24; // st6
  char *v25; // edi
  char *v26; // ebx
  int *v27; // eax
  TESObjectCELL *ParentCell; // eax
  int v29; // ecx
  TESObjectCELL *v30; // eax
  int v31; // eax
  NiTransform *v32; // eax
  float v33; // ebp
  float v34; // ebx
  void *v35; // edi
  TESObjectCELL *v36; // eax
  float *v37; // edi
  int v38; // eax
  int *v39; // eax
  int *v40; // edi
  float *v41; // eax
  float v42; // [esp+20h] [ebp-68h]
  const char *v43; // [esp+28h] [ebp-60h]
  int v44; // [esp+2Ch] [ebp-5Ch]
  int v45; // [esp+30h] [ebp-58h]
  int v46; // [esp+34h] [ebp-54h]
  int v47; // [esp+34h] [ebp-54h]
  signed int v48; // [esp+44h] [ebp-44h]
  float v49; // [esp+60h] [ebp-28h]
  float v50[2]; // [esp+64h] [ebp-24h] BYREF
  float v51; // [esp+6Ch] [ebp-1Ch]
  float v52[3]; // [esp+70h] [ebp-18h] BYREF
  unsigned int v53; // [esp+84h] [ebp-4h]
  float v54; // [esp+98h] [ebp+10h]
  int v55; // [esp+98h] [ebp+10h]

  v8 = LODWORD(a6);
  if ( a6 == 0.0
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(a6) + 0x190))(LODWORD(a6))
    || !Actor_IsGhost((Actor *)v8) )
  {
    a6 = *(this + 0x1E);
    *(this + 0x28) = a6;
    if ( MobileObject_GetCharProxy((MobileObject *)this) )
    {
      if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)this) + 0x7D) & 0x8000) != 0 )
        (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x214))(this);
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this);
      sub_57E270(CharProxy, &a6);
      v10 = LODWORD(a6) | 0x4000;
      v11 = *((_DWORD **)MobileObject_GetCharProxy((MobileObject *)this) + 0xD9);
      if ( v11 )
      {
        v12 = v11[2];
        if ( v12 )
        {
          v13 = v12 + 0x14;
          if ( v13 )
            *(_DWORD *)(v13 + 0x1C) = v10;
        }
        (*(void (__thiscall **)(_DWORD *))(*v11 + 0x80))(v11);
      }
    }
    v14 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154);
    *((_DWORD *)this + 0x20) = 1;
    v15 = v14(this);
    if ( v15 )
    {
      v16 = sub_7101F0((NiTransform *)(v15 + 0x64), (NiTransform *)v50, (NiPoint3 *)&dword_B258DC);
      sub_69F880(
        *(float *)&a2,
        *(float *)&a3,
        *(float *)&a4,
        v16->rot.data[0][0],
        v16->rot.data[0][1],
        v16->rot.data[0][2],
        a5);
    }
    if ( v8 )
    {
      if ( (PlayerCharacter *)v8 != TESDataHandler_g_PlayerRef || TESDataHandler_g_PlayerRef->isThirdPerson )
      {
        *((_DWORD *)this + 0x26) = v8;
        v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x154))(v8);
        if ( v17 )
        {
          v18 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v17 + 0x58))(v17, "Bip01 Spine2");
          NiSmartPointer_Set__((Ni2DBuffer **)this + 0x24, v18);
        }
      }
    }
    v19 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this);
    v20 = v19[0x15];
    v21 = v19[0x16];
    v22 = v19[0x17];
    v50[0] = v20;
    v50[1] = v21;
    v51 = v22;
    v54 = v20 - *(float *)&a2;
    a6 = v21 - *(float *)&a3;
    v49 = v22 - *(float *)&a4;
    v23 = v54 * v54;
    v24 = v49 * v49;
    a6 = a6 * a6 + v23 + v24;
    a6 = sqrt(a6);
    sub_7F3530(*((_DWORD *)this + 0x1F), flt_A34BA0, a6, *(this + 0x17), 0.0);
    if ( !a7 )
    {
      v25 = *((char **)this + 0x1B);
      v26 = *((char **)this + 0x1A);
      v27 = (int *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174))(this);
      v44 = *v27;
      v45 = v27[1];
      v46 = v27[2];
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      MagicCaster_TargetEffectHit__(v26, v23, 1.0, v24, v25, (int)ParentCell, v44, v45, v46, (int)this, v8, 0, 1.0, 1.0);
    }
    v29 = *((_DWORD *)this + 0x1D) + 0x18;
    *(this + 0x26) = 0.0;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 0x14))(v29) )
    {
      EffectItem_GetArea(*((_DWORD **)this + 0x1C));
      a6 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)(*((_DWORD *)this + 0x1D) + 0x18) + 0x14))(*((_DWORD *)this + 0x1D) + 0x18));
      TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      v48 = sub_4C9BE0((TESObjectREFR *)this);
      v30 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
      v55 = sub_441800(v30, v48, 3u);
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this) )
      {
        v31 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this);
        v32 = sub_7101F0((NiTransform *)(v31 + 0x30), (NiTransform *)v52, (NiPoint3 *)&dword_B258DC);
      }
      else
      {
        v32 = (NiTransform *)&dword_B258DC;
      }
      v33 = v32->rot.data[0][0];
      v34 = v32->rot.data[0][1];
      v51 = v32->rot.data[0][2];
      v35 = (void *)FormHeapAlloc(0x20u);
      v53 = 0;
      if ( v35 )
      {
        v47 = LODWORD(v51);
        v43 = (const char *)LODWORD(a6);
        v42 = flt_A31E2C;
        v36 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
        v37 = sub_5713F0(v35, (int)v36, v42, v55, v43, v33, v34, v47, *(float *)&a2, a3, a4, 1.0, 0);
      }
      else
      {
        v37 = 0;
      }
      v53 = 0xFFFFFFFF;
      sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v37);
      sub_570C00(v37, "SpecialIdle_AreaEffect");
    }
    if ( OSGlobals->sound )
    {
      v38 = *(_DWORD *)(*((_DWORD *)this + 0x1D) + 0x8C);
      if ( v38 )
      {
        if ( !a7 )
        {
          OSGLobals_PlaySound(*(_DWORD *)(v38 + 0xC), 0x102, 1);
          v40 = v39;
          if ( v39 )
          {
            v41 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174))(this);
            sub_6B7360(v40, *v41, v41[1], v41[2]);
            sub_6B71C0(v40, 0);
            sub_6B73E0(v40);
            FormHeapFree((unsigned int)v40);
          }
        }
      }
    }
  }
}
