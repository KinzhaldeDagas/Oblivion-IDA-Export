OB_stString28_010201A0 *__cdecl sub_6F2E80(
        OB_stString28_010201A0 *source,
        OB_stString28_010201A0 *a2,
        OB_stString28_010201A0 *a3)
{
  const OB_stString28_010201A0 *v3; // esi
  int v4; // edi

  v3 = source; /*0x6f2e86*/
  if ( source == a2 ) /*0x6f2e8c*/
    return a3; /*0x6f2ec1*/
  v4 = (int)a3; /*0x6f2e8f*/
  do /*0x6f2eb9*/
  {
    OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)v4, v3, 0, 0xFFFFFFFF); /*0x6f2e9a*/
    *(_DWORD *)(v4 + 0x1C) = v3[1].allocatorState; /*0x6f2ea9*/
    sub_6F2770((unsigned int *)(v4 + 0x20), (int)&v3[1].storage.heapData); /*0x6f2eac*/
    v3 = (const OB_stString28_010201A0 *)((char *)v3 + 0x30); /*0x6f2eb1*/
    v4 += 0x30; /*0x6f2eb4*/
  }
  while ( v3 != a2 ); /*0x6f2eb9*/
  return (OB_stString28_010201A0 *)v4; /*0x6f2ebe*/
}
