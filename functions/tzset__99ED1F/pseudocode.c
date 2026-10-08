void __usercall __tzset(int a1@<edi>)
{
  if ( !dword_BA9E10[0x299] ) /*0x99ed33*/
  {
    _lock(6); /*0x99ed37*/
    if ( !dword_BA9E10[0x299] ) /*0x99ed46*/
    {
      _tzset_nolock(a1, 0); /*0x99ed48*/
      ++dword_BA9E10[0x299]; /*0x99ed4d*/
    }
    _unlock(6); /*0x99ed67*/
  }
  __tzset_::_LN10_10(); /*0x99ed33*/
}
