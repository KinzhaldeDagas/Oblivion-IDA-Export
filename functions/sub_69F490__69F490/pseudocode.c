void __usercall sub_69F490(
        double a1@<st2>,
        double a2@<st1>,
        Data *a3,
        NiAVObject *a4,
        Ni2DBuffer **a5,
        TESForm::ModReferenceList *a6,
        TESObjectCELL *(__thiscall *a7)(TESChildCELL *this),
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
  MobileObject *v16; // eax
  Concurrency::details::SchedulerBase *v17; // eax
  MagicFogProjectile *v18; // eax
  TESObjectREFR *v19; // eax

  v14 = a8; /*0x69f4bc*/
  if ( !a8 ) /*0x69f4be*/
    v14 = *((TESForm **)a7 + 7); /*0x69f4c0*/
  switch ( EffectSetting_GetProjectileType(a8) ) /*0x69f4d1*/
  {
    case 0: /*0x69f4d1*/
      v15 = (MagicBallProjectile *)FormHeapAlloc(0x90u); /*0x69f4dd*/
      if ( !v15 ) /*0x69f4f3*/
        goto LABEL_12; /*0x69f4f3*/
      v16 = (MobileObject *)sub_696250(v15, a1, a2, a3, a6, a7, v14, a9, a10, a11, a12, a13, a14, a4, a5); /*0x69f543*/
      goto LABEL_13; /*0x69f548*/
    case 1: /*0x69f4d1*/
      v17 = (Concurrency::details::SchedulerBase *)FormHeapAlloc(0xA4u); /*0x69f552*/
      if ( !v17 ) /*0x69f568*/
        goto LABEL_12; /*0x69f568*/
      v16 = (MobileObject *)sub_6988A0(v17, a1, a2, a3, a6, a7, v14, a9, a10, a11, a12, a13, a14); /*0x69f5ae*/
      goto LABEL_13; /*0x69f5b3*/
    case 2: /*0x69f4d1*/
      v19 = (TESObjectREFR *)FormHeapAlloc(0x7Cu); /*0x69f62c*/
      if ( !v19 ) /*0x69f642*/
        goto LABEL_12; /*0x69f642*/
      v16 = (MobileObject *)sub_6A1CA0(v19, a1, a2, a3, a6, a7, v14, a9, a10, a11, a12, a13, a14); /*0x69f684*/
      goto LABEL_13; /*0x69f689*/
    case 3: /*0x69f4d1*/
      v18 = (MagicFogProjectile *)FormHeapAlloc(0x9Cu); /*0x69f5bd*/
      if ( v18 ) /*0x69f5d3*/
        v16 = (MobileObject *)sub_69D5E0(v18, a1, a2, a3, a6, a7, v14, a9, a10, a11, a12, a13, a14, a4, a5); /*0x69f623*/
      else
LABEL_12:
        v16 = 0; /*0x69f68b*/
LABEL_13:
      if ( !v16 ) /*0x69f697*/
        goto LABEL_15; /*0x69f697*/
      ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], v16, 0, 0, 0, 0); /*0x69f6a7*/
      def_69F4D1(); /*0x69f6a8*/
      return;
    default:
LABEL_15:
      JUMPOUT(0x69F6AC); /*0x69f6ac*/
  }
}
