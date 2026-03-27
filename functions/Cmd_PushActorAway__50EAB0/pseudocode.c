int __cdecl Cmd_PushActorAway(
        ParamInfo *a1,
        void *a2,
        TESObjectREFR *a4,
        UInt32 argC,
        void *a5,
        void *l,
        double *a7,
        UInt32 *a3)
{
  int result; // eax
  Actor *v9; // esi
  int v10; // eax
  #239 *process; // ebx
  void (__thiscall **v12)(#239 *, Actor *, float, float, float, float); // edi
  float *v13; // eax
  int v14; // [esp+0h] [ebp-28h]
  float v15; // [esp+4h] [ebp-24h]
  int v16; // [esp+8h] [ebp-20h]
  TESObjectREFR *v17; // [esp+1Ch] [ebp-Ch] BYREF
  int v18; // [esp+20h] [ebp-8h] BYREF
  float v19; // [esp+24h] [ebp-4h]

  v17 = 0;
  v18 = 0;
  LOBYTE(result) = Script_ExtractArgs(
                     a1,
                     a2,
                     a3,
                     a4,
                     (TESObjectREFR *)argC,
                     (Script *)a5,
                     (ScriptEventList *)l,
                     &v17,
                     &v18);
  if ( (_BYTE)result )
  {
    result = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl->IsActor)(a4);
    if ( (_BYTE)result )
    {
      if ( v17->vtbl->IsActor(v17) )
      {
        v16 = v18;
        v9 = (Actor *)v17;
        Actor_GetFatigueFraction((Actor *)v17);
        v15 = COERCE_FLOAT(v9->vtbl->GetActorValue(v9, kActorVal_Luck));
        v10 = v9->vtbl->GetActorValue(v9, kActorVal_Agility);
        v19 = Calc_KnockbackFactor(v10, v14, v15, v16);
        process = (#239 *)v9->members.super.process;
        if ( process )
        {
          result = (*(int (__thiscall **)(LowProcess *))(*(_DWORD *)process + 8))(v9->members.super.process);
          if ( !result )
          {
            v12 = (void (__thiscall **)(#239 *, Actor *, float, float, float, float))(*(_DWORD *)process + 0x2F0);
            v13 = a4->vtbl->GetPos(a4);
            (*v12)(process, v9, *v13, v13[1], v13[2], v19);
          }
        }
      }
    }
    LOBYTE(result) = 1;
  }
  return result;
}
