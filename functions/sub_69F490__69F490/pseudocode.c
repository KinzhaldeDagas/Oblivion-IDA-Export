int __usercall sub_69F490@<eax>(
        double a1@<st2>,
        double a2@<st1>,
        void *a3,
        volatile LONG *a4,
        TESObjectCELL *a5,
        TESForm::ModReferenceList *a6,
        _DWORD *a7,
        TESForm *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  TESForm *v14; // esi
  MagicBallProjectile *v15; // eax
  void *v16; // eax
  Concurrency::details::SchedulerBase *v17; // eax
  MagicFogProjectile *v18; // eax
  int v19; // eax

  v14 = a8;
  if ( !a8 )
    v14 = (TESForm *)a7[7];
  switch ( EffectSetting_GetProjectileType(a8) )
  {
    case 0:
      v15 = (MagicBallProjectile *)FormHeapAlloc(0x90u);
      if ( !v15 )
        goto LABEL_12;
      v16 = sub_696250(v15, a1, a2, a3, a6, a7, v14, a9, a10, a11, a12, a13, a14, a4, a5);
      goto LABEL_13;
    case 1:
      v17 = (Concurrency::details::SchedulerBase *)FormHeapAlloc(0xA4u);
      if ( !v17 )
        goto LABEL_12;
      v16 = sub_6988A0(v17, a1, a2, a3, a6, a7, v14, a9, a10, a11, a12, a13, a14);
      goto LABEL_13;
    case 2:
      v19 = FormHeapAlloc(0x7Cu);
      if ( !v19 )
        goto LABEL_12;
      v16 = sub_6A1CA0(v19, a1, a2, (int)a3, (int)a6, (int)a7, (int)v14, a9, a10, a11, a12, a13, a14);
      goto LABEL_13;
    case 3:
      v18 = (MagicFogProjectile *)FormHeapAlloc(0x9Cu);
      if ( v18 )
        v16 = sub_69D5E0(v18, a1, a2, a3, a6, a7, v14, a9, a10, a11, a12, a13, a14, a4, a5);
      else
LABEL_12:
        v16 = 0;
LABEL_13:
      if ( !v16 )
        goto LABEL_15;
      sub_673A90((int)v16, 0, 0, 0, 0);
      return def_69F4D1(a3, a4, a5);
    default:
LABEL_15:
      JUMPOUT(0x69F6AC);
  }
}
