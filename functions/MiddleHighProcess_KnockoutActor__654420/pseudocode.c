void __thiscall MiddleHighProcess_KnockoutActor(
        MiddleHighProcess *this,
        Actor *a2,
        float a3,
        float a4,
        float a5,
        float a6)
{
  bhkCharacterProxy *CharProxy; // esi
  double v8; // st7
  void (__thiscall *Unk_08)(BaseProcess *__hidden); // eax
  NiNode *PlayerNode; // esi
  double v11; // rt1
  float v12; // [esp+20h] [ebp-3Ch]
  float v13; // [esp+20h] [ebp-3Ch]
  int v14; // [esp+24h] [ebp-38h] BYREF
  float v15; // [esp+28h] [ebp-34h]
  float v16; // [esp+2Ch] [ebp-30h]
  float v17[3]; // [esp+30h] [ebp-2Ch] BYREF
  __m128 v18; // [esp+3Ch] [ebp-20h] BYREF
  int savedregs; // [esp+5Ch] [ebp+0h] BYREF

  if ( !this->knockedState && !a2->vtbl->super.super.IsDead((TESObjectREFR *)a2, 0) )
  {
    if ( ((unsigned __int8 (__thiscall *)(Actor *))a2->vtbl->Unk_9E)(a2) )
    {
      if ( ((int (__thiscall *)(MiddleHighProcess *))this->GetSitSleepState)(this) )
      {
        if ( a2->vtbl->GetMountedHorse(a2) )
          sub_5F0410((TESObjectREFR *)a2, (int)&savedregs);
        else
          sub_5E4140((TESObjectREFR *)a2);
      }
      Unk_08 = this->Unk_08;
      this->knockedState = 2;
      Unk_08(this);
      if ( a2 == (Actor *)TESDataHandler_g_PlayerRef )
        PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0);
      else
        PlayerNode = (NiNode *)a2->members.super.super.niNode;
      sub_88D070(PlayerNode, 1, 1, 0);
      NiAVObject_UpdateNiAVObject((NiAVObject *)PlayerNode, 0.0, 0);
      v11 = hkFactor;
      v18.m128_f32[0] = a3 * v11;
      v18.m128_f32[1] = a4 * v11;
      v18.m128_f32[2] = v11 * a5;
      sub_5364B0((int)PlayerNode, &v18, a6);
    }
    else
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)a2);
      sub_5E1500((__m128 *)CharProxy, v17);
      *(float *)&v14 = v17[0] - a3;
      v15 = v17[1] - a4;
      v16 = 0.0;
      sub_43F350((float *)&v14);
      v8 = a6 / flt_B37E98;
      v12 = flt_B37EB8 * v8;
      *(float *)&v14 = *(float *)&v14 * v12;
      v15 = v15 * v12;
      v16 = v12 * v16;
      v13 = v8 * flt_B37EC0;
      sub_8907A0((__m128 *)CharProxy, (int)&v14, v13);
    }
  }
}
