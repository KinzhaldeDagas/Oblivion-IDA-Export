void __userpurge sub_88D1D0(int *a1@<ecx>, int a2@<ebp>, char a3)
{
  int v4; // eax

  v4 = a1[7];
  if ( v4 )
  {
    a1[7] = v4 - 1;
    if ( v4 == 1 )
    {
      if ( a3 )
        sub_889F20(a1, 0);
      else
        sub_889E20(a1);
      sub_88AD90(a1);
      sub_88A080((unsigned int *)a1);
      sub_88A120(a1, a2);
    }
  }
  else if ( a1[0xB] )
  {
    if ( !a3 )
      sub_889E20(a1);
  }
}
