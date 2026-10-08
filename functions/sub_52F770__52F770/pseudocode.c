// OFE RC1 verification (2026-10-02): GetMatchingInfo is a direct thiscall wrapper around SelectInfoForSpeaker(topic, lowDispositionFailure, speaker, target, false, nullptr, nullptr). No extra role/category filtering occurs in this wrapper; the OFE player Greeting/Rumors probe uses that same selector signature and arguments.
OblivionTopicInfo *__thiscall TESTopic::GetMatchingInfo(
        TESTopic *this,
        bool *lowDispositionFailure,
        Actor *speaker,
        TESObjectREFR *target)
{
  return TESTopic::SelectInfoForSpeaker(this, lowDispositionFailure, speaker, target, 0, 0, 0); /*0x52f78a*/
}
