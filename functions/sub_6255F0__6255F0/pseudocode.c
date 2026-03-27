int __userpurge sub_6255F0@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5)
{
  int v5; // eax

  v5 = a3;
  if ( (unsigned int)(a3 - 0xC) <= 6 || a3 == 0x1C )
  {
    v5 = 0xC;
  }
  else
  {
    if ( (unsigned int)(a3 - 0x13) <= 6 )
      return Actor_ForceModCurAVi(a1, a2, 0x13, a4, a5);
    if ( (unsigned int)(a3 - 0x1A) <= 6 )
      return Actor_ForceModCurAVi(a1, a2, 0x1A, a4, a5);
  }
  return Actor_ForceModCurAVi(a1, a2, v5, a4, a5);
}
