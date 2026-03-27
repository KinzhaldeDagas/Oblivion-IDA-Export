signed int __usercall sub_948550@<eax>(_DWORD *a1@<edi>)
{
  int v1; // esi
  int i; // ebx

  v1 = 0;
  for ( i = 4; v1 < a1[1]; ++v1 )
    i += sub_948BC0(*(_DWORD *)(*a1 + 4 * v1));
  return i;
}
