PathHigh *__thiscall PathHigh::`scalar deleting destructor'(PathHigh *this, char a2)
{
  PathHigh::~PathHigh(this); /*0x686043*/
  if ( (a2 & 1) != 0 ) /*0x68604d*/
    FormHeapFree((unsigned int)this); /*0x686050*/
  return this; /*0x68605a*/
}
