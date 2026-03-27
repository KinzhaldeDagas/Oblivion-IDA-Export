DWORD __thiscall sub_747800(HANDLE *this)
{
  DWORD result; // eax

  if ( !*(this + 9) )
    return 0xFFFFFFFF;
  result = SuspendThread(*(this + 9));
  if ( result != 0xFFFFFFFF )
    *(this + 7) = HANDLE_FLAG_INHERIT;
  return result;
}
