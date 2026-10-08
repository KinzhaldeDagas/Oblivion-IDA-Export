OB_stString28_010201A0 *__cdecl sub_6EDC90(FaceGenMatrix *a1, FaceGenMatrix *a2, FaceGenMatrix *source)
{
  FaceGenMatrix *i; // esi
  OB_stString28_010201A0 *result; // eax

  for ( i = a1; i != a2; i = (FaceGenMatrix *)((char *)i + 0x34) ) /*0x6edc9c*/
  {
    FaceGenMatrix_Assign(i, source); /*0x6edcaa*/
    result = OB_stString28_AssignSubstring_010201A0( /*0x6edcb7*/
               (OB_stString28_010201A0 *)&i[1],
               (const OB_stString28_010201A0 *)&source[1],
               0,
               0xFFFFFFFF);
  }
  return result; /*0x6edcc5*/
}
