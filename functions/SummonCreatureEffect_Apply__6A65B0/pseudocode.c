int __cdecl SummonCreatureEffect_Apply(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // ecx
  int v12; // esi
  MagicTarget *v13; // ecx
  Actor *ParentActor; // eax
  TESObjectREFR *v15; // edi
  float *v16; // eax
  float v17; // ecx
  float v18; // edx
  double v19; // rt0
  TESObjectCELL *ParentCell; // eax
  int v21; // ebp
  void *v22; // ebx
  int v23; // ecx
  TESObjectCELL *v24; // eax
  int *v25; // edi
  char *v26; // ecx
  const char *v28; // [esp+8h] [ebp-5Ch]
  float v29; // [esp+Ch] [ebp-58h]
  float v30; // [esp+10h] [ebp-54h]
  int v31; // [esp+14h] [ebp-50h]
  float v32; // [esp+18h] [ebp-4Ch]
  UInt32 v33; // [esp+1Ch] [ebp-48h]
  const char *v34; // [esp+20h] [ebp-44h]
  int v35; // [esp+24h] [ebp-40h]
  signed int v36; // [esp+24h] [ebp-40h]
  float v37; // [esp+40h] [ebp-24h]
  float v38; // [esp+40h] [ebp-24h]
  float v39; // [esp+44h] [ebp-20h]
  float v40; // [esp+44h] [ebp-20h]
  float v41; // [esp+44h] [ebp-20h]
  float v42; // [esp+48h] [ebp-1Ch]
  float v43; // [esp+48h] [ebp-1Ch]
  float v44; // [esp+4Ch] [ebp-18h] BYREF
  float v45; // [esp+50h] [ebp-14h]
  float v46; // [esp+54h] [ebp-10h]
  unsigned int v47; // [esp+60h] [ebp-4h]

  v12 = v11;
  v13 = *(MagicTarget **)(v11 + 0x20);
  if ( !v13 )
    return SummonCreatureEffect_Apply_::Done(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  ParentActor = MagicTarget_GetParentActor(v13);
  v15 = (TESObjectREFR *)ParentActor;
  if ( !ParentActor )
    return SummonCreatureEffect_Apply_::Done(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  *(float *)(v12 + 0x54) = ParentActor->members.super.super.rot.x;
  *(float *)(v12 + 0x58) = ParentActor->members.super.super.rot.y;
  *(float *)(v12 + 0x5C) = ParentActor->members.super.super.rot.z;
  v16 = ParentActor->vtbl->super.super.GetPos((TESObjectREFR *)ParentActor);
  *(float *)(v12 + 0x48) = *v16;
  *(float *)(v12 + 0x4C) = v16[1];
  v35 = *(_DWORD *)(v12 + 0x3C);
  *(float *)(v12 + 0x50) = v16[2];
  if ( sub_6A64D0((MagicTarget **)v12, v15, v35, &v44) )
  {
    v17 = v45;
    v18 = v46;
    *(float *)(v12 + 0x48) = v44;
    *(float *)(v12 + 0x4C) = v17;
    *(float *)(v12 + 0x50) = v18;
  }
  v37 = -*(float *)(v12 + 0x5C);
  v39 = cos(v37);
  v42 = v39;
  v40 = sin(v37);
  v44 = -v40;
  v19 = dbl_A4D910;
  v41 = v44 * v19;
  v43 = v42 * v19;
  v38 = v19 * 0.0;
  v44 = v41;
  v45 = v43;
  v46 = v38;
  TESObjectREFR_GetParentCell(v15);
  v36 = sub_4C9BE0(v15);
  ParentCell = TESObjectREFR_GetParentCell(v15);
  v21 = sub_441800(ParentCell, v36, 3u);
  v22 = (void *)FormHeapAlloc(0x20u);
  v47 = 0;
  if ( v22 )
  {
    v23 = *(_DWORD *)(*(_DWORD *)(v12 + 0xC) + 0x1C) + 0x18;
    v32 = *(float *)(v12 + 0x48);
    v33 = *(_DWORD *)(v12 + 0x4C);
    v34 = *(const char **)(v12 + 0x50);
    v29 = v44;
    v30 = v45;
    v31 = LODWORD(v46);
    v28 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x14))(v23);
    v24 = TESObjectREFR_GetParentCell(v15);
    v25 = (int *)sub_5713F0(v22, (int)v24, 1.0, v21, v28, v29, v30, v31, v32, v33, v34, 1.0, 0);
  }
  else
  {
    v25 = 0;
  }
  v47 = 0xFFFFFFFF;
  sub_570C00(v25, "SpecialIdle_SummonEffect");
  sub_678D30((int *)&ActorProcessManager_ptr, v25);
  *(float *)(v12 + 0x44) = sub_480B00(v25[6], v25[6], (int)"SpecialIdle_SummonEffect", aHit);
  if ( !*(_BYTE *)(v12 + 0x61) )
  {
    v26 = *(char **)(v12 + 8);
    if ( v26 )
    {
      sub_41A610(v26, 0);
      *(_BYTE *)(v12 + 0x61) = 1;
    }
  }
  return SummonCreatureEffect_Apply_::Done(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
