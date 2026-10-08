unsigned int __userpurge MagicCaster_TargetEffectHit__@<eax>(
        char *a1@<ecx>,
        double a2@<st2>,
        double st7_0@<st0>,
        double a4@<st1>,
        char *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        TESObjectREFR *a9,
        int a10,
        float a11,
        float a12)
{
  char *v12; // ebp
  double v14; // st7
  int StrongestItem; // esi
  _DWORD *v16; // edi
  _DWORD *v17; // eax
  void (__thiscall ***v18)(_DWORD, int); // esi
  Actor *v19; // edi
  int (__thiscall **v20)(TESObjectREFR *, int); // edi
  int v21; // eax
  char v22; // al
  MagicTarget *v23; // eax
  MagicCaster *v24; // ecx
  Actor *ParentActor; // edi
  ActorVtbl *vtbl; // edi
  int SchoolAV; // eax
  int (__thiscall ***v28)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int); // eax
  int v29; // eax
  float *v30; // eax
  double v31; // st7
  unsigned int result; // eax
  unsigned int v33; // esi
  __int128 v34; // [esp+14h] [ebp-3Ch]
  float v35; // [esp+24h] [ebp-2Ch]
  int v36; // [esp+28h] [ebp-28h]
  int v37; // [esp+28h] [ebp-28h]
  int v38; // [esp+2Ch] [ebp-24h]
  int v39; // [esp+2Ch] [ebp-24h]
  int v40; // [esp+30h] [ebp-20h]
  int v41; // [esp+30h] [ebp-20h]
  int v42; // [esp+34h] [ebp-1Ch]
  int v43; // [esp+34h] [ebp-1Ch]
  char v44; // [esp+38h] [ebp-18h]
  int v45; // [esp+38h] [ebp-18h]
  float v46; // [esp+3Ch] [ebp-14h]
  int v47; // [esp+3Ch] [ebp-14h]
  Actor *v48; // [esp+40h] [ebp-10h]
  _DWORD *v49; // [esp+44h] [ebp-Ch]
  int v50; // [esp+48h] [ebp-8h] BYREF
  unsigned int v51; // [esp+4Ch] [ebp-4h]

  v12 = a5; /*0x69ba95*/
  if ( a5 ) /*0x69baa1*/
    v44 = (_BYTE)a5 + 0xC; /*0x69baa6*/
  else
    v44 = 0; /*0x69baac*/
  if ( (*(int (__usercall **)@<eax>(char *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a5 + 0x18))( /*0x69bab8*/
         a5,
         st7_0,
         a4,
         a2) )
  {
    v14 = 1.0; /*0x69bad0*/
  }
  else
  {
    v14 = 0.0; /*0x69babe*/
    (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x2C))(a1, 0, 0.0); /*0x69bacc*/
  }
  v46 = v14; /*0x69bad2*/
  *(float *)&v47 = v46 * a11; /*0x69bae4*/
  StrongestItem = EffectItemList_GetStrongestItem((_DWORD *)v12 + 3, 2, 0, v36, v38, v40, v42, v44); /*0x69bafd*/
  v49 = (_DWORD *)StrongestItem; /*0x69bb0f*/
  v51 = 0; /*0x69bb13*/
  v50 = 0; /*0x69bb17*/
  MagicCaster_GetTargetsInArea_(a1, v12, 2, *((float *)&a6 + 1), a7, &v50); /*0x69bb1e*/
  LOBYTE(a5) = 0; /*0x69bb27*/
  if ( !v45 ) /*0x69bb2c*/
  {
LABEL_35:
    v19 = (Actor *)a9; /*0x69bcf6*/
    goto LABEL_37; /*0x69bcfa*/
  }
  while ( 1 ) /*0x69bb36*/
  {
    v16 = *(_DWORD **)(v45 + 4); /*0x69bb36*/
    if ( !v16 || v16[4] != 2 || *v16 == 0x454C4554 ) /*0x69bb51*/
    {
      v19 = (Actor *)a9; /*0x69bcd6*/
      goto LABEL_32; /*0x69bcd6*/
    }
    v17 = (_DWORD *)(*(int (__thiscall **)(char *, char *, _DWORD *, _DWORD))(*(_DWORD *)a1 + 0x40))(a1, v12, v16, 0); /*0x69bb62*/
    v18 = (void (__thiscall ***)(_DWORD, int))v17; /*0x69bb68*/
    if ( v16 != v49 ) /*0x69bb6a*/
      v17[5] |= 0xEu; /*0x69bb6c*/
    ActiveEffect_Base_ApplyScalingFactor(v17, v47); /*0x69bb7a*/
    v19 = (Actor *)a9; /*0x69bb7f*/
    if ( a9 ) /*0x69bb85*/
    {
      if ( !a9->vtbl->GetMagicTarget(a9) ) /*0x69bb95*/
        goto LABEL_26; /*0x69bb95*/
      if ( v19 == (Actor *)(*(int (__thiscall **)(char *))(*(_DWORD *)a1 + 0x20))(a1) ) /*0x69bbaa*/
        goto LABEL_26; /*0x69bbaa*/
      if ( a8 ) /*0x69bbb6*/
      {
        v20 = (int (__thiscall **)(TESObjectREFR *, int))(*(_DWORD *)a8 + 0x21C); /*0x69bbc7*/
        v21 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))a9->vtbl->GetMagicTarget)(a9, v18); /*0x69bbcd*/
        v22 = (*v20)(a9, v21); /*0x69bbd6*/
        v19 = (Actor *)a9; /*0x69bbda*/
        if ( !v22 ) /*0x69bbde*/
          goto LABEL_26; /*0x69bbde*/
      }
      v23 = v19->vtbl->super.super.GetMagicTarget((TESObjectREFR *)v19); /*0x69bbee*/
      if ( !((unsigned int (__thiscall *)(MagicTarget *, char *, char *, void (__thiscall ***)(_DWORD, int), _DWORD))v23->vtbl->AttemptAddEffect)( /*0x69bbfb*/
              v23,
              a1,
              v12,
              v18,
              0) )
        goto LABEL_26; /*0x69bbff*/
      v24 = *(MagicCaster **)(a8 + 0x68); /*0x69bc05*/
      if ( v24 ) /*0x69bc0a*/
      {
        ParentActor = MagicCaster_GetParentActor(v24); /*0x69bc11*/
        v48 = ParentActor; /*0x69bc15*/
        if ( ParentActor && !(_BYTE)a5 && !(*(int (__thiscall **)(char *))(*(_DWORD *)v12 + 0x18))(v12) ) /*0x69bc2e*/
          goto LABEL_24; /*0x69bc2e*/
      }
      else
      {
        v48 = 0; /*0x69bc77*/
        ParentActor = 0; /*0x69bc7f*/
      }
      if ( (*(int (__thiscall **)(char *))(*(_DWORD *)v12 + 0x18))(v12) != 5 ) /*0x69bc3d*/
      {
LABEL_25:
        v19 = (Actor *)a9; /*0x69bc65*/
LABEL_26:
        v28 = (int (__thiscall ***)(int (__stdcall ***)(void *, int, int, int), void *, int, int, int))v19->vtbl->super.super.GetMagicTarget((TESObjectREFR *)v19); /*0x69bc69*/
        goto LABEL_29; /*0x69bc75*/
      }
