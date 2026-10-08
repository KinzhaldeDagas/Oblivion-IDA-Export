// Magic projectile hit/area-effect path. Handles target hit effects, spawns SpecialIdle_AreaEffect for area spells, plays impact sound, and binds effect visuals to actor/player perspective state.
void __thiscall MagicProjectile_ApplyHitAndAreaEffect(
        float *this,
        int a2,
        int a3,
        const char *a4,
        NiNode *parentNode,
        float unknownChildTag,
        char a7)
{
  TESObjectREFR *v8; // ebp
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
  int v27; // eax
  int v28; // ecx
  TESObjectCELL *DwordAtOffset40; // eax
  int v30; // eax
  NiTransform *v31; // eax
  float v32; // ebp
  float v33; // ebx
  BSTempEffectParticle *v34; // edi
  TESObjectCELL *v35; // eax
  BSTempEffectParticle *v36; // edi
  int *sound; // ecx
  int v38; // eax
  int *v39; // edi
  float *v40; // eax
  float durationSeconds; // [esp+20h] [ebp-68h]
  __int64 v42; // [esp+28h] [ebp-60h]
  const char *v43; // [esp+28h] [ebp-60h]
  __int64 v44; // [esp+30h] [ebp-58h]
  float v45; // [esp+34h] [ebp-54h]
  signed int scale; // [esp+44h] [ebp-44h]
  float v47; // [esp+60h] [ebp-28h]
  float v48[2]; // [esp+64h] [ebp-24h] BYREF
  float v49; // [esp+6Ch] [ebp-1Ch]
  float v50[3]; // [esp+70h] [ebp-18h] BYREF
  unsigned int v51; // [esp+84h] [ebp-4h]
  float parentNodeb; // [esp+98h] [ebp+10h]
  NiNode *parentNodea; // [esp+98h] [ebp+10h]

  v8 = (TESObjectREFR *)LODWORD(unknownChildTag); /*0x6970c9*/
  if ( unknownChildTag == 0.0 /*0x6970e4*/
    || !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(unknownChildTag) + 0x190))(LODWORD(unknownChildTag))
    || !Actor_IsGhost((Actor *)v8) )
  {
    unknownChildTag = *(this + 0x1E); /*0x6970f6*/
    *(this + 0x28) = unknownChildTag; /*0x6970fe*/
    if ( MobileObject_GetCharProxy((MobileObject *)this) ) /*0x697104*/
    {
      if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)this) + 0x7D) & 0x8000) != 0 ) /*0x697120*/
        (*(void (__thiscall **)(float *))(*(_DWORD *)this + 0x214))(this); /*0x69712c*/
      CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x697135*/
      bhkCharacterProxy_GetCollisionFilterInfo(CharProxy, &unknownChildTag); /*0x69713c*/
      v10 = LODWORD(unknownChildTag) | 0x4000; /*0x697147*/
      v11 = *((_DWORD **)MobileObject_GetCharProxy((MobileObject *)this) + 0xD9); /*0x697152*/
      if ( v11 ) /*0x69715a*/
      {
        v12 = v11[2]; /*0x69715c*/
        if ( v12 ) /*0x697161*/
        {
          v13 = v12 + 0x14; /*0x697163*/
          if ( v13 ) /*0x697166*/
            *(_DWORD *)(v13 + 0x1C) = v10; /*0x697168*/
        }
        (*(void (__thiscall **)(_DWORD *))(*v11 + 0x80))(v11); /*0x697173*/
      }
    }
    v14 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154); /*0x697177*/
    *((_DWORD *)this + 0x20) = 1; /*0x69717f*/
    v15 = v14(this); /*0x697189*/
    if ( v15 ) /*0x69718d*/
    {
      v16 = sub_7101F0((NiTransform *)(v15 + 0x64), (NiTransform *)v48, &stru_B258DC); /*0x69719c*/
      sub_69F880( /*0x6971d6*/
        *(float *)&a2,
        *(float *)&a3,
        *(float *)&a4,
        v16->rot.data[0][0],
        v16->rot.data[0][1],
        v16->rot.data[0][2],
        parentNode);
    }
    if ( v8 ) /*0x6971dd*/
    {
      if ( v8 != (TESObjectREFR *)reference || reference->isThirdPerson ) /*0x6971e8*/
      {
        *((_DWORD *)this + 0x26) = v8; /*0x6971f1*/
        v17 = (int)v8->vtbl->GetNiNode(v8); /*0x697202*/
        if ( v17 ) /*0x697206*/
        {
          v18 = (Ni2DBuffer *)(*(int (__thiscall **)(int, const char *))(*(_DWORD *)v17 + 0x58))(v17, "Bip01 Spine2"); /*0x697214*/
          NiSmartPointer_Set__((Ni2DBuffer **)this + 0x24, v18); /*0x69721d*/
        }
      }
    }
    v19 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this); /*0x69722c*/
    v20 = v19[0x15]; /*0x69722e*/
    v21 = v19[0x16]; /*0x697231*/
    v22 = v19[0x17]; /*0x697234*/
    v48[0] = v20; /*0x697237*/
    v48[1] = v21; /*0x697243*/
    v49 = v22; /*0x697247*/
    parentNodeb = v20 - *(float *)&a2; /*0x69724b*/
    unknownChildTag = v21 - *(float *)&a3; /*0x697257*/
    v47 = v22 - *(float *)&a4; /*0x697263*/
    v23 = parentNodeb * parentNodeb; /*0x69727b*/
    v24 = v47 * v47; /*0x69727f*/
    unknownChildTag = unknownChildTag * unknownChildTag + v23 + v24; /*0x697283*/
    unknownChildTag = sqrt(unknownChildTag); /*0x697290*/
    sub_7F3530(*((_DWORD *)this + 0x1F), flt_A34BA0, unknownChildTag, *(this + 0x17), 0.0); /*0x6972bc*/
    if ( !a7 ) /*0x6972c6*/
    {
      v25 = *((char **)this + 0x1B); /*0x6972d0*/
      v26 = *((char **)this + 0x1A); /*0x6972d3*/
      v27 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174))(this); /*0x6972d8*/
      HIDWORD(v42) = *(_DWORD *)v27; /*0x6972f1*/
      v44 = *(_QWORD *)(v27 + 4); /*0x6972f9*/
      LODWORD(v42) = Shared_GetDwordAtOffset40(this); /*0x697306*/
      MagicCaster_TargetEffectHit__(v26, v23, 1.0, v24, v25, v42, v44, (int)this, v8, 0, 1.0, 1.0); /*0x69730a*/
    }
    v28 = *((_DWORD *)this + 0x1D) + 0x18; /*0x697312*/
    *(this + 0x26) = 0.0; /*0x697315*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v28 + 0x14))(v28) ) /*0x697324*/
    {
      EffectItem_GetArea(*((_DWORD **)this + 0x1C)); /*0x697331*/
      unknownChildTag = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)(*((_DWORD *)this + 0x1D) + 0x18) + 0x14))(*((_DWORD *)this + 0x1D) + 0x18)); /*0x697346*/
      Shared_GetDwordAtOffset40(this); /*0x69734a*/
      scale = sub_4C9BE0((TESObjectREFR *)this); /*0x69735a*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x69735d*/
      parentNodea = (NiNode *)sub_441800(DwordAtOffset40, scale, 3u); /*0x69736b*/
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this) ) /*0x697377*/
      {
        v30 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x154))(this); /*0x697387*/
        v31 = sub_7101F0((NiTransform *)(v30 + 0x30), (NiTransform *)v50, &stru_B258DC); /*0x697396*/
      }
      else
      {
        v31 = (NiTransform *)&stru_B258DC; /*0x69739d*/
      }
      v32 = v31->rot.data[0][0]; /*0x6973a5*/
      v33 = v31->rot.data[0][1]; /*0x6973a7*/
      v49 = v31->rot.data[0][2]; /*0x6973ac*/
      v34 = (BSTempEffectParticle *)FormHeapAlloc(0x20u); /*0x6973b5*/
      v51 = 0; /*0x6973c0*/
      if ( v34 ) /*0x6973c8*/
      {
        v45 = v49; /*0x697403*/
        v43 = (const char *)LODWORD(unknownChildTag); /*0x69740a*/
        durationSeconds = flt_A31E2C; /*0x69740f*/
        v35 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x697412*/
        v36 = BSTempEffectParticle_Constructor( /*0x69741f*/
                v34,
                v35,
                durationSeconds,
                parentNodea,
                v43,
                v32,
                v33,
                v45,
                *(float *)&a2,
                *(float *)&a3,
                *(float *)&a4,
                1.0,
                0);
      }
      else
      {
        v36 = 0; /*0x697423*/
      }
      v51 = 0xFFFFFFFF; /*0x69742b*/
      ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v36); /*0x697433*/
      PlaySpecialIdleOnControllerManager(v36, "SpecialIdle_AreaEffect");// Area effect path starts SpecialIdle_AreaEffect on spawned effect object's controller manager via sub_570C00; no actor KFFZ lookup. /*0x69743f*/
    }
    sound = (int *)MEMORY[0xB33398]->sound; /*0x69744a*/
    if ( sound ) /*0x69744f*/
    {
      v38 = *(_DWORD *)(*((_DWORD *)this + 0x1D) + 0x8C); /*0x697458*/
      if ( v38 ) /*0x697460*/
      {
        if ( !a7 ) /*0x697467*/
        {
          v39 = OSGLobals_PlaySound(sound, *(void **)(v38 + 0xC), 0x102, 1); /*0x697479*/
          if ( v39 ) /*0x69747d*/
          {
            v40 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x174))(this); /*0x697489*/
            sub_6B7360(v39, *v40, v40[1], v40[2]); /*0x6974bb*/
            sub_6B71C0(v39, 0); /*0x6974c4*/
            sub_6B73E0(v39); /*0x6974cb*/
            FormHeapFree((unsigned int)v39); /*0x6974d1*/
          }
        }
      }
    }
  }
}
