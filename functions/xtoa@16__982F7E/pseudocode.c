char __userpurge xtoa@<al>(unsigned int a1@<eax>, char *a2@<ecx>, unsigned int a3, int a4)
{
  char *v4; // esi
  char v5; // dl
  unsigned int v6; // et2
  char v7; // dl
  char *v8; // ecx
  char result; // al

  if ( a4 ) /*0x982f83*/
  {
    *a2++ = 0x2D; /*0x982f85*/
    a1 = -a1; /*0x982f89*/
  }
  v4 = a2; /*0x982f8c*/
  do /*0x982fa6*/
  {
    v6 = a1 % a3; /*0x982f90*/
    a1 /= a3; /*0x982f90*/
    v5 = v6; /*0x982f90*/
    if ( v6 <= 9 ) /*0x982f97*/
      v7 = v5 + 0x30; /*0x982f9e*/
    else
      v7 = v5 + 0x57; /*0x982f99*/
    *a2++ = v7; /*0x982fa1*/
  }
  while ( a1 ); /*0x982fa6*/
  *a2 = 0; /*0x982fa8*/
  v8 = a2 + 0xFFFFFFFF; /*0x982fab*/
  do /*0x982fb8*/
  {
    result = *v8; /*0x982fae*/
    *v8-- = *v4; /*0x982fb0*/
    *v4++ = result; /*0x982fb3*/
  }
  while ( v4 < v8 ); /*0x982fb8*/
  return result; /*0x982fbb*/
}
