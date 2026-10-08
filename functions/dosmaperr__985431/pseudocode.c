int *__cdecl _dosmaperr(unsigned int a1)
{
  int errno_from_oserr; // esi
  int *result; // eax

  *__doserrno() = a1; /*0x98543c*/
  errno_from_oserr = _get_errno_from_oserr(a1); /*0x985444*/
  result = _errno(); /*0x985446*/
  *result = errno_from_oserr; /*0x98544b*/
  return result; /*0x98544d*/
}
