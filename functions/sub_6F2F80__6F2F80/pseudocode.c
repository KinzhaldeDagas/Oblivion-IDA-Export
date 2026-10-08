int __cdecl sub_6F2F80(const OB_stString28_010201A0 *a1, const OB_stString28_010201A0 *a2, int a3)
{
  const OB_stString28_010201A0 *v3; // esi
  int v4; // edi

  v3 = a2; /*0x6f2f86*/
  if ( a1 == a2 ) /*0x6f2f8c*/
    return a3; /*0x6f2fc1*/
  v4 = a3; /*0x6f2f8f*/
  do /*0x6f2fb9*/
  {
    v3 = (const OB_stString28_010201A0 *)((char *)v3 + 0xFFFFFFD0); /*0x6f2f97*/
    v4 -= 0x30; /*0x6f2f9a*/
    OB_stString28_AssignSubstring_010201A0((OB_stString28_010201A0 *)v4, v3, 0, 0xFFFFFFFF); /*0x6f2fa0*/
    *(_DWORD *)(v4 + 0x1C) = v3[1].allocatorState; /*0x6f2faf*/
    sub_6F2770((unsigned int *)(v4 + 0x20), (int)&v3[1].storage.heapData); /*0x6f2fb2*/
  }
  while ( v3 != a1 ); /*0x6f2fb9*/
  return v4; /*0x6f2fbe*/
}
