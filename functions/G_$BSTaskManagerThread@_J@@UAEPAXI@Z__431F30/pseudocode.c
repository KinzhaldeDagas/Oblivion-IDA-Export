HANDLE *__thiscall BSTaskManagerThread<__int64>::`scalar deleting destructor'(HANDLE *this, char a2)
{
  BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
