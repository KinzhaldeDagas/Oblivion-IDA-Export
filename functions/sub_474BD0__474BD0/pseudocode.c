// Convenience wrapper returning the first active BSAnimGroupSequence from ActorAnimData.
BSAnimGroupSequence *__thiscall ActorAnimData_FindFirstActiveAnimGroupSequence(ActorAnimData *this)
{
  return ActorAnimData_FindNextActiveAnimGroupSequence(this, 0); /*0x474bd7*/
}
