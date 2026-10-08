double __userpurge sub_695400@<st0>(
        int a1@<ecx>,
        double a2@<st2>,
        double result@<st0>,
        float a4,
        float a5,
        float a6,
        _DWORD *a7,
        TESObjectREFR *a8,
        float a9)
{
  double v10; // st7
  double v11; // st6
  bool v12; // c0
  bool v13; // c3
  int v14; // eax
  int v15; // edi
  NiTransform *v16; // eax
  int v17; // eax
  int v18; // eax
  int *v19; // ecx
  bhkCharacterProxy *CharProxy; // eax
  char v21; // bl
  bhkCharacterProxy *v22; // eax
  int v23; // edi
  _DWORD *v24; // ecx
  int v25; // eax
  int v26; // eax
  char *v27; // edi
  char *v28; // ebp
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // edi
  NiRTTI *v33; // eax
  char v34; // al
  NiControllerManager *v35; // eax
  NiControllerManager *v36; // edi
  NiControllerSequence *v37; // ebp
  int v38; // ecx
  int *sound; // ecx
  int v40; // eax
  int *v41; // edi
  float *v42; // eax
  __int64 v43; // [esp+Ch] [ebp-44h]
  __int64 v44; // [esp+14h] [ebp-3Ch]
  float v45; // [esp+40h] [ebp-10h]
  float v46; // [esp+44h] [ebp-Ch] BYREF
  float v47; // [esp+60h] [ebp+10h]

  if ( !a8 || !a8->vtbl->IsActor(a8) || !Actor_IsGhost((Actor *)a8) )
  {
    v45 = (double)EffectItem_GetArea(*(_DWORD **)(a1 + 0x70)) * flt_B37ED0[0]; /*0x695446*/
    v10 = v45; /*0x69544a*/
    *(float *)(a1 + 0x84) = v45; /*0x69544e*/
    v11 = flt_B37ED0[2]; /*0x695454*/
    if ( v11 >= v45 ) /*0x695461*/
    {
      v11 = flt_B37ED0[4]; /*0x69546f*/
      v12 = v11 < v10; /*0x695475*/
      v13 = v11 == v10; /*0x695475*/
      result = v11; /*0x695479*/
      if ( !v12 && !v13 ) /*0x69547b*/
        *(float *)(a1 + 0x84) = flt_B37ED0[4]; /*0x695480*/
    }
    else
    {
      result = flt_B37ED0[2]; /*0x695463*/
      *(float *)(a1 + 0x84) = flt_B37ED0[2]; /*0x695465*/
    }
    TESObjectREFR_SetPosition((TESObjectREFR *)a1, a4, a5, a6); /*0x6954a5*/
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1); /*0x6954b4*/
    v15 = v14; /*0x6954b6*/
    if ( v14 ) /*0x6954ba*/
    {
      v16 = sub_7101F0((NiTransform *)(v14 + 0x64), (NiTransform *)&v46, &stru_B258DC); /*0x6954c9*/
      sub_69F880(a4, a5, a6, v16->rot.data[0][0], v16->rot.data[0][1], v16->rot.data[0][2], a7); /*0x6954fb*/
      if ( !LOBYTE(a9) ) /*0x695505*/
      {
        v17 = *(_DWORD *)v15; /*0x69550b*/
        *(float *)(v15 + 0x54) = a4; /*0x69550d*/
        *(float *)(v15 + 0x58) = a5; /*0x695510*/
        *(float *)(v15 + 0x5C) = a6; /*0x695513*/
        v18 = (*(int (__thiscall **)(int, const char *))(v17 + 0x58))(v15, "AreaEffect"); /*0x695520*/
        if ( v18 ) /*0x695524*/
        {
          v47 = fabs(*(float *)(a1 + 0x84)); /*0x69552e*/
          result = v47; /*0x695532*/
          *(float *)(v18 + 0x60) = v47; /*0x695536*/
        }
      }
    }
    v19 = *(int **)(a1 + 0x88); /*0x695539*/
    if ( v19 ) /*0x695541*/
      sub_6B7240(v19); /*0x695543*/
    CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x69554a*/
    v21 = LOBYTE(a9); /*0x695551*/
    if ( CharProxy ) /*0x695555*/
    {
      if ( !LOBYTE(a9) ) /*0x695559*/
      {
        if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)a1) + 0x7D) & 0x8000) != 0 ) /*0x69556e*/
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x214))(a1); /*0x69557a*/
        v22 = MobileObject_GetCharProxy((MobileObject *)a1); /*0x695583*/
        bhkCharacterProxy_GetCollisionFilterInfo(v22, &a9); /*0x69558a*/
        v23 = LODWORD(a9) | 0x4000; /*0x695595*/
        v24 = *((_DWORD **)MobileObject_GetCharProxy((MobileObject *)a1) + 0xD9); /*0x6955a0*/
        if ( v24 ) /*0x6955a8*/
        {
          v25 = v24[2]; /*0x6955aa*/
          if ( v25 ) /*0x6955af*/
          {
            v26 = v25 + 0x14; /*0x6955b1*/
            if ( v26 ) /*0x6955b4*/
              *(_DWORD *)(v26 + 0x1C) = v23; /*0x6955b6*/
          }
          (*(void (__thiscall **)(_DWORD *))(*v24 + 0x80))(v24); /*0x6955c1*/
        }
      }
    }
    *(_DWORD *)(a1 + 0x80) = 2; /*0x6955c5*/
    if ( !v21 ) /*0x6955cf*/
    {
      v27 = *(char **)(a1 + 0x6C); /*0x6955d9*/
      v28 = *(char **)(a1 + 0x68); /*0x6955dc*/
      v29 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1); /*0x6955e1*/
      result = 1.0; /*0x6955e3*/
      HIDWORD(v43) = *(_DWORD *)v29; /*0x6955fe*/
      v44 = *(_QWORD *)(v29 + 4); /*0x695606*/
      LODWORD(v43) = Shared_GetDwordAtOffset40((void *)a1); /*0x695613*/
      MagicCaster_TargetEffectHit__(v28, a2, 1.0, v11, v27, v43, v44, a1, a8, 0, 1.0, 1.0); /*0x695617*/
    }
    v30 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1); /*0x695628*/
    v31 = *(_DWORD *)(a1 + 0x74); /*0x69562a*/
    if ( v31 ) /*0x69562f*/
    {
      if ( *(_DWORD *)(v31 + 0x98) == 0x47444946 ) /*0x69563b*/
        sub_481660((_BYTE *)v30); /*0x69563e*/
    }
    if ( v30 )
    {
      v32 = *(_DWORD *)(v30 + 0xC); /*0x69564e*/
      if ( v32 )
      {
        v33 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v32 + 4))(v32); /*0x695660*/
        if ( v33 ) /*0x695664*/
        {
          while ( v33 != &stru_B3CAC0 ) /*0x695675*/
          {
            v33 = v33->parent; /*0x69567b*/
            if ( !v33 ) /*0x695680*/
              goto LABEL_33; /*0x695680*/
          }
          v34 = 1; /*0x6957ac*/
        }
        else
        {
LABEL_33:
          v34 = 0; /*0x695682*/
        }
        v35 = v34 != 0 ? (NiControllerManager *)v32 : 0;
        v36 = v35; /*0x69568a*/
        if ( v35 ) /*0x69568c*/
        {
          if ( NiTMap_GetAt((_DWORD *)v35 + 0x16, (int)"SpecialIdle_AreaEffect", &a9) ) /*0x69569f*/
          {
            v37 = (NiControllerSequence *)LODWORD(a9); /*0x6956a8*/
            if ( a9 != 0.0 ) /*0x6956ae*/
            {
              NiControllerManager_DeactivateAllSequences(v36, 0.0); /*0x6956b8*/
              NiControllerSequence_Activate(v37, 0, 0, 1.0, 0.0, 0, 0); /*0x6956d5*/
              *((_WORD *)v36 + 4) |= 8u; /*0x6956da*/
              *((float *)v37 + 0x12) = -flt_A7DEB4; /*0x6956e7*/
              v38 = *(_DWORD *)(a1 + 0x8C); /*0x6956ea*/
              if ( v38 ) /*0x6956f2*/
              {
                a9 = *((float *)v37 + 0xC) * dbl_A31C70; /*0x6956fe*/
                MagicCaster_CastingVFX_ClearSomething___(v38, 0, a9); /*0x69570b*/
              }
            }
          }
        }
      }
    }
    sound = (int *)MEMORY[0xB33398]->sound; /*0x695716*/
    if ( sound ) /*0x69571b*/
    {
      v40 = *(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x8C); /*0x695724*/
      if ( v40 ) /*0x69572c*/
      {
        if ( !v21 ) /*0x695730*/
        {
          v41 = OSGLobals_PlaySound(sound, *(void **)(v40 + 0xC), 0x102, 1); /*0x695742*/
          if ( v41 ) /*0x695746*/
          {
            v42 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a1 + 0x174))( /*0x695752*/
                             a1,
                             result,
                             v11);
            result = *v42; /*0x69577d*/
            sub_6B7360(v41, *v42, v42[1], v42[2]); /*0x695784*/
            sub_6B71C0(v41, 0); /*0x69578d*/
            sub_6B73E0(v41); /*0x695794*/
            FormHeapFree((unsigned int)v41); /*0x69579a*/
          }
        }
      }
    }
  }
  return result; /*0x6957a2*/
}
