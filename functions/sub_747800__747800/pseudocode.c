DWORD __thiscall sub_747800(HANDLE *this)
{
  DWORD result; // eax

  if ( !*(this + 9) ) /*0x747803*/
    return 0xFFFFFFFF; /*0x74780a*/
  result = SuspendThread(*(this + 9)); /*0x747810*/
  if ( result != 0xFFFFFFFF ) /*0x747819*/
    *(this + 7) = HANDLE_FLAG_INHERIT; /*0x74781b*/
  return result; /*0x74780d*/
}
