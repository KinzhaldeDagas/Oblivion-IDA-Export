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
  NiNode *NodeByPerspective; // esi
  double v11; // rt1
  float v12; // [esp+20h] [ebp-3Ch]
  float v13; // [esp+20h] [ebp-3Ch]
  int v14; // [esp+24h] [ebp-38h] BYREF
  float v15; // [esp+28h] [ebp-34h]
  float v16; // [esp+2Ch] [ebp-30h]
  float v17[3]; // [esp+30h] [ebp-2Ch] BYREF
  __m128 v18; // [esp+3Ch] [ebp-20h] BYREF
  int savedregs; // [esp+5Ch] [ebp+0h] BYREF

  if ( !this->knockedState && !a2->vtbl->super.super.IsDead((TESObjectREFR *)a2, 0) ) /*0x654454*/
  {
    if ( ((unsigned __int8 (__thiscall *)(Actor *))a2->vtbl->Unk_9E)(a2) ) /*0x654468*/
    {
      if ( ((int (__thiscall *)(MiddleHighProcess *))this->GetSitSleepState)(this) ) /*0x654522*/
      {
        if ( a2->vtbl->GetMountedHorse(a2) ) /*0x654532*/
          sub_5F0410((TESObjectREFR *)a2, (int)&savedregs); /*0x65453a*/
        else
          sub_5E4140((TESObjectREFR *)a2); /*0x654541*/
      }
      Unk_08 = this->Unk_08; /*0x654548*/
      this->knockedState = 2; /*0x65454d*/
      Unk_08(this); /*0x654554*/
      if ( a2 == (Actor *)reference ) /*0x65455e*/
        NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 0); /*0x654567*/
      else
        NodeByPerspective = (NiNode *)a2->members.super.super.niNode; /*0x65456b*/
      sub_88D070(NodeByPerspective, 1, 1, 0); /*0x654575*/
      NiAVObject_UpdateNiAVObject((NiAVObject *)NodeByPerspective, 0.0, 0); /*0x654587*/
      v11 = hkFactor; /*0x65459c*/
      v18.m128_f32[0] = a3 * v11; /*0x65459e*/
      v18.m128_f32[1] = a4 * v11; /*0x6545a7*/
      v18.m128_f32[2] = v11 * a5; /*0x6545ae*/
      sub_5364B0((int)NodeByPerspective, &v18, a6); /*0x6545ba*/
    }
    else
    {
      CharProxy = MobileObject_GetCharProxy((MobileObject *)a2); /*0x654479*/
      sub_5E1500((__m128 *)CharProxy, v17); /*0x654482*/
      *(float *)&v14 = v17[0] - a3; /*0x654492*/
      v15 = v17[1] - a4; /*0x65449d*/
      v16 = 0.0; /*0x6544a3*/
      Vector3_NormalizeInPlace((float *)&v14); /*0x6544a7*/
      v8 = a6 / unk_B37E98; /*0x6544b2*/
      v12 = unk_B37EB8 * v8; /*0x6544c4*/
      *(float *)&v14 = *(float *)&v14 * v12; /*0x6544d6*/
      v15 = v15 * v12; /*0x6544e0*/
      v16 = v12 * v16; /*0x6544e8*/
      v13 = v8 * unk_B37EC0; /*0x6544f2*/
      bhkCharacterController_SetTransientPushVector((__m128 *)CharProxy, (float *)&v14, v13);// Knockout path calls transient push setter; another non-climbing use of +0x2F0/+0x300. /*0x654500*/
    }
  }
}
