// QueuedTreeBillboard scalar deleting destructor.
QueuedTreeBillboard *__thiscall QueuedTreeBillboard::`scalar deleting destructor'(QueuedTreeBillboard *this, char a2)
{
  QueuedTreeBillboard::~QueuedTreeBillboard(this); /*0x439863*/
  if ( (a2 & 1) != 0 ) /*0x43986d*/
    FormHeapFree((unsigned int)this); /*0x439870*/
  return this; /*0x43987a*/
}
