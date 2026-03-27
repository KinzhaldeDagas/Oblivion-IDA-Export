char __cdecl sub_693210(TESObjectREFR *a1, char a2)
{
  LONG LifeDetectedShader; // edi
  float *v3; // eax
  float *v4; // eax
  float *v5; // eax
  volatile LONG *v6; // esi
  float v8; // [esp+18h] [ebp-28h]
  float v9; // [esp+18h] [ebp-28h]
  float v10; // [esp+18h] [ebp-28h]
  float v11; // [esp+1Ch] [ebp-24h]
  float v12; // [esp+20h] [ebp-20h]
  float v13; // [esp+24h] [ebp-1Ch]
  float v14; // [esp+24h] [ebp-1Ch]
  float v15; // [esp+28h] [ebp-18h]
  float v16; // [esp+2Ch] [ebp-14h]
  float v17; // [esp+30h] [ebp-10h]

  LifeDetectedShader = Magic_GetLifeDetectedShader();
  if ( !LifeDetectedShader || !a1 || a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef || !a1[1].vtbl )
    return 0;
  v8 = (float)TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                (Actor *)TESDataHandler_g_PlayerRef,
                kActorVal_DetectLifeRange);
  v9 = fMagicUnitsPerFoot * v8;
  v10 = v9 * v9;
  v3 = (float *)((int (*)(void))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos)();
  v16 = v3[1];
  v15 = *v3;
  v17 = v3[2];
  v4 = a1->vtbl->GetPos(a1);
  v12 = v15 - *v4;
  v11 = v16 - v4[1];
  v13 = v17 - v4[2];
  v14 = v11 * v11 + v12 * v12 + v13 * v13;
  if ( v14 >= (double)v10
    || a1->vtbl->IsDead(a1, 0)
    || (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 2))(a1[1].vtbl)
    || (a1->member.super.flags & 0x2000) != 0 )
  {
    if ( a2 )
      sub_678E70((int *)&ActorProcessManager_ptr, (int)a1, LifeDetectedShader);
    return 0;
  }
  if ( !a2 )
  {
    v5 = (float *)FormHeapAlloc(0x4Cu);
    if ( v5 )
      v6 = (volatile LONG *)MagicShaderHitEffect_constr_args2(v5, (int)a1, LifeDetectedShader, flt_A30634);
    else
      v6 = 0;
    if ( (*(unsigned __int8 (__thiscall **)(volatile LONG *))(*v6 + 0x68))(v6) )
    {
      sub_678D30((int *)&ActorProcessManager_ptr, v6);
      return 1;
    }
    (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
  }
  return 1;
}
