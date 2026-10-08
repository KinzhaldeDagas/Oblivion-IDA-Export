// Clears HighProcess.conversationScanCooldown to 0.0, making the social-scan timer immediately eligible when other procedure gates permit.
void __thiscall HighProcess::ClearConversationScanCooldown(HighProcess *this)
{
  this->conversationScanCooldown = 0.0; /*0x6298b2*/
}
