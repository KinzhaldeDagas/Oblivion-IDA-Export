int __userpurge sub_52A4CB@<eax>(_DWORD *a1@<ebx>, int a2@<edi>, int a3)
{
  _DWORD *v3; // edi

  v3 = *(_DWORD **)(a2 + 4);
  if ( v3 == a1 )
    return sub_52A4D6(a3);
  else
    return sub_52A4A7(a1, v3, a3);
}
