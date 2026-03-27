int __userpurge sub_52A496@<eax>(int a1@<ebx>, _DWORD *a2@<ebp>, int a3)
{
  int v3; // eax

  v3 = *a2;
  if ( *a2 == a1 )
    return sub_52A4D6(a3);
  *(_BYTE *)(v3 + 1) = a1;
  if ( v3 + 4 == a1 )
    return sub_52A4D6(a3);
  else
    return sub_52A4A7(a1, (int *)(v3 + 4), a3);
}
