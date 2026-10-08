double __usercall sub_622E30@<st0>(int a1@<ecx>, double a2@<st1>, double result@<st0>)
{
  TESObjectREFR *v5; // edi
  TESObjectREFR *CurrentTarget; // eax
  double DesiredCombatDistance; // st5
  Actor *v8; // eax
  _DWORD *v9; // ebx
  void (__thiscall **v10)(_DWORD *, int); // edi
  int v11; // eax
  Actor *v12; // eax
  bool v13; // al
  double v14; // st5
  char v15; // al
  double v16; // st6
  char v17; // al
  unsigned int v18; // edi
  char IsRangedWeaponMode; // bl
  char v20; // dl
  char v21; // cl
  BSSimpleList_VoidPtr *next; // edi
  float *v23; // ebx
  int v24; // eax
  float *v25; // eax
  float *v26; // edi
  float **v27; // edi
  unsigned int v28; // ebx
  signed int v29; // edx
  float *v30; // eax
  float *data; // [esp+8h] [ebp-24h]
  float maximumDistance; // [esp+18h] [ebp-14h]
  float v33; // [esp+18h] [ebp-14h]
  float surfaceDistance; // [esp+1Ch] [ebp-10h]
  float v35; // [esp+1Ch] [ebp-10h]
  float v36[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) == 0xB ) /*0x622e3a*/
  {
    if ( *(float *)(a1 + 0x184) < 0.0 ) /*0x622e4e*/
    {
      v5 = *(TESObjectREFR **)(a1 + 0x3C); /*0x622e50*/
      CurrentTarget = (TESObjectREFR *)CombatController_GetCurrentTarget(a1); /*0x622e55*/
      *(float *)(a1 + 0x184) = TESObjectREFR_GetSurfaceDistance(v5, CurrentTarget, 0); /*0x622e61*/
    }
    surfaceDistance = *(float *)(a1 + 0x184); /*0x622e72*/
    DesiredCombatDistance = CombatController_GetDesiredCombatDistance((void *)a1); /*0x622e76*/
    if ( *(_BYTE *)(a1 + 0x49) || *(_DWORD *)(a1 + 0x74) == 1 ) /*0x622e8d*/
    {
      sub_6191B0(a1, DesiredCombatDistance, a2, result); /*0x6231d2*/
      return result; /*0x6231d2*/
    }
    if ( sub_5E1E90(*(void **)(a1 + 0x3C)) ) /*0x622e97*/
    {
      *(_BYTE *)(a1 + 0x116) = CombatController_CanReachCurrentTarget(a1) == 0; /*0x622eb2*/
      if ( !CombatController_GetCurrentTarget(a1) /*0x622ee8*/
        || (v8 = (Actor *)CombatController_GetCurrentTarget(a1), !Actor_IsSwimming(v8))
        || *(_BYTE *)(a1 + 0x116)
        || *(_DWORD *)(a1 + 0x1A8) < (int)MEMORY[0xB372F0].value )
      {
        if ( *(float *)(a1 + 0xD8) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) ) /*0x622f04*/
        {
          v9 = *(_DWORD **)(a1 + 0x3C); /*0x622f06*/
          v10 = (void (__thiscall **)(_DWORD *, int))(*v9 + 0x340); /*0x622f0d*/
          v11 = CombatController_GetCurrentTarget(a1); /*0x622f13*/
          (*v10)(v9, v11); /*0x622f1d*/
        }
        return result; /*0x622f1d*/
      }
LABEL_28:
      sub_619920(a1, 0); /*0x623006*/
      return result; /*0x623015*/
    }
    if ( !sub_5E3400(*(Actor **)(a1 + 0x3C)) ) /*0x622f29*/
    {
      if ( CombatController_GetCurrentTarget(a1) ) /*0x622f34*/
      {
        v12 = (Actor *)CombatController_GetCurrentTarget(a1); /*0x622f3f*/
        if ( !Actor_IsSwimming(v12) ) /*0x622f46*/
        {
          v13 = CombatController_CanReachCurrentTarget(a1) == 0; /*0x622f58*/
          *(_BYTE *)(a1 + 0x116) = v13; /*0x622f5d*/
          if ( !v13 && *(_DWORD *)(a1 + 0x1A8) >= (int)MEMORY[0xB372F0].value ) /*0x622f71*/
            goto LABEL_28; /*0x622f71*/
        }
      }
    }
    maximumDistance = DesiredCombatDistance; /*0x622e7f*/
    if ( CombatController_IsTargetWithinRangedDistance((void *)a1, surfaceDistance, maximumDistance, 0) /*0x622fab*/
      && !*(_BYTE *)(a1 + 0x116)
      && *(_DWORD *)(a1 + 0x1A8) >= (int)MEMORY[0xB372F0].value )
    {
      goto LABEL_28; /*0x622fab*/
    }
    if ( CombatController_GetCurrentTarget(a1) ) /*0x622faf*/
    {
      v14 = *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4); /*0x622fbf*/
      if ( *(float *)(a1 + 0xD8) < v14 ) /*0x622fd2*/
      {
        if ( *(_DWORD *)(a1 + 0x74) ) /*0x622fd8*/
        {
          if ( CombatController_CanReachCurrentTarget(a1) || (v14 = ((double (__thiscall *)(int))loc_622820)(a1), v15) ) /*0x622ff6*/
          {
            if ( *(_DWORD *)(a1 + 0x1A8) >= (int)MEMORY[0xB372F0].value ) /*0x623004*/
              goto LABEL_28; /*0x623004*/
          }
          v16 = sub_6150E0((_DWORD *)a1, result, 1); /*0x62301a*/
          if ( v17 ) /*0x623021*/
          {
            sub_61D320(a1); /*0x62302b*/
            return result; /*0x62302b*/
          }
          v18 = *(_DWORD *)(a1 + 0x70); /*0x623030*/
          IsRangedWeaponMode = CombatMode_IsRangedWeaponMode(v18); /*0x623039*/
          if ( !IsRangedWeaponMode || !*(_BYTE *)(a1 + 0x158) || *(_BYTE *)(a1 + 0x15B) ) /*0x62304b*/
          {
            if ( (unsigned __int8)CombatMode_IsNonRangedMode(v18) && v20 || !v21 && (v20 || IsRangedWeaponMode) ) /*0x62309b*/
            {
              next = *(BSSimpleList_VoidPtr **)(a1 + 0x118); /*0x6230a1*/
              v14 = flt_A32048; /*0x6230a7*/
              v23 = 0; /*0x6230ad*/
              v33 = flt_A32048; /*0x6230af*/
              for ( *(_BYTE *)(a1 + 0x17F) = 0; next; next = (BSSimpleList_VoidPtr *)next->firstNode.next ) /*0x6230bc*/
              {
                if ( BSSimpleList_IsEmpty(next) ) /*0x6230c2*/
                  break; /*0x6230c9*/
                if ( next->firstNode.data ) /*0x6230cb*/
                {
                  v24 = CombatController_GetCurrentTarget(a1); /*0x6230d2*/
                  data = (float *)next->firstNode.data; /*0x6230db*/
                  v25 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)v24 + 0x174))( /*0x6230e9*/
                                   v24,
                                   result,
                                   v16);
                  sub_4121A0(v25, v36, data); /*0x6230ed*/
                  result = NiPoint3_Length(v36); /*0x6230f6*/
                  v35 = v14; /*0x6230fb*/
                  v14 = v35; /*0x6230ff*/
                  if ( v33 > (double)v35 ) /*0x62310e*/
                  {
                    v23 = (float *)next->firstNode.data; /*0x623110*/
                    v33 = v35; /*0x623112*/
                  }
                }
              }
              v26 = v23; /*0x623121*/
LABEL_51:
              if ( v26 ) /*0x623162*/
              {
                v30 = (float *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C) + 0x174))( /*0x623175*/
                                 *(_DWORD *)(a1 + 0x3C),
                                 result,
                                 v16);
                sub_4121A0(v30, v36, v26); /*0x623179*/
                result = NiPoint3_Length(v36); /*0x623182*/
                if ( v14 > fCostant_100 ) /*0x623192*/
                {
                  sub_61C9A0((float *)a1, (_DWORD **)v26); /*0x623197*/
                  return result; /*0x6231a2*/
                }
              }
              goto LABEL_54; /*0x623192*/
            }
            v27 = *(float ***)(a1 + 0x118); /*0x623125*/
            if ( (unsigned int)BSSimpleList_Count(v27) > 1 ) /*0x623135*/
            {
              v28 = BSSimpleList_Count(v27); /*0x623140*/
              v29 = Game_RandomLargeInteger(0) % v28; /*0x623149*/
              if ( v29 > 0 ) /*0x623150*/
              {
                do /*0x623158*/
                {
                  --v29; /*0x623152*/
                  v27 = (float **)v27[1]; /*0x623155*/
                }
                while ( v29 ); /*0x623158*/
              }
              if ( v27 ) /*0x62315c*/
              {
                v26 = *v27; /*0x62315e*/
                goto LABEL_51; /*0x62315e*/
              }
            }
          }
LABEL_54:
          *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44); /*0x6231a3*/
          *(float *)(a1 + 0xD8) = *(float *)&dword_A46C30; /*0x6231b4*/
          *(float *)(a1 + 0xDC) = kTerrainLODQuadRayDirectionZ; /*0x6231c0*/
        }
      }
    }
  }
  return result; /*0x622f21*/
}
