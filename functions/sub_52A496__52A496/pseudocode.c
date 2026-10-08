void __userpurge sub_52A496(char *a1@<ebx>, char **a2@<ebp>, int a3@<esi>, int a4)
{
  char *v4; // eax

  v4 = *a2; /*0x52a496*/
  if ( *a2 == a1 || (v4[1] = (char)a1, v4 + 4 == a1) ) /*0x52a4a5*/
    sub_52A4D6((int)a1, (int)a2, a3, a4); /*0x52a49b*/
  else
    sub_52A4A7(a1, (_DWORD *)v4 + 1, a4); /*0x52a4a6*/
}