LABEL_24:
      vtbl = ParentActor->vtbl; /*0x69bc3f*/
      LOBYTE(a5) = 1; /*0x69bc4c*/
      SchoolAV = EffectItemList_GetSchoolAV(); /*0x69bc57*/
      ((void (__thiscall *)(Actor *, int, int, _DWORD))vtbl->ModExperience)(v48, SchoolAV, 1, 0.0);// Advance the caster/player vtable pointer to Player_ModExperience (+0x39C) before resolving the target-effect school. /*0x69bc63*/
      goto LABEL_25; /*0x69bc63*/
    }
    v28 = 0; /*0x69bc85*/
LABEL_29:
    MagicCaster_ApplyAOE__( /*0x69bc87*/
      a1,
      (int)v12,
      (int)v18,
      a6,
      SHIDWORD(a6),
      a7,
      SHIDWORD(a7),
      v28,
      a8,
      (float **)&v50,
      (char *)&a5,
      a12);
    if ( v18 ) /*0x69bcc8*/
      (**v18)(v18, 1); /*0x69bcd2*/
LABEL_32:
    v29 = *(_DWORD *)(v45 + 8); /*0x69bcde*/
    if ( !v29 ) /*0x69bce3*/
      break; /*0x69bce3*/
    v45 = v29 - 4; /*0x69bce8*/
    if ( v29 == 4 ) /*0x69bcec*/
    {
      StrongestItem = (int)v49; /*0x69bcf2*/
      goto LABEL_35; /*0x69bcf2*/
    }
  }
  StrongestItem = (int)v49; /*0x69bcfc*/
LABEL_37:
  LOBYTE(a9) = EffectSetting_GetProjectileType(*(_DWORD **)(a8 + 0x74)) == 3; /*0x69bd00*/
  v30 = (float *)EffectItemList_GetStrongestItem((_DWORD *)v12 + 3, 2, 1, v37, v39, v41, v43, v45); /*0x69bd1b*/
  if ( !(_BYTE)a9 ) /*0x69bd25*/
  {
    if ( v30 ) /*0x69bd2d*/
    {
      MagicCaster_ExplosionCalcs____( /*0x69bd68*/
        a1,
        __SPAIR64__(a7, HIDWORD(a6)),
        *((float *)&a7 + 1),
        (TESObjectCELL *)a6,
        (int)v12,
        v30,
        COERCE_FLOAT(&v50),
        a11,
        a12);
    }
    else if ( v19 ) /*0x69bd71*/
    {
      if ( v19->vtbl->super.super.IsActor((TESObjectREFR *)v19) ) /*0x69bd7d*/
      {
        if ( StrongestItem ) /*0x69bd85*/
        {
          if ( (*(_DWORD *)(*(_DWORD *)(StrongestItem + 0x1C) + 0x58) & 0x20000000) != 0 /*0x69bd9c*/
            && sub_699EB0((MagicCaster *)a1, (int)&v19->members.magicTarget, (int)v12) )
          {
            v31 = EffectItem_MagickaCost((float *)StrongestItem); /*0x69bda7*/
            v35 = v31; /*0x69bdb5*/
            HIDWORD(v34) = StrongestItem; /*0x69bdb8*/
            LODWORD(v34) = HIDWORD(a6); /*0x69bdbe*/
            *(_QWORD *)((char *)&v34 + 4) = a7; /*0x69bdc4*/
            sub_699900((int)a1, (int)a1, v31, v19, v34, v35); /*0x69bdcd*/
          }
        }
      }
    }
  }
  result = v51; /*0x69bdd2*/
  if ( v51 ) /*0x69bdd8*/
  {
    do /*0x69bdf0*/
    {
      v33 = *(_DWORD *)(result + 4); /*0x69bde0*/
      FormHeapFree(result); /*0x69bde4*/
      result = v33; /*0x69bdee*/
    }
    while ( v33 ); /*0x69bdf0*/
  }
  return result; /*0x69bdf2*/
}
