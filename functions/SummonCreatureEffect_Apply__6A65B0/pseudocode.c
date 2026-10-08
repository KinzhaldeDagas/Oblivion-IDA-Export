// Summon creature effect apply path. Peripheral animation/VFX caller that creates summoned actor state and triggers associated visual/animation setup.
void __thiscall SummonCreatureEffect_Apply(int this)
{
  MagicTarget *v2; // ecx
  Actor *ParentActor; // eax
  TESObjectREFR *v4; // edi
  float *v5; // eax
  float v6; // ecx
  float v7; // edx
  double v8; // rt0
  TESObjectCELL *ParentCell; // eax
  int v10; // ebp
  void *v11; // ebx
  int v12; // ecx
  TESObjectCELL *v13; // eax
  int *v14; // edi
  char *v15; // ecx
  const char *v16; // [esp+8h] [ebp-5Ch]
  float v17; // [esp+Ch] [ebp-58h]
  float v18; // [esp+10h] [ebp-54h]
  int v19; // [esp+14h] [ebp-50h]
  float v20; // [esp+18h] [ebp-4Ch]
  UInt32 v21; // [esp+1Ch] [ebp-48h]
  const char *v22; // [esp+20h] [ebp-44h]
  int v23; // [esp+24h] [ebp-40h]
  signed int v24; // [esp+24h] [ebp-40h]
  float v25; // [esp+40h] [ebp-24h]
  float v26; // [esp+40h] [ebp-24h]
  float v27; // [esp+44h] [ebp-20h]
  float v28; // [esp+44h] [ebp-20h]
  float v29; // [esp+44h] [ebp-20h]
  float v30; // [esp+48h] [ebp-1Ch]
  float v31; // [esp+48h] [ebp-1Ch]
  float v32; // [esp+4Ch] [ebp-18h] BYREF
  float v33; // [esp+50h] [ebp-14h]
  float v34; // [esp+54h] [ebp-10h]
  unsigned int v35; // [esp+60h] [ebp-4h]

  v2 = *(MagicTarget **)(this + 0x20); /*0x6a65d9*/
  if ( v2 ) /*0x6a65de*/
  {
    ParentActor = MagicTarget_GetParentActor(v2); /*0x6a65e4*/
    v4 = (TESObjectREFR *)ParentActor; /*0x6a65e9*/
    if ( ParentActor ) /*0x6a65ed*/
    {
      *(float *)(this + 0x54) = ParentActor->members.super.super.rot.x; /*0x6a65f6*/
      *(float *)(this + 0x58) = ParentActor->members.super.super.rot.y; /*0x6a65fc*/
      *(float *)(this + 0x5C) = ParentActor->members.super.super.rot.z; /*0x6a6602*/
      v5 = ParentActor->vtbl->super.super.GetPos((TESObjectREFR *)ParentActor); /*0x6a660f*/
      *(float *)(this + 0x48) = *v5; /*0x6a6613*/
      *(float *)(this + 0x4C) = v5[1]; /*0x6a6619*/
      v23 = *(_DWORD *)(this + 0x3C); /*0x6a6627*/
      *(float *)(this + 0x50) = v5[2]; /*0x6a662b*/
      if ( sub_6A64D0((MagicTarget **)this, v4, v23, &v32) ) /*0x6a662e*/
      {
        v6 = v33; /*0x6a663b*/
        v7 = v34; /*0x6a663f*/
        *(float *)(this + 0x48) = v32; /*0x6a6643*/
        *(float *)(this + 0x4C) = v6; /*0x6a6646*/
        *(float *)(this + 0x50) = v7; /*0x6a6649*/
      }
      v25 = -*(float *)(this + 0x5C); /*0x6a6651*/
      v27 = cos(v25); /*0x6a6666*/
      v30 = v27; /*0x6a666e*/
      v28 = sin(v25); /*0x6a6683*/
      v32 = -v28; /*0x6a6697*/
      v8 = dbl_A4D910; /*0x6a66a7*/
      v29 = v32 * v8; /*0x6a66a9*/
      v31 = v30 * v8; /*0x6a66b3*/
      v26 = v8 * 0.0; /*0x6a66bb*/
      v32 = v29; /*0x6a66c3*/
      v33 = v31; /*0x6a66cb*/
      v34 = v26; /*0x6a66d3*/
      Shared_GetDwordAtOffset40(v4); /*0x6a66d7*/
      v24 = sub_4C9BE0(v4); /*0x6a66e7*/
      ParentCell = Shared_GetDwordAtOffset40(v4); /*0x6a66ea*/
      v10 = sub_441800(ParentCell, v24, 3u); /*0x6a66f8*/
      v11 = (void *)FormHeapAlloc(0x20u); /*0x6a66ff*/
      v35 = 0; /*0x6a670a*/
      if ( v11 ) /*0x6a6712*/
      {
        v12 = *(_DWORD *)(*(_DWORD *)(this + 0xC) + 0x1C) + 0x18; /*0x6a6721*/
        v20 = *(float *)(this + 0x48); /*0x6a672d*/
        v21 = *(_DWORD *)(this + 0x4C); /*0x6a6732*/
        v22 = *(const char **)(this + 0x50); /*0x6a6738*/
        v17 = v32; /*0x6a6744*/
        v18 = v33; /*0x6a674a*/
        v19 = LODWORD(v34); /*0x6a6751*/
        v16 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x14))(v12); /*0x6a675d*/
        v13 = Shared_GetDwordAtOffset40(v4); /*0x6a6765*/
        v14 = (int *)BSTempEffectParticle_Constructor( /*0x6a6772*/
                       v11,
                       (int)v13,
                       1.0,
                       v10,
                       v16,
                       v17,
                       v18,
                       v19,
                       v20,
                       v21,
                       v22,
                       1.0,
                       0);
      }
      else
      {
        v14 = 0; /*0x6a6776*/
      }
      v35 = 0xFFFFFFFF; /*0x6a677f*/
      PlaySpecialIdleOnControllerManager(v14, "SpecialIdle_SummonEffect");// Summon effect path starts SpecialIdle_SummonEffect on spawned effect object's controller manager via sub_570C00; no actor KFFZ lookup. /*0x6a6787*/
      ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], v14); /*0x6a6792*/
      *(float *)(this + 0x44) = sub_480B00(v14[6], v14[6], (int)"SpecialIdle_SummonEffect", aHit); /*0x6a67aa*/
      if ( !*(_BYTE *)(this + 0x61) ) /*0x6a67b0*/
      {
        v15 = *(char **)(this + 8); /*0x6a67b6*/
        if ( v15 ) /*0x6a67bb*/
        {
          MagicItem_LoadVFXModels(v15, 0); /*0x6a67bf*/
          *(_BYTE *)(this + 0x61) = 1; /*0x6a67c4*/
        }
      }
    }
  }
  SummonCreatureEffect_Apply_::Done(); /*0x6a65de*/
}
