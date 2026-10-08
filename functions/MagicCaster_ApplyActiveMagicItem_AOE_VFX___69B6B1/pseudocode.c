// Magic caster active-magic-item area-effect path. Creates area VFX and plays SpecialIdle_AreaEffect through controller-manager helper.
void __usercall MagicCaster_ApplyActiveMagicItem_::AOE_VFX_(
        float *a1@<eax>,
        TESObjectREFR *a2@<edi>,
        char *a3@<esi>,
        double a4@<st0>,
        double a5@<st1>,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        TESObjectREFR *a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        double self,
        int unknownChildName,
        int a23,
        float a24,
        float a25,
        float a26,
        int a27,
        int a28,
        const char *a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        float parentNode,
        float unknownChildTag)
{
  float v36; // ebp
  float v37; // ebx
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v39; // eax
  TESObjectCELL *v40; // eax
  BSTempEffectParticle *v41; // edi
  float *SafeFloatPointer; // eax
  float *v43; // ecx
  float *v44; // eax
  NiAVObject *particleNode; // ecx
  float v46; // [esp+4h] [ebp-28h]
  const char *v47; // [esp+8h] [ebp-24h]
  float v48; // [esp+Ch] [ebp-20h]
  float v49; // [esp+10h] [ebp-1Ch]
  float v50; // [esp+14h] [ebp-18h]
  int v51; // [esp+18h] [ebp-14h]
  float *v52; // [esp+1Ch] [ebp-10h]
  const char *v53; // [esp+20h] [ebp-Ch]
  signed int scale; // [esp+24h] [ebp-8h]
  float selfb; // [esp+6Ch] [ebp+40h]
  BSTempEffectParticle *selfa; // [esp+6Ch] [ebp+40h]
  double selfc; // [esp+6Ch] [ebp+40h]

  v36 = *a1; /*0x69b6bc*/
  v37 = a1[1]; /*0x69b6be*/
  a29 = *((const char **)a1 + 2); /*0x69b6c1*/
  if ( unknownChildTag == 0.0 ) /*0x69b6c5*/
    JUMPOUT(0x69B8FF); /*0x69b8ff*/
  v52 = (float *)LODWORD(unknownChildTag); /*0x69b6e5*/
  v51 = (*(int (__usercall **)@<eax>(char *@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a3 + 0x30))(a3, a4, a5); /*0x69b6ed*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x69b6f0*/
  MagicCaster_ExplosionCalcs____( /*0x69b709*/
    a3,
    __SPAIR64__(LODWORD(v37), LODWORD(v36)),
    (unsigned int)a29,
    DwordAtOffset40,
    v51,
    v52,
    (int)&unknownChildName,
    COERCE_INT(1.0),
    COERCE_INT(1.0));
  if ( !a34 || !OB_CompactString_Length_010201A0((void *)(a34 + 0x18)) ) /*0x69b720*/
MagicCaster_ApplyActiveMagicItem___AfterVFX:
    JUMPOUT(0x69B974); /*0x69b974*/
  parentNode = -a2->member.rot.x; /*0x69b732*/
  selfb = cos(parentNode); /*0x69b747*/
  parentNode = sin(parentNode); /*0x69b764*/
  a24 = -parentNode; /*0x69b770*/
  a25 = selfb; /*0x69b778*/
  a26 = 0.0; /*0x69b77e*/
  Shared_GetDwordAtOffset40(a2); /*0x69b782*/
  scale = sub_4C9BE0(a13); /*0x69b796*/
  v39 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x69b799*/
  parentNode = COERCE_FLOAT(sub_441800(v39, scale, 3u)); /*0x69b7a7*/
  selfa = (BSTempEffectParticle *)FormHeapAlloc(0x20u); /*0x69b7b6*/
  a32 = 0; /*0x69b7bc*/
  if ( selfa ) /*0x69b7c4*/
  {
    v53 = a29; /*0x69b7e0*/
    v48 = a24; /*0x69b7ec*/
    v49 = a25; /*0x69b7f2*/
    v50 = a26; /*0x69b7fc*/
    v47 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(a34 + 0x18) + 0x14))(a34 + 0x18); /*0x69b80c*/
    v46 = parentNode; /*0x69b814*/
    v40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a2); /*0x69b81b*/
    v41 = BSTempEffectParticle_Constructor( /*0x69b82a*/
            selfa,
            v40,
            1.0,
            (NiNode *)LODWORD(v46),
            v47,
            v48,
            v49,
            v50,
            v36,
            v37,
            *(float *)&v53,
            1.0,
            0);
  }
  else
  {
    v41 = 0; /*0x69b82e*/
  }
  a32 = 0xFFFFFFFF; /*0x69b837*/
  PlaySpecialIdleOnControllerManager(v41, "SpecialIdle_AreaEffect");// AOE VFX path starts SpecialIdle_AreaEffect on spawned effect object's controller manager via sub_570C00; no actor KFFZ lookup. /*0x69b83f*/
  if ( !v41->particleNode ) /*0x69b848*/
  {
LABEL_14:
    ActorProcessManager_RegisterTempEffect((ActorProcessManager *)&qword_B3BB2C[0x75], &v41->base); /*0x69b8f2*/
    goto MagicCaster_ApplyActiveMagicItem___AfterVFX; /*0x69b8fd*/
  }
  unknownChildTag = COERCE_FLOAT(EffectItem_GetArea((_DWORD *)LODWORD(unknownChildTag))); /*0x69b85a*/
  selfc = (double)SLODWORD(unknownChildTag); /*0x69b86d*/
  unknownChildTag = *GameSetting_GetSafeFloatPointer(flt_B37ED0) * selfc; /*0x69b881*/
  SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B37ED0[2]); /*0x69b888*/
  if ( *SafeFloatPointer >= (double)unknownChildTag ) /*0x69b89d*/
  {
    v44 = GameSetting_GetSafeFloatPointer(&flt_B37ED0[4]); /*0x69b8ab*/
    if ( *v44 <= (double)unknownChildTag ) /*0x69b8c0*/
    {
LABEL_13:
      particleNode = v41->particleNode; /*0x69b8d5*/
      unknownChildTag = fabs(unknownChildTag); /*0x69b8e1*/
      particleNode->members.m_localTransform.scale = unknownChildTag; /*0x69b8ef*/
      goto LABEL_14; /*0x69b8ef*/
    }
    v43 = &flt_B37ED0[4]; /*0x69b8c2*/
  }
  else
  {
    v43 = &flt_B37ED0[2]; /*0x69b89f*/
  }
  unknownChildTag = *GameSetting_GetSafeFloatPointer(v43); /*0x69b8ce*/
  goto LABEL_13; /*0x69b8ce*/
}
