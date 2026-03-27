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
  void *v18; // ecx
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
  float v29; // [esp+8h] [ebp-E8h]
  float v30; // [esp+Ch] [ebp-E4h]
  PlayerCharacter *v31; // [esp+10h] [ebp-E0h]
  float v32; // [esp+24h] [ebp-CCh]
  float v33; // [esp+24h] [ebp-CCh]
  int v34; // [esp+24h] [ebp-CCh]
  Actor *v35; // [esp+28h] [ebp-C8h]
  float v36; // [esp+28h] [ebp-C8h]
  float v37; // [esp+28h] [ebp-C8h]
  float v38[8]; // [esp+2Ch] [ebp-C4h] BYREF
  __m128 v39; // [esp+50h] [ebp-A0h] BYREF
  __m128 v40; // [esp+60h] [ebp-90h] BYREF
  int v41[4]; // [esp+70h] [ebp-80h] BYREF
  __m128 v42; // [esp+80h] [ebp-70h] BYREF
  int v43[4]; // [esp+90h] [ebp-60h] BYREF
  __m128 v44; // [esp+A0h] [ebp-50h] BYREF
  float v45[15]; // [esp+B0h] [ebp-40h] BYREF
  int savedregs; // [esp+F0h] [ebp+0h] BYREF

  v6 = *(MagicTarget **)(a1 + 0x20);
  if ( v6 )
    ParentActor = (TESObjectREFR *)MagicTarget_GetParentActor(v6);
  else
    ParentActor = 0;
  v8 = *(MagicCaster **)(a1 + 0x24);
  if ( v8 && (v9 = MagicCaster_GetParentActor(v8), (v35 = v9) != 0) )
  {
    if ( *(_DWORD *)(a1 + 0x38) )
    {
      if ( ParentActor )
      {
        if ( ParentActor->vtbl->IsDead(ParentActor, 0) )
        {
          ActiveEffect_Base_Remove((ActiveEffect *)a1, (char)&savedregs, a4, 0);
        }
        else
        {
          if ( !*(_DWORD *)(a1 + 0x3C) )
          {
            *(_DWORD *)(a1 + 0x3C) = 0xA;
            *(float *)(a1 + 0x40) = 0.0;
          }
          v10 = *(_DWORD *)(a1 + 0x3C);
          switch ( v10 )
          {
            case 0xA:
              vtbl = ParentActor[1].vtbl;
              if ( !(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.InitializeComponent
                     + 2))(
                      vtbl,
                      a4,
                      a3,
                      a2) )
                BYTE1(vtbl[1].RemoveItem) = 1;
              v12 = *(float *)(a1 + 4) - *(float *)(a1 + 0x40);
              if ( dbl_A3F3F0 < v12 )
                *(_DWORD *)(a1 + 0x3C) = 0x14;
              v32 = v12 * dbl_A3C770;
              v33 = sub_4AC760(1.0, v32);
              sub_4529E0(v39.m128_f32, (float *)(a1 + 0x44));
              sub_4529E0(v40.m128_f32, (float *)(a1 + 0x44));
              v13 = *(void **)(a1 + 0x38);
              v14 = 0;
              v39.m128_f32[2] = v39.m128_f32[2] + dbl_A76A60;
              v14.m128_f32[0] = v33;
              v15 = _mm_shuffle_ps(v14, v14, 0);
              v42 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v15), v40), _mm_mul_ps(v39, v15));
              sub_4D6900(v13, v39.m128_f32);
              v16 = v35->vtbl->super.super.GetPos((TESObjectREFR *)v35);
              v40.m128_f32[0] = *v16 - v39.m128_f32[0];
              v40.m128_f32[1] = v16[1] - v39.m128_f32[1];
              v30 = flt_B3F99C;
              v29 = flt_A3D65C;
              v17 = v40.m128_f32[1];
              sub_98598A(v18);
              v36 = v17;
              v28 = -v36;
              sub_7118E0(v38, v28, v29, v30);
              sub_539850(v45, v38);
              v41[0] = *(int *)(a1 + 0x54);
              v41[1] = *(int *)(a1 + 0x58);
              v41[2] = *(int *)(a1 + 0x5C);
              v41[3] = *(int *)(a1 + 0x50);
              sub_8B1B40((float *)v43, v45);
              sub_8B1C60(&v44, (int)v41, (int)v43, v33);
              v37 = 1.0 / a5;
              sub_8A34C0(*(_DWORD **)(a1 + 0x38), &v42, &v44, v37, 1.0);
              p_Unk_0F = (void (__thiscall **)(TESObjectREFR *, int))&ParentActor->vtbl[1].super.Unk_0F;
              v20 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x24) + 0x20))(*(_DWORD *)(a1 + 0x24));
              (*p_Unk_0F)(ParentActor, v20);
              break;
            case 0x14:
              v34 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))ParentActor->vtbl->GetAnimData)(
                      ParentActor,
                      a4,
                      a3,
                      a2);
              v21 = (int)ParentActor->vtbl->GetNiNode(ParentActor);
              if ( v21 )
              {
                if ( v34 )
                {
                  *(_DWORD *)(a1 + 0x3C) = 0x1E;
                  sub_5E13D0(ParentActor, 1);
                  ActorAnimData_PlayAnimGroup(v34, 0, 0, 0xFFFFFFFF);
                  sub_8AB8A0(v21, 0.0);
                  v22 = ParentActor[1].vtbl;
                  if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))v22->super.super.InitializeComponent + 2))(v22) )
                    BYTE1(v22[1].RemoveItem) = 0;
                  sub_424870(&ParentActor->member.baseExtraList, 0);
                  *(float *)(a1 + 0x40) = *(float *)(a1 + 4);
                }
              }
              break;
            case 0x1E:
              if ( *(float *)(a1 + 4) - *(float *)(a1 + 0x40) > dbl_A3D0C0 )
              {
                v23 = *(float *)(a1 + 4);
                *(_DWORD *)(a1 + 0x3C) = 0x28;
                *(float *)(a1 + 0x40) = v23;
                v24 = (NiNode *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))ParentActor->vtbl->GetNiNode)(
                                  ParentActor,
                                  a4,
                                  a3,
                                  a2);
                if ( v24 )
                  sub_88D070(v24, 6, 1, 0);
                v25 = ParentActor->vtbl->GetBaseForm(ParentActor);
                v26 = OblivionDynamicCast(
                        v25,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                        &TESNPC `RTTI Type Descriptor',
                        0);
                if ( v26 )
                  sub_5263B0(v26, (NiRenderedTexture *)TESDataHandler_g_EyeReanimate);
                v27 = sub_5E12B0((Actor *)ParentActor);
                if ( v27 )
                  (*(void (__thiscall **)(UInt32, _DWORD, _DWORD))(*(_DWORD *)v27 + 0x9C))(v27, 0, 0);
              }
              break;
            case 0x28:
              if ( *(float *)(a1 + 4) - *(float *)(a1 + 0x40) > dbl_A2F928 )
              {
                *(_DWORD *)(a1 + 0x3C) = 0x32;
                Actor_HandleDeathSTate____((Actor *)ParentActor, 4u);
                sub_5E8EC0((char *)ParentActor, 0);
                CommandEffect_MakeActorLoyal__((Actor *)ParentActor, (PlayerCharacter *)v9);
              }
              break;
            case 0x32:
              (*((void (__usercall **)(TESObjectREFRVtbl *@<ecx>, double@<st0>, double@<st1>, double@<st2>))ParentActor[1].vtbl->super.super.InitializeComponent
               + 0x127))(
                ParentActor[1].vtbl,
                a4,
                a3,
                a2);
              sub_6925C0((int)v9, (Actor *)ParentActor, (int)v9, v31);
              break;
          }
        }
      }
    }
  }
  else
  {
    ActiveEffect_Base_Remove((ActiveEffect *)a1, (char)&savedregs, a4, 1);
  }
}
