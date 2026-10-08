int __usercall sub_899030@<eax>(const void **a1@<ebx>, _DWORD *a2@<esi>)
{
  int *v2; // edi
  int *v3; // edi
  int result; // eax

  v2 = (int *)a2[0xE]; /*0x899034*/
  if ( v2 != &v2[a2[0xF]] ) /*0x89903c*/
  {
    do /*0x89905a*/
      sub_898FE0(*v2++, a1); /*0x899044*/
    while ( v2 != (int *)(a2[0xE] + 4 * a2[0xF]) ); /*0x89905a*/
  }
  v3 = (int *)a2[0x11]; /*0x89905c*/
  result = a2[0x12]; /*0x89905f*/
  if ( v3 != &v3[result] ) /*0x899067*/
  {
    do /*0x89908a*/
    {
      sub_898FE0(*v3, a1); /*0x899074*/
      result = a2[0x12]; /*0x899079*/
      ++v3; /*0x89907f*/
    }
    while ( v3 != (int *)(a2[0x11] + 4 * result) ); /*0x89908a*/
  }
  return result; /*0x89908c*/
}
