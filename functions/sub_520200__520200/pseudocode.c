// Returns TESIdleForm ANAM byte at +0x38 masked with 0x7F. This low-seven-bit value is passed as the queued idle slot/type; the high bit is handled separately by native idle selection.
int __thiscall TESIdleForm_GetQueuedAnimType(_BYTE *this)
{
  return *(this + 0x38) & 0x7F; /*0x520207*/
}
