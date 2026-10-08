// Oblivion std::runtime_error destructor: destroys the embedded 28-byte SSO message, restores empty SSO state, and invokes std::exception teardown.
void __thiscall OB_std_runtime_error_Dtor_010201A0(OB_std_runtime_error_010201A0 *this)
{
  *(_DWORD *)this->exceptionBase = &std::runtime_error::`vftable'; /*0x7893a3*/
  if ( this->message.capacity >= 0x10 ) /*0x7893ad*/
    FormHeapFree((unsigned int)this->message.storage.heapData); /*0x7893b3*/
  this->message.capacity = 0xF; /*0x7893bd*/
  this->message.size = 0; /*0x7893c4*/
  this->message.storage.inlineData[0] = 0; /*0x7893c7*/
  std::exception::~exception((std::exception *)this); /*0x7893cd*/
}
