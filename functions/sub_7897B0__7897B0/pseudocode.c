// 2026-05-24 SpeedTreeOBSE stock post-load pass: stock CSpeedTreeRT::ParseWindInfo candidate for top-level 11000. Accepts nested 11002 only and writes CTreeEngine+0xF0; later 21000/21001 SpeedWind scalars are separate top-level float cases.
void __thiscall CSpeedTreeRT__ParseWindInfo(OB_CSpeedTreeRT_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int Dword_010201A0; // eax
  rsize_t v4; // [esp-4h] [ebp-A8h]
  int v5; // [esp+10h] [ebp-94h] BYREF
  char v6; // [esp+14h] [ebp-90h]
  int v7; // [esp+24h] [ebp-80h]
  int v8; // [esp+28h] [ebp-7Ch]
  int v9; // [esp+2Ch] [ebp-78h] BYREF
  char v10; // [esp+30h] [ebp-74h]
  int v11; // [esp+40h] [ebp-64h]
  int v12; // [esp+44h] [ebp-60h]
  _BYTE v13[40]; // [esp+48h] [ebp-5Ch] BYREF
  _BYTE v14[40]; // [esp+70h] [ebp-34h] BYREF
  int v15; // [esp+A0h] [ebp-4h]

  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: top-level 11000 wind requires first inner token 11002 and stores its dword at CTreeEngine+0xF0 before accepting 11001. /*0x7897e7*/
  do /*0x78981d*/
  {
    if ( Dword_010201A0 != 0x2AFA ) /*0x7897f5*/
    {
      LODWORD(v4) = 0x17; /*0x78983a*/
      v12 = 0xF; /*0x789847*/
      v11 = 0; /*0x78984f*/
      v10 = 0; /*0x789853*/
      OB_stString28_AssignBytes_010201A0(&v9, (int)this, "malformed new wind info", v4); /*0x789857*/
      v15 = 0; /*0x789866*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v13, &v9, 0); /*0x78986d*/
      ThrowException__((DWORD)v13, &_TI3_AVIdvFileError__); /*0x78987c*/
    }
    this->treeEngine->branchWindWeightLevel = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x789800*/
    if ( OB_CTreeFileAccess_IsEOF_010201A0(file) ) /*0x789808*/
    {
      LODWORD(v4) = 0x33; /*0x789881*/
      v8 = 0xF; /*0x78988e*/
      v7 = 0; /*0x789896*/
      v6 = 0; /*0x78989a*/
      OB_stString28_AssignBytes_010201A0(&v5, (int)this, "premature end of file reached parsing new wind info", v4); /*0x78989e*/
      v15 = 1; /*0x7898ad*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v14, &v5, 0); /*0x7898b8*/
      ThrowException__((DWORD)v14, &_TI3_AVIdvFileError__); /*0x7898c7*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x789813*/
  }
  while ( Dword_010201A0 != 0x2AF9 ); /*0x78981d*/
}
