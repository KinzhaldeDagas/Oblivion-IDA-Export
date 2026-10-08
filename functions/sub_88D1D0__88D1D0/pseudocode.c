void __userpurge sub_88D1D0(int *a1@<ecx>, int a2@<ebp>, char a3)
{
  int v4; // eax

  v4 = a1[7]; /*0x88d1d3*/
  if ( v4 ) /*0x88d1d8*/
  {
    a1[7] = v4 - 1; /*0x88d1dd*/
    if ( v4 == 1 ) /*0x88d1e0*/
    {
      if ( a3 ) /*0x88d1e7*/
        sub_889F20(a1, 0); /*0x88d1eb*/
      else
        sub_889E20(a1); /*0x88d1f2*/
      sub_88AD90(a1); /*0x88d1f9*/
      sub_88A080((unsigned int *)a1); /*0x88d200*/
      sub_88A120(a1, a2); /*0x88d207*/
    }
  }
  else if ( a1[0xB] ) /*0x88d210*/
  {
    if ( !a3 ) /*0x88d21b*/
      sub_889E20(a1); /*0x88d21d*/
  }
}
