HANDLE *__thiscall sub_430EA0(HANDLE *this, char a2)
{
  void *v4; // [esp-4h] [ebp-Ch]

  v4 = *(this + 1);
  *this = &BSTaskThread::`vftable';
  SuspendThread(v4);
  CloseHandle(*(this + 1));
  CloseHandle(*(this + 8));
  CloseHandle(*(this + 5));
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
