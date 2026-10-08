void __userpurge sub_6255F0(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, float a4, int a5)
{
  int v5; // eax

  v5 = a3; /*0x6255f0*/
  if ( (unsigned int)(a3 - 0xC) <= 6 || a3 == 0x1C ) /*0x6255ff*/
  {
    v5 = 0xC; /*0x62562d*/
  }
  else
  {
    if ( (unsigned int)(a3 - 0x13) <= 6 ) /*0x625607*/
    {
      Actor_ForceModCurAVi(a1, a2, 0x13, a4, a5); /*0x625612*/
      return; /*0x625612*/
    }
    if ( (unsigned int)(a3 - 0x1A) <= 6 ) /*0x62561d*/
    {
      Actor_ForceModCurAVi(a1, a2, 0x1A, a4, a5); /*0x625628*/
      return; /*0x625628*/
    }
  }
  Actor_ForceModCurAVi(a1, a2, v5, a4, a5); /*0x625636*/
}
