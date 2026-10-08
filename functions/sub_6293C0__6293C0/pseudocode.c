// Shared HighProcess/MiddleHighProcess vtable +0x138 Boolean getter for process byte +0xF4. Constructor initializes the byte to zero at 0x64B4C8. Its semantic meaning is not yet proven; the structural name avoids inventing one. PlayerCharacter_ProcessAttackControl uses it to choose the bow Hold/Release control path.
bool __thiscall HighProcess_GetFlagF4(HighProcess *this)
{
  return this->unk0F4; /*0x6293c6*/
}
