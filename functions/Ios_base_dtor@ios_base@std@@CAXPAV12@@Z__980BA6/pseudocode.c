void __cdecl std::ios_base::_Ios_base_dtor(int ***a1)
{
  int *v1; // esi

  if ( !a1[1] || (--byte_BA9BB4[(_DWORD)a1[1]], byte_BA9BB4[(_DWORD)a1[1]] <= 0) ) /*0x980bc4*/
  {
    std::ios_base::_Tidy(a1); /*0x980bc7*/
    v1 = (int *)a1[9]; /*0x980bcc*/
    if ( v1 ) /*0x980bd2*/
    {
      sub_6F6E10(v1); /*0x980bd6*/
      FormHeapFree((unsigned int)v1); /*0x980bdc*/
    }
  }
}
