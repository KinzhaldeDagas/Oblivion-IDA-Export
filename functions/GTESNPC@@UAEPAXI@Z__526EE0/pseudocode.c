TESNPC *__thiscall TESNPC::`scalar deleting destructor'(TESNPC *this, char a2)
{
  TESNPC::~TESNPC(this); /*0x526ee3*/
  if ( (a2 & 1) != 0 ) /*0x526eed*/
    FormHeapFree((unsigned int)this); /*0x526ef0*/
  return this; /*0x526efa*/
}
