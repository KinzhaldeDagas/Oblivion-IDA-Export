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
  int v8; // ebx
  int result; // eax
  Actor *v10; // esi
  int v11; // eax
  #239 *process; // ebx
  void (__thiscall **v13)(#239 *, Actor *, float, float, float, float); // edi
  float *v14; // eax
  int v15; // [esp+0h] [ebp-28h]
  float v16; // [esp+4h] [ebp-24h]
  int v17; // [esp+8h] [ebp-20h]
  TESObjectREFR *v18; // [esp+1Ch] [ebp-Ch] BYREF
  int v19; // [esp+20h] [ebp-8h] BYREF
  float v20; // [esp+24h] [ebp-4h]

  v18 = 0; /*0x50eae6*/
  v19 = 0; /*0x50eaea*/
  LOBYTE(result) = Script_ExtractArgs( /*0x50eaee*/
                     a1,
                     a2,
                     a3,
                     a4,
                     (TESObjectREFR *)argC,
                     (Script *)a5,
                     (ScriptEventList *)l,
                     &v18,
                     &v19);
  if ( (_BYTE)result ) /*0x50eaf8*/
  {
    result = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl->IsActor)(a4); /*0x50eb0d*/
    if ( (_BYTE)result ) /*0x50eb11*/
    {
      if ( v18->vtbl->IsActor(v18) ) /*0x50eb23*/
      {
        v17 = v19; /*0x50eb35*/
        v10 = (Actor *)v18; /*0x50eb36*/
        Actor_GetFatigueFraction((Actor *)v18, v8, 0); /*0x50eb38*/
        v16 = COERCE_FLOAT(v10->vtbl->GetActorValue(v10, kActorVal_Luck)); /*0x50eb4f*/
        v11 = v10->vtbl->GetActorValue(v10, kActorVal_Agility); /*0x50eb5c*/
        v20 = Calc_KnockbackFactor(v11, v15, v16, v17); /*0x50eb64*/
        process = (#239 *)v10->members.super.process; /*0x50eb68*/
        if ( process ) /*0x50eb70*/
        {
          result = (*(int (__thiscall **)(LowProcess *))(*(_DWORD *)process + 8))(v10->members.super.process); /*0x50eb79*/
          if ( !result ) /*0x50eb7d*/
          {
            v13 = (void (__thiscall **)(#239 *, Actor *, float, float, float, float))(*(_DWORD *)process + 0x2F0); /*0x50eb8c*/
            v14 = a4->vtbl->GetPos(a4); /*0x50eb92*/
            (*v13)(process, v10, *v14, v14[1], v14[2], v20); /*0x50ebb6*/
          }
        }
      }
    }
    LOBYTE(result) = 1; /*0x50ebbb*/
  }
  return result; /*0x50eafa*/
}
