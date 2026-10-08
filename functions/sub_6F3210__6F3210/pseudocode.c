unsigned int *__cdecl sub_6F3210(OB_stString28_010201A0 *a1, int a2, OB_stString28_010201A0 *source)
{
  int i; // esi
  unsigned int *result; // eax

  for ( i = (int)a1; i != a2; i += 0x30 ) /*0x6f321c*/
  {
    OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)i, source, 0, 0xFFFFFFFF); /*0x6f322e*/
    *(_DWORD *)(i + 0x1C) = source[1].allocatorState; /*0x6f323a*/
    result = sub_6F2770((unsigned int *)(i + 0x20), (int)&source[1].storage.heapData); /*0x6f323d*/
  }
  return result; /*0x6f324b*/
}
