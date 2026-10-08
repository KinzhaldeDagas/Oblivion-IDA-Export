MagicTarget *__thiscall MagicTarget_constr(MagicTarget *this)
{
  this->vtbl = (MagicTargetVtbl *)&MagicTarget::`vftable'; /*0x6a1d52*/
  this->unk04 = 0;                              // Verified MagicTarget constructor initializes one byte at subobject +0x04 to zero. The remaining three bytes in this 8-byte subobject are not initialized here; field semantics remain Unknown. /*0x6a1d58*/
  return this; /*0x6a1d5c*/
}
