signed int __usercall sub_948550@<eax>(_DWORD *a1@<edi>)
{
  int v1; // esi
  int i; // ebx

  v1 = 0; /*0x948555*/
  for ( i = 4; v1 < a1[1]; ++v1 ) /*0x94855e*/
    i += sub_948BC0(*(_DWORD *)(*a1 + 4 * v1)); /*0x94856b*/
  return i; /*0x948578*/
}
