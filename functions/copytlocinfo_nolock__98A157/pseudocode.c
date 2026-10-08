_DWORD *__usercall _copytlocinfo_nolock@<eax>(_DWORD *result@<eax>, _DWORD *a2@<ecx>)
{
  if ( a2 ) /*0x98a15c*/
  {
    if ( result ) /*0x98a160*/
    {
      if ( result != a2 ) /*0x98a164*/
      {
        qmemcpy(result, a2, 0xD8u); /*0x98a16c*/
        *result = 0; /*0x98a16e*/
        return (_DWORD *)__addlocaleref(result); /*0x98a172*/
      }
    }
  }
  return result; /*0x98a179*/
}
