FaceGenMatrix *__cdecl sub_6EDB80(FaceGenMatrix *source, FaceGenMatrix *a2, FaceGenMatrix *a3)
{
  FaceGenMatrix *v3; // esi
  FaceGenMatrix *v4; // edi

  v3 = source; /*0x6edb86*/
  if ( source == a2 ) /*0x6edb8c*/
    return a3; /*0x6edbbb*/
  v4 = a3; /*0x6edb8f*/
  do /*0x6edbb3*/
  {
    FaceGenMatrix_Assign(v4, v3); /*0x6edb96*/
    OB_stString28_AssignSubstring_010201A0( /*0x6edba6*/
      (OB_stString28_010201A0 *)&v4[1],
      (const OB_stString28_010201A0 *)&v3[1],
      0,
      0xFFFFFFFF);
    v3 = (FaceGenMatrix *)((char *)v3 + 0x34); /*0x6edbab*/
    v4 = (FaceGenMatrix *)((char *)v4 + 0x34); /*0x6edbae*/
  }
  while ( v3 != a2 ); /*0x6edbb3*/
  return v4; /*0x6edbb8*/
}
