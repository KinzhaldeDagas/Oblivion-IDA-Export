int __userpurge sub_625520@<eax>(_BYTE *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, signed int a5, int a6)
{
  int v6; // eax

  v6 = a4;
  if ( (unsigned int)(a4 - 0xC) <= 6 || a4 == 0x1C )
  {
    v6 = 0xC;
  }
  else
  {
    if ( (unsigned int)(a4 - 0x13) <= 6 )
      return Actor_ModMaxAVi(a1, a2, a3, 0x13, a5, a6);
    if ( (unsigned int)(a4 - 0x1A) <= 6 )
      return Actor_ModMaxAVi(a1, a2, a3, 0x1A, a5, a6);
  }
  return Actor_ModMaxAVi(a1, a2, a3, v6, a5, a6);
}
