void __userpurge sub_52A4CB(_DWORD *a1@<ebx>, int a2@<edi>, int a3@<ebp>, int a4, int a5, int a6, int a7)
{
  _DWORD *v7; // edi

  v7 = *(_DWORD **)(a2 + 4); /*0x52a4cb*/
  if ( v7 == a1 ) /*0x52a4d0*/
    sub_52A4D6((int)a1, a3, a7, a4); /*0x52a4d3*/
  else
    sub_52A4A7(a1, v7, a4); /*0x52a4d0*/
}
