int *__usercall GetActorWithinReach__@<eax>(int *i@<edi>, int *a2, float a3)
{
  int v4; // eax
  int v5; // eax
  TESObjectREFR *v6; // esi
  double DistanceBetween; // st7
  Actor *ListHead; // eax
  Actor *v10; // ebp
  int *v11; // eax
  TESObjectREFR *v12; // esi
  int ExtraDataFollower; // eax
  TESObjectREFR *v14; // esi
  TESObjectREFRVtbl *vtbl; // ecx
  PlayerCharacter *v16; // eax
  char v17; // al
  int *v18; // [esp-8h] [ebp-1Ch]
  char v19; // [esp+0h] [ebp-14h]
  float v20; // [esp+8h] [ebp-Ch]
  float v21; // [esp+Ch] [ebp-8h] BYREF
  float v22; // [esp+10h] [ebp-4h]
  int *a2a; // [esp+18h] [ebp+4h]

  if ( (*(int (__thiscall **)(int *))(*a2 + 0x330))(a2) /*0x6156f0*/
    && (v4 = (*(int (__thiscall **)(int *))(*a2 + 0x330))(a2),
        v5 = CombatController_GetCurrentTarget(v4),
        (v6 = (TESObjectREFR *)v5) != 0) )
  {
    if ( Actor_IsFacingReferenceWithinCombatAngle((int)a2, v5, 0) /*0x615719*/
      && a3 >= TESObjectREFR_GetSurfaceDistance(i, (TESObjectREFR *)a2, v6, 1, v19) )
    {
      return (int *)v6; /*0x61571b*/
    }
    else
    {
      return 0; /*0x615724*/
    }
  }
  else
  {
    DistanceBetween = flt_A32048; /*0x61572b*/
    v20 = flt_A32048; /*0x615734*/
    a2a = 0; /*0x61573d*/
    ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x615745*/
    v10 = ActorList_ReturnHead((ActorList *)ListHead); /*0x615751*/
    if ( v10 ) /*0x615755*/
    {
      v18 = i; /*0x61575b*/
      do /*0x6158d5*/
      {
        if ( !*(_DWORD *)&v10->members.super.super.super.type && !v10->vtbl ) /*0x615766*/
          break; /*0x61576a*/
        v11 = (int *)OblivionDynamicCast( /*0x615782*/
                       v10->vtbl,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0);
        v10 = *(Actor **)&v10->members.super.super.super.type; /*0x615787*/
        v12 = (TESObjectREFR *)v11; /*0x61578a*/
        if ( v11 ) /*0x615791*/
        {
          if ( v11 != a2 && !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*v11 + 0x198))(v11, 0) ) /*0x6157a7*/
          {
            if ( v12->vtbl->GetNiNode(v12) ) /*0x6157b7*/
            {
              DistanceBetween = TESObjectREFR_GetSurfaceDistance(i, (TESObjectREFR *)a2, v12, 0, (char)v18); /*0x6157c1*/
              if ( a3 >= DistanceBetween ) /*0x6157d4*/
              {
                DistanceBetween = flt_A32048; /*0x6157d6*/
                v21 = flt_A32048; /*0x6157e1*/
                if ( Actor_IsFacingReferenceWithinCombatAngle((int)a2, (int)v12, &v21) ) /*0x6157e7*/
                {
                  DistanceBetween = v21; /*0x6157f3*/
                  if ( v20 >= (double)v21 ) /*0x615802*/
                  {
                    v20 = v21; /*0x615804*/
                    a2a = (int *)v12; /*0x615808*/
                  }
                }
              }
            }
          }
          ExtraDataFollower = ExtraDataList_GetFollowerExtra(); /*0x615813*/
          if ( ExtraDataFollower ) /*0x61581a*/
          {
            for ( i = *(int **)(ExtraDataFollower + 0xC); i; i = (int *)i[1] ) /*0x615825*/
            {
              v14 = (TESObjectREFR *)*i; /*0x615830*/
              if ( !*i ) /*0x615830*/
                break; /*0x615834*/
              vtbl = v14[1].vtbl; /*0x61583a*/
              if ( vtbl ) /*0x61583f*/
              {
                if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) /*0x61585f*/
                  && v14 != (TESObjectREFR *)a2
                  && !v14->vtbl->IsDead(v14, 0) )
                {
                  if ( v14->vtbl->GetNiNode(v14) ) /*0x61586f*/
                  {
                    DistanceBetween = TESObjectREFR_GetSurfaceDistance(i, (TESObjectREFR *)a2, v14, 0, (char)v18); /*0x615879*/
                    if ( a3 >= DistanceBetween ) /*0x61588c*/
                    {
                      DistanceBetween = flt_A32048; /*0x61588e*/
                      v21 = flt_A32048; /*0x615899*/
                      if ( Actor_IsFacingReferenceWithinCombatAngle((int)a2, (int)v14, &v21) ) /*0x61589f*/
                      {
                        DistanceBetween = v21; /*0x6158ab*/
                        if ( v20 >= (double)v21 ) /*0x6158ba*/
                        {
                          v20 = v21; /*0x6158bc*/
                          a2a = (int *)v14; /*0x6158c0*/
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      while ( v10 ); /*0x6158d5*/
      i = v18; /*0x6158db*/
    }
    if ( a2 != (int *)reference ) /*0x6158e4*/
    {
      v22 = TESObjectREFR_GetSurfaceDistance(i, (TESObjectREFR *)a2, (TESObjectREFR *)reference, 0, v19); /*0x6158ef*/
      v16 = reference; /*0x6158f3*/
      v21 = flt_A32048; /*0x615902*/
      v17 = Actor_IsFacingReferenceWithinCombatAngle((int)a2, (int)v16, &v21); /*0x615909*/
      DistanceBetween = v22; /*0x61590e*/
      if ( a3 >= (double)v22 ) /*0x615922*/
      {
        if ( v17 ) /*0x615926*/
        {
          DistanceBetween = v21; /*0x615928*/
          if ( v20 >= (double)v21 ) /*0x615937*/
            a2a = (int *)reference; /*0x61593f*/
        }
      }
    }
    if ( a2a ) /*0x615949*/
    {
      if ( Actor_IsPlayer((TESObjectREFR *)a2) ) /*0x61594d*/
      {
        if ( !Actor_LineOfSight((Actor *)reference, DistanceBetween, 1, (TESObjectREFR *)a2a, 1, 0, 0) ) /*0x615965*/
          return 0; /*0x61596e*/
      }
    }
    return a2a; /*0x615976*/
  }
}
