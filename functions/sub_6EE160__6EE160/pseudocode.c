FaceGenMatrix *__cdecl sub_6EE160(FaceGenMatrix *a1, FaceGenMatrix *a2, FaceGenMatrix *a3)
{
  sub_6EDB80(a1, a2, a3); /*0x6ee18e*/
  return (FaceGenMatrix *)((char *)a3 + 0x34 * (((char *)a2 - (char *)a1) / 0x34)); /*0x6ee1ae*/
}
