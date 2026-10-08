bool __thiscall sub_6F5D40(_DWORD *this, int a2, unsigned int a3, int a4)
{
  int v5; // ecx
  unsigned int v7; // esi

  v5 = *(this + 0x10); /*0x6f5d43*/
  if ( !v5 ) /*0x6f5d48*/
    return 0; /*0x6f5d4a*/
  v7 = a4 * a3; /*0x6f5d57*/
  if ( a3 && (a3 <= 2 || a3 == 4) ) /*0x6f5d68*/
    return v7 == (*(int (__cdecl **)(int, int, unsigned int, unsigned int *, int))(v5 + 4))(v5, a2, a4 * a3, &a3, 1); /*0x6f5d83*/
  if ( (a3 & 3) != 0 ) /*0x6f5d8c*/
  {
    FaceGen_ReportAssertionViolation(".\\binaryFile.cpp", 0x1BD); /*0x6f5da2*/
    a3 = 1; /*0x6f5daa*/
  }
  else
  {
    a3 = 4; /*0x6f5d8e*/
  }
  return v7 == (*(int (__cdecl **)(_DWORD, int, unsigned int, unsigned int *, int))(*(this + 0x10) + 4))( /*0x6f5d4c*/
                 *(this + 0x10),
                 a2,
                 v7,
                 &a3,
                 1);
}
