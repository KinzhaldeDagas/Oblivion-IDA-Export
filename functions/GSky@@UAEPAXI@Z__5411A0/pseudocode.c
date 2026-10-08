Sky *__thiscall Sky::`scalar deleting destructor'(Sky *this, char a2)
{
  Sky::~Sky(this); /*0x5411a3*/
  if ( (a2 & 1) != 0 ) /*0x5411ad*/
    FormHeapFree((unsigned int)this); /*0x5411b0*/
  return this; /*0x5411ba*/
}
