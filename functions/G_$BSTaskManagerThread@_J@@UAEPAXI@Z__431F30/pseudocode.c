HANDLE *__thiscall BSTaskManagerThread<__int64>::`scalar deleting destructor'(HANDLE *this, char a2)
{
  BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>(this); /*0x431f33*/
  if ( (a2 & 1) != 0 ) /*0x431f3d*/
    FormHeapFree((unsigned int)this); /*0x431f40*/
  return this; /*0x431f4a*/
}
