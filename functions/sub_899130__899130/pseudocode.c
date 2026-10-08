int __usercall sub_899130@<eax>(_DWORD *a1@<edi>, const void **a2)
{
  int result; // eax
  _DWORD *v3; // esi
  int i; // ebx
  int v5; // eax
  int j; // esi

  result = a1[0x2F]; /*0x899130*/
  v3 = (_DWORD *)a1[0x55]; /*0x89913d*/
  if ( v3 ) /*0x899145*/
  {
    for ( i = 0; i < result; ++i ) /*0x89914b*/
    {
      v5 = *(_DWORD *)(a1[0x2E] + 4 * i); /*0x899156*/
      if ( v5 != v3[5] && v5 != v3[6] && v5 != v3[7] && v5 != v3[8] && v5 != v3[9] && v5 != v3[0xA] ) /*0x899175*/
        sub_8DA0C0(a2, *(_WORD **)(a1[0x2E] + 4 * i)); /*0x89917a*/
      result = a1[0x2F]; /*0x89917f*/
    }
  }
  else
  {
    for ( j = 0; j < result; ++j ) /*0x899192*/
    {
      sub_8DA0C0(a2, *(_WORD **)(a1[0x2E] + 4 * j)); /*0x8991a0*/
      result = a1[0x2F]; /*0x8991a5*/
    }
  }
  return result; /*0x89918a*/
}
