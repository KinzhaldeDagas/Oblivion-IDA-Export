// HighProcess dialogue-procedure update. Turns awake participants toward each other, counts down response timing, waits for the current sound handle, invokes DialoguePackage::Speak(true), and cleans the shared dynamic package after procedureCompleted becomes true.
void __thiscall HighProcess::UpdateDialogueProcedure(HighProcess *this, Actor *owner)
{
  DialoguePackageRuntimeView *dialoguePackage; // ebx
  Actor *target; // esi
  Actor *v4; // eax
  Actor *speaker; // edi
  float *v6; // ebp
  float *v7; // eax
  float *v8; // ebp
  float *v9; // eax
  UInt32 *soundHandle; // ecx
  TESPackage *sharedPackage; // ebp
  bool participantsSharePackage; // bl
  LowProcess *process; // ecx
  LowProcess *v14; // esi
  UInt32 *activeSoundHandle; // ecx
  int v16; // [esp+18h] [ebp-24h]
  float v17; // [esp+18h] [ebp-24h]
  float v18; // [esp+18h] [ebp-24h]
  float v19; // [esp+1Ch] [ebp-20h]
  float v20; // [esp+1Ch] [ebp-20h]
  float v21; // [esp+1Ch] [ebp-20h]
  int v23; // [esp+24h] [ebp-18h] BYREF
  float v24; // [esp+28h] [ebp-14h]
  int v25; // [esp+2Ch] [ebp-10h] BYREF
  float v26; // [esp+30h] [ebp-Ch] BYREF
  float v27; // [esp+34h] [ebp-8h]
  int v28; // [esp+38h] [ebp-4h]

  dialoguePackage = (DialoguePackageRuntimeView *)((int (__fastcall *)(HighProcess *))this->GetCurrentPackage)(this); /*0x62f4f4*/
  target = DialoguePackage::GetTarget(dialoguePackage); /*0x62f4ff*/
  v4 = DialoguePackage::GetSpeaker(dialoguePackage); /*0x62f501*/
  speaker = v4; /*0x62f50a*/
  if ( target && v4 ) /*0x62f514*/
  {
    if ( target->vtbl->super.super.GetSleepState((TESObjectREFR *)target) == kSitSleep_None && target != owner ) /*0x62f533*/
    {
      v6 = target->vtbl->super.super.GetPos((TESObjectREFR *)target); /*0x62f545*/
      v7 = speaker->vtbl->super.super.GetPos((TESObjectREFR *)speaker); /*0x62f551*/
      v19 = v7[1] - v6[1]; /*0x62f559*/
      *(float *)&v16 = v7[2] - v6[2]; /*0x62f563*/
      v26 = *v7 - *v6; /*0x62f571*/
      v27 = v19; /*0x62f579*/
      v28 = v16; /*0x62f581*/
      v20 = Vector3_CalculateHeadingRadiansXY(&v26); /*0x62f58a*/
      *(float *)&v23 = 0.0; /*0x62f598*/
      sub_683D80((int)speaker, v20, (float *)&v23); /*0x62f5a5*/
      v24 = v20; /*0x62f5aa*/
      v17 = (double)MEMORY[0xB36C10] * dbl_A31C78; /*0x62f5bf*/
      if ( sub_5E0590(speaker) ) /*0x62f5c3*/
        v17 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x62f5d8*/
      v24 = fabs(v24); /*0x62f5e2*/
      if ( v17 >= (double)v24 ) /*0x62f5f5*/
        sub_5E05F0(target, 0x30); /*0x62f610*/
      else
        sub_685530(target, v20, 1); /*0x62f602*/
    }
    if ( speaker->vtbl->super.super.GetSleepState((TESObjectREFR *)speaker) == kSitSleep_None && speaker != target ) /*0x62f62b*/
    {
      v8 = speaker->vtbl->super.super.GetPos((TESObjectREFR *)speaker); /*0x62f63f*/
      v9 = target->vtbl->super.super.GetPos((TESObjectREFR *)target); /*0x62f649*/
      v24 = v9[1] - v8[1]; /*0x62f656*/
      *(float *)&v23 = v9[2] - v8[2]; /*0x62f660*/
      v26 = *v9 - *v8; /*0x62f669*/
      v27 = v24; /*0x62f671*/
      v28 = v23; /*0x62f679*/
      v18 = Vector3_CalculateHeadingRadiansXY(&v26); /*0x62f682*/
      *(float *)&v25 = 0.0; /*0x62f690*/
      sub_683D80((int)target, v18, (float *)&v25); /*0x62f69d*/
      v24 = v18; /*0x62f6a2*/
      v21 = (double)MEMORY[0xB36C10] * dbl_A31C78; /*0x62f6b7*/
      if ( sub_5E0590(target) ) /*0x62f6bb*/
        v21 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x62f6d0*/
      v24 = fabs(v24); /*0x62f6da*/
      if ( v21 >= (double)v24 ) /*0x62f6ed*/
        sub_5E05F0(speaker, 0x30); /*0x62f708*/
      else
        sub_685530(speaker, v18, 1); /*0x62f6fa*/
    }
    if ( dialoguePackage->responseTimeRemaining <= 0.0 )// High-detail playback is gated by responseTimeRemaining. While positive it is reduced by the frame delta; at zero the sound/procedure state decides whether to speak, wait, or clean up. /*0x62f717*/
    {                                           // If procedure is not complete, wait while dialogue sound is playing and call Speak(true) only when no live sound handle remains. If procedure is complete and sound is no longer playing, enter package cleanup.
      if ( !this->Unk_2F(this) /*0x62f74c*/
        || (soundHandle = (UInt32 *)dialoguePackage->activeSoundHandle) != 0 && SoundHandle::IsPlaying(soundHandle) )
      {
        activeSoundHandle = (UInt32 *)dialoguePackage->activeSoundHandle; /*0x62f7c8*/
        if ( !activeSoundHandle || !SoundHandle::IsPlaying(activeSoundHandle) ) /*0x62f7cf*/
          DialoguePackage::Speak(dialoguePackage, 1);// HighProcess audible advance: starts the selected DialogueResponse, or advances/commits an exhausted item, with startSpeech=true. /*0x62f7e0*/
      }
      else
      {
        sharedPackage = Actor::GetCurrentPackage(speaker); /*0x62f760*/
        participantsSharePackage = Actor::GetCurrentPackage(target) == sharedPackage; /*0x62f76b*/
        owner->vtbl->CleanupCurrentPackage(owner);// Completed high-detail conversation: Character::CleanupCurrentPackage restores participant package state and destroys the shared dynamic DialoguePackage/Conversation. /*0x62f77c*/
        sub_5E05F0(target, 0x30); /*0x62f782*/
        if ( participantsSharePackage ) /*0x62f789*/
        {
          if ( speaker != owner ) /*0x62f78d*/
            target = speaker; /*0x62f78f*/
          process = target->members.super.process; /*0x62f791*/
          if ( process ) /*0x62f796*/
          {
            if ( !process->GetProcessLevel(process) ) /*0x62f79d*/
            {
              v14 = target->members.super.process; /*0x62f7a3*/
              if ( v14 ) /*0x62f7a8*/
                v14[2].unk08C = 0.0; /*0x62f7ac*/
            }
          }
        }
        this->unk1AC = 0.0; /*0x62f7b9*/
      }
    }
    else
    {
      dialoguePackage->responseTimeRemaining = dialoguePackage->responseTimeRemaining - *(float *)&MEMORY[0xB33E90][0xC]; /*0x62f722*/
    }
  }
  else
  {
    owner->members.super.process->editorPackage = 0; /*0x62f7f7*/
    owner->members.super.process->editorPackProcedure = kProcedure_TRAVEL; /*0x62f7fe*/
  }
}
