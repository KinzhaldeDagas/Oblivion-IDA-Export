// Constructs the dynamic 0x64-byte DialoguePackage and takes ownership of the prepared Conversation. Runtime fields at +0x50/+0x54/+0x58 are the conversation/item/response cursors.
DialoguePackageRuntimeView *__thiscall DialoguePackage::DialoguePackage(
        DialoguePackageRuntimeView *this,
        ConversationView *conversation,
        Actor *speaker,
        Actor *target)
{
  TESObjectREFR *v5; // eax
  float conversationa; // [esp+24h] [ebp+4h]

  TESPackage::TESPackage(&this->super); /*0x625daa*/
  this->super.__vftable = (TESPackageVtbl *)&DialoguePackage::`vftable'; /*0x625dbb*/
  this->conversation = conversation; /*0x625dc1*/
  if ( conversation ) /*0x625dc4*/
    Conversation::FirstItem(conversation); /*0x625dc6*/
  this->responseTimeRemaining = 0.0;            // New DialoguePackage begins with responseTimeRemaining=0. A package that is already MiddleHigh therefore advances through Speak(false) at update cadence rather than receiving text-duration delays. /*0x625dd5*/
  this->target = target; /*0x625dd8*/
  this->currentItem = 0; /*0x625ddb*/
  this->currentResponse = 0; /*0x625dde*/
  this->speaker = speaker; /*0x625de1*/
  speaker->vtbl->super.super.SetProcedureCompleted((TESObjectREFR *)speaker, 0);// New DialoguePackage marks the initiating speaker's current procedure incomplete before playback begins. /*0x625def*/
  this->activeSoundHandle = 0;                  // Initialize DialoguePackage.activeSoundHandle to null. Actor::InitDialogue later returns the allocated engine sound-handle object through this field. /*0x625df1*/
  this->startingTopic = 0; /*0x625df4*/
  this->activeSpeaker = 0; /*0x625df7*/
  conversationa = TesObjectREF_GetDistance((TESObjectREFR *)speaker, (TESObjectREFR *)reference, 0); /*0x625e09*/
  if ( conversationa < dbl_A6E6F8 ) /*0x625e1c*/
  {
    v5 = (TESObjectREFR *)reference; /*0x625e1e*/
    if ( !reference->dialoguePackage ) /*0x625e29*/
    {
LABEL_7:
      v5[3].member.super.modlist.data = (Data *)this; /*0x625e4d*/
      goto LABEL_8; /*0x625e4d*/
    }
    if ( conversationa < TesObjectREF_GetDistance( /*0x625e46*/
                           (TESObjectREFR *)*(_DWORD *)&v5[3].member.super.modlist.data->name[0x44],
                           v5,
                           0) )
    {
      v5 = (TESObjectREFR *)reference; /*0x625e48*/
      goto LABEL_7; /*0x625e48*/
    }
  }
LABEL_8:
  this->waitingForLip = 0; /*0x625e53*/
  return this; /*0x625e58*/
}
