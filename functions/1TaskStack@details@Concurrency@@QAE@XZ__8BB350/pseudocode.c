void __thiscall Concurrency::details::TaskStack::~TaskStack(FILE **this)
{
  if ( *(this + 2) ) /*0x8bb350*/
    fflush(*(this + 2)); /*0x8bb358*/
}
