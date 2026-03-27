QueuedTreeBillboard *__thiscall QueuedTreeBillboard::`scalar deleting destructor'(QueuedTreeBillboard *this, char a2)
{
  QueuedTreeBillboard::~QueuedTreeBillboard(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
