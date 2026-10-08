void __userpurge sub_606B50(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, Actor *a5)
{
  _DWORD *v6; // esi
  int v7; // [esp+0h] [ebp-4h]

  BSSimpleList_Remove(*(int **)(a1 + 0x3C), a4); /*0x606b5b*/
  v6 = *(_DWORD **)(a1 + 0x3C); /*0x606b60*/
  if ( !v6[1] && !*v6 ) /*0x606b69*/
    sub_5EAE70(a5, a2, a3, v7); /*0x606b72*/
}
