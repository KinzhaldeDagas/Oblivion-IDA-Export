int __usercall MagicCaster_ApplyActiveMagicItem_::AOE_VFX_@<eax>(
        float *a1@<eax>,
        TESObjectREFR *a2@<edi>,
        char *a3@<esi>,
        double a4@<st2>,
        double a5@<st0>,
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
        double a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        const char *a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        float a35,
        float a36)
{
  float v36; // ebp
  UInt32 v37; // ebx
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v39; // eax
  TESObjectCELL *v40; // eax
  float *v41; // edi
  int *SafeFloatPointer; // eax
  float *v43; // ecx
  int *v44; // eax
  int v45; // ecx
  int v47; // [esp+4h] [ebp-28h]
  const char *v48; // [esp+8h] [ebp-24h]
  float v49; // [esp+Ch] [ebp-20h]
  float v50; // [esp+10h] [ebp-1Ch]
  int v51; // [esp+14h] [ebp-18h]
  int v52; // [esp+18h] [ebp-14h]
  float *v53; // [esp+1Ch] [ebp-10h]
  const char *v54; // [esp+20h] [ebp-Ch]
  signed int v55; // [esp+24h] [ebp-8h]
  int v56; // [esp+6Ch] [ebp+40h]

  v36 = *a1;
  v37 = *((_DWORD *)a1 + 1);
  a29 = *((const char **)a1 + 2);
  if ( a36 != 0.0 )
  {
    v53 = (float *)LODWORD(a36);
    v52 = (*(int (__thiscall **)(char *))(*(_DWORD *)a3 + 0x30))(a3);
    ParentCell = TESObjectREFR_GetParentCell(a2);
    MagicCaster_ExplosionCalcs____(
      a3,
      __SPAIR64__(v37, LODWORD(v36)),
      *(float *)&a29,
      ParentCell,
      v52,
      v53,
      COERCE_FLOAT(&a22),
      1.0,
      1.0);
    if ( !a34 || !sub_449190(a34 + 0x18) )
      return MagicCaster_ApplyActiveMagicItem_::AfterVFX(
               a3,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               (int)a13,
               a14,
               a15,
               a16,
               a17,
               a18,
               a19,
               a20,
               SLODWORD(a21),
               SHIDWORD(a21),
               a22,
               a23,
               a24,
               a25,
               a26,
               a27,
               a28,
               (int)a29,
               a30,
               a31,
               a32,
               a33,
               a34);
    a35 = -a2->member.rot.x;
    *(float *)&v56 = cos(a35);
    a35 = sin(a35);
    *(float *)&a24 = -a35;
    a25 = v56;
    *(float *)&a26 = 0.0;
    TESObjectREFR_GetParentCell(a2);
    v55 = sub_4C9BE0(a13);
    v39 = TESObjectREFR_GetParentCell(a2);
    a35 = COERCE_FLOAT(sub_441800(v39, v55, 3u));
    LODWORD(a21) = FormHeapAlloc(0x20u);
    a32 = 0;
    if ( LODWORD(a21) )
    {
      v54 = a29;
      v49 = *(float *)&a24;
      v50 = *(float *)&a25;
      v51 = a26;
      v48 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)(a34 + 0x18) + 0x14))(a34 + 0x18);
      v47 = LODWORD(a35);
      v40 = TESObjectREFR_GetParentCell(a2);
      v41 = sub_5713F0((void *)LODWORD(a21), (int)v40, 1.0, v47, v48, v49, v50, v51, v36, v37, v54, 1.0, 0);
    }
    else
    {
      v41 = 0;
    }
    a32 = 0xFFFFFFFF;
    sub_570C00(v41, "SpecialIdle_AreaEffect");
    if ( !*((_DWORD *)v41 + 6) )
    {
LABEL_14:
      sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v41);
      return MagicCaster_ApplyActiveMagicItem_::AfterVFX(
               a3,
               a6,
               a7,
               a8,
               a9,
               a10,
               a11,
               a12,
               (int)a13,
               a14,
               a15,
               a16,
               a17,
               a18,
               a19,
               a20,
               SLODWORD(a21),
               SHIDWORD(a21),
               a22,
               a23,
               a24,
               a25,
               a26,
               a27,
               a28,
               (int)a29,
               a30,
               a31,
               a32,
               a33,
               a34);
    }
    a36 = COERCE_FLOAT(EffectItem_GetArea((_DWORD *)LODWORD(a36)));
    a21 = (double)SLODWORD(a36);
    a36 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B37ED0) * a21;
    SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B37ED8);
    if ( *(float *)SafeFloatPointer >= (double)a36 )
    {
      v44 = GameSetting_GetSafeFloatPointer((int *)&flt_B37EE0);
      if ( *(float *)v44 <= (double)a36 )
      {
LABEL_13:
        v45 = *((_DWORD *)v41 + 6);
        a36 = fabs(a36);
        *(float *)(v45 + 0x60) = a36;
        goto LABEL_14;
      }
      v43 = &flt_B37EE0;
    }
    else
    {
      v43 = &flt_B37ED8;
    }
    a36 = *(float *)GameSetting_GetSafeFloatPointer((int *)v43);
    goto LABEL_13;
  }
  return MagicCaster_ApplyActiveMagicItem_::TargetVFX_(
           v37,
           v36,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           (int)a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           SLODWORD(a21),
           SHIDWORD(a21),
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           (int)a29,
           a30,
           a31,
           a32,
           a33,
           a34);
}
