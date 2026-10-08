// Oblivion stock 16013 flare-seed parser: reads one dword from file and stores it at CTreeEngine+0x54.
int __thiscall OB_CTreeEngine_ParseFlareSeed_010201A0(OB_CTreeEngine_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int result; // eax

  result = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-25 stock scalar-tail pass: top-level 16013/File_FlareSeed delegates here, reads one dword, and stores it at CTreeEngine+0x54. /*0x7a2547*/
  this->flareSeed = result; /*0x7a254c*/
  return result; /*0x7a254f*/
}
