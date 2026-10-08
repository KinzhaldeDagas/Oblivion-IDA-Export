HANDLE *__thiscall sub_430EA0(HANDLE *this, char a2)
{
  void *v4; // [esp-4h] [ebp-Ch]

  v4 = *(this + 1); /*0x430ea7*/
  *this = &BSTaskThread::`vftable'; /*0x430ea8*/
  SuspendThread(v4); /*0x430eae*/
  CloseHandle(*(this + 1)); /*0x430ebe*/
  CloseHandle(*(this + 8)); /*0x430ec4*/
  CloseHandle(*(this + 5)); /*0x430eca*/
  if ( (a2 & 1) != 0 ) /*0x430ed1*/
    FormHeapFree((unsigned int)this); /*0x430ed4*/
  return this; /*0x430edc*/
}
