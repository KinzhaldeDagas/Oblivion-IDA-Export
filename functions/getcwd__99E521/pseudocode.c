char *__cdecl _getcwd(char *lpBuffer, int NumOfElements)
{
  int v2; // edi
  int v3; // esi
  size_t v5; // [esp-4h] [ebp-30h]
  char *v6; // [esp+10h] [ebp-1Ch]

  _lock(7); /*0x99e52f*/
  LODWORD(v5) = NumOfElements; /*0x99e539*/
  v6 = _getdcwd_nolock(v2, v3, 0, lpBuffer, v5); /*0x99e549*/
  _unlock(7); /*0x99e563*/
  return v6; /*0x99e55b*/
}
