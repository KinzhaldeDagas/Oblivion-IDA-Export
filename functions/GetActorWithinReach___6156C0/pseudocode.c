int *__usercall GetActorWithinReach__@<eax>(int *i@<edi>, int *a2, float a3)
{
  int v4; // eax
  int v5; // eax
  TESObjectREFR *v6; // esi
  double DistanceBetween; // st7
  Actor *v9; // eax
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

  if ( (*(int (__thiscall **)(int *))(*a2 + 0x330))(a2)
    && (v4 = (*(int (__thiscall **)(int *))(*a2 + 0x330))(a2), v5 = sub_6135F0(v4), (v6 = (TESObjectREFR *)v5) != 0) )
  {
    if ( sub_6131D0((int)a2, v5, 0) && a3 >= TESObjectREFR_GetDistanceBetween_(i, (TESObjectREFR *)a2, v6, 1, v19) )
      return (int *)v6;
    else
      return 0;
  }
  else
  {
    DistanceBetween = flt_A32048;
    v20 = flt_A32048;
    a2a = 0;
    v9 = sub_673A50(&ActorProcessManager_ptr, 0);
    v10 = sub_7616D0((ActorList *)v9);
    if ( v10 )
    {
      v18 = i;
      do
      {
        if ( !*(_DWORD *)&v10->members.super.super.super.type && !v10->vtbl )
          break;
        v11 = (int *)OblivionDynamicCast(
                       v10->vtbl,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0);
        v10 = *(Actor **)&v10->members.super.super.super.type;
        v12 = (TESObjectREFR *)v11;
        if ( v11 )
        {
          if ( v11 != a2 && !(*(unsigned __int8 (__thiscall **)(int *, _DWORD))(*v11 + 0x198))(v11, 0) )
          {
            if ( v12->vtbl->GetNiNode(v12) )
            {
              DistanceBetween = TESObjectREFR_GetDistanceBetween_(i, (TESObjectREFR *)a2, v12, 0, (char)v18);
              if ( a3 >= DistanceBetween )
              {
                DistanceBetween = flt_A32048;
                v21 = flt_A32048;
                if ( sub_6131D0((int)a2, (int)v12, &v21) )
                {
                  DistanceBetween = v21;
                  if ( v20 >= (double)v21 )
                  {
                    v20 = v21;
                    a2a = (int *)v12;
                  }
                }
              }
            }
          }
          ExtraDataFollower = GetExtraDataFollower();
          if ( ExtraDataFollower )
          {
            for ( i = *(int **)(ExtraDataFollower + 0xC); i; i = (int *)i[1] )
            {
              v14 = (TESObjectREFR *)*i;
              if ( !*i )
                break;
              vtbl = v14[1].vtbl;
              if ( vtbl )
              {
                if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl)
                  && v14 != (TESObjectREFR *)a2
                  && !v14->vtbl->IsDead(v14, 0) )
                {
                  if ( v14->vtbl->GetNiNode(v14) )
                  {
                    DistanceBetween = TESObjectREFR_GetDistanceBetween_(i, (TESObjectREFR *)a2, v14, 0, (char)v18);
                    if ( a3 >= DistanceBetween )
                    {
                      DistanceBetween = flt_A32048;
                      v21 = flt_A32048;
                      if ( sub_6131D0((int)a2, (int)v14, &v21) )
                      {
                        DistanceBetween = v21;
                        if ( v20 >= (double)v21 )
                        {
                          v20 = v21;
                          a2a = (int *)v14;
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
      while ( v10 );
      i = v18;
    }
    if ( a2 != (int *)TESDataHandler_g_PlayerRef )
    {
      v22 = TESObjectREFR_GetDistanceBetween_(
              i,
              (TESObjectREFR *)a2,
              (TESObjectREFR *)TESDataHandler_g_PlayerRef,
              0,
              v19);
      v16 = TESDataHandler_g_PlayerRef;
      v21 = flt_A32048;
      v17 = sub_6131D0((int)a2, (int)v16, &v21);
      DistanceBetween = v22;
      if ( a3 >= (double)v22 )
      {
        if ( v17 )
        {
          DistanceBetween = v21;
          if ( v20 >= (double)v21 )
            a2a = (int *)TESDataHandler_g_PlayerRef;
        }
      }
    }
    if ( a2a )
    {
      if ( Actor_IsPlayer((TESObjectREFR *)a2) )
      {
        if ( !sub_5F2820((Actor *)TESDataHandler_g_PlayerRef, DistanceBetween, 1, (TESObjectREFR *)a2a, 1, 0, 0) )
          return 0;
      }
    }
    return a2a;
  }
}
