void __thiscall sub_63CFB0(_DWORD *this, TESObjectREFR *a2)
{
  bool v6; // bl
  double v7; // st7
  double v8; // st6
  double v9; // st7
  ActorAnimData *v10; // edi
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  BSAnimGroupSequence *v12; // ebp
  float deltaTime; // [esp+0h] [ebp-20h]
  float explicitTimeOrMinusOne; // [esp+4h] [ebp-1Ch]
  float v15; // [esp+18h] [ebp-8h]
  float a2a; // [esp+24h] [ebp+4h]
  float a2b; // [esp+24h] [ebp+4h]

  v6 = sub_88D150((NiObjectNET *)a2->member.niNode, 1, 0); /*0x63cfc9*/
  if ( v6 ) /*0x63cfd0*/
  {
    v15 = ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*this + 0x28))(this); /*0x63cfdb*/
    a2a = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x63cfe9*/
    v7 = a2a; /*0x63cfed*/
    v8 = v15; /*0x63cff1*/
    if ( v15 <= (double)a2a ) /*0x63cffc*/
      v9 = v7 - v8; /*0x63d008*/
    else
      v9 = v8 + dbl_A492B8 - v7; /*0x63d004*/
    a2b = v9; /*0x63d00a*/
    v6 = TimeGlobals_GetTimeScale(&MEMORY[0xB332E0]) * dbl_A59B38 > a2b; /*0x63d02f*/
  }
  v10 = (ActorAnimData *)this[0x5F]; /*0x63d037*/
  if ( v10 ) /*0x63d03f*/
  {
    NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v10, 0); /*0x63d046*/
    v12 = NormalizedSequenceSlot; /*0x63d04b*/
    if ( NormalizedSequenceSlot ) /*0x63d04f*/
    {
      if ( TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)NormalizedSequenceSlot + 0x1A)) == 0x20 ) /*0x63d05c*/
      {
        explicitTimeOrMinusOne = kTerrainLODQuadRayDirectionZ; /*0x63d065*/
        deltaTime = BSAnimGroupSequence_GetDuration(v12); /*0x63d06e*/
        ActorAnimData_Update(v10, (Actor *)a2, deltaTime, explicitTimeOrMinusOne); /*0x63d074*/
        ActorAnimData_ApplyToActor(v10, a2); /*0x63d07c*/
      }
    }
  }
  if ( !v6 ) /*0x63d084*/
  {
    sub_5E9E70(a2); /*0x63d088*/
    a2->vtbl->Unk_51(a2); /*0x63d097*/
    ((void (__thiscall *)(TESObjectREFR *, int))a2->vtbl->super.Unk_27)(a2, 1); /*0x63d0a5*/
    sub_4DC550(a2); /*0x63d0a9*/
    sub_424870(&a2->member.baseExtraList, (int)a2); /*0x63d0b2*/
  }
}
