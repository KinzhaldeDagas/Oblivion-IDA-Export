// 2026-05-24 SpeedTreeOBSE stock post-load pass: stock CSpeedTreeRT::ParseLodInfo candidate for top-level 9000. Parses 9002,9003,9004,9005,9009 until 9001; 9005 delegates to CTreeEngine LOD parser. Preserve as stock-safe payload; no 75000 supplemental LOD fields are read here.
void __thiscall CSpeedTreeRT__ParseLodInfo(OB_CSpeedTreeRT_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int Dword_010201A0; // eax
  OB_stString28_010201A0 v4; // [esp+10h] [ebp-94h] BYREF
  OB_stString28_010201A0 details; // [esp+2Ch] [ebp-78h] BYREF
  OB_IdvFileError_010201A0 v6; // [esp+48h] [ebp-5Ch] BYREF
  OB_IdvFileError_010201A0 v7; // [esp+70h] [ebp-34h] BYREF
  int v8; // [esp+A0h] [ebp-4h]

  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: top-level 9000 LOD reads a first recognized payload token before accepting 9001; 9005 delegates to 0x7A28E0. /*0x789647*/
  do /*0x7896b4*/
  {
    switch ( Dword_010201A0 ) /*0x78965e*/
    {
      case 0x232A: /*0x78965e*/
        this->leafLodTransitionMethod = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x78966c*/
        break; /*0x78966f*/
      case 0x232B: /*0x78965e*/
        this->leafLodTransitionRadius = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x789678*/
        break; /*0x78967b*/
      case 0x232C: /*0x78965e*/
        this->leafLodCurveExponent = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x789684*/
        break; /*0x789687*/
      case 0x232D: /*0x78965e*/
        OB_CTreeEngine_ParseLodInfo_010201A0(this->treeEngine, file); /*0x789698*/
        break; /*0x789698*/
      case 0x2331: /*0x78965e*/
        this->leafSizeIncreaseFactor = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x789690*/
        break; /*0x789693*/
      default:
        v4.capacity = 0xF; /*0x789729*/
        v4.size = 0; /*0x789731*/
        v4.storage.inlineData[0] = 0; /*0x789735*/
        OB_stString28_AssignBytes_010201A0(&v4, "malformed lod info", 0x12u); /*0x789739*/
        v8 = 0; /*0x789748*/
        OB_IdvFileError_Ctor_010201A0(&v7, &v4, 0); /*0x78974f*/
        ThrowException__((DWORD)&v7, &_TI3_AVIdvFileError__); /*0x78975e*/
    }
    if ( OB_CTreeFileAccess_IsEOF_010201A0(file) ) /*0x78969f*/
    {
      details.capacity = 0xF; /*0x7896de*/
      details.size = 0; /*0x7896e6*/
      details.storage.inlineData[0] = 0; /*0x7896ea*/
      OB_stString28_AssignBytes_010201A0(&details, "premature end of file reached parsing new lod info", 0x32u); /*0x7896ee*/
      v8 = 1; /*0x7896fd*/
      OB_IdvFileError_Ctor_010201A0(&v6, &details, 0); /*0x789708*/
      ThrowException__((DWORD)&v6, &_TI3_AVIdvFileError__); /*0x789717*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7896aa*/
  }
  while ( Dword_010201A0 != 0x2329 ); /*0x7896b4*/
}
