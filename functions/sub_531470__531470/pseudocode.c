// Runs the selected INFO result on the speaker. Unless InfoRefusal (0x10), commits SayOnce state globally on the TESTopicInfo itself (spoken=1) and marks that form modified with 0x10000000; this state is not per actor.
void __thiscall TESTopicInfo::RunResult(OblivionTopicInfo *this, TESObjectREFR *speaker)
{
  double v2; // st6
  double v3; // st7
  Script *ResultScript; // esi
  char **ExtraScriptEventList; // eax
  void (__thiscall *MarkAsModified)(TESForm *, UInt32); // eax

  if ( speaker ) /*0x53147a*/
  {
    ResultScript = (Script *)TESTopicInfo::GetResultScript(this); /*0x531482*/
    if ( sub_4F9FA0() ) /*0x531484*/
    {
      if ( ResultScript ) /*0x53148f*/
      {
        if ( ResultScript->info.dataLength ) /*0x531491*/
        {
          ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(&speaker->member.baseExtraList); /*0x53149e*/
          Script_Run(ResultScript, v3, v2, speaker, ExtraScriptEventList, 0, 1); /*0x5314a7*/
        }
      }
    }
    if ( (this->flags & 0x10) == 0 )            // InfoRefusal marks a noncommitting refusal response: its result script may run, but TESTopicInfo.spoken is not set. This also lets an authored low-disposition fallback INFO serve as its own refusal instead of being replaced by stock FormID 118. /*0x5314b6*/
    {
      MarkAsModified = this->super.vtbl->MarkAsModified; /*0x5314ba*/
      this->spoken = 1;                         // RunResult commits spoken before MarkAsModified. This occurs at the caller's commit point, not when selection succeeds or audio merely begins. /*0x5314c4*/
      MarkAsModified(&this->super, 0x10000000); // Virtual MarkAsModified(kTopicInfoModified_Spoken). The change-mask bit is sufficient to save/reload spoken=true; the generic modified saver writes no payload for this high bit. /*0x5314c8*/
    }
  }
}
