// Oblivion std::runtime_error scalar-deleting destructor: performs runtime_error/std::exception teardown and frees this through FormHeap when deleteFlags bit 0 is set.
OB_std_runtime_error_010201A0 *__thiscall OB_std_runtime_error_ScalarDeletingDtor_010201A0(
        OB_std_runtime_error_010201A0 *this,
        unsigned __int8 deleteFlags)
{
  *(_DWORD *)this->exceptionBase = &std::runtime_error::`vftable'; /*0x7893e3*/
  if ( this->message.capacity >= 0x10 ) /*0x7893ed*/
    FormHeapFree((unsigned int)this->message.storage.heapData); /*0x7893f3*/
  this->message.capacity = 0xF; /*0x7893fd*/
  this->message.size = 0; /*0x789404*/
  this->message.storage.inlineData[0] = 0; /*0x789409*/
  std::exception::~exception((std::exception *)this); /*0x78940c*/
  if ( (deleteFlags & 1) != 0 ) /*0x789416*/
    FormHeapFree((unsigned int)this); /*0x789419*/
  return this; /*0x789423*/
}
