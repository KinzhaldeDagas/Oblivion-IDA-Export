void __userpurge ReanimateEffect_Update(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, float a5)
{
  MagicTarget *v6; // ecx
  TESObjectREFR *ParentActor; // edi
  MagicCaster *v8; // ecx
  Actor *v9; // ebx
  int v10; // eax
  TESObjectREFRVtbl *vtbl; // ebx
  double v12; // st7
  void *v13; // ecx
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  float *v16; // eax
  double v17; // st7
  __int16 v18; // fps
  void (__thiscall **p_Unk_0F)(TESObjectREFR *, int); // ebx
  int v20; // eax
  int v21; // ebx
  TESObjectREFRVtbl *v22; // ebx
  double v23; // st4
  NiNode *v24; // eax
  TESForm *v25; // eax
  _DWORD *v26; // eax
  UInt32 v27; // eax
  float v28; // [esp+4h] [ebp-ECh]
  float a; // [esp+8h] [ebp-E8h]
  float b; // [esp+Ch] [ebp-E4h]
  PlayerCharacter *v31; // [esp+10h] [ebp-E0h]
  float v32; // [esp+24h] [ebp-CCh]
  float v33; // [esp+24h] [ebp-CCh]
  ActorAnimData *v34; // [esp+24h] [ebp-CCh]
  Actor *v35; // [esp+28h] [ebp-C8h]
  float v36; // [esp+28h] [ebp-C8h]
  float v37; // [esp+28h] [ebp-C8h]
  float v38[8]; // [esp+2Ch] [ebp-C4h] BYREF
  __m128 v39; // [esp+50h] [ebp-A0h] BYREF
  __m128 v40; // [esp+60h] [ebp-90h] BYREF
  __m128 v41; // [esp+70h] [ebp-80h] BYREF
  __m128 v42; // [esp+80h] [ebp-70h] BYREF
  __m128 v43; // [esp+90h] [ebp-60h] BYREF
  __m128 v44; // [esp+A0h] [ebp-50h] BYREF
  float v45[15]; // [esp+B0h] [ebp-40h] BYREF
  int savedregs; // [esp+F0h] [ebp+0h] BYREF

  v6 = *(MagicTarget **)(a1 + 0x20); /*0x6a3ade*/
  if ( v6 ) /*0x6a3ae4*/
    ParentActor = (TESObjectREFR *)MagicTarget_GetParentActor(v6); /*0x6a3aeb*/
  else
    ParentActor = 0; /*0x6a3aef*/
  v8 = *(MagicCaster **)(a1 + 0x24); /*0x6a3af1*/
  if ( v8 && (v9 = MagicCaster_GetParentActor(v8), (v35 = v9) != 0) ) /*0x6a3b05*/
  {
    if ( *(_DWORD *)(a1 + 0x38) ) /*0x6a3b27*/
    {
      if ( ParentActor ) /*0x6a3b33*/
      {
        if ( ParentActor->vtbl->IsDead(ParentActor, 0) ) /*0x6a3b45*/
        {
          ActiveEffect_Base_Remove((ActiveEffect *)a1, (char)&savedregs, a4, 0); /*0x6a3b4f*/
        }
        else
        {
          if ( !*(_DWORD *)(a1 + 0x3C) ) /*0x6a3b6b*/
          {
            *(_DWORD *)(a1 + 0x3C) = 0xA; /*0x6a3b73*/
            *(float *)(a1 + 0x40) = 0.0; /*0x6a3b7a*/
          }
          v10 = *(_DWORD *)(a1 + 0x3C); /*0x6a3b7d*/
          switch ( v10 ) /*0x6a3b83*/
          {
            case 0xA: /*0x6a3b83*/
              vtbl = ParentActor[1].vtbl; /*0x6a3b89*/
              if ( !(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.InitializeComponent /*0x6a3b93*/
                     + 2))(
                      vtbl,
                      a4,
                      a3,
                      a2) )
                BYTE1(vtbl[1].RemoveItem) = 1; /*0x6a3b99*/
              v12 = *(float *)(a1 + 4) - *(float *)(a1 + 0x40); /*0x6a3ba3*/
              if ( dbl_A3F3F0 < v12 ) /*0x6a3bb3*/
                *(_DWORD *)(a1 + 0x3C) = 0x14; /*0x6a3bb5*/
              v32 = v12 * dbl_A3C770; /*0x6a3bc5*/
              v33 = Float_Min(1.0, v32); /*0x6a3bdb*/
              sub_4529E0(v39.m128_f32, (float *)(a1 + 0x44)); /*0x6a3be8*/
              sub_4529E0(v40.m128_f32, (float *)(a1 + 0x44)); /*0x6a3bf3*/
              v13 = *(void **)(a1 + 0x38); /*0x6a3c0d*/
              v14 = 0; /*0x6a3c10*/
              v39.m128_f32[2] = v39.m128_f32[2] + dbl_A76A60; /*0x6a3c13*/
              v14.m128_f32[0] = v33; /*0x6a3c17*/
              v15 = _mm_shuffle_ps(v14, v14, 0); /*0x6a3c22*/
              v42 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v15), v40), _mm_mul_ps(v39, v15)); /*0x6a3c3f*/
              sub_4D6900(v13, v39.m128_f32); /*0x6a3c44*/
              v16 = v35->vtbl->super.super.GetPos((TESObjectREFR *)v35); /*0x6a3c55*/
              v40.m128_f32[0] = *v16 - v39.m128_f32[0]; /*0x6a3c60*/
              v40.m128_f32[1] = v16[1] - v39.m128_f32[1]; /*0x6a3c6b*/
              b = unk_B3F99C; /*0x6a3c75*/
              a = kHeadBodyNormalMatchRadius; /*0x6a3c7f*/
              v17 = v40.m128_f32[1]; /*0x6a3c82*/
              sub_98598A(v40.m128_f32[0], v40.m128_f32[1], v18); /*0x6a3c8a*/
              v36 = v17; /*0x6a3c8f*/
              v28 = -v36; /*0x6a3c9e*/
              sub_7118E0(v38, v28, a, b); /*0x6a3ca1*/
              sub_539850(v45, v38); /*0x6a3cb3*/
              v41.m128_f32[0] = *(float *)(a1 + 0x54); /*0x6a3cbb*/
              v41.m128_f32[1] = *(float *)(a1 + 0x58); /*0x6a3ccc*/
              v41.m128_f32[2] = *(float *)(a1 + 0x5C); /*0x6a3cdb*/
              v41.m128_f32[3] = *(float *)(a1 + 0x50); /*0x6a3ce2*/
              sub_8B1B40(v43.m128_f32, v45); /*0x6a3ce6*/
              sub_8B1C60(&v44, &v41, &v43, v33); /*0x6a3d07*/
              v37 = 1.0 / a5; /*0x6a3d2a*/
              sub_8A34C0(*(int **)(a1 + 0x38), &v42, &v44, v37, 1.0); /*0x6a3d37*/
              p_Unk_0F = (void (__thiscall **)(TESObjectREFR *, int))&ParentActor->vtbl[1].super.Unk_0F; /*0x6a3d48*/
              v20 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x24) + 0x20))(*(_DWORD *)(a1 + 0x24)); /*0x6a3d4e*/
              (*p_Unk_0F)(ParentActor, v20); /*0x6a3d55*/
              break;
            case 0x14: /*0x6a3b83*/
              v34 = (ActorAnimData *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))ParentActor->vtbl->GetAnimData)( /*0x6a3d83*/
                                       ParentActor,
                                       a4,
                                       a3,
                                       a2);
              v21 = (int)ParentActor->vtbl->GetNiNode(ParentActor); /*0x6a3d93*/
              if ( v21 ) /*0x6a3d97*/
              {
                if ( v34 ) /*0x6a3da2*/
                {
                  *(_DWORD *)(a1 + 0x3C) = 0x1E; /*0x6a3dac*/
                  sub_5E13D0(ParentActor, 1); /*0x6a3db3*/
                  ActorAnimData_PlayAnimGroup(v34, 0, 0, 0xFFFFFFFF); /*0x6a3dc2*/
                  sub_8AB8A0(v21, 0.0); /*0x6a3dce*/
                  v22 = ParentActor[1].vtbl; /*0x6a3dd3*/
                  if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))v22->super.super.InitializeComponent + 2))(v22) ) /*0x6a3de0*/
                    BYTE1(v22[1].RemoveItem) = 0; /*0x6a3de6*/
                  sub_424870(&ParentActor->member.baseExtraList, 0); /*0x6a3df1*/
                  *(float *)(a1 + 0x40) = *(float *)(a1 + 4); /*0x6a3df9*/
                }
              }
              break;
            case 0x1E: /*0x6a3b83*/
              if ( *(float *)(a1 + 4) - *(float *)(a1 + 0x40) > dbl_A3D0C0 ) /*0x6a3e2d*/
              {
                v23 = *(float *)(a1 + 4); /*0x6a3e33*/
                *(_DWORD *)(a1 + 0x3C) = 0x28; /*0x6a3e36*/
                *(float *)(a1 + 0x40) = v23; /*0x6a3e3d*/
                v24 = (NiNode *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))ParentActor->vtbl->GetNiNode)( /*0x6a3e4a*/
                                  ParentActor,
                                  a4,
                                  a3,
                                  a2);
                if ( v24 ) /*0x6a3e4e*/
                  sub_88D070(v24, 6, 1, 0); /*0x6a3e57*/
                v25 = ParentActor->vtbl->GetBaseForm(ParentActor); /*0x6a3e77*/
                v26 = OblivionDynamicCast( /*0x6a3e7a*/
                        v25,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESNPC `RTTI Type Descriptor',
                        0);
                if ( v26 ) /*0x6a3e84*/
                  sub_5263B0(v26, (NiTexture *)dword_B361CC[0x3C]); /*0x6a3e8f*/
                v27 = sub_5E12B0((Actor *)ParentActor); /*0x6a3e96*/
                if ( v27 ) /*0x6a3e9d*/
                  (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v27 + 0x9C))(v27, 0, 0); /*0x6a3ead*/
              }
              break;
            case 0x28: /*0x6a3b83*/
              if ( *(float *)(a1 + 4) - *(float *)(a1 + 0x40) > dbl_A2F928 ) /*0x6a3edc*/
              {
                *(_DWORD *)(a1 + 0x3C) = 0x32; /*0x6a3ee2*/
                Actor_HandleDeathState((Actor *)ParentActor, 4u); /*0x6a3ee9*/
                sub_5E8EC0((char *)ParentActor, 0); /*0x6a3ef2*/
                CommandEffect_MakeActorLoyal__((Actor *)ParentActor, (PlayerCharacter *)v9); /*0x6a3ef9*/
              }
              break;
            case 0x32: /*0x6a3b83*/
              (*((void (__usercall **)(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))ParentActor[1].vtbl->super.super.InitializeComponent /*0x6a3f10*/
               + 0x127))(
                ParentActor[1].vtbl,
                a4,
                a3,
                a2);
              sub_6925C0((int)v9, (Actor *)ParentActor, (int)v9, v31); /*0x6a3f14*/
              break;
          }
        }
      }
    }
  }
  else
  {
    ActiveEffect_Base_Remove((ActiveEffect *)a1, (char)&savedregs, a4, 1); /*0x6a3b0b*/
  }
}
