_DWORD *__usercall _copytlocinfo_nolock@<eax>(_DWORD *result@<eax>, _DWORD *a2@<ecx>)
{
  if ( a2 )
  {
    if ( result )
    {
      if ( result != a2 )
      {
        qmemcpy(result, a2, 0xD8u);
        *result = 0;
        return (_DWORD *)__addlocaleref(result);
      }
    }
  }
  return result;
}
