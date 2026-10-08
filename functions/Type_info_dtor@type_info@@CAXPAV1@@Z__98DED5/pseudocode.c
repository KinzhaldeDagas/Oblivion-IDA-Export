void __cdecl type_info::_Type_info_dtor(struct type_info *a1)
{
  int v1; // ecx
  void *v2; // eax
  _DWORD *v3; // edx

  _lock(0xE); /*0x98dee3*/
  v1 = *((_DWORD *)a1 + 1); /*0x98def0*/
  if ( v1 ) /*0x98def5*/
  {
    v2 = (void *)dword_BA9E10[0x1FA]; /*0x98def7*/
    v3 = &dword_BA9E10[0x1F9]; /*0x98defc*/
    while ( dword_BA9E10[0x1FA] ) /*0x98df06*/
    {
      if ( *(_DWORD *)dword_BA9E10[0x1FA] == v1 ) /*0x98df0a*/
      {
        v3[1] = *(_DWORD *)(dword_BA9E10[0x1FA] + 4); /*0x98df0f*/
        free(v2); /*0x98df13*/
        break; /*0x98df13*/
      }
      v3 = (_DWORD *)dword_BA9E10[0x1FA]; /*0x98df38*/
    }
    free(*((void **)a1 + 1)); /*0x98df19*/
    *((_DWORD *)a1 + 1) = 0; /*0x98df22*/
  }
  _unlock(0xE); /*0x98df3e*/
}
