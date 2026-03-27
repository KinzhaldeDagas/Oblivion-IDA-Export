int __usercall _whiteout@<eax>(int a1@<ecx>, _DWORD *a2@<esi>, FILE *a3)
{
  int v3; // ebx
  int v4; // eax
  int v6; // [esp-4h] [ebp-8h]

  do
  {
    ++*a2;
    v3 = _inc(a1, a3);
    if ( v3 == 0xFFFFFFFF )
      break;
    v4 = isspace((unsigned __int8)v3);
    a1 = v6;
  }
  while ( v4 );
  return v3;
}
