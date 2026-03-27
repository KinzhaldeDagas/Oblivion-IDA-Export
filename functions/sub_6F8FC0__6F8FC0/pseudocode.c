signed int __usercall sub_6F8FC0@<eax>(int a1@<edi>, _DWORD *a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  if ( a2 )
  {
    if ( !*a2 )
    {
      v2 = (_DWORD *)FormHeapAlloc(8u);
      if ( v2 )
        v3 = sub_6F8DF0(v2, a1, 0);
      else
        v3 = 0;
      *a2 = v3;
    }
  }
  return 2;
}
